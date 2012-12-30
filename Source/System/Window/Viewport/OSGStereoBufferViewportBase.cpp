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
 **     class StereoBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGStereoBufferViewportBase.h"
#include "OSGStereoBufferViewport.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StereoBufferViewport
    Viewport for quad-buffered stereo rendering, see \ref
    PageSystemWindowViewports for a description.

    The active buffers are selected using the _sfLeftBuffer and _sfRightBuffer
    Fields.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            StereoBufferViewportBase::_sfLeftBuffer
    Defines whether the left buffer is written to.
*/

/*! \var bool            StereoBufferViewportBase::_sfRightBuffer
    Defines whether the right buffer is written to.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<StereoBufferViewport *, nsOSG>::_type(
    "StereoBufferViewportPtr", 
    "ViewportPtr", 
    StereoBufferViewport::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(StereoBufferViewport *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           StereoBufferViewport *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           StereoBufferViewport *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StereoBufferViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "leftBuffer",
        "Defines whether the left buffer is written to.\n",
        LeftBufferFieldId, LeftBufferFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StereoBufferViewport::editHandleLeftBuffer),
        static_cast<FieldGetMethodSig >(&StereoBufferViewport::getHandleLeftBuffer));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "rightBuffer",
        "Defines whether the right buffer is written to.\n",
        RightBufferFieldId, RightBufferFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StereoBufferViewport::editHandleRightBuffer),
        static_cast<FieldGetMethodSig >(&StereoBufferViewport::getHandleRightBuffer));

    oType.addInitialDesc(pDesc);
}


StereoBufferViewportBase::TypeObject StereoBufferViewportBase::_type(
    StereoBufferViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&StereoBufferViewportBase::createEmptyLocal),
    StereoBufferViewport::initMethod,
    StereoBufferViewport::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StereoBufferViewport::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"StereoBufferViewport\"\n"
    "   parent=\"Viewport\"\n"
    "   library=\"Window\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpWindowViewport\"\n"
    "   >\n"
    "  Viewport for quad-buffered stereo rendering, see \\ref\n"
    "  PageSystemWindowViewports for a description.\n"
    "\n"
    "  The active buffers are selected using the _sfLeftBuffer and _sfRightBuffer\n"
    "  Fields.\n"
    "  <Field\n"
    "\t name=\"leftBuffer\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Defines whether the left buffer is written to.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"rightBuffer\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Defines whether the right buffer is written to.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Viewport for quad-buffered stereo rendering, see \\ref\n"
    "PageSystemWindowViewports for a description.\n"
    "\n"
    "The active buffers are selected using the _sfLeftBuffer and _sfRightBuffer\n"
    "Fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StereoBufferViewportBase::getType(void)
{
    return _type;
}

const FieldContainerType &StereoBufferViewportBase::getType(void) const
{
    return _type;
}

UInt32 StereoBufferViewportBase::getContainerSize(void) const
{
    return sizeof(StereoBufferViewport);
}

/*------------------------- decorator get ------------------------------*/


SFBool *StereoBufferViewportBase::editSFLeftBuffer(void)
{
    editSField(LeftBufferFieldMask);

    return &_sfLeftBuffer;
}

const SFBool *StereoBufferViewportBase::getSFLeftBuffer(void) const
{
    return &_sfLeftBuffer;
}


SFBool *StereoBufferViewportBase::editSFRightBuffer(void)
{
    editSField(RightBufferFieldMask);

    return &_sfRightBuffer;
}

const SFBool *StereoBufferViewportBase::getSFRightBuffer(void) const
{
    return &_sfRightBuffer;
}






/*------------------------------ access -----------------------------------*/

SizeT StereoBufferViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftBufferFieldMask & whichField))
    {
        returnValue += _sfLeftBuffer.getBinSize();
    }
    if(FieldBits::NoField != (RightBufferFieldMask & whichField))
    {
        returnValue += _sfRightBuffer.getBinSize();
    }

    return returnValue;
}

void StereoBufferViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftBufferFieldMask & whichField))
    {
        _sfLeftBuffer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightBufferFieldMask & whichField))
    {
        _sfRightBuffer.copyToBin(pMem);
    }
}

void StereoBufferViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftBufferFieldMask & whichField))
    {
        editSField(LeftBufferFieldMask);
        _sfLeftBuffer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightBufferFieldMask & whichField))
    {
        editSField(RightBufferFieldMask);
        _sfRightBuffer.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StereoBufferViewportTransitPtr StereoBufferViewportBase::createLocal(BitVector bFlags)
{
    StereoBufferViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<StereoBufferViewport>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
StereoBufferViewportTransitPtr StereoBufferViewportBase::createDependent(BitVector bFlags)
{
    StereoBufferViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<StereoBufferViewport>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StereoBufferViewportTransitPtr StereoBufferViewportBase::create(void)
{
    StereoBufferViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<StereoBufferViewport>(tmpPtr);
    }

    return fc;
}

StereoBufferViewport *StereoBufferViewportBase::createEmptyLocal(BitVector bFlags)
{
    StereoBufferViewport *returnValue;

    newPtr<StereoBufferViewport>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
StereoBufferViewport *StereoBufferViewportBase::createEmpty(void)
{
    StereoBufferViewport *returnValue;

    newPtr<StereoBufferViewport>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr StereoBufferViewportBase::shallowCopyLocal(
    BitVector bFlags) const
{
    StereoBufferViewport *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StereoBufferViewport *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StereoBufferViewportBase::shallowCopyDependent(
    BitVector bFlags) const
{
    StereoBufferViewport *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StereoBufferViewport *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr StereoBufferViewportBase::shallowCopy(void) const
{
    StereoBufferViewport *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const StereoBufferViewport *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

StereoBufferViewportBase::StereoBufferViewportBase(void) :
    Inherited(),
    _sfLeftBuffer             (bool(true)),
    _sfRightBuffer            (bool(true))
{
}

StereoBufferViewportBase::StereoBufferViewportBase(const StereoBufferViewportBase &source) :
    Inherited(source),
    _sfLeftBuffer             (source._sfLeftBuffer             ),
    _sfRightBuffer            (source._sfRightBuffer            )
{
}


/*-------------------------- destructors ----------------------------------*/

StereoBufferViewportBase::~StereoBufferViewportBase(void)
{
}


GetFieldHandlePtr StereoBufferViewportBase::getHandleLeftBuffer      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLeftBuffer,
             this->getType().getFieldDesc(LeftBufferFieldId),
             const_cast<StereoBufferViewportBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StereoBufferViewportBase::editHandleLeftBuffer     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLeftBuffer,
             this->getType().getFieldDesc(LeftBufferFieldId),
             this));


    editSField(LeftBufferFieldMask);

    return returnValue;
}

GetFieldHandlePtr StereoBufferViewportBase::getHandleRightBuffer     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfRightBuffer,
             this->getType().getFieldDesc(RightBufferFieldId),
             const_cast<StereoBufferViewportBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StereoBufferViewportBase::editHandleRightBuffer    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfRightBuffer,
             this->getType().getFieldDesc(RightBufferFieldId),
             this));


    editSField(RightBufferFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StereoBufferViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    StereoBufferViewport *pThis = static_cast<StereoBufferViewport *>(this);

    pThis->execSync(static_cast<StereoBufferViewport *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StereoBufferViewportBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    StereoBufferViewport *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const StereoBufferViewport *>(pRefAspect),
                  dynamic_cast<const StereoBufferViewport *>(this));

    return returnValue;
}
#endif

void StereoBufferViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
