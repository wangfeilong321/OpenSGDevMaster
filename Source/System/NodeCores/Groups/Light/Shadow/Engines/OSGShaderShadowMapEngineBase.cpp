/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ShaderShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGShaderProgram.h"           // ShadowVertexProgram Class

#include "OSGShaderShadowMapEngineBase.h"
#include "OSGShaderShadowMapEngine.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderShadowMapEngine
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ShaderProgram * ShaderShadowMapEngineBase::_sfShadowVertexProgram
    Vertex program snippet to perform necessary calculations for shadow map
    lookup. Currently not used.
*/

/*! \var ShaderProgram * ShaderShadowMapEngineBase::_sfShadowFragmentProgram
    Fragment program snippet to perform shadow map lookup.
    Contains a function vec4 OSG_SSME_FP_calcShadow(vec4 fragPos) that returns
    a shadow factor for the fragment with eye coordinate positoin fragPos.
*/

/*! \var Int32           ShaderShadowMapEngineBase::_sfForceTextureUnit
    Texture unit to use for the shadow texture (this is passed to the shader
    snippets). 
*/

/*! \var Real32          ShaderShadowMapEngineBase::_sfShadowNear
    Near clipping plane value to use when rendering the shadow map.
    Only used when not 0.f.
*/

/*! \var Real32          ShaderShadowMapEngineBase::_sfShadowFar
    Far clipping plane value to use when rendering the shadow map.
    Only used when not 0.f.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderShadowMapEngine *, nsOSG>::_type(
    "ShaderShadowMapEnginePtr", 
    "ShadowMapEnginePtr", 
    ShaderShadowMapEngine::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderShadowMapEngine *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderShadowMapEngine *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderShadowMapEngine *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderShadowMapEngineBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecShaderProgramPtr::Description(
        SFUnrecShaderProgramPtr::getClassType(),
        "shadowVertexProgram",
        "Vertex program snippet to perform necessary calculations for shadow map\n"
        "lookup. Currently not used.\n",
        ShadowVertexProgramFieldId, ShadowVertexProgramFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderShadowMapEngine::editHandleShadowVertexProgram),
        static_cast<FieldGetMethodSig >(&ShaderShadowMapEngine::getHandleShadowVertexProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecShaderProgramPtr::Description(
        SFUnrecShaderProgramPtr::getClassType(),
        "shadowFragmentProgram",
        "Fragment program snippet to perform shadow map lookup.\n"
        "Contains a function vec4 OSG_SSME_FP_calcShadow(vec4 fragPos) that returns\n"
        "a shadow factor for the fragment with eye coordinate positoin fragPos.\n",
        ShadowFragmentProgramFieldId, ShadowFragmentProgramFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderShadowMapEngine::editHandleShadowFragmentProgram),
        static_cast<FieldGetMethodSig >(&ShaderShadowMapEngine::getHandleShadowFragmentProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "forceTextureUnit",
        "Texture unit to use for the shadow texture (this is passed to the shader\n"
        "snippets). \n",
        ForceTextureUnitFieldId, ForceTextureUnitFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderShadowMapEngine::editHandleForceTextureUnit),
        static_cast<FieldGetMethodSig >(&ShaderShadowMapEngine::getHandleForceTextureUnit));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "shadowNear",
        "Near clipping plane value to use when rendering the shadow map.\n"
        "Only used when not 0.f.\n",
        ShadowNearFieldId, ShadowNearFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderShadowMapEngine::editHandleShadowNear),
        static_cast<FieldGetMethodSig >(&ShaderShadowMapEngine::getHandleShadowNear));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "shadowFar",
        "Far clipping plane value to use when rendering the shadow map.\n"
        "Only used when not 0.f.\n",
        ShadowFarFieldId, ShadowFarFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderShadowMapEngine::editHandleShadowFar),
        static_cast<FieldGetMethodSig >(&ShaderShadowMapEngine::getHandleShadowFar));

    oType.addInitialDesc(pDesc);
}


ShaderShadowMapEngineBase::TypeObject ShaderShadowMapEngineBase::_type(
    ShaderShadowMapEngineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderShadowMapEngineBase::createEmptyLocal),
    ShaderShadowMapEngine::initMethod,
    ShaderShadowMapEngine::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderShadowMapEngine::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderShadowMapEngine\"\n"
    "   parent=\"ShadowMapEngine\"\n"
    "   library=\"Group\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"false\"\n"
    "   docGroupBase=\"GrpGroupLightShadowEngines\"\n"
    "   >\n"
    "  <Field\n"
    "     name=\"shadowVertexProgram\"\n"
    "     category=\"pointer\"\n"
    "     type=\"ShaderProgram\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"NULL\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Vertex program snippet to perform necessary calculations for shadow map\n"
    "    lookup. Currently not used.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"shadowFragmentProgram\"\n"
    "     category=\"pointer\"\n"
    "     type=\"ShaderProgram\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"NULL\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Fragment program snippet to perform shadow map lookup.\n"
    "    Contains a function vec4 OSG_SSME_FP_calcShadow(vec4 fragPos) that returns\n"
    "    a shadow factor for the fragment with eye coordinate positoin fragPos.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"forceTextureUnit\"\n"
    "     type=\"Int32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"-1\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Texture unit to use for the shadow texture (this is passed to the shader\n"
    "    snippets). \n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"shadowNear\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"0.f\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Near clipping plane value to use when rendering the shadow map.\n"
    "    Only used when not 0.f.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"shadowFar\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"0.f\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Far clipping plane value to use when rendering the shadow map.\n"
    "    Only used when not 0.f.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderShadowMapEngineBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderShadowMapEngineBase::getType(void) const
{
    return _type;
}

UInt32 ShaderShadowMapEngineBase::getContainerSize(void) const
{
    return sizeof(ShaderShadowMapEngine);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ShaderShadowMapEngine::_sfShadowVertexProgram field.
const SFUnrecShaderProgramPtr *ShaderShadowMapEngineBase::getSFShadowVertexProgram(void) const
{
    return &_sfShadowVertexProgram;
}

SFUnrecShaderProgramPtr *ShaderShadowMapEngineBase::editSFShadowVertexProgram(void)
{
    editSField(ShadowVertexProgramFieldMask);

    return &_sfShadowVertexProgram;
}

//! Get the ShaderShadowMapEngine::_sfShadowFragmentProgram field.
const SFUnrecShaderProgramPtr *ShaderShadowMapEngineBase::getSFShadowFragmentProgram(void) const
{
    return &_sfShadowFragmentProgram;
}

SFUnrecShaderProgramPtr *ShaderShadowMapEngineBase::editSFShadowFragmentProgram(void)
{
    editSField(ShadowFragmentProgramFieldMask);

    return &_sfShadowFragmentProgram;
}

SFInt32 *ShaderShadowMapEngineBase::editSFForceTextureUnit(void)
{
    editSField(ForceTextureUnitFieldMask);

    return &_sfForceTextureUnit;
}

const SFInt32 *ShaderShadowMapEngineBase::getSFForceTextureUnit(void) const
{
    return &_sfForceTextureUnit;
}


SFReal32 *ShaderShadowMapEngineBase::editSFShadowNear(void)
{
    editSField(ShadowNearFieldMask);

    return &_sfShadowNear;
}

const SFReal32 *ShaderShadowMapEngineBase::getSFShadowNear(void) const
{
    return &_sfShadowNear;
}


SFReal32 *ShaderShadowMapEngineBase::editSFShadowFar(void)
{
    editSField(ShadowFarFieldMask);

    return &_sfShadowFar;
}

const SFReal32 *ShaderShadowMapEngineBase::getSFShadowFar(void) const
{
    return &_sfShadowFar;
}






/*------------------------------ access -----------------------------------*/

SizeT ShaderShadowMapEngineBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShadowVertexProgramFieldMask & whichField))
    {
        returnValue += _sfShadowVertexProgram.getBinSize();
    }
    if(FieldBits::NoField != (ShadowFragmentProgramFieldMask & whichField))
    {
        returnValue += _sfShadowFragmentProgram.getBinSize();
    }
    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        returnValue += _sfForceTextureUnit.getBinSize();
    }
    if(FieldBits::NoField != (ShadowNearFieldMask & whichField))
    {
        returnValue += _sfShadowNear.getBinSize();
    }
    if(FieldBits::NoField != (ShadowFarFieldMask & whichField))
    {
        returnValue += _sfShadowFar.getBinSize();
    }

    return returnValue;
}

void ShaderShadowMapEngineBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShadowVertexProgramFieldMask & whichField))
    {
        _sfShadowVertexProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowFragmentProgramFieldMask & whichField))
    {
        _sfShadowFragmentProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        _sfForceTextureUnit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowNearFieldMask & whichField))
    {
        _sfShadowNear.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowFarFieldMask & whichField))
    {
        _sfShadowFar.copyToBin(pMem);
    }
}

void ShaderShadowMapEngineBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShadowVertexProgramFieldMask & whichField))
    {
        editSField(ShadowVertexProgramFieldMask);
        _sfShadowVertexProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowFragmentProgramFieldMask & whichField))
    {
        editSField(ShadowFragmentProgramFieldMask);
        _sfShadowFragmentProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
    {
        editSField(ForceTextureUnitFieldMask);
        _sfForceTextureUnit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowNearFieldMask & whichField))
    {
        editSField(ShadowNearFieldMask);
        _sfShadowNear.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowFarFieldMask & whichField))
    {
        editSField(ShadowFarFieldMask);
        _sfShadowFar.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderShadowMapEngineTransitPtr ShaderShadowMapEngineBase::createLocal(BitVector bFlags)
{
    ShaderShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderShadowMapEngine>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderShadowMapEngineTransitPtr ShaderShadowMapEngineBase::createDependent(BitVector bFlags)
{
    ShaderShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderShadowMapEngine>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderShadowMapEngineTransitPtr ShaderShadowMapEngineBase::create(void)
{
    ShaderShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderShadowMapEngine>(tmpPtr);
    }

    return fc;
}

ShaderShadowMapEngine *ShaderShadowMapEngineBase::createEmptyLocal(BitVector bFlags)
{
    ShaderShadowMapEngine *returnValue;

    newPtr<ShaderShadowMapEngine>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderShadowMapEngine *ShaderShadowMapEngineBase::createEmpty(void)
{
    ShaderShadowMapEngine *returnValue;

    newPtr<ShaderShadowMapEngine>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderShadowMapEngineBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderShadowMapEngine *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderShadowMapEngine *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderShadowMapEngineBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderShadowMapEngine *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderShadowMapEngine *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderShadowMapEngineBase::shallowCopy(void) const
{
    ShaderShadowMapEngine *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderShadowMapEngine *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderShadowMapEngineBase::ShaderShadowMapEngineBase(void) :
    Inherited(),
    _sfShadowVertexProgram    (NULL),
    _sfShadowFragmentProgram  (NULL),
    _sfForceTextureUnit       (Int32(-1)),
    _sfShadowNear             (Real32(0.f)),
    _sfShadowFar              (Real32(0.f))
{
}

ShaderShadowMapEngineBase::ShaderShadowMapEngineBase(const ShaderShadowMapEngineBase &source) :
    Inherited(source),
    _sfShadowVertexProgram    (NULL),
    _sfShadowFragmentProgram  (NULL),
    _sfForceTextureUnit       (source._sfForceTextureUnit       ),
    _sfShadowNear             (source._sfShadowNear             ),
    _sfShadowFar              (source._sfShadowFar              )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderShadowMapEngineBase::~ShaderShadowMapEngineBase(void)
{
}

void ShaderShadowMapEngineBase::onCreate(const ShaderShadowMapEngine *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShaderShadowMapEngine *pThis = static_cast<ShaderShadowMapEngine *>(this);

        pThis->setShadowVertexProgram(source->getShadowVertexProgram());

        pThis->setShadowFragmentProgram(source->getShadowFragmentProgram());
    }
}

GetFieldHandlePtr ShaderShadowMapEngineBase::getHandleShadowVertexProgram (void) const
{
    SFUnrecShaderProgramPtr::GetHandlePtr returnValue(
        new  SFUnrecShaderProgramPtr::GetHandle(
             &_sfShadowVertexProgram,
             this->getType().getFieldDesc(ShadowVertexProgramFieldId),
             const_cast<ShaderShadowMapEngineBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderShadowMapEngineBase::editHandleShadowVertexProgram(void)
{
    SFUnrecShaderProgramPtr::EditHandlePtr returnValue(
        new  SFUnrecShaderProgramPtr::EditHandle(
             &_sfShadowVertexProgram,
             this->getType().getFieldDesc(ShadowVertexProgramFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ShaderShadowMapEngine::setShadowVertexProgram,
                    static_cast<ShaderShadowMapEngine *>(this), _1));

    editSField(ShadowVertexProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderShadowMapEngineBase::getHandleShadowFragmentProgram (void) const
{
    SFUnrecShaderProgramPtr::GetHandlePtr returnValue(
        new  SFUnrecShaderProgramPtr::GetHandle(
             &_sfShadowFragmentProgram,
             this->getType().getFieldDesc(ShadowFragmentProgramFieldId),
             const_cast<ShaderShadowMapEngineBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderShadowMapEngineBase::editHandleShadowFragmentProgram(void)
{
    SFUnrecShaderProgramPtr::EditHandlePtr returnValue(
        new  SFUnrecShaderProgramPtr::EditHandle(
             &_sfShadowFragmentProgram,
             this->getType().getFieldDesc(ShadowFragmentProgramFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ShaderShadowMapEngine::setShadowFragmentProgram,
                    static_cast<ShaderShadowMapEngine *>(this), _1));

    editSField(ShadowFragmentProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderShadowMapEngineBase::getHandleForceTextureUnit (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfForceTextureUnit,
             this->getType().getFieldDesc(ForceTextureUnitFieldId),
             const_cast<ShaderShadowMapEngineBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderShadowMapEngineBase::editHandleForceTextureUnit(void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfForceTextureUnit,
             this->getType().getFieldDesc(ForceTextureUnitFieldId),
             this));


    editSField(ForceTextureUnitFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderShadowMapEngineBase::getHandleShadowNear      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfShadowNear,
             this->getType().getFieldDesc(ShadowNearFieldId),
             const_cast<ShaderShadowMapEngineBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderShadowMapEngineBase::editHandleShadowNear     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfShadowNear,
             this->getType().getFieldDesc(ShadowNearFieldId),
             this));


    editSField(ShadowNearFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderShadowMapEngineBase::getHandleShadowFar       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfShadowFar,
             this->getType().getFieldDesc(ShadowFarFieldId),
             const_cast<ShaderShadowMapEngineBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderShadowMapEngineBase::editHandleShadowFar      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfShadowFar,
             this->getType().getFieldDesc(ShadowFarFieldId),
             this));


    editSField(ShadowFarFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderShadowMapEngine *pThis = static_cast<ShaderShadowMapEngine *>(this);

    pThis->execSync(static_cast<ShaderShadowMapEngine *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderShadowMapEngineBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderShadowMapEngine *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderShadowMapEngine *>(pRefAspect),
                  dynamic_cast<const ShaderShadowMapEngine *>(this));

    return returnValue;
}
#endif

void ShaderShadowMapEngineBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShaderShadowMapEngine *>(this)->setShadowVertexProgram(NULL);

    static_cast<ShaderShadowMapEngine *>(this)->setShadowFragmentProgram(NULL);


}


OSG_END_NAMESPACE
