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
 **     class DisplayFilterGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGCalibrationPatternFilter.h" // CalibrationPatternFilter Class
#include "OSGResolutionDisplayFilter.h" // ResolutionFilter Class
#include "OSGColorDisplayFilter.h"      // ColorFilter Class
#include "OSGDistortionDisplayFilter.h" // DistortionFilter Class

#include "OSGDisplayFilterGroupBase.h"
#include "OSGDisplayFilterGroup.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DisplayFilterGroup
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var CalibrationPatternFilter * DisplayFilterGroupBase::_sfCalibrationPatternFilter
    
*/

/*! \var ResolutionDisplayFilter * DisplayFilterGroupBase::_sfResolutionFilter
    
*/

/*! \var ColorDisplayFilter * DisplayFilterGroupBase::_sfColorFilter
    
*/

/*! \var DistortionDisplayFilter * DisplayFilterGroupBase::_sfDistortionFilter
    
*/

/*! \var Int32           DisplayFilterGroupBase::_sfDrawerId
    
*/

/*! \var Int32           DisplayFilterGroupBase::_sfDrawableId
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<DisplayFilterGroup *, nsOSG>::_type(
    "DisplayFilterGroupPtr", 
    "AttachmentContainerPtr", 
    DisplayFilterGroup::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(DisplayFilterGroup *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DisplayFilterGroup *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DisplayFilterGroup *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DisplayFilterGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecCalibrationPatternFilterPtr::Description(
        SFUnrecCalibrationPatternFilterPtr::getClassType(),
        "calibrationPatternFilter",
        "",
        CalibrationPatternFilterFieldId, CalibrationPatternFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterGroup::editHandleCalibrationPatternFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterGroup::getHandleCalibrationPatternFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecResolutionDisplayFilterPtr::Description(
        SFUnrecResolutionDisplayFilterPtr::getClassType(),
        "resolutionFilter",
        "",
        ResolutionFilterFieldId, ResolutionFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterGroup::editHandleResolutionFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterGroup::getHandleResolutionFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecColorDisplayFilterPtr::Description(
        SFUnrecColorDisplayFilterPtr::getClassType(),
        "colorFilter",
        "",
        ColorFilterFieldId, ColorFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterGroup::editHandleColorFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterGroup::getHandleColorFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecDistortionDisplayFilterPtr::Description(
        SFUnrecDistortionDisplayFilterPtr::getClassType(),
        "distortionFilter",
        "",
        DistortionFilterFieldId, DistortionFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterGroup::editHandleDistortionFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterGroup::getHandleDistortionFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "drawerId",
        "",
        DrawerIdFieldId, DrawerIdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterGroup::editHandleDrawerId),
        static_cast<FieldGetMethodSig >(&DisplayFilterGroup::getHandleDrawerId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "drawableId",
        "",
        DrawableIdFieldId, DrawableIdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterGroup::editHandleDrawableId),
        static_cast<FieldGetMethodSig >(&DisplayFilterGroup::getHandleDrawableId));

    oType.addInitialDesc(pDesc);
}


DisplayFilterGroupBase::TypeObject DisplayFilterGroupBase::_type(
    DisplayFilterGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&DisplayFilterGroupBase::createEmptyLocal),
    DisplayFilterGroup::initMethod,
    DisplayFilterGroup::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DisplayFilterGroup::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"DisplayFilterGroup\"\n"
    "   parent=\"AttachmentContainer\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpEffectsGroupsDisplayFilter\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"calibrationPatternFilter\"\n"
    "\t type=\"CalibrationPatternFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"resolutionFilter\"\n"
    "\t type=\"ResolutionDisplayFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorFilter\"\n"
    "\t type=\"ColorDisplayFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"distortionFilter\"\n"
    "\t type=\"DistortionDisplayFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"drawerId\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"-1\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"drawableId\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"-1\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DisplayFilterGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &DisplayFilterGroupBase::getType(void) const
{
    return _type;
}

UInt32 DisplayFilterGroupBase::getContainerSize(void) const
{
    return sizeof(DisplayFilterGroup);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DisplayFilterGroup::_sfCalibrationPatternFilter field.
const SFUnrecCalibrationPatternFilterPtr *DisplayFilterGroupBase::getSFCalibrationPatternFilter(void) const
{
    return &_sfCalibrationPatternFilter;
}

SFUnrecCalibrationPatternFilterPtr *DisplayFilterGroupBase::editSFCalibrationPatternFilter(void)
{
    editSField(CalibrationPatternFilterFieldMask);

    return &_sfCalibrationPatternFilter;
}

//! Get the DisplayFilterGroup::_sfResolutionFilter field.
const SFUnrecResolutionDisplayFilterPtr *DisplayFilterGroupBase::getSFResolutionFilter(void) const
{
    return &_sfResolutionFilter;
}

SFUnrecResolutionDisplayFilterPtr *DisplayFilterGroupBase::editSFResolutionFilter(void)
{
    editSField(ResolutionFilterFieldMask);

    return &_sfResolutionFilter;
}

//! Get the DisplayFilterGroup::_sfColorFilter field.
const SFUnrecColorDisplayFilterPtr *DisplayFilterGroupBase::getSFColorFilter(void) const
{
    return &_sfColorFilter;
}

SFUnrecColorDisplayFilterPtr *DisplayFilterGroupBase::editSFColorFilter    (void)
{
    editSField(ColorFilterFieldMask);

    return &_sfColorFilter;
}

//! Get the DisplayFilterGroup::_sfDistortionFilter field.
const SFUnrecDistortionDisplayFilterPtr *DisplayFilterGroupBase::getSFDistortionFilter(void) const
{
    return &_sfDistortionFilter;
}

SFUnrecDistortionDisplayFilterPtr *DisplayFilterGroupBase::editSFDistortionFilter(void)
{
    editSField(DistortionFilterFieldMask);

    return &_sfDistortionFilter;
}

SFInt32 *DisplayFilterGroupBase::editSFDrawerId(void)
{
    editSField(DrawerIdFieldMask);

    return &_sfDrawerId;
}

const SFInt32 *DisplayFilterGroupBase::getSFDrawerId(void) const
{
    return &_sfDrawerId;
}


SFInt32 *DisplayFilterGroupBase::editSFDrawableId(void)
{
    editSField(DrawableIdFieldMask);

    return &_sfDrawableId;
}

const SFInt32 *DisplayFilterGroupBase::getSFDrawableId(void) const
{
    return &_sfDrawableId;
}






/*------------------------------ access -----------------------------------*/

SizeT DisplayFilterGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CalibrationPatternFilterFieldMask & whichField))
    {
        returnValue += _sfCalibrationPatternFilter.getBinSize();
    }
    if(FieldBits::NoField != (ResolutionFilterFieldMask & whichField))
    {
        returnValue += _sfResolutionFilter.getBinSize();
    }
    if(FieldBits::NoField != (ColorFilterFieldMask & whichField))
    {
        returnValue += _sfColorFilter.getBinSize();
    }
    if(FieldBits::NoField != (DistortionFilterFieldMask & whichField))
    {
        returnValue += _sfDistortionFilter.getBinSize();
    }
    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
    {
        returnValue += _sfDrawerId.getBinSize();
    }
    if(FieldBits::NoField != (DrawableIdFieldMask & whichField))
    {
        returnValue += _sfDrawableId.getBinSize();
    }

    return returnValue;
}

void DisplayFilterGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CalibrationPatternFilterFieldMask & whichField))
    {
        _sfCalibrationPatternFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResolutionFilterFieldMask & whichField))
    {
        _sfResolutionFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterFieldMask & whichField))
    {
        _sfColorFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DistortionFilterFieldMask & whichField))
    {
        _sfDistortionFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
    {
        _sfDrawerId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawableIdFieldMask & whichField))
    {
        _sfDrawableId.copyToBin(pMem);
    }
}

void DisplayFilterGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CalibrationPatternFilterFieldMask & whichField))
    {
        editSField(CalibrationPatternFilterFieldMask);
        _sfCalibrationPatternFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResolutionFilterFieldMask & whichField))
    {
        editSField(ResolutionFilterFieldMask);
        _sfResolutionFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterFieldMask & whichField))
    {
        editSField(ColorFilterFieldMask);
        _sfColorFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DistortionFilterFieldMask & whichField))
    {
        editSField(DistortionFilterFieldMask);
        _sfDistortionFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
    {
        editSField(DrawerIdFieldMask);
        _sfDrawerId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawableIdFieldMask & whichField))
    {
        editSField(DrawableIdFieldMask);
        _sfDrawableId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DisplayFilterGroupTransitPtr DisplayFilterGroupBase::createLocal(BitVector bFlags)
{
    DisplayFilterGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DisplayFilterGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DisplayFilterGroupTransitPtr DisplayFilterGroupBase::createDependent(BitVector bFlags)
{
    DisplayFilterGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DisplayFilterGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DisplayFilterGroupTransitPtr DisplayFilterGroupBase::create(void)
{
    DisplayFilterGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DisplayFilterGroup>(tmpPtr);
    }

    return fc;
}

DisplayFilterGroup *DisplayFilterGroupBase::createEmptyLocal(BitVector bFlags)
{
    DisplayFilterGroup *returnValue;

    newPtr<DisplayFilterGroup>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DisplayFilterGroup *DisplayFilterGroupBase::createEmpty(void)
{
    DisplayFilterGroup *returnValue;

    newPtr<DisplayFilterGroup>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DisplayFilterGroupBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DisplayFilterGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DisplayFilterGroup *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DisplayFilterGroupBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DisplayFilterGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DisplayFilterGroup *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DisplayFilterGroupBase::shallowCopy(void) const
{
    DisplayFilterGroup *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DisplayFilterGroup *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DisplayFilterGroupBase::DisplayFilterGroupBase(void) :
    Inherited(),
    _sfCalibrationPatternFilter(NULL),
    _sfResolutionFilter       (NULL),
    _sfColorFilter            (NULL),
    _sfDistortionFilter       (NULL),
    _sfDrawerId               (Int32(-1)),
    _sfDrawableId             (Int32(-1))
{
}

DisplayFilterGroupBase::DisplayFilterGroupBase(const DisplayFilterGroupBase &source) :
    Inherited(source),
    _sfCalibrationPatternFilter(NULL),
    _sfResolutionFilter       (NULL),
    _sfColorFilter            (NULL),
    _sfDistortionFilter       (NULL),
    _sfDrawerId               (source._sfDrawerId               ),
    _sfDrawableId             (source._sfDrawableId             )
{
}


/*-------------------------- destructors ----------------------------------*/

DisplayFilterGroupBase::~DisplayFilterGroupBase(void)
{
}

void DisplayFilterGroupBase::onCreate(const DisplayFilterGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DisplayFilterGroup *pThis = static_cast<DisplayFilterGroup *>(this);

        pThis->setCalibrationPatternFilter(source->getCalibrationPatternFilter());

        pThis->setResolutionFilter(source->getResolutionFilter());

        pThis->setColorFilter(source->getColorFilter());

        pThis->setDistortionFilter(source->getDistortionFilter());
    }
}

GetFieldHandlePtr DisplayFilterGroupBase::getHandleCalibrationPatternFilter (void) const
{
    SFUnrecCalibrationPatternFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecCalibrationPatternFilterPtr::GetHandle(
             &_sfCalibrationPatternFilter,
             this->getType().getFieldDesc(CalibrationPatternFilterFieldId),
             const_cast<DisplayFilterGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterGroupBase::editHandleCalibrationPatternFilter(void)
{
    SFUnrecCalibrationPatternFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecCalibrationPatternFilterPtr::EditHandle(
             &_sfCalibrationPatternFilter,
             this->getType().getFieldDesc(CalibrationPatternFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterGroup::setCalibrationPatternFilter,
                    static_cast<DisplayFilterGroup *>(this), _1));

    editSField(CalibrationPatternFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterGroupBase::getHandleResolutionFilter (void) const
{
    SFUnrecResolutionDisplayFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecResolutionDisplayFilterPtr::GetHandle(
             &_sfResolutionFilter,
             this->getType().getFieldDesc(ResolutionFilterFieldId),
             const_cast<DisplayFilterGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterGroupBase::editHandleResolutionFilter(void)
{
    SFUnrecResolutionDisplayFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecResolutionDisplayFilterPtr::EditHandle(
             &_sfResolutionFilter,
             this->getType().getFieldDesc(ResolutionFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterGroup::setResolutionFilter,
                    static_cast<DisplayFilterGroup *>(this), _1));

    editSField(ResolutionFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterGroupBase::getHandleColorFilter     (void) const
{
    SFUnrecColorDisplayFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecColorDisplayFilterPtr::GetHandle(
             &_sfColorFilter,
             this->getType().getFieldDesc(ColorFilterFieldId),
             const_cast<DisplayFilterGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterGroupBase::editHandleColorFilter    (void)
{
    SFUnrecColorDisplayFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecColorDisplayFilterPtr::EditHandle(
             &_sfColorFilter,
             this->getType().getFieldDesc(ColorFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterGroup::setColorFilter,
                    static_cast<DisplayFilterGroup *>(this), _1));

    editSField(ColorFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterGroupBase::getHandleDistortionFilter (void) const
{
    SFUnrecDistortionDisplayFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecDistortionDisplayFilterPtr::GetHandle(
             &_sfDistortionFilter,
             this->getType().getFieldDesc(DistortionFilterFieldId),
             const_cast<DisplayFilterGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterGroupBase::editHandleDistortionFilter(void)
{
    SFUnrecDistortionDisplayFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecDistortionDisplayFilterPtr::EditHandle(
             &_sfDistortionFilter,
             this->getType().getFieldDesc(DistortionFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterGroup::setDistortionFilter,
                    static_cast<DisplayFilterGroup *>(this), _1));

    editSField(DistortionFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterGroupBase::getHandleDrawerId        (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfDrawerId,
             this->getType().getFieldDesc(DrawerIdFieldId),
             const_cast<DisplayFilterGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterGroupBase::editHandleDrawerId       (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfDrawerId,
             this->getType().getFieldDesc(DrawerIdFieldId),
             this));


    editSField(DrawerIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterGroupBase::getHandleDrawableId      (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfDrawableId,
             this->getType().getFieldDesc(DrawableIdFieldId),
             const_cast<DisplayFilterGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterGroupBase::editHandleDrawableId     (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfDrawableId,
             this->getType().getFieldDesc(DrawableIdFieldId),
             this));


    editSField(DrawableIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DisplayFilterGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DisplayFilterGroup *pThis = static_cast<DisplayFilterGroup *>(this);

    pThis->execSync(static_cast<DisplayFilterGroup *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DisplayFilterGroupBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DisplayFilterGroup *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DisplayFilterGroup *>(pRefAspect),
                  dynamic_cast<const DisplayFilterGroup *>(this));

    return returnValue;
}
#endif

void DisplayFilterGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DisplayFilterGroup *>(this)->setCalibrationPatternFilter(NULL);

    static_cast<DisplayFilterGroup *>(this)->setResolutionFilter(NULL);

    static_cast<DisplayFilterGroup *>(this)->setColorFilter(NULL);

    static_cast<DisplayFilterGroup *>(this)->setDistortionFilter(NULL);


}


OSG_END_NAMESPACE
