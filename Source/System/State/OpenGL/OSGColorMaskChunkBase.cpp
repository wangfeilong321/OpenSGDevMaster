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


#define OSG_COMPILECOLORMASKCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGColorMaskChunkBase.h"
#include "OSGColorMaskChunk.h"

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


#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(ColorMaskChunkBase::*GetSFMaskRF)(void) const;

    GetSFMaskRF GetSFMaskR = &ColorMaskChunkBase::getSFMaskR;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskR",
        "Used to mask the writing of the R value to the color buffer.\n",
        MaskRFieldId, MaskRFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorMaskChunkBase::editSFMaskR),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMaskR));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorMaskChunkBase::getSFMaskR));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(ColorMaskChunkBase::*GetSFMaskGF)(void) const;

    GetSFMaskGF GetSFMaskG = &ColorMaskChunkBase::getSFMaskG;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskG",
        "Used to mask the writing of the G value to the color buffer.\n",
        MaskGFieldId, MaskGFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorMaskChunkBase::editSFMaskG),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMaskG));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorMaskChunkBase::getSFMaskG));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(ColorMaskChunkBase::*GetSFMaskBF)(void) const;

    GetSFMaskBF GetSFMaskB = &ColorMaskChunkBase::getSFMaskB;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskB",
        "Used to mask the writing of the B value to the color buffer.\n",
        MaskBFieldId, MaskBFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorMaskChunkBase::editSFMaskB),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMaskB));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorMaskChunkBase::getSFMaskB));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(ColorMaskChunkBase::*GetSFMaskAF)(void) const;

    GetSFMaskAF GetSFMaskA = &ColorMaskChunkBase::getSFMaskA;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "maskA",
        "Used to mask the writing of the A value to the color buffer.\n",
        MaskAFieldId, MaskAFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorMaskChunkBase::editSFMaskA),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFMaskA));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorMaskChunkBase::getSFMaskA));
#endif

    oType.addInitialDesc(pDesc);
}


ColorMaskChunkBase::TypeObject ColorMaskChunkBase::_type(
    ColorMaskChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ColorMaskChunkBase::createEmpty,
    ColorMaskChunk::initMethod,
    (InitalInsertDescFunc) &ColorMaskChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ColorMaskChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
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

#ifdef OSG_1_GET_COMPAT
SFBool              *ColorMaskChunkBase::getSFMaskR          (void)
{
    return this->editSFMaskR          ();
}
#endif

SFBool *ColorMaskChunkBase::editSFMaskG(void)
{
    editSField(MaskGFieldMask);

    return &_sfMaskG;
}

const SFBool *ColorMaskChunkBase::getSFMaskG(void) const
{
    return &_sfMaskG;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *ColorMaskChunkBase::getSFMaskG          (void)
{
    return this->editSFMaskG          ();
}
#endif

SFBool *ColorMaskChunkBase::editSFMaskB(void)
{
    editSField(MaskBFieldMask);

    return &_sfMaskB;
}

const SFBool *ColorMaskChunkBase::getSFMaskB(void) const
{
    return &_sfMaskB;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *ColorMaskChunkBase::getSFMaskB          (void)
{
    return this->editSFMaskB          ();
}
#endif

SFBool *ColorMaskChunkBase::editSFMaskA(void)
{
    editSField(MaskAFieldMask);

    return &_sfMaskA;
}

const SFBool *ColorMaskChunkBase::getSFMaskA(void) const
{
    return &_sfMaskA;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *ColorMaskChunkBase::getSFMaskA          (void)
{
    return this->editSFMaskA          ();
}
#endif





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

//! create an empty new instance of the class, do not copy the prototype
ColorMaskChunkPtr ColorMaskChunkBase::createEmpty(void)
{
    ColorMaskChunkPtr returnValue;

    newPtr<ColorMaskChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr ColorMaskChunkBase::shallowCopy(void) const
{
    ColorMaskChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ColorMaskChunk *>(this));

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


#ifdef OSG_MT_FIELDCONTAINERPTR
void ColorMaskChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ColorMaskChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

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

#if 0
void ColorMaskChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ColorMaskChunkBase::createAspectCopy(void) const
{
    ColorMaskChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ColorMaskChunk *>(this));

    return returnValue;
}
#endif

void ColorMaskChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ColorMaskChunkPtr>::_type("ColorMaskChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ColorMaskChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ColorMaskChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ColorMaskChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
