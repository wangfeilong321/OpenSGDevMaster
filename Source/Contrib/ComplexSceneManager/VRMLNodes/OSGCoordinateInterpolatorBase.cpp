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
 **     class CoordinateInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGCoordinateInterpolatorBase.h"
#include "OSGCoordinateInterpolator.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CoordinateInterpolator
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          CoordinateInterpolatorBase::_sfFraction
    
*/

/*! \var Real32          CoordinateInterpolatorBase::_mfKey
    
*/

/*! \var Pnt3f           CoordinateInterpolatorBase::_mfKeyValue
    
*/

/*! \var Pnt3f           CoordinateInterpolatorBase::_mfValue
    
*/


void CoordinateInterpolatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "fraction",
        "",
        FractionFieldId, FractionFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&CoordinateInterpolator::editHandleFraction),
        static_cast<FieldGetMethodSig >(&CoordinateInterpolator::getHandleFraction));

    oType.addInitialDesc(pDesc);

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "key",
        "",
        KeyFieldId, KeyFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&CoordinateInterpolator::editHandleKey),
        static_cast<FieldGetMethodSig >(&CoordinateInterpolator::getHandleKey));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt3f::Description(
        MFPnt3f::getClassType(),
        "keyValue",
        "",
        KeyValueFieldId, KeyValueFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&CoordinateInterpolator::editHandleKeyValue),
        static_cast<FieldGetMethodSig >(&CoordinateInterpolator::getHandleKeyValue));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt3f::Description(
        MFPnt3f::getClassType(),
        "value",
        "",
        ValueFieldId, ValueFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&CoordinateInterpolator::editHandleValue),
        static_cast<FieldGetMethodSig >(&CoordinateInterpolator::getHandleValue));

    oType.addInitialDesc(pDesc);
}


CoordinateInterpolatorBase::TypeObject CoordinateInterpolatorBase::_type(
    CoordinateInterpolatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CoordinateInterpolatorBase::createEmptyLocal),
    CoordinateInterpolator::initMethod,
    CoordinateInterpolator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CoordinateInterpolatorBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CoordinateInterpolator\"\n"
    "    parent=\"NodeCore\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"fraction\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.f\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"key\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"keyValue\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CoordinateInterpolatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &CoordinateInterpolatorBase::getType(void) const
{
    return _type;
}

UInt32 CoordinateInterpolatorBase::getContainerSize(void) const
{
    return sizeof(CoordinateInterpolator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *CoordinateInterpolatorBase::editSFFraction(void)
{
    editSField(FractionFieldMask);

    return &_sfFraction;
}

const SFReal32 *CoordinateInterpolatorBase::getSFFraction(void) const
{
    return &_sfFraction;
}


MFReal32 *CoordinateInterpolatorBase::editMFKey(void)
{
    editMField(KeyFieldMask, _mfKey);

    return &_mfKey;
}

const MFReal32 *CoordinateInterpolatorBase::getMFKey(void) const
{
    return &_mfKey;
}


MFPnt3f *CoordinateInterpolatorBase::editMFKeyValue(void)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return &_mfKeyValue;
}

const MFPnt3f *CoordinateInterpolatorBase::getMFKeyValue(void) const
{
    return &_mfKeyValue;
}


MFPnt3f *CoordinateInterpolatorBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFPnt3f *CoordinateInterpolatorBase::getMFValue(void) const
{
    return &_mfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 CoordinateInterpolatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        returnValue += _sfFraction.getBinSize();
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        returnValue += _mfKey.getBinSize();
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        returnValue += _mfKeyValue.getBinSize();
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void CoordinateInterpolatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        _sfFraction.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        _mfKey.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void CoordinateInterpolatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        _sfFraction.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        _mfKey.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CoordinateInterpolatorTransitPtr CoordinateInterpolatorBase::createLocal(BitVector bFlags)
{
    CoordinateInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CoordinateInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CoordinateInterpolatorTransitPtr CoordinateInterpolatorBase::create(void)
{
    CoordinateInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CoordinateInterpolator>(tmpPtr);
    }

    return fc;
}

CoordinateInterpolator *CoordinateInterpolatorBase::createEmptyLocal(BitVector bFlags)
{
    CoordinateInterpolator *returnValue;

    newPtr<CoordinateInterpolator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CoordinateInterpolator *CoordinateInterpolatorBase::createEmpty(void)
{
    CoordinateInterpolator *returnValue;

    newPtr<CoordinateInterpolator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CoordinateInterpolatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CoordinateInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CoordinateInterpolator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CoordinateInterpolatorBase::shallowCopy(void) const
{
    CoordinateInterpolator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CoordinateInterpolator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CoordinateInterpolatorBase::CoordinateInterpolatorBase(void) :
    Inherited(),
    _sfFraction               (Real32(0.f)),
    _mfKey                    (),
    _mfKeyValue               (),
    _mfValue                  ()
{
}

CoordinateInterpolatorBase::CoordinateInterpolatorBase(const CoordinateInterpolatorBase &source) :
    Inherited(source),
    _sfFraction               (source._sfFraction               ),
    _mfKey                    (source._mfKey                    ),
    _mfKeyValue               (source._mfKeyValue               ),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

CoordinateInterpolatorBase::~CoordinateInterpolatorBase(void)
{
}


GetFieldHandlePtr CoordinateInterpolatorBase::getHandleFraction        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId)));

    return returnValue;
}

EditFieldHandlePtr CoordinateInterpolatorBase::editHandleFraction       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId)));


    editSField(FractionFieldMask);

    return returnValue;
}

GetFieldHandlePtr CoordinateInterpolatorBase::getHandleKey             (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId)));

    return returnValue;
}

EditFieldHandlePtr CoordinateInterpolatorBase::editHandleKey            (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId)));


    editMField(KeyFieldMask, _mfKey);

    return returnValue;
}

GetFieldHandlePtr CoordinateInterpolatorBase::getHandleKeyValue        (void) const
{
    MFPnt3f::GetHandlePtr returnValue(
        new  MFPnt3f::GetHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr CoordinateInterpolatorBase::editHandleKeyValue       (void)
{
    MFPnt3f::EditHandlePtr returnValue(
        new  MFPnt3f::EditHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId)));


    editMField(KeyValueFieldMask, _mfKeyValue);

    return returnValue;
}

GetFieldHandlePtr CoordinateInterpolatorBase::getHandleValue           (void) const
{
    MFPnt3f::GetHandlePtr returnValue(
        new  MFPnt3f::GetHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr CoordinateInterpolatorBase::editHandleValue          (void)
{
    MFPnt3f::EditHandlePtr returnValue(
        new  MFPnt3f::EditHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId)));


    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CoordinateInterpolatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CoordinateInterpolatorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CoordinateInterpolatorBase::createAspectCopy(void) const
{
    CoordinateInterpolator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CoordinateInterpolator *>(this));

    return returnValue;
}
#endif

void CoordinateInterpolatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKey.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfKeyValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CoordinateInterpolator *>::_type("CoordinateInterpolatorPtr", "NodeCorePtr");
#endif


OSG_END_NAMESPACE
