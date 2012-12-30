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
 **     class ShaderVariableOSG!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGShaderVariableOSGBase.h"
#include "OSGShaderVariableOSG.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariableOSG
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          ShaderVariableOSGBase::_sfOsgVarType
    parameter value
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderVariableOSG *, nsOSG>::_type(
    "ShaderVariableOSGPtr", 
    "ShaderProcVariablePtr", 
    ShaderVariableOSG::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderVariableOSG *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariableOSG *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariableOSG *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderVariableOSGBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "osgVarType",
        "parameter value\n",
        OsgVarTypeFieldId, OsgVarTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariableOSG::editHandleOsgVarType),
        static_cast<FieldGetMethodSig >(&ShaderVariableOSG::getHandleOsgVarType));

    oType.addInitialDesc(pDesc);
}


ShaderVariableOSGBase::TypeObject ShaderVariableOSGBase::_type(
    ShaderVariableOSGBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderVariableOSGBase::createEmptyLocal),
    ShaderVariableOSG::initMethod,
    ShaderVariableOSG::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariableOSG::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderVariableOSG\"\n"
    "   parent=\"ShaderProcVariable\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "     name=\"osgVarType\"\n"
    "     type=\"UInt32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"protected\"\n"
    "     defaultValue=\"0\"\n"
    "     >\n"
    "    parameter value\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableOSGBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableOSGBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableOSGBase::getContainerSize(void) const
{
    return sizeof(ShaderVariableOSG);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *ShaderVariableOSGBase::editSFOsgVarType(void)
{
    editSField(OsgVarTypeFieldMask);

    return &_sfOsgVarType;
}

const SFUInt32 *ShaderVariableOSGBase::getSFOsgVarType(void) const
{
    return &_sfOsgVarType;
}






/*------------------------------ access -----------------------------------*/

SizeT ShaderVariableOSGBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (OsgVarTypeFieldMask & whichField))
    {
        returnValue += _sfOsgVarType.getBinSize();
    }

    return returnValue;
}

void ShaderVariableOSGBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (OsgVarTypeFieldMask & whichField))
    {
        _sfOsgVarType.copyToBin(pMem);
    }
}

void ShaderVariableOSGBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (OsgVarTypeFieldMask & whichField))
    {
        editSField(OsgVarTypeFieldMask);
        _sfOsgVarType.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariableOSGTransitPtr ShaderVariableOSGBase::createLocal(BitVector bFlags)
{
    ShaderVariableOSGTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableOSG>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariableOSGTransitPtr ShaderVariableOSGBase::createDependent(BitVector bFlags)
{
    ShaderVariableOSGTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableOSG>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariableOSGTransitPtr ShaderVariableOSGBase::create(void)
{
    ShaderVariableOSGTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariableOSG>(tmpPtr);
    }

    return fc;
}

ShaderVariableOSG *ShaderVariableOSGBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariableOSG *returnValue;

    newPtr<ShaderVariableOSG>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariableOSG *ShaderVariableOSGBase::createEmpty(void)
{
    ShaderVariableOSG *returnValue;

    newPtr<ShaderVariableOSG>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariableOSGBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariableOSG *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableOSG *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableOSGBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariableOSG *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableOSG *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableOSGBase::shallowCopy(void) const
{
    ShaderVariableOSG *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariableOSG *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableOSGBase::ShaderVariableOSGBase(void) :
    Inherited(),
    _sfOsgVarType             (UInt32(0))
{
}

ShaderVariableOSGBase::ShaderVariableOSGBase(const ShaderVariableOSGBase &source) :
    Inherited(source),
    _sfOsgVarType             (source._sfOsgVarType             )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableOSGBase::~ShaderVariableOSGBase(void)
{
}


GetFieldHandlePtr ShaderVariableOSGBase::getHandleOsgVarType      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOsgVarType,
             this->getType().getFieldDesc(OsgVarTypeFieldId),
             const_cast<ShaderVariableOSGBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableOSGBase::editHandleOsgVarType     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOsgVarType,
             this->getType().getFieldDesc(OsgVarTypeFieldId),
             this));


    editSField(OsgVarTypeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableOSGBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariableOSG *pThis = static_cast<ShaderVariableOSG *>(this);

    pThis->execSync(static_cast<ShaderVariableOSG *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariableOSGBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariableOSG *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariableOSG *>(pRefAspect),
                  dynamic_cast<const ShaderVariableOSG *>(this));

    return returnValue;
}
#endif

void ShaderVariableOSGBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
