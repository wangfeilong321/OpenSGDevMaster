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
 **     class CSMTrackball!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGCSMTrackballBase.h"
#include "OSGCSMTrackball.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMTrackball
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          CSMTrackballBase::_sfModifierMask
    
*/

/*! \var UInt32          CSMTrackballBase::_sfProcessing
    
*/

/*! \var Real32          CSMTrackballBase::_sfTranslationScaleFactor
    
*/

/*! \var Matrix          CSMTrackballBase::_sfMatrixResult
    
*/

/*! \var Pnt3f           CSMTrackballBase::_sfReferencePosition
    
*/

/*! \var Matrix          CSMTrackballBase::_sfReferenceMatrix
    
*/

/*! \var Pnt3f           CSMTrackballBase::_sfTransformCenter
    
*/

/*! \var Vec3f           CSMTrackballBase::_sfWorldDiag
    
*/

/*! \var MouseData       CSMTrackballBase::_sfMouseData
    
*/


void CSMTrackballBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "modifierMask",
        "",
        ModifierMaskFieldId, ModifierMaskFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleModifierMask),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleModifierMask));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "processing",
        "",
        ProcessingFieldId, ProcessingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleProcessing),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleProcessing));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "translationScaleFactor",
        "",
        TranslationScaleFactorFieldId, TranslationScaleFactorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleTranslationScaleFactor),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleTranslationScaleFactor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "matrixResult",
        "",
        MatrixResultFieldId, MatrixResultFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleMatrixResult),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleMatrixResult));

    oType.addInitialDesc(pDesc);

    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "referencePosition",
        "",
        ReferencePositionFieldId, ReferencePositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleReferencePosition),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleReferencePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "referenceMatrix",
        "",
        ReferenceMatrixFieldId, ReferenceMatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleReferenceMatrix),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleReferenceMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "transformCenter",
        "",
        TransformCenterFieldId, TransformCenterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleTransformCenter),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleTransformCenter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "worldDiag",
        "",
        WorldDiagFieldId, WorldDiagFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleWorldDiag),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleWorldDiag));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMouseData::Description(
        SFMouseData::getClassType(),
        "mouseData",
        "",
        MouseDataFieldId, MouseDataFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMTrackball::editHandleMouseData),
        static_cast<FieldGetMethodSig >(&CSMTrackball::getHandleMouseData));

    oType.addInitialDesc(pDesc);
}


CSMTrackballBase::TypeObject CSMTrackballBase::_type(
    CSMTrackballBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CSMTrackballBase::createEmptyLocal),
    CSMTrackball::initMethod,
    CSMTrackball::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMTrackballBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMTrackball\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"modifierMask\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0x0000\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"processing\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"false\"\n"
    "        access=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"translationScaleFactor\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"matrixResult\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"referencePosition\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"referenceMatrix\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"transformCenter\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"worldDiag\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"mouseData\"\n"
    "\t\ttype=\"MouseData\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMTrackballBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMTrackballBase::getType(void) const
{
    return _type;
}

UInt32 CSMTrackballBase::getContainerSize(void) const
{
    return sizeof(CSMTrackball);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *CSMTrackballBase::editSFModifierMask(void)
{
    editSField(ModifierMaskFieldMask);

    return &_sfModifierMask;
}

const SFUInt32 *CSMTrackballBase::getSFModifierMask(void) const
{
    return &_sfModifierMask;
}


SFUInt32 *CSMTrackballBase::editSFProcessing(void)
{
    editSField(ProcessingFieldMask);

    return &_sfProcessing;
}

const SFUInt32 *CSMTrackballBase::getSFProcessing(void) const
{
    return &_sfProcessing;
}


SFReal32 *CSMTrackballBase::editSFTranslationScaleFactor(void)
{
    editSField(TranslationScaleFactorFieldMask);

    return &_sfTranslationScaleFactor;
}

const SFReal32 *CSMTrackballBase::getSFTranslationScaleFactor(void) const
{
    return &_sfTranslationScaleFactor;
}


SFMatrix *CSMTrackballBase::editSFMatrixResult(void)
{
    editSField(MatrixResultFieldMask);

    return &_sfMatrixResult;
}

const SFMatrix *CSMTrackballBase::getSFMatrixResult(void) const
{
    return &_sfMatrixResult;
}


SFPnt3f *CSMTrackballBase::editSFReferencePosition(void)
{
    editSField(ReferencePositionFieldMask);

    return &_sfReferencePosition;
}

const SFPnt3f *CSMTrackballBase::getSFReferencePosition(void) const
{
    return &_sfReferencePosition;
}


SFMatrix *CSMTrackballBase::editSFReferenceMatrix(void)
{
    editSField(ReferenceMatrixFieldMask);

    return &_sfReferenceMatrix;
}

const SFMatrix *CSMTrackballBase::getSFReferenceMatrix(void) const
{
    return &_sfReferenceMatrix;
}


SFPnt3f *CSMTrackballBase::editSFTransformCenter(void)
{
    editSField(TransformCenterFieldMask);

    return &_sfTransformCenter;
}

const SFPnt3f *CSMTrackballBase::getSFTransformCenter(void) const
{
    return &_sfTransformCenter;
}


SFVec3f *CSMTrackballBase::editSFWorldDiag(void)
{
    editSField(WorldDiagFieldMask);

    return &_sfWorldDiag;
}

const SFVec3f *CSMTrackballBase::getSFWorldDiag(void) const
{
    return &_sfWorldDiag;
}


SFMouseData *CSMTrackballBase::editSFMouseData(void)
{
    editSField(MouseDataFieldMask);

    return &_sfMouseData;
}

const SFMouseData *CSMTrackballBase::getSFMouseData(void) const
{
    return &_sfMouseData;
}






/*------------------------------ access -----------------------------------*/

UInt32 CSMTrackballBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModifierMaskFieldMask & whichField))
    {
        returnValue += _sfModifierMask.getBinSize();
    }
    if(FieldBits::NoField != (ProcessingFieldMask & whichField))
    {
        returnValue += _sfProcessing.getBinSize();
    }
    if(FieldBits::NoField != (TranslationScaleFactorFieldMask & whichField))
    {
        returnValue += _sfTranslationScaleFactor.getBinSize();
    }
    if(FieldBits::NoField != (MatrixResultFieldMask & whichField))
    {
        returnValue += _sfMatrixResult.getBinSize();
    }
    if(FieldBits::NoField != (ReferencePositionFieldMask & whichField))
    {
        returnValue += _sfReferencePosition.getBinSize();
    }
    if(FieldBits::NoField != (ReferenceMatrixFieldMask & whichField))
    {
        returnValue += _sfReferenceMatrix.getBinSize();
    }
    if(FieldBits::NoField != (TransformCenterFieldMask & whichField))
    {
        returnValue += _sfTransformCenter.getBinSize();
    }
    if(FieldBits::NoField != (WorldDiagFieldMask & whichField))
    {
        returnValue += _sfWorldDiag.getBinSize();
    }
    if(FieldBits::NoField != (MouseDataFieldMask & whichField))
    {
        returnValue += _sfMouseData.getBinSize();
    }

    return returnValue;
}

void CSMTrackballBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModifierMaskFieldMask & whichField))
    {
        _sfModifierMask.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProcessingFieldMask & whichField))
    {
        _sfProcessing.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TranslationScaleFactorFieldMask & whichField))
    {
        _sfTranslationScaleFactor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MatrixResultFieldMask & whichField))
    {
        _sfMatrixResult.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ReferencePositionFieldMask & whichField))
    {
        _sfReferencePosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ReferenceMatrixFieldMask & whichField))
    {
        _sfReferenceMatrix.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransformCenterFieldMask & whichField))
    {
        _sfTransformCenter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WorldDiagFieldMask & whichField))
    {
        _sfWorldDiag.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MouseDataFieldMask & whichField))
    {
        _sfMouseData.copyToBin(pMem);
    }
}

void CSMTrackballBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModifierMaskFieldMask & whichField))
    {
        _sfModifierMask.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProcessingFieldMask & whichField))
    {
        _sfProcessing.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TranslationScaleFactorFieldMask & whichField))
    {
        _sfTranslationScaleFactor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MatrixResultFieldMask & whichField))
    {
        _sfMatrixResult.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ReferencePositionFieldMask & whichField))
    {
        _sfReferencePosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ReferenceMatrixFieldMask & whichField))
    {
        _sfReferenceMatrix.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransformCenterFieldMask & whichField))
    {
        _sfTransformCenter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WorldDiagFieldMask & whichField))
    {
        _sfWorldDiag.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MouseDataFieldMask & whichField))
    {
        _sfMouseData.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMTrackballTransitPtr CSMTrackballBase::createLocal(BitVector bFlags)
{
    CSMTrackballTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMTrackball>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMTrackballTransitPtr CSMTrackballBase::create(void)
{
    return createLocal();
}

CSMTrackball *CSMTrackballBase::createEmptyLocal(BitVector bFlags)
{
    CSMTrackball *returnValue;

    newPtr<CSMTrackball>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMTrackball *CSMTrackballBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMTrackballBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMTrackball *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMTrackball *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMTrackballBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMTrackballBase::CSMTrackballBase(void) :
    Inherited(),
    _sfModifierMask           (UInt32(0x0000)),
    _sfProcessing             (UInt32(false)),
    _sfTranslationScaleFactor (Real32(1.f)),
    _sfMatrixResult           (),
    _sfReferencePosition      (),
    _sfReferenceMatrix        (),
    _sfTransformCenter        (),
    _sfWorldDiag              (),
    _sfMouseData              ()
{
}

CSMTrackballBase::CSMTrackballBase(const CSMTrackballBase &source) :
    Inherited(source),
    _sfModifierMask           (source._sfModifierMask           ),
    _sfProcessing             (source._sfProcessing             ),
    _sfTranslationScaleFactor (source._sfTranslationScaleFactor ),
    _sfMatrixResult           (source._sfMatrixResult           ),
    _sfReferencePosition      (source._sfReferencePosition      ),
    _sfReferenceMatrix        (source._sfReferenceMatrix        ),
    _sfTransformCenter        (source._sfTransformCenter        ),
    _sfWorldDiag              (source._sfWorldDiag              ),
    _sfMouseData              (source._sfMouseData              )
{
}


/*-------------------------- destructors ----------------------------------*/

CSMTrackballBase::~CSMTrackballBase(void)
{
}


GetFieldHandlePtr CSMTrackballBase::getHandleModifierMask    (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfModifierMask,
             this->getType().getFieldDesc(ModifierMaskFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleModifierMask   (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfModifierMask,
             this->getType().getFieldDesc(ModifierMaskFieldId)));


    editSField(ModifierMaskFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleProcessing      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfProcessing,
             this->getType().getFieldDesc(ProcessingFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleProcessing     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfProcessing,
             this->getType().getFieldDesc(ProcessingFieldId)));


    editSField(ProcessingFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleTranslationScaleFactor (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTranslationScaleFactor,
             this->getType().getFieldDesc(TranslationScaleFactorFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleTranslationScaleFactor(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTranslationScaleFactor,
             this->getType().getFieldDesc(TranslationScaleFactorFieldId)));


    editSField(TranslationScaleFactorFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleMatrixResult    (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfMatrixResult,
             this->getType().getFieldDesc(MatrixResultFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleMatrixResult   (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfMatrixResult,
             this->getType().getFieldDesc(MatrixResultFieldId)));


    editSField(MatrixResultFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleReferencePosition (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfReferencePosition,
             this->getType().getFieldDesc(ReferencePositionFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleReferencePosition(void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfReferencePosition,
             this->getType().getFieldDesc(ReferencePositionFieldId)));


    editSField(ReferencePositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleReferenceMatrix (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfReferenceMatrix,
             this->getType().getFieldDesc(ReferenceMatrixFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleReferenceMatrix(void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfReferenceMatrix,
             this->getType().getFieldDesc(ReferenceMatrixFieldId)));


    editSField(ReferenceMatrixFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleTransformCenter (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfTransformCenter,
             this->getType().getFieldDesc(TransformCenterFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleTransformCenter(void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfTransformCenter,
             this->getType().getFieldDesc(TransformCenterFieldId)));


    editSField(TransformCenterFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleWorldDiag       (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfWorldDiag,
             this->getType().getFieldDesc(WorldDiagFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleWorldDiag      (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfWorldDiag,
             this->getType().getFieldDesc(WorldDiagFieldId)));


    editSField(WorldDiagFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMTrackballBase::getHandleMouseData       (void) const
{
    SFMouseData::GetHandlePtr returnValue(
        new  SFMouseData::GetHandle(
             &_sfMouseData,
             this->getType().getFieldDesc(MouseDataFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMTrackballBase::editHandleMouseData      (void)
{
    SFMouseData::EditHandlePtr returnValue(
        new  SFMouseData::EditHandle(
             &_sfMouseData,
             this->getType().getFieldDesc(MouseDataFieldId)));


    editSField(MouseDataFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMTrackballBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CSMTrackballBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMTrackballBase::createAspectCopy(void) const
{
    CSMTrackball *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMTrackball *>(this));

    return returnValue;
}
#endif

void CSMTrackballBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CSMTrackball *>::_type("CSMTrackballPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CSMTrackball *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMTrackball *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMTrackball *,
                           0);

OSG_END_NAMESPACE
