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
 **     class StereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGStereoCameraDecoratorBase.h"
#include "OSGStereoCameraDecorator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StereoCameraDecorator
    The abstract base class for stereo camera decorators, see \ref
    PageSystemWindowCameraDecoratorsStereo for a description.

    The basic parameters are given by the _sfEyeSeparation and _sfLeftEye fields.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            StereoCameraDecoratorBase::_sfLeftEye
    Flag to distinguish between left and right eye views.
*/

/*! \var Real32          StereoCameraDecoratorBase::_sfEyeSeparation
    The distance between the two eyes.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<StereoCameraDecorator *, nsOSG>::_type(
    "StereoCameraDecoratorPtr", 
    "CameraDecoratorPtr", 
    StereoCameraDecorator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(StereoCameraDecorator *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           StereoCameraDecorator *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           StereoCameraDecorator *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StereoCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "leftEye",
        "Flag to distinguish between left and right eye views.\n",
        LeftEyeFieldId, LeftEyeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StereoCameraDecorator::editHandleLeftEye),
        static_cast<FieldGetMethodSig >(&StereoCameraDecorator::getHandleLeftEye));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "eyeSeparation",
        "The distance between the two eyes.\n",
        EyeSeparationFieldId, EyeSeparationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StereoCameraDecorator::editHandleEyeSeparation),
        static_cast<FieldGetMethodSig >(&StereoCameraDecorator::getHandleEyeSeparation));

    oType.addInitialDesc(pDesc);
}


StereoCameraDecoratorBase::TypeObject StereoCameraDecoratorBase::_type(
    StereoCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    StereoCameraDecorator::initMethod,
    StereoCameraDecorator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StereoCameraDecorator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"StereoCameraDecorator\"\n"
    "   parent=\"CameraDecorator\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpSystemWindow\"\n"
    "   >\n"
    "\n"
    "The abstract base class for stereo camera decorators, see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereo for a description.\n"
    "\n"
    "The basic parameters are given by the _sfEyeSeparation and _sfLeftEye fields.\n"
    "\t<Field\n"
    "\t\tname=\"leftEye\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tFlag to distinguish between left and right eye views.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"eyeSeparation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe distance between the two eyes.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The abstract base class for stereo camera decorators, see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereo for a description.\n"
    "\n"
    "The basic parameters are given by the _sfEyeSeparation and _sfLeftEye fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StereoCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &StereoCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 StereoCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(StereoCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


SFBool *StereoCameraDecoratorBase::editSFLeftEye(void)
{
    editSField(LeftEyeFieldMask);

    return &_sfLeftEye;
}

const SFBool *StereoCameraDecoratorBase::getSFLeftEye(void) const
{
    return &_sfLeftEye;
}


SFReal32 *StereoCameraDecoratorBase::editSFEyeSeparation(void)
{
    editSField(EyeSeparationFieldMask);

    return &_sfEyeSeparation;
}

const SFReal32 *StereoCameraDecoratorBase::getSFEyeSeparation(void) const
{
    return &_sfEyeSeparation;
}






/*------------------------------ access -----------------------------------*/

SizeT StereoCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftEyeFieldMask & whichField))
    {
        returnValue += _sfLeftEye.getBinSize();
    }
    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        returnValue += _sfEyeSeparation.getBinSize();
    }

    return returnValue;
}

void StereoCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftEyeFieldMask & whichField))
    {
        _sfLeftEye.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        _sfEyeSeparation.copyToBin(pMem);
    }
}

void StereoCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftEyeFieldMask & whichField))
    {
        editSField(LeftEyeFieldMask);
        _sfLeftEye.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        editSField(EyeSeparationFieldMask);
        _sfEyeSeparation.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

StereoCameraDecoratorBase::StereoCameraDecoratorBase(void) :
    Inherited(),
    _sfLeftEye                (),
    _sfEyeSeparation          ()
{
}

StereoCameraDecoratorBase::StereoCameraDecoratorBase(const StereoCameraDecoratorBase &source) :
    Inherited(source),
    _sfLeftEye                (source._sfLeftEye                ),
    _sfEyeSeparation          (source._sfEyeSeparation          )
{
}


/*-------------------------- destructors ----------------------------------*/

StereoCameraDecoratorBase::~StereoCameraDecoratorBase(void)
{
}


GetFieldHandlePtr StereoCameraDecoratorBase::getHandleLeftEye         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLeftEye,
             this->getType().getFieldDesc(LeftEyeFieldId),
             const_cast<StereoCameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StereoCameraDecoratorBase::editHandleLeftEye        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLeftEye,
             this->getType().getFieldDesc(LeftEyeFieldId),
             this));


    editSField(LeftEyeFieldMask);

    return returnValue;
}

GetFieldHandlePtr StereoCameraDecoratorBase::getHandleEyeSeparation   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfEyeSeparation,
             this->getType().getFieldDesc(EyeSeparationFieldId),
             const_cast<StereoCameraDecoratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StereoCameraDecoratorBase::editHandleEyeSeparation  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfEyeSeparation,
             this->getType().getFieldDesc(EyeSeparationFieldId),
             this));


    editSField(EyeSeparationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StereoCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    StereoCameraDecorator *pThis = static_cast<StereoCameraDecorator *>(this);

    pThis->execSync(static_cast<StereoCameraDecorator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void StereoCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
