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
 **     class Stage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFrameBufferObject.h> // RenderTarget Class

#include "OSGStageBase.h"
#include "OSGStage.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Stage
    Base of a staged rendering.  Tells the renderer to target an FBO for this subtree.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var FrameBufferObject * StageBase::_sfRenderTarget
    The FBO to target for rendering this subtree.
*/

/*! \var bool            StageBase::_sfInheritedTarget
    Inherited the parent target if none is set  
*/


void StageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;

    Inherited::classDescInserter(oType);


    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "renderTarget",
        "The FBO to target for rendering this subtree.\n",
        RenderTargetFieldId, RenderTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Stage::editHandleRenderTarget),
        static_cast<FieldGetMethodSig >(&Stage::getHandleRenderTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "inheritedTarget",
        "Inherited the parent target if none is set  \n",
        InheritedTargetFieldId, InheritedTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Stage::editHandleInheritedTarget),
        static_cast<FieldGetMethodSig >(&Stage::getHandleInheritedTarget));

    oType.addInitialDesc(pDesc);
}


StageBase::TypeObject StageBase::_type(
    StageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&StageBase::createEmptyLocal),
    Stage::initMethod,
    Stage::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StageBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"Stage\"\n"
    "        parent=\"Group\"\n"
    "        mixinparent=\"StageParent\"\n"
    "        library=\"Group\"\n"
    "        pointerfieldtypes=\"both\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    "        useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "Base of a staged rendering.  Tells the renderer to target an FBO for this subtree.\n"
    "        <Field\n"
    "                name=\"renderTarget\"\n"
    "                type=\"FrameBufferObjectPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                defaultValue=\"NULL\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        The FBO to target for rendering this subtree.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"inheritedTarget\"\n"
    "                type=\"bool\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"false\"\n"
    "        >\n"
    "        Inherited the parent target if none is set  \n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Base of a staged rendering.  Tells the renderer to target an FBO for this subtree.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StageBase::getType(void)
{
    return _type;
}

const FieldContainerType &StageBase::getType(void) const
{
    return _type;
}

UInt32 StageBase::getContainerSize(void) const
{
    return sizeof(Stage);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Stage::_sfRenderTarget field.
const SFUnrecFrameBufferObjectPtr *StageBase::getSFRenderTarget(void) const
{
    return &_sfRenderTarget;
}

SFUnrecFrameBufferObjectPtr *StageBase::editSFRenderTarget   (void)
{
    editSField(RenderTargetFieldMask);

    return &_sfRenderTarget;
}

SFBool *StageBase::editSFInheritedTarget(void)
{
    editSField(InheritedTargetFieldMask);

    return &_sfInheritedTarget;
}

const SFBool *StageBase::getSFInheritedTarget(void) const
{
    return &_sfInheritedTarget;
}






/*------------------------------ access -----------------------------------*/

UInt32 StageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        returnValue += _sfRenderTarget.getBinSize();
    }
    if(FieldBits::NoField != (InheritedTargetFieldMask & whichField))
    {
        returnValue += _sfInheritedTarget.getBinSize();
    }

    return returnValue;
}

void StageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InheritedTargetFieldMask & whichField))
    {
        _sfInheritedTarget.copyToBin(pMem);
    }
}

void StageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InheritedTargetFieldMask & whichField))
    {
        _sfInheritedTarget.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StageTransitPtr StageBase::createLocal(BitVector bFlags)
{
    StageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Stage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StageTransitPtr StageBase::create(void)
{
    StageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Stage>(tmpPtr);
    }

    return fc;
}

Stage *StageBase::createEmptyLocal(BitVector bFlags)
{
    Stage *returnValue;

    newPtr<Stage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Stage *StageBase::createEmpty(void)
{
    Stage *returnValue;

    newPtr<Stage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr StageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Stage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Stage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StageBase::shallowCopy(void) const
{
    Stage *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Stage *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

StageBase::StageBase(void) :
    Inherited(),
    _sfRenderTarget           (NULL),
    _sfInheritedTarget        (bool(false))
{
}

StageBase::StageBase(const StageBase &source) :
    Inherited(source),
    _sfRenderTarget           (NULL),
    _sfInheritedTarget        (source._sfInheritedTarget        )
{
}


/*-------------------------- destructors ----------------------------------*/

StageBase::~StageBase(void)
{
}

void StageBase::onCreate(const Stage *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Stage *pThis = static_cast<Stage *>(this);

        pThis->setRenderTarget(source->getRenderTarget());
    }
}

GetFieldHandlePtr StageBase::getHandleRenderTarget    (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfRenderTarget,
             this->getType().getFieldDesc(RenderTargetFieldId)));

    return returnValue;
}

EditFieldHandlePtr StageBase::editHandleRenderTarget   (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfRenderTarget,
             this->getType().getFieldDesc(RenderTargetFieldId)));

    returnValue->setSetMethod(
        boost::bind(&Stage::setRenderTarget,
                    static_cast<Stage *>(this), _1));

    editSField(RenderTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr StageBase::getHandleInheritedTarget (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfInheritedTarget,
             this->getType().getFieldDesc(InheritedTargetFieldId)));

    return returnValue;
}

EditFieldHandlePtr StageBase::editHandleInheritedTarget(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfInheritedTarget,
             this->getType().getFieldDesc(InheritedTargetFieldId)));


    editSField(InheritedTargetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StageBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StageBase::createAspectCopy(void) const
{
    Stage *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Stage *>(this));

    return returnValue;
}
#endif

void StageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Stage *>(this)->setRenderTarget(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Stage *>::_type("StagePtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Stage *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Stage *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Stage *,
                           0);

OSG_END_NAMESPACE
