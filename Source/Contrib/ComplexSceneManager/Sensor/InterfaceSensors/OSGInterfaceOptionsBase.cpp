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
 **     class InterfaceOptions!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGDeviceInterfaceSensor.h"   // Parent Class

#include "OSGInterfaceOptionsBase.h"
#include "OSGInterfaceOptions.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::InterfaceOptions
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var DeviceInterfaceSensor * InterfaceOptionsBase::_sfParent
    
*/

/*! \var UInt32          InterfaceOptionsBase::_sfNapTime
    
*/

/*! \var UInt32          InterfaceOptionsBase::_sfBufferSize
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<InterfaceOptions *, nsOSG>::_type(
    "InterfaceOptionsPtr", 
    "FieldContainerPtr", 
    InterfaceOptions::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(InterfaceOptions *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           InterfaceOptions *,
                           nsOSG);


DataType &FieldTraits< InterfaceOptions *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<InterfaceOptions *, nsOSG>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      InterfaceOptions *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void InterfaceOptionsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentDeviceInterfaceSensorPtr::Description(
        SFParentDeviceInterfaceSensorPtr::getClassType(),
        "parent",
        "",
        ParentFieldId, ParentFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&InterfaceOptions::invalidEditField),
        static_cast     <FieldGetMethodSig >(&InterfaceOptions::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "napTime",
        "",
        NapTimeFieldId, NapTimeFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&InterfaceOptions::editHandleNapTime),
        static_cast<FieldGetMethodSig >(&InterfaceOptions::getHandleNapTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "bufferSize",
        "",
        BufferSizeFieldId, BufferSizeFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&InterfaceOptions::editHandleBufferSize),
        static_cast<FieldGetMethodSig >(&InterfaceOptions::getHandleBufferSize));

    oType.addInitialDesc(pDesc);
}


InterfaceOptionsBase::TypeObject InterfaceOptionsBase::_type(
    InterfaceOptionsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&InterfaceOptionsBase::createEmptyLocal),
    InterfaceOptions::initMethod,
    InterfaceOptions::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&InterfaceOptions::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"InterfaceOptions\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"single\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    parentFields=\"none\"\n"
    "    childFields=\"single\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"parent\"\n"
    "        type=\"DeviceInterfaceSensor\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"none\"\n"
    "        category=\"parentpointer\"\n"
    "\t>\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"napTime\"\n"
    "        type=\"UInt32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"10\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"bufferSize\"\n"
    "        type=\"UInt32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"128\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &InterfaceOptionsBase::getType(void)
{
    return _type;
}

const FieldContainerType &InterfaceOptionsBase::getType(void) const
{
    return _type;
}

UInt32 InterfaceOptionsBase::getContainerSize(void) const
{
    return sizeof(InterfaceOptions);
}

/*------------------------- decorator get ------------------------------*/



SFUInt32 *InterfaceOptionsBase::editSFNapTime(void)
{
    editSField(NapTimeFieldMask);

    return &_sfNapTime;
}

const SFUInt32 *InterfaceOptionsBase::getSFNapTime(void) const
{
    return &_sfNapTime;
}


SFUInt32 *InterfaceOptionsBase::editSFBufferSize(void)
{
    editSField(BufferSizeFieldMask);

    return &_sfBufferSize;
}

const SFUInt32 *InterfaceOptionsBase::getSFBufferSize(void) const
{
    return &_sfBufferSize;
}






/*------------------------------ access -----------------------------------*/

SizeT InterfaceOptionsBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }
    if(FieldBits::NoField != (NapTimeFieldMask & whichField))
    {
        returnValue += _sfNapTime.getBinSize();
    }
    if(FieldBits::NoField != (BufferSizeFieldMask & whichField))
    {
        returnValue += _sfBufferSize.getBinSize();
    }

    return returnValue;
}

void InterfaceOptionsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NapTimeFieldMask & whichField))
    {
        _sfNapTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BufferSizeFieldMask & whichField))
    {
        _sfBufferSize.copyToBin(pMem);
    }
}

void InterfaceOptionsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        editSField(ParentFieldMask);
        _sfParent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NapTimeFieldMask & whichField))
    {
        editSField(NapTimeFieldMask);
        _sfNapTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BufferSizeFieldMask & whichField))
    {
        editSField(BufferSizeFieldMask);
        _sfBufferSize.copyFromBin(pMem);
    }
}

//! create a new instance of the class
InterfaceOptionsTransitPtr InterfaceOptionsBase::createLocal(BitVector bFlags)
{
    InterfaceOptionsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<InterfaceOptions>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
InterfaceOptionsTransitPtr InterfaceOptionsBase::createDependent(BitVector bFlags)
{
    InterfaceOptionsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<InterfaceOptions>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
InterfaceOptionsTransitPtr InterfaceOptionsBase::create(void)
{
    return createLocal();
}

InterfaceOptions *InterfaceOptionsBase::createEmptyLocal(BitVector bFlags)
{
    InterfaceOptions *returnValue;

    newPtr<InterfaceOptions>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
InterfaceOptions *InterfaceOptionsBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr InterfaceOptionsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    InterfaceOptions *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const InterfaceOptions *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr InterfaceOptionsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    InterfaceOptions *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const InterfaceOptions *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr InterfaceOptionsBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

InterfaceOptionsBase::InterfaceOptionsBase(void) :
    Inherited(),
    _sfParent                 (NULL),
    _sfNapTime                (UInt32(10)),
    _sfBufferSize             (UInt32(128))
{
}

InterfaceOptionsBase::InterfaceOptionsBase(const InterfaceOptionsBase &source) :
    Inherited(source),
    _sfParent                 (NULL),
    _sfNapTime                (source._sfNapTime                ),
    _sfBufferSize             (source._sfBufferSize             )
{
}


/*-------------------------- destructors ----------------------------------*/

InterfaceOptionsBase::~InterfaceOptionsBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool InterfaceOptionsBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentFieldId)
    {
        DeviceInterfaceSensor * pTypedParent =
            dynamic_cast< DeviceInterfaceSensor * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfParent.getValue         ();

            UInt16 oldChildFieldId =
                _sfParent.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(ParentFieldMask);

            _sfParent.setValue(static_cast<DeviceInterfaceSensor *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool InterfaceOptionsBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentFieldId)
    {
        DeviceInterfaceSensor * pTypedParent =
            dynamic_cast< DeviceInterfaceSensor * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfParent.getValue() == pTypedParent)
            {
                editSField(ParentFieldMask);

                _sfParent.setValue(NULL, 0xFFFF);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr InterfaceOptionsBase::getHandleParent          (void) const
{
    SFParentDeviceInterfaceSensorPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr InterfaceOptionsBase::editHandleParent         (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr InterfaceOptionsBase::getHandleNapTime         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfNapTime,
             this->getType().getFieldDesc(NapTimeFieldId),
             const_cast<InterfaceOptionsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr InterfaceOptionsBase::editHandleNapTime        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfNapTime,
             this->getType().getFieldDesc(NapTimeFieldId),
             this));


    editSField(NapTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr InterfaceOptionsBase::getHandleBufferSize      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfBufferSize,
             this->getType().getFieldDesc(BufferSizeFieldId),
             const_cast<InterfaceOptionsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr InterfaceOptionsBase::editHandleBufferSize     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfBufferSize,
             this->getType().getFieldDesc(BufferSizeFieldId),
             this));


    editSField(BufferSizeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void InterfaceOptionsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    InterfaceOptions *pThis = static_cast<InterfaceOptions *>(this);

    pThis->execSync(static_cast<InterfaceOptions *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *InterfaceOptionsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    InterfaceOptions *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const InterfaceOptions *>(pRefAspect),
                  dynamic_cast<const InterfaceOptions *>(this));

    return returnValue;
}
#endif

void InterfaceOptionsBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
