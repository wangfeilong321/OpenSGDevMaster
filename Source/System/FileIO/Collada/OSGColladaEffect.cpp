/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                Copyright (C) 2009 by the OpenSG Forum                     *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

#include "OSGColladaEffect.h"

#if defined(OSG_WITH_COLLADA) || defined(OSG_DO_DOC)

#include "OSGColladaLog.h"
#include "OSGColladaGlobal.h"
#include "OSGColladaImage.h"
#include "OSGColladaInstanceEffect.h"
#include "OSGColladaMaterial.h"
#include "OSGColladaSampler2D.h"

#include "OSGGeometry.h"
#include "OSGChunkMaterial.h"
#include "OSGBlendChunk.h"
#include "OSGDepthChunk.h"
#include "OSGMaterialChunk.h"
#include "OSGTextureEnvChunk.h"

#include "OSGColladaDomProfileHandler.h"
#include "OSGColladaExtraHandler.h"
#include "OSGColladaHandlerFactory.h"

#include <dom/domEffect.h>
#include <dom/domInstance_effect.h>
#include <dom/domProfile_COMMON.h>
#include <dom/domProfile_GLSL.h>
#include <dom/domProfile_CG.h>

// It is not clear what is the best way to handle <transparent>/<texture>, so
// OSG_COLLADA_TRANSPARENT_MODE allows choosing between implementations
// to experiment. See below for what the modes do.

#define OSG_COLLADA_TRANSPARENT_MODE 1
// #define OSG_COLLADA_TRANSPARENT_MODE 2

OSG_BEGIN_NAMESPACE

ColladaInstInfoTransitPtr ColladaEffect::ColladaEffectInstInfo::create(
    ColladaMaterial       *colInstParent, 
    ColladaInstanceEffect *colInst)
{
    return ColladaInstInfoTransitPtr(
        new ColladaEffectInstInfo(colInstParent, colInst));
}

void ColladaEffect::ColladaEffectInstInfo::process(void)
{
    SFATAL << "ColladaEffectInstInfo::process called!" << std::endl;
}

ColladaEffect::ColladaEffectInstInfo::ColladaEffectInstInfo(
    ColladaMaterial       *colInstParent, 
    ColladaInstanceEffect *colInst      ) :
    
    Inherited(colInstParent, 
              colInst      )
{
}

ColladaEffect::ColladaEffectInstInfo::~ColladaEffectInstInfo(void)
{
}

// ===========================================================================

ColladaElementRegistrationHelper ColladaEffect::_regHelper(
    &ColladaEffect::create, 
     "effect");


ColladaElementTransitPtr ColladaEffect::create(daeElement    *elem, 
                                               ColladaGlobal *global)
{
    return ColladaElementTransitPtr(new ColladaEffect(elem, global));
}

void ColladaEffect::read(ColladaElement *colElemParent)
{
    OSG_COLLADA_LOG(("ColladaEffect::read\n"));

          domEffectRef    effect = getDOMElementAs<domEffect>();
    const domImage_Array &images = effect->getImage_array();

    readImageArray(images);

    const domFx_newparam_common_Array &newParams = effect->getNewparam_array();

    for(UInt32 i = 0; i < newParams.getCount(); ++i)
    {
        if(newParams[i]->getFx_basic_type_common() == NULL)
        {
            SWARNING << "ColladaEffect::read: <newparam> ["
                     << newParams[i]->getSid()
                     << "] without contents encountered, ignored."
                     << std::endl;
            continue;
        }

        // must read surface params before sampler params, because
        // a samplers <source> can refer to a surface
        domFx_surface_commonRef paramSurface =
            newParams[i]->getFx_basic_type_common()->getSurface();

        if(paramSurface != NULL)
        {
            ParamSurface param;

            param.surface    = paramSurface;
            param.colSurface = dynamic_pointer_cast<ColladaSurface>(
                ColladaElementFactory::the()->create(
                    paramSurface, getGlobal()));

            param.colSurface->read(this);

            _surfaceParams[newParams[i]->getSid()] = param;
            continue;
        }

        domFx_sampler2D_commonRef paramSampler2D =
            newParams[i]->getFx_basic_type_common()->getSampler2D();

        if(paramSampler2D != NULL)
        {
            ParamSampler2D param;

            param.sampler2D    = paramSampler2D;
            param.colSampler2D = dynamic_pointer_cast<ColladaSampler2D>(
                ColladaElementFactory::the()->create(
                    paramSampler2D, getGlobal()));

            param.colSampler2D->setEffect(this);
            param.colSampler2D->read     (this);

            _sampler2DParams[newParams[i]->getSid()] = param;
            continue;
        }
    }

    const domFx_profile_abstract_Array &profiles =
        effect->getFx_profile_abstract_array();

    ColladaDomProfileHandlerRefPtr pDomProfHandler;

    for(UInt32 i = 0; i < profiles.getCount(); ++i)
    {
        const domExtra_Array *pProfileExtras = NULL;

        if(domProfile_COMMON::ID() == profiles[i]->typeID())
        {
            domProfile_COMMON *pProfile = 
                daeSafeCast<domProfile_COMMON>(profiles[i]);

            if(pProfile != NULL)
            {
                readProfileCommon(pProfile);

                pProfileExtras = &(pProfile->getExtra_array());
            }
        }
        else if(domProfile_GLSL::ID() == profiles[i]->typeID())
        {
            pDomProfHandler = 
                ColladaHandlerFactory::the()->createDomProfileHandler(
                    domProfile_GLSL::ID());

            domProfile_GLSL *pProfile = 
                daeSafeCast<domProfile_GLSL>(profiles[i]);

            if(pProfile != NULL)
            {
                if(pDomProfHandler != NULL)
                {
                    pDomProfHandler->readProfile(pProfile);
                }
                else
                {
                    readProfileGLSL(pProfile);
                }

                pProfileExtras = &(pProfile->getExtra_array());
            }
        }
        else if(domProfile_CG::ID() == profiles[i]->typeID())
        {
            pDomProfHandler = 
                ColladaHandlerFactory::the()->createDomProfileHandler(
                    domProfile_CG::ID());

            domProfile_CG *pProfile = daeSafeCast<domProfile_CG>(profiles[i]);
    
            if(pProfile != NULL)
            {
                if(pDomProfHandler != NULL)
                {
                    pDomProfHandler->readProfile(pProfile);
                }
                else
                {
                    readProfileCG(pProfile);
                }

                pProfileExtras = &(pProfile->getExtra_array());
            }
        }

        if(_extraHandlers.size() == 0)
            continue;

        for(UInt32 i = 0; i < pProfileExtras->getCount(); ++i)
        {
            ExtraHandlerStoreIt      ehIt  = _extraHandlers.begin();
            ExtraHandlerStoreConstIt ehEnd = _extraHandlers.end  ();
    
            for(; ehIt != ehEnd; ++ehIt)
            {
                (*ehIt)->readProfileExtraElements(this, (*pProfileExtras)[i]);
            }
        }
    }
}

Material *ColladaEffect::createInstance(ColladaInstInfo *colInstInfo)
{
    OSG_COLLADA_LOG(("ColladaEffect::createInstance\n"));

    MaterialUnrecPtr            retVal        = NULL;
    domEffectRef                effect        = getDOMElementAs<domEffect>();

    ColladaInstanceEffectRefPtr colInstEffect =
        dynamic_cast<ColladaInstanceEffect *>(colInstInfo->getColInst());

    domInstance_effectRef       instEffect    =
        colInstInfo->getColInst()->getDOMElementAs<domInstance_effect>();

    const domFx_profile_abstract_Array &profiles =
        effect->getFx_profile_abstract_array();

    ColladaDomProfileHandlerRefPtr pDomProfHandler;

    for(UInt32 i = 0; i < profiles.getCount(); ++i)
    {
        const domExtra_Array *pProfileExtras = NULL;

        if(domProfile_COMMON::ID() == profiles[i]->typeID())
        {
            domProfile_COMMON *pProfile = 
                daeSafeCast<domProfile_COMMON>(profiles[i]);

            if(pProfile != NULL)
            {
                retVal = createInstanceProfileCommon(pProfile,
                                                     effect, 
                                                     instEffect);

                pProfileExtras = &(pProfile->getExtra_array());
            }
        }
        else if(domProfile_GLSL::ID() == profiles[i]->typeID())
        {
            pDomProfHandler = 
                ColladaHandlerFactory::the()->createDomProfileHandler(
                    domProfile_GLSL::ID());

            domProfile_GLSL *pProfile = 
                daeSafeCast<domProfile_GLSL>(profiles[i]);

            if(pProfile != NULL)
            {
                if(pDomProfHandler != NULL)
                {
                    pDomProfHandler->createInstProfile(pProfile,
                                                       effect,
                                                       instEffect );
                }
                else
                {
                    retVal = createInstanceProfileGLSL(pProfile,
                                                       effect, 
                                                       instEffect);
                }

                pProfileExtras = &(pProfile->getExtra_array());
            }
        }
        else if(domProfile_CG::ID() == profiles[i]->typeID())
        {
            pDomProfHandler = 
                ColladaHandlerFactory::the()->createDomProfileHandler(
                    domProfile_CG::ID());

            domProfile_CG *pProfile = daeSafeCast<domProfile_CG>(profiles[i]);

            if(pProfile != NULL)
            {
                if(pDomProfHandler != NULL)
                {
                    pDomProfHandler->createInstProfile(pProfile,
                                                       effect,
                                                       instEffect );
                }
                else
                {
                    retVal = createInstanceProfileCG(pProfile,
                                                     effect, 
                                                     instEffect);
                }

                pProfileExtras = &(pProfile->getExtra_array());
            }
        }

        if(_extraHandlers.size() == 0 || pProfileExtras->getCount() == 0)
            continue;

        ExtraHandlerStoreIt      ehIt  = _extraHandlers.begin();
        ExtraHandlerStoreConstIt ehEnd = _extraHandlers.end  ();
    
        for(; ehIt != ehEnd; ++ehIt)
        {
            (*ehIt)->instProfileExtraElements(this, 
                                              retVal);
        }
    }

    editInstStore().push_back(retVal);

    return retVal;
}

/*! Return parameter of the effect (\c &lt;newparam&gt; tags) with the given
 *  \a name. 
 */

daeElement *ColladaEffect::findDOMParam(const std::string &name) const
{
    ParamSampler2DMapConstIt sampler2DIt = _sampler2DParams.find(name);

    if(sampler2DIt != _sampler2DParams.end())
    {
        return sampler2DIt->second.sampler2D;
    }

    ParamSurfaceMapConstIt surfaceIt = _surfaceParams.find(name);

    if(surfaceIt != _surfaceParams.end())
    {
        return surfaceIt->second.surface;
    }

    return NULL;
}

/*! Return the loader element for the parameter of the effect (\c
    &lt;newparam&gt; tags) with the given \a name.
 */

ColladaElement *ColladaEffect::findParam(const std::string &name) const
{
    ParamSampler2DMapConstIt sampler2DIt = _sampler2DParams.find(name);

    if(sampler2DIt != _sampler2DParams.end())
    {
        return sampler2DIt->second.colSampler2D;
    }

    ParamSurfaceMapConstIt surfaceIt = _surfaceParams.find(name);

    if(surfaceIt != _surfaceParams.end())
    {
        return surfaceIt->second.colSurface;
    }

    return NULL;
}

void ColladaEffect::setTexture(
        TextureTarget                                eTarget,
        ColladaTexture                              *pColTexture,
        domCommon_color_or_texture_type::domTexture *pDomTexture)
{
    ParamTexture oTexParam;

    oTexParam.colTexture = pColTexture;
    oTexParam.texture    = pDomTexture;

    _textures[eTarget]   = oTexParam;
}
 
ColladaEffect::ColladaEffect(daeElement    *elem, 
                             ColladaGlobal *global) : 
    
     Inherited      (elem, 
                     global),
    _sampler2DParams(      ),
    _surfaceParams  (      ),
    _textures       (      ),
    _extraHandlers  (      )
{
    _textures.resize(ColladaEffect::LastTexture);

    ColladaHandlerFactory::the()->createExtraHandlers(_extraHandlers);
}

ColladaEffect::~ColladaEffect(void)
{
}

void ColladaEffect::readImageArray(const domImage_Array &images)
{
    for(UInt32 i = 0; i < images.getCount(); ++i)
    {
        ColladaImageRefPtr colImg = getUserDataAs<ColladaImage>(images[i]);

        if(colImg == NULL)
        {
            colImg = dynamic_pointer_cast<ColladaImage>(
                ColladaElementFactory::the()->create(
                    images[i], 
                    getGlobal()));

            colImg->read(this);
        }
    }
}

void ColladaEffect::readNewParams(const CommonParamArray &newParams)
{
    for(UInt32 i = 0; i < newParams.getCount(); ++i)
    {
        // must read surface params before sampler params, because their
        // <source> element can refer to a surface

        domFx_surface_commonRef paramSurface =
            newParams[i]->getSurface();

        if(paramSurface != NULL)
        {
            ParamSurface param;

            param.surface    = paramSurface;
            param.colSurface = dynamic_pointer_cast<ColladaSurface>(
                ColladaElementFactory::the()->create(
                    paramSurface, getGlobal()));

            param.colSurface->read(this);

            _surfaceParams[newParams[i]->getSid()] = param;
            continue;
        }

        domFx_sampler2D_commonRef paramSampler2D =
            newParams[i]->getSampler2D();

        if(paramSampler2D != NULL)
        {
            ParamSampler2D param;

            param.sampler2D    = paramSampler2D;
            param.colSampler2D = dynamic_pointer_cast<ColladaSampler2D>(
                ColladaElementFactory::the()->create(
                    paramSampler2D, getGlobal()));

            param.colSampler2D->setEffect(this);
            param.colSampler2D->read     (this);

            _sampler2DParams[newParams[i]->getSid()] = param;
            continue;
        }

        // param is unhandled if we get to here
        SWARNING << "ColladaEffect::readProfileCommon: Unhandled <newparam> ["
                 << newParams[i]->getSid() << "]."
                 << std::endl;
    }

}

/*! Fills internal data structures for \c &lt;profile_COMMON&gt;.
    This mainly collects relevant parameters so they can be looked up
    efficiently when creating an instance of this effect.
 */

void ColladaEffect::readProfileCommon(domProfile_COMMON *prof)
{
    if(prof == NULL)
    {
        SWARNING << "ColladaEffect::readProfileCommon: No DOM element or "
                 << "incorrect type." << std::endl;
        return;
    }

    readImageArray(prof->getImage_array   ());
    readNewParams (prof->getNewparam_array());

    domProfile_COMMON::domTechniqueRef tech = prof->getTechnique();

    readNewParams (tech->getNewparam_array());
    readImageArray(tech->getImage_array   ());


    if(tech->getConstant() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::readProfileCommon: "
                         "using <constant> shader\n"));

        domProfile_COMMON::domTechnique::domConstantRef constant =
            tech->getConstant();


        readTextureParams((constant->getEmission() != NULL) ? 
                              constant->getEmission()->getTexture() : NULL,
                          EmissionTexture);

        readTextureParams((constant->getTransparent() != NULL) ? 
                              constant->getTransparent()->getTexture() : NULL,
                          TransparentTexture);
    }
    else if(tech->getLambert() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::readProfileCommon: "
                         "using <lambert> shader\n"));

        domProfile_COMMON::domTechnique::domLambertRef lambert =
            tech->getLambert();

        readTextureParams((lambert->getEmission() != NULL) ?
                              lambert->getEmission()->getTexture() : NULL,
                          EmissionTexture);

        readTextureParams((lambert->getAmbient() != NULL) ?
                              lambert->getAmbient() ->getTexture() : NULL,
                          AmbientTexture);

        readTextureParams((lambert->getDiffuse() != NULL) ?
                              lambert->getDiffuse() ->getTexture() : NULL,
                          DiffuseTexture);

        readTextureParams((lambert->getTransparent() != NULL) ? 
                              lambert->getTransparent()->getTexture() : NULL,
                          TransparentTexture);
    }
    else if(tech->getPhong() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::readProfileCommon: "
                         "using <phong> shader\n"));

        domProfile_COMMON::domTechnique::domPhongRef phong = tech->getPhong();

        readTextureParams((phong->getEmission() != NULL) ?
                              phong->getEmission()->getTexture() : NULL,
                          EmissionTexture);

        readTextureParams((phong->getAmbient() != NULL) ?
                              phong->getAmbient() ->getTexture() : NULL,
                          AmbientTexture);

        readTextureParams((phong->getDiffuse() != NULL) ?
                              phong->getDiffuse() ->getTexture() : NULL,
                          DiffuseTexture);

        readTextureParams((phong->getSpecular() != NULL) ?
                              phong->getSpecular() ->getTexture() : NULL,
                          SpecularTexture);

        readTextureParams((phong->getTransparent() != NULL) ? 
                              phong->getTransparent()->getTexture() : NULL,
                          TransparentTexture);
    }
    else if(tech->getBlinn() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::readProfileCommon: "
                         "using <blinn> shader\n"));

        domProfile_COMMON::domTechnique::domBlinnRef blinn = tech->getBlinn();

        readTextureParams((blinn->getEmission() != NULL) ?
                              blinn->getEmission()->getTexture() : NULL,
                          EmissionTexture);

        readTextureParams((blinn->getAmbient() != NULL) ?
                              blinn->getAmbient() ->getTexture() : NULL,
                          AmbientTexture);

        readTextureParams((blinn->getDiffuse() != NULL) ?
                              blinn->getDiffuse() ->getTexture() : NULL,
                          DiffuseTexture);

        readTextureParams((blinn->getSpecular() != NULL) ?
                              blinn->getSpecular() ->getTexture() : NULL,
                          SpecularTexture);

        readTextureParams((blinn->getTransparent() != NULL) ? 
                              blinn->getTransparent()->getTexture() : NULL,
                          TransparentTexture);
    }

    const domExtra_Array &techniqueExtras = tech->getExtra_array();

    if(_extraHandlers.size() == 0)
        return;

    for(UInt32 i = 0; i < techniqueExtras.getCount(); ++i)
    {
        ExtraHandlerStoreIt      ehIt  = _extraHandlers.begin();
        ExtraHandlerStoreConstIt ehEnd = _extraHandlers.end  ();
    
        for(; ehIt != ehEnd; ++ehIt)
        {
            (*ehIt)->readTechniqueExtraElements(this, techniqueExtras[i]);
        }
    }
}

void ColladaEffect::readTextureParams(
    domCommon_color_or_texture_type::domTexture *texture,
    TextureTarget                                target )
{
    if(texture == NULL)
        return;

    ParamTexture oTexParam;

    oTexParam.colTexture =  
        dynamic_pointer_cast<ColladaTexture>(
            ColladaElementFactory::the()->create(texture, 
                                                 getGlobal()));

    oTexParam.texture    = texture;

    oTexParam.colTexture->setEffect(this);
    oTexParam.colTexture->read     (this);

    _textures[target] = oTexParam;
}

void ColladaEffect::readProfileGLSL(domProfile_GLSL *prof)
{
    SWARNING << "ColladaEffect::readProfileGLSL: NIY." << std::endl;
}

void ColladaEffect::readProfileCG(domProfile_CG *prof)
{
    SWARNING << "ColladaEffect::readProfileCG: Fallback NIY." << std::endl;
}

/*! Create an OpenSG material that matches this \c &lt;profile_COMMON&gt;
    material (to the extent possible).
 */

MaterialTransitPtr ColladaEffect::createInstanceProfileCommon(
    domProfile_COMMON  *prof,       
    domEffect          *effect,
    domInstance_effect *instEffect)
{
    OSG_COLLADA_LOG(("ColladaEffect::createInstanceProfileCommon\n"));

    ColladaInstanceEffectRefPtr colInstEffect =
        getUserDataAs<ColladaInstanceEffect>(instEffect);

    domProfile_COMMON::domTechniqueRef tech = prof->getTechnique();

    domCommon_color_or_texture_typeRef emission     = NULL;
    domCommon_color_or_texture_typeRef ambient      = NULL;
    domCommon_color_or_texture_typeRef diffuse      = NULL;
    domCommon_color_or_texture_typeRef specular     = NULL;
    domCommon_float_or_param_typeRef   shininess    = NULL;
    domCommon_transparent_typeRef      transparent  = NULL;
    domCommon_float_or_param_typeRef   transparency = NULL;

    if(tech->getConstant() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::createInstanceProfileCommon: "
                         "using <constant> shader\n"));

        domProfile_COMMON::domTechnique::domConstantRef constant =
            tech->getConstant();

        emission     = constant->getEmission    ();
        transparent  = constant->getTransparent ();
        transparency = constant->getTransparency();
    }
    else if(tech->getLambert() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::createInstanceProfileCommon: "
                         "using <lambert> shader\n"));

        domProfile_COMMON::domTechnique::domLambertRef lambert =
            tech->getLambert();

        emission     = lambert->getEmission    ();
        ambient      = lambert->getAmbient     ();
        diffuse      = lambert->getDiffuse     ();
        transparent  = lambert->getTransparent ();
        transparency = lambert->getTransparency();
    }
    else if(tech->getPhong() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::createInstanceProfileCommon: "
                         "using <phong> shader\n"));

        domProfile_COMMON::domTechnique::domPhongRef phong =
            tech->getPhong();

        emission     = phong->getEmission    ();
        ambient      = phong->getAmbient     ();
        diffuse      = phong->getDiffuse     ();
        specular     = phong->getSpecular    ();
        shininess    = phong->getShininess   ();
        transparent  = phong->getTransparent ();
        transparency = phong->getTransparency();
    }
    else if(tech->getBlinn() != NULL)
    {
        OSG_COLLADA_LOG(("ColladaEffect::createInstanceProfileCommon: "
                         "using <blinn> shader\n"));

        domProfile_COMMON::domTechnique::domBlinnRef blinn =
            tech->getBlinn();

        emission     = blinn->getEmission    ();
        ambient      = blinn->getAmbient     ();
        diffuse      = blinn->getDiffuse     ();
        specular     = blinn->getSpecular    ();
        shininess    = blinn->getShininess   ();
        transparent  = blinn->getTransparent ();
        transparency = blinn->getTransparency();
    }

    UInt32                texCount   = 0;
    Real32                transVal   = 1.f;
    ChunkMaterialUnrecPtr mat        = ChunkMaterial::create();
    MaterialChunkUnrecPtr matChunk   = MaterialChunk::create();
    BlendChunkUnrecPtr    blendChunk = NULL;
    DepthChunkUnrecPtr    depthChunk = NULL;

    getGlobal()->getStatCollector()->getElem(
        ColladaGlobal::statNMaterialCreated)->inc();

    // handle the "conventional" material attributes
    handleProfileCommonEmission(emission,   
                                matChunk);

    handleProfileCommonAmbient (ambient,    
                                colInstEffect,
                                mat,        
                                matChunk,
                                blendChunk, 
                                depthChunk,    
                                texCount     );

    handleProfileCommonDiffuse (diffuse,    
                                colInstEffect,
                                mat,        
                                matChunk,
                                blendChunk, 
                                depthChunk,    
                                texCount     );

    handleProfileCommonSpecular(specular,   
                                matChunk     );

    if(shininess != NULL)
    {
        domCommon_float_or_param_type::domFloatRef value;
        domCommon_float_or_param_type::domParamRef param;

        fillFloatParam(shininess, value, param);

        if(value != NULL)
        {
            Real32 shininessVal = value->getValue();
            shininessVal = osgClamp(0.f, shininessVal, 128.f);

            matChunk->setShininess(shininessVal);
        }
        else if(param != NULL)
        {
            SWARNING << "ColladaEffect::createInstanceProfileCommon: "
                     << "<shininess>/<param> not supported."
                     << std::endl;
        }
    }

    if(transparency != NULL)
    {
        // this only sets transVal to the value stored in the
        // <transparency> tag.

        domCommon_float_or_param_type::domFloatRef value;
        domCommon_float_or_param_type::domParamRef param;

        fillFloatParam(transparency, value, param);

        if(value != NULL)
        {
            transVal = value->getValue();

            if(getGlobal()->getOptions()->getInvertTransparency() == true)
                transVal = 1.f - transVal;
        }
        else if(param != NULL)
        {
            SWARNING << "ColladaEffect::createInstanceProfileCommon: "
                     << "<transparency>/<param> not supported."
                     << std::endl;
        }
    }

    if(transparent != NULL)
    {
        // this handles <transparent> and <transparency> tags
        // (by considering the value of transVal) - since they are
        // so closely related that they need to be handled together

        domCommon_color_or_texture_type::domColorRef   color;
        domCommon_color_or_texture_type::domParamRef   param;
        domCommon_color_or_texture_type::domTextureRef texture;

        fillColorParamTex(transparent, color, param, texture);

        if(color != NULL)
        {
            Color4f colVal(color->getValue()[0],
                           color->getValue()[1],
                           color->getValue()[2],
                           color->getValue()[3] );

            domFx_opaque_enum opaque = transparent->getOpaque();

            if(opaque == FX_OPAQUE_ENUM_A_ONE)
            {
                Color4f constCol(colVal[3] * transVal,
                                 colVal[3] * transVal,
                                 colVal[3] * transVal,
                                 colVal[3] * transVal );

                if(constCol[0] < (1.f - TypeTraits<Real32>::getDefaultEps()))
                {
                    if(blendChunk == NULL)
                        blendChunk = BlendChunk::create();

                    blendChunk->setSrcFactor (GL_CONSTANT_ALPHA          );
                    blendChunk->setDestFactor(GL_ONE_MINUS_CONSTANT_ALPHA);

                    blendChunk->setColor     (constCol                   );

                    OSG_COLLADA_LOG(
                        ("ColladaEffect::createInstanceProfileCommon: "
                         "src: GL_CONSTANT_ALPHA "
                         "dst: GL_ONE_MINUS_CONSTANT_ALPHA "
                         "%f\n", 
                         constCol[0]));
                }
            }
            else if(opaque == FX_OPAQUE_ENUM_RGB_ZERO)
            {
                Color4f constCol(colVal[0]         * transVal,
                                 colVal[1]         * transVal,
                                 colVal[2]         * transVal,
                                 luminance(colVal) * transVal );

                if(constCol[0] > TypeTraits<Real32>::getDefaultEps() ||
                   constCol[1] > TypeTraits<Real32>::getDefaultEps() ||
                   constCol[2] > TypeTraits<Real32>::getDefaultEps()   )
                {
                    if(blendChunk == NULL)
                        blendChunk = BlendChunk::create();

                    blendChunk->setSrcFactor (GL_ONE_MINUS_CONSTANT_COLOR);
                    blendChunk->setDestFactor(GL_CONSTANT_COLOR          );

                    blendChunk->setColor     (constCol                   );

                    OSG_COLLADA_LOG(
                        ("ColladaEffect::createInstanceProfileCommon: "
                         "src: GL_ONE_MINUS_CONSTANT_COLOR "
                         "dst: GL_CONSTANT_COLOR "
                         "%f %f %f %f\n",
                         constCol[0], 
                         constCol[1],
                         constCol[2], 
                         constCol[3]));
                }
            }
        }
        else if(param != NULL)
        {
            SWARNING << "ColladaEffect::createInstanceProfileCommon: "
                     << "<transparent>/<param> not supported."
                     << std::endl;
        }
        else if(texture != NULL)
        {
            ColladaTexture *pTex = _textures[TransparentTexture].colTexture;

            if(pTex != NULL)
            {
                xsNCName tcSemantic = 
                    _textures[TransparentTexture].texture->getTexcoord();

                addTexture(tcSemantic, 
                           colInstEffect,
                           pTex,
                           mat, 
                           GL_MODULATE,
                           texCount                     );

                // do we need a blend chunk?
                if(pTex->hasAlpha())
                {
                    if(blendChunk == NULL)
                        blendChunk = BlendChunk::create();

#if defined(OSG_COLLADA_TRANSPARENT_MODE) && OSG_COLLADA_TRANSPARENT_MODE == 1
                    // Always use alpha test with low alpha value, standard
                    // blending, but enable depth writes

                    blendChunk->setAlphaFunc (GL_GREATER);
                    blendChunk->setAlphaValue(0.1f      );

                    blendChunk->setSrcFactor (GL_SRC_ALPHA          );
                    blendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

                    // force depth writing even for transparent object
                    if(depthChunk == NULL)
                        depthChunk = DepthChunk::create();

#elif defined(OSG_COLLADA_TRANSPARENT_MODE) && OSG_COLLADA_TRANSPARENT_MODE == 2
                    // enable depth writes for textures with a "mask" alpha
                    // channel (only values are 0 and 1)
                    // standard blending otherwise

                    if(pTex->hasBinaryAlpha())
                    {
                        OSG_COLLADA_LOG((
                            "ColladaEffect::createInstanceProfileCommon: "
                            "<transparent>/<texture> using alpha test.\n"));

                        blendChunk->setAlphaFunc (GL_GREATER  );
                        blendChunk->setAlphaValue(0.5f        );

                        blendChunk->setDestFactor(GL_ZERO     );
                        blendChunk->setSrcFactor (GL_SRC_ALPHA);
                    }
                    else
                    {
                        OSG_COLLADA_LOG((
                            "ColladaEffect::createInstanceProfileCommon: "
                            "<transparent>/<texture> using blending.\n"));

                        blendChunk->setSrcFactor (GL_SRC_ALPHA          );
                        blendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
                    }
#endif // OSG_COLLADA_TRANSPARENT_MODE
                }
            }
            else
            {
                SWARNING << "ColladaEffect::createInstanceProfileCommon: "
                         << "<diffuse>/<texture> could not find sampler2D ["
                         << texture->getTexture() << "]."
                         << std::endl;
            }
        }
    }
    else if(transparency != NULL)
    {
        // handle only <transparency> tag case (no <transparent> tag)

        Color4f constCol(transVal, transVal, transVal, transVal);

        if(constCol[0] < (1.f - TypeTraits<Real32>::getDefaultEps()))
        {
            if(blendChunk == NULL)
                blendChunk = BlendChunk::create();

            blendChunk->setSrcFactor (GL_CONSTANT_ALPHA          );
            blendChunk->setDestFactor(GL_ONE_MINUS_CONSTANT_ALPHA);

            blendChunk->setColor     (constCol                   );

            OSG_COLLADA_LOG(("ColladaEffect::createInstanceProfileCommon: "
                             "src: GL_CONSTANT_ALPHA "
                             "dst: GL_ONE_MINUS_CONSTANT_ALPHA "
                             "%f\n", constCol[0]));
        }
    }

    mat->addChunk(matChunk);

    if(blendChunk != NULL)
        mat->addChunk(blendChunk);

    if(depthChunk != NULL)
        mat->addChunk(depthChunk);

    return MaterialTransitPtr(mat);
}

MaterialTransitPtr ColladaEffect::createInstanceProfileGLSL(
    domProfile_GLSL    *prof,       
    domEffect          *effect,
    domInstance_effect *instEffect)
{
    SWARNING << "ColladaEffect::createInstanceProfileGLSL: NIY" << std::endl;

    return MaterialTransitPtr();
}

MaterialTransitPtr ColladaEffect::createInstanceProfileCG(
    domProfile_CG      *prof,       
    domEffect          *effect,
    domInstance_effect *instEffect)
{
    SWARNING << "ColladaEffect::createInstanceProfileCG: Fallback NIY" 
             << std::endl;

    return MaterialTransitPtr();
}

void ColladaEffect::handleProfileCommonEmission(
    domCommon_color_or_texture_type *emission,
    MaterialChunk                   *matChunk )
{
    if(emission == NULL)
        return;

    domCommon_color_or_texture_type::domColorRef   color;
    domCommon_color_or_texture_type::domParamRef   param;
    domCommon_color_or_texture_type::domTextureRef texture;

    fillColorParamTex(emission, color, param, texture);

    if(color != NULL)
    {
        Color4f colVal(color->getValue()[0],
                       color->getValue()[1],
                       color->getValue()[2],
                       color->getValue()[3] );

        matChunk->setEmission(colVal);
    }
    else if(param != NULL)
    {
        SWARNING << "ColladaEffect::handleProfileCommonEmission: "
                 << "<emission>/<param> not supported."
                 << std::endl;
    }
    else if(texture != NULL)
    {
#if 0
        xsNCName texId      = texture->getTexture ();
        xsNCName tcSemantic = texture->getTexcoord();
#endif

        SWARNING << "ColladaEffect::handleProfileCommonEmission: "
                 << "<emission>/<texture> not supported."
                 << std::endl;
    }
}

void ColladaEffect::handleProfileCommonAmbient(
    domCommon_color_or_texture_type *ambient,
    ColladaInstanceEffect           *colInstEffect,
    ChunkMaterial                   *mat,
    MaterialChunk                   *matChunk,
    BlendChunkUnrecPtr              &blendChunk,
    DepthChunkUnrecPtr              &depthChunk,
    UInt32                          &texCount     )
{
    if(ambient == NULL)
        return;

    domCommon_color_or_texture_type::domColorRef   color;
    domCommon_color_or_texture_type::domParamRef   param;
    domCommon_color_or_texture_type::domTextureRef texture;

    fillColorParamTex(ambient, color, param, texture);

    if(color != NULL)
    {
        Color4f colVal(color->getValue()[0],
                       color->getValue()[1],
                       color->getValue()[2],
                       color->getValue()[3] );

        matChunk->setAmbient(colVal);
    }
    else if(param != NULL)
    {

        SWARNING << "ColladaEffect::handleProfileCommonAmbient: "
                 << "<ambient>/<param> not supported."
                 << std::endl;
    }
    else if(texture != NULL)
    {
        ColladaTexture *pTex = _textures[AmbientTexture].colTexture;

        if(pTex != NULL)
        {
            xsNCName tcSemantic = 
                _textures[AmbientTexture].texture->getTexcoord();

            addTexture(tcSemantic, 
                       colInstEffect,
                       pTex,
                       mat, 
                       GL_REPLACE,
                       texCount                    );

            // do we need a blend chunk?
            if(pTex->hasAlpha())
            {
                if(blendChunk == NULL)
                    blendChunk = BlendChunk::create();

#if defined(OSG_COLLADA_TRANSPARENT_MODE) && OSG_COLLADA_TRANSPARENT_MODE == 1
                // Always use alpha test with low alpha value, standard
                // blending, but enable depth writes

                blendChunk->setAlphaFunc (GL_GREATER);
                blendChunk->setAlphaValue(0.1f      );

                blendChunk->setSrcFactor (GL_SRC_ALPHA          );
                blendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

                // force depth writing even for transparent object
                if(depthChunk == NULL)
                    depthChunk = DepthChunk::create();

#elif defined(OSG_COLLADA_TRANSPARENT_MODE) && OSG_COLLADA_TRANSPARENT_MODE == 2
                // enable depth writes for textures with a "mask" alpha
                // channel (only values are 0 and 1)
                // standard blending otherwise

                if(pTex->hasBinaryAlpha())
                {
                    OSG_COLLADA_LOG(
                        ("ColladaEffect::handleProfileCommonAmbient: "
                         "<ambient>/<texture> using alpha test.\n"));

                    blendChunk->setAlphaFunc (GL_GREATER  );
                    blendChunk->setAlphaValue(0.5f        );

                    blendChunk->setDestFactor(GL_ZERO     );
                    blendChunk->setSrcFactor (GL_SRC_ALPHA);
                }
                else
                {
                    OSG_COLLADA_LOG(
                        ("ColladaEffect::handleProfileCommonAmbient: "
                         "<ambient>/<texture> using blending.\n"));

                    blendChunk->setSrcFactor (GL_SRC_ALPHA          );
                    blendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
                }
#endif // OSG_COLLADA_TRANSPARENT_MODE
            }
        }
        else
        {
            SWARNING << "ColladaEffect::handleProfileCommonAmbient: "
                     << "<ambient>/<texture> could not find sampler2D ["
                     << texture->getTexture() << "]."
                     << std::endl;
        }
    }
}

void ColladaEffect::handleProfileCommonDiffuse(
    domCommon_color_or_texture_type *diffuse,
    ColladaInstanceEffect           *colInstEffect,
    ChunkMaterial                   *mat,
    MaterialChunk                   *matChunk,
    BlendChunkUnrecPtr              &blendChunk,
    DepthChunkUnrecPtr              &depthChunk,
    UInt32                          &texCount     )
{
    domCommon_color_or_texture_type::domColorRef   color;
    domCommon_color_or_texture_type::domParamRef   param;
    domCommon_color_or_texture_type::domTextureRef texture;

    fillColorParamTex(diffuse, color, param, texture);

    if(color != NULL)
    {
        Color4f colVal(color->getValue()[0],
                       color->getValue()[1],
                       color->getValue()[2],
                       color->getValue()[3] );

        matChunk->setDiffuse(colVal);
    }
    else if(param != NULL)
    {
        SWARNING << "ColladaEffect::handleProfileCommonDiffuse: "
                 << "<diffuse>/<param> not supported."
                 << std::endl;
    }
    else if(texture != NULL)
    {
        ColladaTexture *pTex = _textures[DiffuseTexture].colTexture;

        if(pTex != NULL)
        {
            xsNCName tcSemantic = 
                _textures[DiffuseTexture].texture->getTexcoord();

            addTexture(tcSemantic, 
                       colInstEffect,
                       pTex,
                       mat, 
                       GL_MODULATE,
                       texCount                    );

            // do we need a blend chunk?
            if(pTex->hasAlpha())
            {
                if(blendChunk == NULL)
                    blendChunk = BlendChunk::create();

#if defined(OSG_COLLADA_TRANSPARENT_MODE) && OSG_COLLADA_TRANSPARENT_MODE == 1
                // Always use alpha test with low alpha value, standard
                // blending, but enable depth writes

                blendChunk->setAlphaFunc (GL_GREATER);
                blendChunk->setAlphaValue(0.1f      );

                blendChunk->setSrcFactor (GL_SRC_ALPHA          );
                blendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

                // force depth writing even for transparent object
                if(depthChunk == NULL)
                    depthChunk = DepthChunk::create();

#elif defined(OSG_COLLADA_TRANSPARENT_MODE) && OSG_COLLADA_TRANSPARENT_MODE == 2
                // enable depth writes for textures with a "mask" alpha
                // channel (only values are 0 and 1)
                // standard blending otherwise

                if(pTex->hasBinaryAlpha())
                {
                    OSG_COLLADA_LOG(
                        ("ColladaEffect::handleProfileCommonDiffuse: "
                         "<diffuse>/<texture> using alpha test.\n"));

                    blendChunk->setAlphaFunc (GL_GREATER  );
                    blendChunk->setAlphaValue(0.5f        );


                    blendChunk->setDestFactor(GL_ZERO     );
                    blendChunk->setSrcFactor (GL_SRC_ALPHA);
                }
                else
                {
                    OSG_COLLADA_LOG(
                        ("ColladaEffect::handleProfileCommonDiffuse: "
                         "<diffuse>/<texture> using blending.\n"));

                    blendChunk->setSrcFactor (GL_SRC_ALPHA          );
                    blendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
                }
#endif // OSG_COLLADA_TRANSPARENT_MODE
            }
        }
        else
        {
            SWARNING << "ColladaEffect::handleProfileCommonDiffuse: "
                     << "<diffuse>/<texture> could not find sampler2D ["
                     << texture->getTexture() << "]."
                     << std::endl;
        }

        matChunk->setDiffuse(Color4f(0.8f, 0.8f, 0.8f, 1.f));
    }
}

void ColladaEffect::handleProfileCommonSpecular(
    domCommon_color_or_texture_type *specular,
    MaterialChunk                   *matChunk )
{
    if(specular == NULL) 
    {
        // set specular color to black if there is no specular value defined!
        matChunk->setSpecular(Color4f(0.0f,0.0f,0.0f,0.0f));

        return;
    }

    domCommon_color_or_texture_type::domColorRef   color;
    domCommon_color_or_texture_type::domParamRef   param;
    domCommon_color_or_texture_type::domTextureRef texture;

    fillColorParamTex(specular, color, param, texture);

    if(color != NULL)
    {
        Color4f colVal(color->getValue()[0],
                       color->getValue()[1],
                       color->getValue()[2],
                       color->getValue()[3] );

        matChunk->setSpecular(colVal);
    }
    else if(param != NULL)
    {
        SWARNING << "ColladaEffect::createInstanceProfileCommon: "
                 << "<specular>/<param> not supported."
                 << std::endl;
    }
    else if(texture != NULL)
    {
#if 0
        xsNCName texId      = texture->getTexture ();
        xsNCName tcSemantic = texture->getTexcoord();
#endif
        SWARNING << "ColladaEffect::createInstanceProfileCommon: "
                 << "<specular>/<texture> not supported."
                 << std::endl;
    }
}


void ColladaEffect::fillColorParamTex(
    domCommon_color_or_texture_type                *colTex,
    domCommon_color_or_texture_type::domColorRef   &colOut,
    domCommon_color_or_texture_type::domParamRef   &paramOut,
    domCommon_color_or_texture_type::domTextureRef &texOut  )
{
    if(colTex != NULL)
    {
        colOut   = colTex->getColor  ();
        paramOut = colTex->getParam  ();
        texOut   = colTex->getTexture();
    }
}

void ColladaEffect::fillColorParamTex(
    domCommon_transparent_type                     *colTex,
    domCommon_color_or_texture_type::domColorRef   &colOut,
    domCommon_color_or_texture_type::domParamRef   &paramOut,
    domCommon_color_or_texture_type::domTextureRef &texOut  )
{
    if(colTex != NULL)
    {
        colOut   = colTex->getColor  ();
        paramOut = colTex->getParam  ();
        texOut   = colTex->getTexture();
    }
}

void ColladaEffect::fillFloatParam(
    domCommon_float_or_param_type              *floatParam,
    domCommon_float_or_param_type::domFloatRef &floatOut,
    domCommon_float_or_param_type::domParamRef &paramOut  )
{
    if(floatParam != NULL)
    {
        floatOut = floatParam->getFloat();
        paramOut = floatParam->getParam();
    }
}

void ColladaEffect::addTexture(const std::string           &tcSemantic,
                                     ColladaInstanceEffect *colInstEffect, 
                                     ColladaTexture        *colTexture,
                                     ChunkMaterial         *mat,           
                                     GLenum                 envMode,
                                     UInt32                &texCount     )
{
    TextureEnvChunkUnrecPtr texEnv = TextureEnvChunk::create();
    texEnv->setEnvMode(envMode);

    Image *texImg = colTexture->getTexture()->getImage();

    if(texImg != NULL)
    {
        mat->addChunk(colTexture->getTexture(),      texCount);
        mat->addChunk(texEnv,                        texCount);
        mat->addChunk(colTexture->getTexTransform(), texCount);

        getGlobal()->getStatCollector()->getElem(
            ColladaGlobal::statNTextureUsed)->inc();

        OSG_COLLADA_LOG(("ColladaEffect::addTexture: "
                         "texCoord symbol [%s] in slot [%d]\n",
                         tcSemantic.c_str(),
                         Geometry::TexCoordsIndex + texCount));

        colInstEffect->editTCMap()[tcSemantic] =
            Geometry::TexCoordsIndex + texCount;

        ++texCount;
    }
}

Real32 ColladaEffect::luminance(const Color4f &col)
{
    return (col[0] * 0.212671f + col[1] * 0.71516f + col[2] * 0.072169f);
}

OSG_END_NAMESPACE

#endif // OSG_WITH_COLLADA
