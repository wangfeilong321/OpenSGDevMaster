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
 **     class ShaderVariableMVec2f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderVariableMVec2fBase.h"
#include "OSGShaderVariableMVec2f.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariableMVec2f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec2f           ShaderVariableMVec2fBase::_mfValue
    variable value
*/


void ShaderVariableMVec2fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFVec2f::Description(
        MFVec2f::getClassType(),
        "value",
        "variable value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariableMVec2f::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderVariableMVec2f::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderVariableMVec2fBase::TypeObject ShaderVariableMVec2fBase::_type(
    ShaderVariableMVec2fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderVariableMVec2fBase::createEmptyLocal),
    ShaderVariableMVec2f::initMethod,
    ShaderVariableMVec2f::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariableMVec2fBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderVariableMVec2f\"\n"
    "\tparent=\"ShaderValueVariable\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tvariable value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableMVec2fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableMVec2fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableMVec2fBase::getContainerSize(void) const
{
    return sizeof(ShaderVariableMVec2f);
}

/*------------------------- decorator get ------------------------------*/


MFVec2f *ShaderVariableMVec2fBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFVec2f *ShaderVariableMVec2fBase::getMFValue(void) const
{
    return &_mfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderVariableMVec2fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderVariableMVec2fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderVariableMVec2fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariableMVec2fTransitPtr ShaderVariableMVec2fBase::createLocal(BitVector bFlags)
{
    ShaderVariableMVec2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMVec2f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariableMVec2fTransitPtr ShaderVariableMVec2fBase::createDependent(BitVector bFlags)
{
    ShaderVariableMVec2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMVec2f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariableMVec2fTransitPtr ShaderVariableMVec2fBase::create(void)
{
    ShaderVariableMVec2fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariableMVec2f>(tmpPtr);
    }

    return fc;
}

ShaderVariableMVec2f *ShaderVariableMVec2fBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariableMVec2f *returnValue;

    newPtr<ShaderVariableMVec2f>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariableMVec2f *ShaderVariableMVec2fBase::createEmpty(void)
{
    ShaderVariableMVec2f *returnValue;

    newPtr<ShaderVariableMVec2f>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariableMVec2fBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariableMVec2f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMVec2f *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMVec2fBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariableMVec2f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMVec2f *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMVec2fBase::shallowCopy(void) const
{
    ShaderVariableMVec2f *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariableMVec2f *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableMVec2fBase::ShaderVariableMVec2fBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderVariableMVec2fBase::ShaderVariableMVec2fBase(const ShaderVariableMVec2fBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableMVec2fBase::~ShaderVariableMVec2fBase(void)
{
}


GetFieldHandlePtr ShaderVariableMVec2fBase::getHandleValue           (void) const
{
    MFVec2f::GetHandlePtr returnValue(
        new  MFVec2f::GetHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableMVec2fBase::editHandleValue          (void)
{
    MFVec2f::EditHandlePtr returnValue(
        new  MFVec2f::EditHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId)));


    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableMVec2fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariableMVec2f *pThis = static_cast<ShaderVariableMVec2f *>(this);

    pThis->execSync(static_cast<ShaderVariableMVec2f *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariableMVec2fBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariableMVec2f *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariableMVec2f *>(pRefAspect),
                  dynamic_cast<const ShaderVariableMVec2f *>(this));

    return returnValue;
}
#endif

void ShaderVariableMVec2fBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderVariableMVec2f *>::_type("ShaderVariableMVec2fPtr", "ShaderValueVariablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderVariableMVec2f *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariableMVec2f *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariableMVec2f *,
                           0);

OSG_END_NAMESPACE
