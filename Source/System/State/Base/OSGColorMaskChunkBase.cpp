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
 **     class ColorMaskChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGColorMaskChunkBase.h"
#include "OSGColorMaskChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ColorMaskChunk
    The color mask chunk contains the parameters that are specific for color writing.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            ColorMaskChunkBase::_sfMaskR
    Used to mask the writing of the R value to the color buffer.
*/

/*! \var bool            ColorMaskChunkBase::_sfMaskG
    Used to mask the writing of the G value to the color buffer.
*/

/*! \var bool            ColorMaskChunkBase::_sfMaskB
    Used to mask the writing of the B value to the color buffer.
*/

/*! \var bool            ColorMaskChunkBase::_sfMaskA
    Used to mask the writing of the A value to the color buffer.
*/


void ColorMaskChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskR",
        "Used to mask the writing of the R value to the color buffer.\n",
        MaskRFieldId, MaskRFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorMaskChunk::editHandleMaskR),
        static_cast<FieldGetMethodSig >(&ColorMaskChunk::getHandleMaskR));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskG",
        "Used to mask the writing of the G value to the color buffer.\n",
        MaskGFieldId, MaskGFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorMaskChunk::editHandleMaskG),
        static_cast<FieldGetMethodSig >(&ColorMaskChunk::getHandleMaskG));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskB",
        "Used to mask the writing of the B value to the color buffer.\n",
        MaskBFieldId, MaskBFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorMaskChunk::editHandleMaskB),
        static_cast<FieldGetMethodSig >(&ColorMaskChunk::getHandleMaskB));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskA",
        "Used to mask the writing of the A value to the color buffer.\n",
        MaskAFieldId, MaskAFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorMaskChunk::editHandleMaskA),
        static_cast<FieldGetMethodSig >(&ColorMaskChunk::getHandleMaskA));

    oType.addInitialDesc(pDesc);
}


ColorMaskChunkBase::TypeObject ColorMaskChunkBase::_type(
    ColorMaskChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ColorMaskChunkBase::createEmptyLocal),
    ColorMaskChunk::initMethod,
    ColorMaskChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ColorMaskChunkBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ColorMaskChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "The color mask chunk contains the parameters that are specific for color writing.\n"
    "\t<Field\n"
    "\t\tname=\"maskR\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUsed to mask the writing of the R value to the color buffer.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"maskG\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUsed to mask the writing of the G value to the color buffer.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"maskB\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUsed to mask the writing of the B value to the color buffer.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"maskA\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUsed to mask the writing of the A value to the color buffer.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The color mask chunk contains the parameters that are specific for color writing.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ColorMaskChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ColorMaskChunkBase::getType(void) const
{
    return _type;
}

UInt32 ColorMaskChunkBase::getContainerSize(void) const
{
    return sizeof(ColorMaskChunk);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ColorMaskChunkBase::editSFMaskR(void)
{
    editSField(MaskRFieldMask);

    return &_sfMaskR;
}

const SFBool *ColorMaskChunkBase::getSFMaskR(void) const
{
    return &_sfMaskR;
}


SFBool *ColorMaskChunkBase::editSFMaskG(void)
{
    editSField(MaskGFieldMask);

    return &_sfMaskG;
}

const SFBool *ColorMaskChunkBase::getSFMaskG(void) const
{
    return &_sfMaskG;
}


SFBool *ColorMaskChunkBase::editSFMaskB(void)
{
    editSField(MaskBFieldMask);

    return &_sfMaskB;
}

const SFBool *ColorMaskChunkBase::getSFMaskB(void) const
{
    return &_sfMaskB;
}


SFBool *ColorMaskChunkBase::editSFMaskA(void)
{
    editSField(MaskAFieldMask);

    return &_sfMaskA;
}

const SFBool *ColorMaskChunkBase::getSFMaskA(void) const
{
    return &_sfMaskA;
}






/*------------------------------ access -----------------------------------*/

UInt32 ColorMaskChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaskRFieldMask & whichField))
    {
        returnValue += _sfMaskR.getBinSize();
    }
    if(FieldBits::NoField != (MaskGFieldMask & whichField))
    {
        returnValue += _sfMaskG.getBinSize();
    }
    if(FieldBits::NoField != (MaskBFieldMask & whichField))
    {
        returnValue += _sfMaskB.getBinSize();
    }
    if(FieldBits::NoField != (MaskAFieldMask & whichField))
    {
        returnValue += _sfMaskA.getBinSize();
    }

    return returnValue;
}

void ColorMaskChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaskRFieldMask & whichField))
    {
        _sfMaskR.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaskGFieldMask & whichField))
    {
        _sfMaskG.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaskBFieldMask & whichField))
    {
        _sfMaskB.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaskAFieldMask & whichField))
    {
        _sfMaskA.copyToBin(pMem);
    }
}

void ColorMaskChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaskRFieldMask & whichField))
    {
        _sfMaskR.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaskGFieldMask & whichField))
    {
        _sfMaskG.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaskBFieldMask & whichField))
    {
        _sfMaskB.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaskAFieldMask & whichField))
    {
        _sfMaskA.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ColorMaskChunkTransitPtr ColorMaskChunkBase::createLocal(BitVector bFlags)
{
    ColorMaskChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ColorMaskChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ColorMaskChunkTransitPtr ColorMaskChunkBase::create(void)
{
    ColorMaskChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ColorMaskChunk>(tmpPtr);
    }

    return fc;
}

ColorMaskChunk *ColorMaskChunkBase::createEmptyLocal(BitVector bFlags)
{
    ColorMaskChunk *returnValue;

    newPtr<ColorMaskChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ColorMaskChunk *ColorMaskChunkBase::createEmpty(void)
{
    ColorMaskChunk *returnValue;

    newPtr<ColorMaskChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ColorMaskChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ColorMaskChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorMaskChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorMaskChunkBase::shallowCopy(void) const
{
    ColorMaskChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ColorMaskChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ColorMaskChunkBase::ColorMaskChunkBase(void) :
    Inherited(),
    _sfMaskR                  (bool(true)),
    _sfMaskG                  (bool(true)),
    _sfMaskB                  (bool(true)),
    _sfMaskA                  (bool(true))
{
}

ColorMaskChunkBase::ColorMaskChunkBase(const ColorMaskChunkBase &source) :
    Inherited(source),
    _sfMaskR                  (source._sfMaskR                  ),
    _sfMaskG                  (source._sfMaskG                  ),
    _sfMaskB                  (source._sfMaskB                  ),
    _sfMaskA                  (source._sfMaskA                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ColorMaskChunkBase::~ColorMaskChunkBase(void)
{
}


GetFieldHandlePtr ColorMaskChunkBase::getHandleMaskR           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfMaskR,
             this->getType().getFieldDesc(MaskRFieldId)));

    return returnValue;
}

EditFieldHandlePtr ColorMaskChunkBase::editHandleMaskR          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfMaskR,
             this->getType().getFieldDesc(MaskRFieldId)));


    editSField(MaskRFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorMaskChunkBase::getHandleMaskG           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfMaskG,
             this->getType().getFieldDesc(MaskGFieldId)));

    return returnValue;
}

EditFieldHandlePtr ColorMaskChunkBase::editHandleMaskG          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfMaskG,
             this->getType().getFieldDesc(MaskGFieldId)));


    editSField(MaskGFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorMaskChunkBase::getHandleMaskB           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfMaskB,
             this->getType().getFieldDesc(MaskBFieldId)));

    return returnValue;
}

EditFieldHandlePtr ColorMaskChunkBase::editHandleMaskB          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfMaskB,
             this->getType().getFieldDesc(MaskBFieldId)));


    editSField(MaskBFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorMaskChunkBase::getHandleMaskA           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfMaskA,
             this->getType().getFieldDesc(MaskAFieldId)));

    return returnValue;
}

EditFieldHandlePtr ColorMaskChunkBase::editHandleMaskA          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfMaskA,
             this->getType().getFieldDesc(MaskAFieldId)));


    editSField(MaskAFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ColorMaskChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ColorMaskChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ColorMaskChunkBase::createAspectCopy(void) const
{
    ColorMaskChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ColorMaskChunk *>(this));

    return returnValue;
}
#endif

void ColorMaskChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ColorMaskChunk *>::_type("ColorMaskChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ColorMaskChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ColorMaskChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ColorMaskChunk *,
                           0);

OSG_END_NAMESPACE
