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
 **     class VRMLNormalInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGVRMLNormalInterpolatorBase.h"
#include "OSGVRMLNormalInterpolator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VRMLNormalInterpolator
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           VRMLNormalInterpolatorBase::_mfKeyValue
    
*/

/*! \var Vec3f           VRMLNormalInterpolatorBase::_mfOutValue
    This is VRML's value field.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<VRMLNormalInterpolator *, nsOSG>::_type(
    "VRMLNormalInterpolatorPtr", 
    "VRMLInterpolatorPtr", 
    VRMLNormalInterpolator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(VRMLNormalInterpolator *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VRMLNormalInterpolatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "keyValue",
        "",
        KeyValueFieldId, KeyValueFieldMask,
        false,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&VRMLNormalInterpolator::editHandleKeyValue),
        static_cast<FieldGetMethodSig >(&VRMLNormalInterpolator::getHandleKeyValue));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "outValue",
        "This is VRML's value field.\n",
        OutValueFieldId, OutValueFieldMask,
        true,
        (Field::FStdAccess | Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&VRMLNormalInterpolator::editHandleOutValue),
        static_cast<FieldGetMethodSig >(&VRMLNormalInterpolator::getHandleOutValue));

    oType.addInitialDesc(pDesc);
}


VRMLNormalInterpolatorBase::TypeObject VRMLNormalInterpolatorBase::_type(
    VRMLNormalInterpolatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&VRMLNormalInterpolatorBase::createEmptyLocal),
    VRMLNormalInterpolator::initMethod,
    VRMLNormalInterpolator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VRMLNormalInterpolator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"VRMLNormalInterpolator\"\n"
    "    parent=\"VRMLInterpolator\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    "    docGroupBase=\"GrpDynamicsVRMLAnimation\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"keyValue\"\n"
    "        type=\"Vec3f\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"outValue\"\n"
    "        type=\"Vec3f\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FStdAccess, FThreadLocal\"\n"
    "        >\n"
    "        This is VRML's value field.\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VRMLNormalInterpolatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &VRMLNormalInterpolatorBase::getType(void) const
{
    return _type;
}

UInt32 VRMLNormalInterpolatorBase::getContainerSize(void) const
{
    return sizeof(VRMLNormalInterpolator);
}

/*------------------------- decorator get ------------------------------*/


MFVec3f *VRMLNormalInterpolatorBase::editMFKeyValue(void)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return &_mfKeyValue;
}

const MFVec3f *VRMLNormalInterpolatorBase::getMFKeyValue(void) const
{
    return &_mfKeyValue;
}


MFVec3f *VRMLNormalInterpolatorBase::editMFOutValue(void)
{
    editMField(OutValueFieldMask, _mfOutValue);

    return &_mfOutValue;
}

const MFVec3f *VRMLNormalInterpolatorBase::getMFOutValue(void) const
{
    return &_mfOutValue;
}






/*------------------------------ access -----------------------------------*/

SizeT VRMLNormalInterpolatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        returnValue += _mfKeyValue.getBinSize();
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        returnValue += _mfOutValue.getBinSize();
    }

    return returnValue;
}

void VRMLNormalInterpolatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        _mfOutValue.copyToBin(pMem);
    }
}

void VRMLNormalInterpolatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        editMField(KeyValueFieldMask, _mfKeyValue);
        _mfKeyValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        editMField(OutValueFieldMask, _mfOutValue);
        _mfOutValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VRMLNormalInterpolatorTransitPtr VRMLNormalInterpolatorBase::createLocal(BitVector bFlags)
{
    VRMLNormalInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VRMLNormalInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VRMLNormalInterpolatorTransitPtr VRMLNormalInterpolatorBase::createDependent(BitVector bFlags)
{
    VRMLNormalInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VRMLNormalInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VRMLNormalInterpolatorTransitPtr VRMLNormalInterpolatorBase::create(void)
{
    VRMLNormalInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VRMLNormalInterpolator>(tmpPtr);
    }

    return fc;
}

VRMLNormalInterpolator *VRMLNormalInterpolatorBase::createEmptyLocal(BitVector bFlags)
{
    VRMLNormalInterpolator *returnValue;

    newPtr<VRMLNormalInterpolator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VRMLNormalInterpolator *VRMLNormalInterpolatorBase::createEmpty(void)
{
    VRMLNormalInterpolator *returnValue;

    newPtr<VRMLNormalInterpolator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VRMLNormalInterpolatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VRMLNormalInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VRMLNormalInterpolator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VRMLNormalInterpolatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VRMLNormalInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VRMLNormalInterpolator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VRMLNormalInterpolatorBase::shallowCopy(void) const
{
    VRMLNormalInterpolator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VRMLNormalInterpolator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VRMLNormalInterpolatorBase::VRMLNormalInterpolatorBase(void) :
    Inherited(),
    _mfKeyValue               (),
    _mfOutValue               ()
{
}

VRMLNormalInterpolatorBase::VRMLNormalInterpolatorBase(const VRMLNormalInterpolatorBase &source) :
    Inherited(source),
    _mfKeyValue               (source._mfKeyValue               ),
    _mfOutValue               (source._mfOutValue               )
{
}


/*-------------------------- destructors ----------------------------------*/

VRMLNormalInterpolatorBase::~VRMLNormalInterpolatorBase(void)
{
}


GetFieldHandlePtr VRMLNormalInterpolatorBase::getHandleKeyValue        (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             const_cast<VRMLNormalInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VRMLNormalInterpolatorBase::editHandleKeyValue       (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             this));


    editMField(KeyValueFieldMask, _mfKeyValue);

    return returnValue;
}

GetFieldHandlePtr VRMLNormalInterpolatorBase::getHandleOutValue        (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             const_cast<VRMLNormalInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VRMLNormalInterpolatorBase::editHandleOutValue       (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             this));


    editMField(OutValueFieldMask, _mfOutValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VRMLNormalInterpolatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VRMLNormalInterpolator *pThis = static_cast<VRMLNormalInterpolator *>(this);

    pThis->execSync(static_cast<VRMLNormalInterpolator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VRMLNormalInterpolatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VRMLNormalInterpolator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VRMLNormalInterpolator *>(pRefAspect),
                  dynamic_cast<const VRMLNormalInterpolator *>(this));

    return returnValue;
}
#endif

void VRMLNormalInterpolatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKeyValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfOutValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
