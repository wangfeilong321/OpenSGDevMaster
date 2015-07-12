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
 **     class CSMQT4Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGCSMQT4WindowBase.h"
#include "OSGCSMQT4Window.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMQT4Window
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     CSMQT4WindowBase::_sfPrimaryDisplayString
    
*/

/*! \var bool            CSMQT4WindowBase::_sfPrivateContext
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CSMQT4Window *, nsOSG>::_type(
    "CSMQT4WindowPtr", 
    "CSMWindowPtr", 
    CSMQT4Window::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CSMQT4Window *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMQT4Window *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMQT4Window *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CSMQT4WindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "primaryDisplayString",
        "",
        PrimaryDisplayStringFieldId, PrimaryDisplayStringFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMQT4Window::editHandlePrimaryDisplayString),
        static_cast<FieldGetMethodSig >(&CSMQT4Window::getHandlePrimaryDisplayString));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "privateContext",
        "",
        PrivateContextFieldId, PrivateContextFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMQT4Window::editHandlePrivateContext),
        static_cast<FieldGetMethodSig >(&CSMQT4Window::getHandlePrivateContext));

    oType.addInitialDesc(pDesc);
}


CSMQT4WindowBase::TypeObject CSMQT4WindowBase::_type(
    CSMQT4WindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CSMQT4WindowBase::createEmptyLocal),
    CSMQT4Window::initMethod,
    CSMQT4Window::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMQT4Window::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMQT4Window\"\n"
    "    parent=\"CSMWindow\"\n"
    "    library=\"ContribCSMQt\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    >\n"
    "  <Field\n"
    "\t  name=\"primaryDisplayString\"\n"
    "\t  type=\"std::string\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"internal\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"privateContext\"\n"
    "\t  type=\"bool\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"internal\"\n"
    "\t  access=\"public\"\n"
    "      defaultValue=\"false\"\n"
    "\t  >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMQT4WindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMQT4WindowBase::getType(void) const
{
    return _type;
}

UInt32 CSMQT4WindowBase::getContainerSize(void) const
{
    return sizeof(CSMQT4Window);
}

/*------------------------- decorator get ------------------------------*/


SFString *CSMQT4WindowBase::editSFPrimaryDisplayString(void)
{
    editSField(PrimaryDisplayStringFieldMask);

    return &_sfPrimaryDisplayString;
}

const SFString *CSMQT4WindowBase::getSFPrimaryDisplayString(void) const
{
    return &_sfPrimaryDisplayString;
}


SFBool *CSMQT4WindowBase::editSFPrivateContext(void)
{
    editSField(PrivateContextFieldMask);

    return &_sfPrivateContext;
}

const SFBool *CSMQT4WindowBase::getSFPrivateContext(void) const
{
    return &_sfPrivateContext;
}






/*------------------------------ access -----------------------------------*/

SizeT CSMQT4WindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrimaryDisplayStringFieldMask & whichField))
    {
        returnValue += _sfPrimaryDisplayString.getBinSize();
    }
    if(FieldBits::NoField != (PrivateContextFieldMask & whichField))
    {
        returnValue += _sfPrivateContext.getBinSize();
    }

    return returnValue;
}

void CSMQT4WindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrimaryDisplayStringFieldMask & whichField))
    {
        _sfPrimaryDisplayString.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PrivateContextFieldMask & whichField))
    {
        _sfPrivateContext.copyToBin(pMem);
    }
}

void CSMQT4WindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrimaryDisplayStringFieldMask & whichField))
    {
        editSField(PrimaryDisplayStringFieldMask);
        _sfPrimaryDisplayString.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PrivateContextFieldMask & whichField))
    {
        editSField(PrivateContextFieldMask);
        _sfPrivateContext.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMQT4WindowTransitPtr CSMQT4WindowBase::createLocal(BitVector bFlags)
{
    CSMQT4WindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMQT4Window>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMQT4WindowTransitPtr CSMQT4WindowBase::createDependent(BitVector bFlags)
{
    CSMQT4WindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMQT4Window>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMQT4WindowTransitPtr CSMQT4WindowBase::create(void)
{
    return createLocal();
}

CSMQT4Window *CSMQT4WindowBase::createEmptyLocal(BitVector bFlags)
{
    CSMQT4Window *returnValue;

    newPtr<CSMQT4Window>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMQT4Window *CSMQT4WindowBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMQT4WindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMQT4Window *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMQT4Window *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMQT4WindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMQT4Window *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMQT4Window *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMQT4WindowBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMQT4WindowBase::CSMQT4WindowBase(void) :
    Inherited(),
    _sfPrimaryDisplayString   (),
    _sfPrivateContext         (bool(false))
{
}

CSMQT4WindowBase::CSMQT4WindowBase(const CSMQT4WindowBase &source) :
    Inherited(source),
    _sfPrimaryDisplayString   (source._sfPrimaryDisplayString   ),
    _sfPrivateContext         (source._sfPrivateContext         )
{
}


/*-------------------------- destructors ----------------------------------*/

CSMQT4WindowBase::~CSMQT4WindowBase(void)
{
}


GetFieldHandlePtr CSMQT4WindowBase::getHandlePrimaryDisplayString (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfPrimaryDisplayString,
             this->getType().getFieldDesc(PrimaryDisplayStringFieldId),
             const_cast<CSMQT4WindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMQT4WindowBase::editHandlePrimaryDisplayString(void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfPrimaryDisplayString,
             this->getType().getFieldDesc(PrimaryDisplayStringFieldId),
             this));


    editSField(PrimaryDisplayStringFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMQT4WindowBase::getHandlePrivateContext  (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPrivateContext,
             this->getType().getFieldDesc(PrivateContextFieldId),
             const_cast<CSMQT4WindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMQT4WindowBase::editHandlePrivateContext (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPrivateContext,
             this->getType().getFieldDesc(PrivateContextFieldId),
             this));


    editSField(PrivateContextFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMQT4WindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMQT4Window *pThis = static_cast<CSMQT4Window *>(this);

    pThis->execSync(static_cast<CSMQT4Window *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMQT4WindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMQT4Window *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMQT4Window *>(pRefAspect),
                  dynamic_cast<const CSMQT4Window *>(this));

    return returnValue;
}
#endif

void CSMQT4WindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
