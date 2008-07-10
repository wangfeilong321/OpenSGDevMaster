/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class CubeMapGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Root Class
#include <OSGNode.h> // Exclude Class
#include <OSGTextureObjChunk.h> // Texture Class
#include <OSGNode.h> // Beacon Class
#include <OSGBackground.h> // Background Class
#include <OSGCamera.h> // Camera Class

#include "OSGCubeMapGeneratorBase.h"
#include "OSGCubeMapGenerator.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CubeMapGenerator
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Node *          CubeMapGeneratorBase::_sfRoot
    
*/

/*! \var Node *          CubeMapGeneratorBase::_mfExclude
    
*/

/*! \var TextureObjChunk * CubeMapGeneratorBase::_sfTexture
    
*/

/*! \var Vec2s           CubeMapGeneratorBase::_sfTextureSize
    
*/

/*! \var GLenum          CubeMapGeneratorBase::_sfTextureFormat
    
*/

/*! \var Node *          CubeMapGeneratorBase::_sfBeacon
    
*/

/*! \var Pnt3f           CubeMapGeneratorBase::_sfOrigin
    
*/

/*! \var UInt32          CubeMapGeneratorBase::_sfOriginMode
    
*/

/*! \var UInt32          CubeMapGeneratorBase::_sfTexUnit
    
*/

/*! \var UInt32          CubeMapGeneratorBase::_sfSetupMode
    
*/

/*! \var Background *    CubeMapGeneratorBase::_sfBackground
    
*/

/*! \var Camera *        CubeMapGeneratorBase::_sfCamera
    
*/


void CubeMapGeneratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "root",
        "",
        RootFieldId, RootFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleRoot),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleRoot));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecNodePtr::Description(
        MFUnrecNodePtr::getClassType(),
        "exclude",
        "",
        ExcludeFieldId, ExcludeFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleExclude),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleExclude));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "texture",
        "",
        TextureFieldId, TextureFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleTexture),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2s::Description(
        SFVec2s::getClassType(),
        "textureSize",
        "",
        TextureSizeFieldId, TextureSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleTextureSize),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleTextureSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "textureFormat",
        "",
        TextureFormatFieldId, TextureFormatFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleTextureFormat),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleTextureFormat));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "origin",
        "",
        OriginFieldId, OriginFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleOrigin),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleOrigin));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "originMode",
        "",
        OriginModeFieldId, OriginModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleOriginMode),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleOriginMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "texUnit",
        "",
        TexUnitFieldId, TexUnitFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleTexUnit),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleTexUnit));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "setupMode",
        "",
        SetupModeFieldId, SetupModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleSetupMode),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleSetupMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecBackgroundPtr::Description(
        SFUnrecBackgroundPtr::getClassType(),
        "background",
        "",
        BackgroundFieldId, BackgroundFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleBackground),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleBackground));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecCameraPtr::Description(
        SFUnrecCameraPtr::getClassType(),
        "camera",
        "",
        CameraFieldId, CameraFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeMapGenerator::editHandleCamera),
        static_cast<FieldGetMethodSig >(&CubeMapGenerator::getHandleCamera));

    oType.addInitialDesc(pDesc);
}


CubeMapGeneratorBase::TypeObject CubeMapGeneratorBase::_type(
    CubeMapGeneratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CubeMapGeneratorBase::createEmptyLocal),
    CubeMapGenerator::initMethod,
    CubeMapGenerator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CubeMapGeneratorBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CubeMapGenerator\"\n"
    "\tparent=\"DynamicStateGenerator\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"root\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"exclude\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texture\"\n"
    "\t\ttype=\"TextureObjChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"textureSize\"\n"
    "\t\ttype=\"Vec2s\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0, 0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"textureFormat\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"weakpointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"origin\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"originMode\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"CubeMapGenerator::UseCurrentVolumeCenter\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texUnit\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"setupMode\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"CubeMapGenerator::SetupAll\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"background\"\n"
    "\t\ttype=\"BackgroundPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"camera\"\n"
    "\t\ttype=\"CameraPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CubeMapGeneratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &CubeMapGeneratorBase::getType(void) const
{
    return _type;
}

UInt32 CubeMapGeneratorBase::getContainerSize(void) const
{
    return sizeof(CubeMapGenerator);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CubeMapGenerator::_sfRoot field.
const SFUnrecNodePtr *CubeMapGeneratorBase::getSFRoot(void) const
{
    return &_sfRoot;
}

SFUnrecNodePtr      *CubeMapGeneratorBase::editSFRoot           (void)
{
    editSField(RootFieldMask);

    return &_sfRoot;
}

//! Get the CubeMapGenerator::_mfExclude field.
const MFUnrecNodePtr *CubeMapGeneratorBase::getMFExclude(void) const
{
    return &_mfExclude;
}

MFUnrecNodePtr      *CubeMapGeneratorBase::editMFExclude        (void)
{
    editMField(ExcludeFieldMask, _mfExclude);

    return &_mfExclude;
}

//! Get the CubeMapGenerator::_sfTexture field.
const SFUnrecTextureObjChunkPtr *CubeMapGeneratorBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFUnrecTextureObjChunkPtr *CubeMapGeneratorBase::editSFTexture        (void)
{
    editSField(TextureFieldMask);

    return &_sfTexture;
}

SFVec2s *CubeMapGeneratorBase::editSFTextureSize(void)
{
    editSField(TextureSizeFieldMask);

    return &_sfTextureSize;
}

const SFVec2s *CubeMapGeneratorBase::getSFTextureSize(void) const
{
    return &_sfTextureSize;
}


SFGLenum *CubeMapGeneratorBase::editSFTextureFormat(void)
{
    editSField(TextureFormatFieldMask);

    return &_sfTextureFormat;
}

const SFGLenum *CubeMapGeneratorBase::getSFTextureFormat(void) const
{
    return &_sfTextureFormat;
}


//! Get the CubeMapGenerator::_sfBeacon field.
const SFWeakNodePtr *CubeMapGeneratorBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFWeakNodePtr       *CubeMapGeneratorBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}

SFPnt3f *CubeMapGeneratorBase::editSFOrigin(void)
{
    editSField(OriginFieldMask);

    return &_sfOrigin;
}

const SFPnt3f *CubeMapGeneratorBase::getSFOrigin(void) const
{
    return &_sfOrigin;
}


SFUInt32 *CubeMapGeneratorBase::editSFOriginMode(void)
{
    editSField(OriginModeFieldMask);

    return &_sfOriginMode;
}

const SFUInt32 *CubeMapGeneratorBase::getSFOriginMode(void) const
{
    return &_sfOriginMode;
}


SFUInt32 *CubeMapGeneratorBase::editSFTexUnit(void)
{
    editSField(TexUnitFieldMask);

    return &_sfTexUnit;
}

const SFUInt32 *CubeMapGeneratorBase::getSFTexUnit(void) const
{
    return &_sfTexUnit;
}


SFUInt32 *CubeMapGeneratorBase::editSFSetupMode(void)
{
    editSField(SetupModeFieldMask);

    return &_sfSetupMode;
}

const SFUInt32 *CubeMapGeneratorBase::getSFSetupMode(void) const
{
    return &_sfSetupMode;
}


//! Get the CubeMapGenerator::_sfBackground field.
const SFUnrecBackgroundPtr *CubeMapGeneratorBase::getSFBackground(void) const
{
    return &_sfBackground;
}

SFUnrecBackgroundPtr *CubeMapGeneratorBase::editSFBackground     (void)
{
    editSField(BackgroundFieldMask);

    return &_sfBackground;
}

//! Get the CubeMapGenerator::_sfCamera field.
const SFUnrecCameraPtr *CubeMapGeneratorBase::getSFCamera(void) const
{
    return &_sfCamera;
}

SFUnrecCameraPtr    *CubeMapGeneratorBase::editSFCamera         (void)
{
    editSField(CameraFieldMask);

    return &_sfCamera;
}



void CubeMapGeneratorBase::pushToExclude(Node * const value)
{
    editMField(ExcludeFieldMask, _mfExclude);

    _mfExclude.push_back(value);
}

void CubeMapGeneratorBase::assignExclude  (const MFUnrecNodePtr    &value)
{
    MFUnrecNodePtr   ::const_iterator elemIt  =
        value.begin();
    MFUnrecNodePtr   ::const_iterator elemEnd =
        value.end  ();

    static_cast<CubeMapGenerator *>(this)->clearExclude();

    while(elemIt != elemEnd)
    {
        this->pushToExclude(*elemIt);

        ++elemIt;
    }
}

void CubeMapGeneratorBase::removeFromExclude(UInt32 uiIndex)
{
    if(uiIndex < _mfExclude.size())
    {
        editMField(ExcludeFieldMask, _mfExclude);

        _mfExclude.erase(uiIndex);
    }
}

void CubeMapGeneratorBase::removeObjFromExclude(Node * const value)
{
    Int32 iElemIdx = _mfExclude.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ExcludeFieldMask, _mfExclude);

        _mfExclude.erase(iElemIdx);
    }
}
void CubeMapGeneratorBase::clearExclude(void)
{
    editMField(ExcludeFieldMask, _mfExclude);


    _mfExclude.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 CubeMapGeneratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }
    if(FieldBits::NoField != (ExcludeFieldMask & whichField))
    {
        returnValue += _mfExclude.getBinSize();
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (TextureSizeFieldMask & whichField))
    {
        returnValue += _sfTextureSize.getBinSize();
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        returnValue += _sfTextureFormat.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }
    if(FieldBits::NoField != (OriginFieldMask & whichField))
    {
        returnValue += _sfOrigin.getBinSize();
    }
    if(FieldBits::NoField != (OriginModeFieldMask & whichField))
    {
        returnValue += _sfOriginMode.getBinSize();
    }
    if(FieldBits::NoField != (TexUnitFieldMask & whichField))
    {
        returnValue += _sfTexUnit.getBinSize();
    }
    if(FieldBits::NoField != (SetupModeFieldMask & whichField))
    {
        returnValue += _sfSetupMode.getBinSize();
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        returnValue += _sfBackground.getBinSize();
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }

    return returnValue;
}

void CubeMapGeneratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ExcludeFieldMask & whichField))
    {
        _mfExclude.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureSizeFieldMask & whichField))
    {
        _sfTextureSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        _sfTextureFormat.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OriginFieldMask & whichField))
    {
        _sfOrigin.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OriginModeFieldMask & whichField))
    {
        _sfOriginMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexUnitFieldMask & whichField))
    {
        _sfTexUnit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SetupModeFieldMask & whichField))
    {
        _sfSetupMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }
}

void CubeMapGeneratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ExcludeFieldMask & whichField))
    {
        _mfExclude.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureSizeFieldMask & whichField))
    {
        _sfTextureSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        _sfTextureFormat.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OriginFieldMask & whichField))
    {
        _sfOrigin.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OriginModeFieldMask & whichField))
    {
        _sfOriginMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexUnitFieldMask & whichField))
    {
        _sfTexUnit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SetupModeFieldMask & whichField))
    {
        _sfSetupMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CubeMapGeneratorTransitPtr CubeMapGeneratorBase::createLocal(BitVector bFlags)
{
    CubeMapGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CubeMapGenerator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CubeMapGeneratorTransitPtr CubeMapGeneratorBase::create(void)
{
    CubeMapGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CubeMapGenerator>(tmpPtr);
    }

    return fc;
}

CubeMapGenerator *CubeMapGeneratorBase::createEmptyLocal(BitVector bFlags)
{
    CubeMapGenerator *returnValue;

    newPtr<CubeMapGenerator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CubeMapGenerator *CubeMapGeneratorBase::createEmpty(void)
{
    CubeMapGenerator *returnValue;

    newPtr<CubeMapGenerator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CubeMapGeneratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CubeMapGenerator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CubeMapGenerator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CubeMapGeneratorBase::shallowCopy(void) const
{
    CubeMapGenerator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CubeMapGenerator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CubeMapGeneratorBase::CubeMapGeneratorBase(void) :
    Inherited(),
    _sfRoot                   (NULL),
    _mfExclude                (),
    _sfTexture                (NULL),
    _sfTextureSize            (Vec2s(0, 0)),
    _sfTextureFormat          (GLenum(GL_NONE)),
    _sfBeacon                 (NULL),
    _sfOrigin                 (Pnt3f(0.f,0.f,0.f)),
    _sfOriginMode             (UInt32(CubeMapGenerator::UseCurrentVolumeCenter)),
    _sfTexUnit                (UInt32(0)),
    _sfSetupMode              (UInt32(CubeMapGenerator::SetupAll)),
    _sfBackground             (NULL),
    _sfCamera                 (NULL)
{
}

CubeMapGeneratorBase::CubeMapGeneratorBase(const CubeMapGeneratorBase &source) :
    Inherited(source),
    _sfRoot                   (NULL),
    _mfExclude                (),
    _sfTexture                (NULL),
    _sfTextureSize            (source._sfTextureSize            ),
    _sfTextureFormat          (source._sfTextureFormat          ),
    _sfBeacon                 (NULL),
    _sfOrigin                 (source._sfOrigin                 ),
    _sfOriginMode             (source._sfOriginMode             ),
    _sfTexUnit                (source._sfTexUnit                ),
    _sfSetupMode              (source._sfSetupMode              ),
    _sfBackground             (NULL),
    _sfCamera                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

CubeMapGeneratorBase::~CubeMapGeneratorBase(void)
{
}

void CubeMapGeneratorBase::onCreate(const CubeMapGenerator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CubeMapGenerator *pThis = static_cast<CubeMapGenerator *>(this);

        pThis->setRoot(source->getRoot());

        MFUnrecNodePtr::const_iterator ExcludeIt  =
            source->_mfExclude.begin();
        MFUnrecNodePtr::const_iterator ExcludeEnd =
            source->_mfExclude.end  ();

        while(ExcludeIt != ExcludeEnd)
        {
            pThis->pushToExclude(*ExcludeIt);

            ++ExcludeIt;
        }

        pThis->setTexture(source->getTexture());

        pThis->setBeacon(source->getBeacon());

        pThis->setBackground(source->getBackground());

        pThis->setCamera(source->getCamera());
    }
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleRoot            (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleRoot           (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId)));

    returnValue->setSetMethod(
        boost::bind(&CubeMapGenerator::setRoot,
                    static_cast<CubeMapGenerator *>(this), _1));

    editSField(RootFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleExclude         (void) const
{
    MFUnrecNodePtr::GetHandlePtr returnValue(
        new  MFUnrecNodePtr::GetHandle(
             &_mfExclude,
             this->getType().getFieldDesc(ExcludeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleExclude        (void)
{
    MFUnrecNodePtr::EditHandlePtr returnValue(
        new  MFUnrecNodePtr::EditHandle(
             &_mfExclude,
             this->getType().getFieldDesc(ExcludeFieldId)));

    returnValue->setAddMethod(
        boost::bind(&CubeMapGenerator::pushToExclude,
                    static_cast<CubeMapGenerator *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&CubeMapGenerator::removeFromExclude,
                    static_cast<CubeMapGenerator *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&CubeMapGenerator::removeObjFromExclude,
                    static_cast<CubeMapGenerator *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&CubeMapGenerator::clearExclude,
                    static_cast<CubeMapGenerator *>(this)));

    editMField(ExcludeFieldMask, _mfExclude);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTexture         (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTexture        (void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId)));

    returnValue->setSetMethod(
        boost::bind(&CubeMapGenerator::setTexture,
                    static_cast<CubeMapGenerator *>(this), _1));

    editSField(TextureFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTextureSize     (void) const
{
    SFVec2s::GetHandlePtr returnValue(
        new  SFVec2s::GetHandle(
             &_sfTextureSize,
             this->getType().getFieldDesc(TextureSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTextureSize    (void)
{
    SFVec2s::EditHandlePtr returnValue(
        new  SFVec2s::EditHandle(
             &_sfTextureSize,
             this->getType().getFieldDesc(TextureSizeFieldId)));


    editSField(TextureSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTextureFormat   (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfTextureFormat,
             this->getType().getFieldDesc(TextureFormatFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTextureFormat  (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfTextureFormat,
             this->getType().getFieldDesc(TextureFormatFieldId)));


    editSField(TextureFormatFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId)));

    returnValue->setSetMethod(
        boost::bind(&CubeMapGenerator::setBeacon,
                    static_cast<CubeMapGenerator *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleOrigin          (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfOrigin,
             this->getType().getFieldDesc(OriginFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleOrigin         (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfOrigin,
             this->getType().getFieldDesc(OriginFieldId)));


    editSField(OriginFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleOriginMode      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOriginMode,
             this->getType().getFieldDesc(OriginModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleOriginMode     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOriginMode,
             this->getType().getFieldDesc(OriginModeFieldId)));


    editSField(OriginModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTexUnit         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTexUnit,
             this->getType().getFieldDesc(TexUnitFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTexUnit        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTexUnit,
             this->getType().getFieldDesc(TexUnitFieldId)));


    editSField(TexUnitFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleSetupMode       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSetupMode,
             this->getType().getFieldDesc(SetupModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleSetupMode      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSetupMode,
             this->getType().getFieldDesc(SetupModeFieldId)));


    editSField(SetupModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleBackground      (void) const
{
    SFUnrecBackgroundPtr::GetHandlePtr returnValue(
        new  SFUnrecBackgroundPtr::GetHandle(
             &_sfBackground,
             this->getType().getFieldDesc(BackgroundFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleBackground     (void)
{
    SFUnrecBackgroundPtr::EditHandlePtr returnValue(
        new  SFUnrecBackgroundPtr::EditHandle(
             &_sfBackground,
             this->getType().getFieldDesc(BackgroundFieldId)));

    returnValue->setSetMethod(
        boost::bind(&CubeMapGenerator::setBackground,
                    static_cast<CubeMapGenerator *>(this), _1));

    editSField(BackgroundFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleCamera          (void) const
{
    SFUnrecCameraPtr::GetHandlePtr returnValue(
        new  SFUnrecCameraPtr::GetHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleCamera         (void)
{
    SFUnrecCameraPtr::EditHandlePtr returnValue(
        new  SFUnrecCameraPtr::EditHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId)));

    returnValue->setSetMethod(
        boost::bind(&CubeMapGenerator::setCamera,
                    static_cast<CubeMapGenerator *>(this), _1));

    editSField(CameraFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CubeMapGeneratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CubeMapGeneratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CubeMapGeneratorBase::createAspectCopy(void) const
{
    CubeMapGenerator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CubeMapGenerator *>(this));

    return returnValue;
}
#endif

void CubeMapGeneratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CubeMapGenerator *>(this)->setRoot(NULL);

    static_cast<CubeMapGenerator *>(this)->clearExclude();

    static_cast<CubeMapGenerator *>(this)->setTexture(NULL);

    static_cast<CubeMapGenerator *>(this)->setBeacon(NULL);

    static_cast<CubeMapGenerator *>(this)->setBackground(NULL);

    static_cast<CubeMapGenerator *>(this)->setCamera(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CubeMapGenerator *>::_type("CubeMapGeneratorPtr", "DynamicStateGeneratorPtr");
#endif


OSG_END_NAMESPACE
