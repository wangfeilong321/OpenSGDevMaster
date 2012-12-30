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
 **     class Counter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGCounterBase.h"
#include "OSGCounter.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Counter
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var OSGAny          CounterBase::_sfIncTrigger
    
*/

/*! \var OSGAny          CounterBase::_sfDecTrigger
    
*/

/*! \var OSGAny          CounterBase::_sfResetTrigger
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<Counter *, nsOSG>::_type(
    "CounterPtr", 
    "NodeCorePtr", 
    Counter::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(Counter *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CounterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFOSGAny::Description(
        SFOSGAny::getClassType(),
        "incTrigger",
        "",
        IncTriggerFieldId, IncTriggerFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&Counter::editHandleIncTrigger),
        static_cast<FieldGetMethodSig >(&Counter::getHandleIncTrigger));

    oType.addInitialDesc(pDesc);

    pDesc = new SFOSGAny::Description(
        SFOSGAny::getClassType(),
        "decTrigger",
        "",
        DecTriggerFieldId, DecTriggerFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&Counter::editHandleDecTrigger),
        static_cast<FieldGetMethodSig >(&Counter::getHandleDecTrigger));

    oType.addInitialDesc(pDesc);

    pDesc = new SFOSGAny::Description(
        SFOSGAny::getClassType(),
        "resetTrigger",
        "",
        ResetTriggerFieldId, ResetTriggerFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&Counter::editHandleResetTrigger),
        static_cast<FieldGetMethodSig >(&Counter::getHandleResetTrigger));

    oType.addInitialDesc(pDesc);
}


CounterBase::TypeObject CounterBase::_type(
    CounterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CounterBase::createEmptyLocal),
    Counter::initMethod,
    Counter::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Counter::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"Counter\"\n"
    "    parent=\"NodeCore\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    parentFields=\"none\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"incTrigger\"\n"
    "        type=\"OSGAny\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"protected\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "\t>\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"decTrigger\"\n"
    "        type=\"OSGAny\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"protected\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "\t>\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"resetTrigger\"\n"
    "        type=\"OSGAny\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"protected\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "\t>\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CounterBase::getType(void)
{
    return _type;
}

const FieldContainerType &CounterBase::getType(void) const
{
    return _type;
}

UInt32 CounterBase::getContainerSize(void) const
{
    return sizeof(Counter);
}

/*------------------------- decorator get ------------------------------*/


SFOSGAny *CounterBase::editSFIncTrigger(void)
{
    editSField(IncTriggerFieldMask);

    return &_sfIncTrigger;
}

const SFOSGAny *CounterBase::getSFIncTrigger(void) const
{
    return &_sfIncTrigger;
}


SFOSGAny *CounterBase::editSFDecTrigger(void)
{
    editSField(DecTriggerFieldMask);

    return &_sfDecTrigger;
}

const SFOSGAny *CounterBase::getSFDecTrigger(void) const
{
    return &_sfDecTrigger;
}


SFOSGAny *CounterBase::editSFResetTrigger(void)
{
    editSField(ResetTriggerFieldMask);

    return &_sfResetTrigger;
}

const SFOSGAny *CounterBase::getSFResetTrigger(void) const
{
    return &_sfResetTrigger;
}






/*------------------------------ access -----------------------------------*/

SizeT CounterBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IncTriggerFieldMask & whichField))
    {
        returnValue += _sfIncTrigger.getBinSize();
    }
    if(FieldBits::NoField != (DecTriggerFieldMask & whichField))
    {
        returnValue += _sfDecTrigger.getBinSize();
    }
    if(FieldBits::NoField != (ResetTriggerFieldMask & whichField))
    {
        returnValue += _sfResetTrigger.getBinSize();
    }

    return returnValue;
}

void CounterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IncTriggerFieldMask & whichField))
    {
        _sfIncTrigger.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DecTriggerFieldMask & whichField))
    {
        _sfDecTrigger.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResetTriggerFieldMask & whichField))
    {
        _sfResetTrigger.copyToBin(pMem);
    }
}

void CounterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IncTriggerFieldMask & whichField))
    {
        editSField(IncTriggerFieldMask);
        _sfIncTrigger.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DecTriggerFieldMask & whichField))
    {
        editSField(DecTriggerFieldMask);
        _sfDecTrigger.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResetTriggerFieldMask & whichField))
    {
        editSField(ResetTriggerFieldMask);
        _sfResetTrigger.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CounterTransitPtr CounterBase::createLocal(BitVector bFlags)
{
    CounterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Counter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CounterTransitPtr CounterBase::createDependent(BitVector bFlags)
{
    CounterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Counter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CounterTransitPtr CounterBase::create(void)
{
    return createLocal();
}

Counter *CounterBase::createEmptyLocal(BitVector bFlags)
{
    Counter *returnValue;

    newPtr<Counter>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Counter *CounterBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CounterBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Counter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Counter *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CounterBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Counter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Counter *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CounterBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CounterBase::CounterBase(void) :
    Inherited(),
    _sfIncTrigger             (),
    _sfDecTrigger             (),
    _sfResetTrigger           ()
{
}

CounterBase::CounterBase(const CounterBase &source) :
    Inherited(source),
    _sfIncTrigger             (source._sfIncTrigger             ),
    _sfDecTrigger             (source._sfDecTrigger             ),
    _sfResetTrigger           (source._sfResetTrigger           )
{
}


/*-------------------------- destructors ----------------------------------*/

CounterBase::~CounterBase(void)
{
}


GetFieldHandlePtr CounterBase::getHandleIncTrigger      (void) const
{
    SFOSGAny::GetHandlePtr returnValue(
        new  SFOSGAny::GetHandle(
             &_sfIncTrigger,
             this->getType().getFieldDesc(IncTriggerFieldId),
             const_cast<CounterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CounterBase::editHandleIncTrigger     (void)
{
    SFOSGAny::EditHandlePtr returnValue(
        new  SFOSGAny::EditHandle(
             &_sfIncTrigger,
             this->getType().getFieldDesc(IncTriggerFieldId),
             this));


    editSField(IncTriggerFieldMask);

    return returnValue;
}

GetFieldHandlePtr CounterBase::getHandleDecTrigger      (void) const
{
    SFOSGAny::GetHandlePtr returnValue(
        new  SFOSGAny::GetHandle(
             &_sfDecTrigger,
             this->getType().getFieldDesc(DecTriggerFieldId),
             const_cast<CounterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CounterBase::editHandleDecTrigger     (void)
{
    SFOSGAny::EditHandlePtr returnValue(
        new  SFOSGAny::EditHandle(
             &_sfDecTrigger,
             this->getType().getFieldDesc(DecTriggerFieldId),
             this));


    editSField(DecTriggerFieldMask);

    return returnValue;
}

GetFieldHandlePtr CounterBase::getHandleResetTrigger    (void) const
{
    SFOSGAny::GetHandlePtr returnValue(
        new  SFOSGAny::GetHandle(
             &_sfResetTrigger,
             this->getType().getFieldDesc(ResetTriggerFieldId),
             const_cast<CounterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CounterBase::editHandleResetTrigger   (void)
{
    SFOSGAny::EditHandlePtr returnValue(
        new  SFOSGAny::EditHandle(
             &_sfResetTrigger,
             this->getType().getFieldDesc(ResetTriggerFieldId),
             this));


    editSField(ResetTriggerFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CounterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Counter *pThis = static_cast<Counter *>(this);

    pThis->execSync(static_cast<Counter *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CounterBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Counter *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Counter *>(pRefAspect),
                  dynamic_cast<const Counter *>(this));

    return returnValue;
}
#endif

void CounterBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
