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
 **     class SimpleStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGCamera.h> // Camera Class
#include <OSGBackground.h> // Background Class

#include "OSGSimpleStageBase.h"
#include "OSGSimpleStage.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleStage
    Extension to the Stage core that provides for viewport support, a camera, backgrounds, and foreground.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          SimpleStageBase::_sfLeft
    The left edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    left border. All other values are illegal.
*/

/*! \var Real32          SimpleStageBase::_sfRight
    The right edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    right border. All other values are illegal.
*/

/*! \var Real32          SimpleStageBase::_sfBottom
    The bottom edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    bottom border. All other values are illegal.
*/

/*! \var Real32          SimpleStageBase::_sfTop
    The top edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    top border. All other values are illegal.
*/

/*! \var Camera *        SimpleStageBase::_sfCamera
    The Camera used to render the viewport.
*/

/*! \var Background *    SimpleStageBase::_sfBackground
    The background used to clear this viewport.
*/

/*! \var RenderFunctorCallback SimpleStageBase::_mfPreRenderCallbacks
    The foreground additions to the rendered image.
*/

/*! \var RenderFunctorCallback SimpleStageBase::_mfPostRenderCallbacks
    The foreground additions to the rendered image.
*/


void SimpleStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "left",
        "The left edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "left border. All other values are illegal.\n",
        LeftFieldId, LeftFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleStage::editHandleLeft),
        static_cast<FieldGetMethodSig >(&SimpleStage::getHandleLeft));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "right",
        "The right edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "right border. All other values are illegal.\n",
        RightFieldId, RightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleStage::editHandleRight),
        static_cast<FieldGetMethodSig >(&SimpleStage::getHandleRight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bottom",
        "The bottom edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "bottom border. All other values are illegal.\n",
        BottomFieldId, BottomFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleStage::editHandleBottom),
        static_cast<FieldGetMethodSig >(&SimpleStage::getHandleBottom));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "top",
        "The top edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "top border. All other values are illegal.\n",
        TopFieldId, TopFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleStage::editHandleTop),
        static_cast<FieldGetMethodSig >(&SimpleStage::getHandleTop));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecCameraPtr::Description(
        SFUnrecCameraPtr::getClassType(),
        "camera",
        "The Camera used to render the viewport.\n",
        CameraFieldId, CameraFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleStage::editHandleCamera),
        static_cast<FieldGetMethodSig >(&SimpleStage::getHandleCamera));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecBackgroundPtr::Description(
        SFUnrecBackgroundPtr::getClassType(),
        "background",
        "The background used to clear this viewport.\n",
        BackgroundFieldId, BackgroundFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleStage::editHandleBackground),
        static_cast<FieldGetMethodSig >(&SimpleStage::getHandleBackground));

    oType.addInitialDesc(pDesc);

    pDesc = new MFRenderFunctorCallback::Description(
        MFRenderFunctorCallback::getClassType(),
        "preRenderCallbacks",
        "The foreground additions to the rendered image.\n",
        PreRenderCallbacksFieldId, PreRenderCallbacksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&SimpleStage::invalidEditField),
        static_cast     <FieldGetMethodSig >(&SimpleStage::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFRenderFunctorCallback::Description(
        MFRenderFunctorCallback::getClassType(),
        "postRenderCallbacks",
        "The foreground additions to the rendered image.\n",
        PostRenderCallbacksFieldId, PostRenderCallbacksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&SimpleStage::invalidEditField),
        static_cast     <FieldGetMethodSig >(&SimpleStage::invalidGetField));

    oType.addInitialDesc(pDesc);
}


SimpleStageBase::TypeObject SimpleStageBase::_type(
    SimpleStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SimpleStageBase::createEmptyLocal),
    SimpleStage::initMethod,
    SimpleStage::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SimpleStageBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"SimpleStage\"\n"
    "        parent=\"Stage\"\n"
    "        library=\"Group\"\n"
    "        pointerfieldtypes=\"none\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    "        useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "Extension to the Stage core that provides for viewport support, a camera, backgrounds, and foreground.\n"
    "\n"
    "        <Field\n"
    "                name=\"left\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"0.f\"\n"
    "        >\n"
    "        The left edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        left border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"right\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"1.f\"\n"
    "        >\n"
    "        The right edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        right border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"bottom\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"0.f\"\n"
    "        >\n"
    "        The bottom edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        bottom border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"top\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"1.f\"\n"
    "        >\n"
    "        The top edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        top border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"camera\"\n"
    "                type=\"CameraPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        The Camera used to render the viewport.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"background\"\n"
    "                type=\"BackgroundPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        The background used to clear this viewport.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"preRenderCallbacks\"\n"
    "                type=\"RenderFunctorCallback\"\n"
    "                cardinality=\"multi\"\n"
    "                visibility=\"external\"\n"
    "                access=\"none\"\n"
    "        >\n"
    "        The foreground additions to the rendered image.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"postRenderCallbacks\"\n"
    "                type=\"RenderFunctorCallback\"\n"
    "                cardinality=\"multi\"\n"
    "                visibility=\"external\"\n"
    "                access=\"none\"\n"
    "        >\n"
    "        The foreground additions to the rendered image.\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Extension to the Stage core that provides for viewport support, a camera, backgrounds, and foreground.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleStageBase::getType(void) const
{
    return _type;
}

UInt32 SimpleStageBase::getContainerSize(void) const
{
    return sizeof(SimpleStage);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *SimpleStageBase::editSFLeft(void)
{
    editSField(LeftFieldMask);

    return &_sfLeft;
}

const SFReal32 *SimpleStageBase::getSFLeft(void) const
{
    return &_sfLeft;
}


SFReal32 *SimpleStageBase::editSFRight(void)
{
    editSField(RightFieldMask);

    return &_sfRight;
}

const SFReal32 *SimpleStageBase::getSFRight(void) const
{
    return &_sfRight;
}


SFReal32 *SimpleStageBase::editSFBottom(void)
{
    editSField(BottomFieldMask);

    return &_sfBottom;
}

const SFReal32 *SimpleStageBase::getSFBottom(void) const
{
    return &_sfBottom;
}


SFReal32 *SimpleStageBase::editSFTop(void)
{
    editSField(TopFieldMask);

    return &_sfTop;
}

const SFReal32 *SimpleStageBase::getSFTop(void) const
{
    return &_sfTop;
}


//! Get the SimpleStage::_sfCamera field.
const SFUnrecCameraPtr *SimpleStageBase::getSFCamera(void) const
{
    return &_sfCamera;
}

SFUnrecCameraPtr    *SimpleStageBase::editSFCamera         (void)
{
    editSField(CameraFieldMask);

    return &_sfCamera;
}

//! Get the SimpleStage::_sfBackground field.
const SFUnrecBackgroundPtr *SimpleStageBase::getSFBackground(void) const
{
    return &_sfBackground;
}

SFUnrecBackgroundPtr *SimpleStageBase::editSFBackground     (void)
{
    editSField(BackgroundFieldMask);

    return &_sfBackground;
}







/*------------------------------ access -----------------------------------*/

UInt32 SimpleStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        returnValue += _sfRight.getBinSize();
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        returnValue += _sfTop.getBinSize();
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        returnValue += _sfBackground.getBinSize();
    }
    if(FieldBits::NoField != (PreRenderCallbacksFieldMask & whichField))
    {
        returnValue += _mfPreRenderCallbacks.getBinSize();
    }
    if(FieldBits::NoField != (PostRenderCallbacksFieldMask & whichField))
    {
        returnValue += _mfPostRenderCallbacks.getBinSize();
    }

    return returnValue;
}

void SimpleStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PreRenderCallbacksFieldMask & whichField))
    {
        _mfPreRenderCallbacks.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PostRenderCallbacksFieldMask & whichField))
    {
        _mfPostRenderCallbacks.copyToBin(pMem);
    }
}

void SimpleStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PreRenderCallbacksFieldMask & whichField))
    {
        _mfPreRenderCallbacks.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PostRenderCallbacksFieldMask & whichField))
    {
        _mfPostRenderCallbacks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleStageTransitPtr SimpleStageBase::createLocal(BitVector bFlags)
{
    SimpleStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SimpleStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SimpleStageTransitPtr SimpleStageBase::create(void)
{
    SimpleStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SimpleStage>(tmpPtr);
    }

    return fc;
}

SimpleStage *SimpleStageBase::createEmptyLocal(BitVector bFlags)
{
    SimpleStage *returnValue;

    newPtr<SimpleStage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleStage *SimpleStageBase::createEmpty(void)
{
    SimpleStage *returnValue;

    newPtr<SimpleStage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SimpleStageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SimpleStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleStage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleStageBase::shallowCopy(void) const
{
    SimpleStage *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SimpleStage *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SimpleStageBase::SimpleStageBase(void) :
    Inherited(),
    _sfLeft                   (Real32(0.f)),
    _sfRight                  (Real32(1.f)),
    _sfBottom                 (Real32(0.f)),
    _sfTop                    (Real32(1.f)),
    _sfCamera                 (NULL),
    _sfBackground             (NULL),
    _mfPreRenderCallbacks     (),
    _mfPostRenderCallbacks    ()
{
}

SimpleStageBase::SimpleStageBase(const SimpleStageBase &source) :
    Inherited(source),
    _sfLeft                   (source._sfLeft                   ),
    _sfRight                  (source._sfRight                  ),
    _sfBottom                 (source._sfBottom                 ),
    _sfTop                    (source._sfTop                    ),
    _sfCamera                 (NULL),
    _sfBackground             (NULL),
    _mfPreRenderCallbacks     (source._mfPreRenderCallbacks     ),
    _mfPostRenderCallbacks    (source._mfPostRenderCallbacks    )
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleStageBase::~SimpleStageBase(void)
{
}

void SimpleStageBase::onCreate(const SimpleStage *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SimpleStage *pThis = static_cast<SimpleStage *>(this);

        pThis->setCamera(source->getCamera());

        pThis->setBackground(source->getBackground());
    }
}

GetFieldHandlePtr SimpleStageBase::getHandleLeft            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfLeft,
             this->getType().getFieldDesc(LeftFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandleLeft           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfLeft,
             this->getType().getFieldDesc(LeftFieldId)));


    editSField(LeftFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleStageBase::getHandleRight           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfRight,
             this->getType().getFieldDesc(RightFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandleRight          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfRight,
             this->getType().getFieldDesc(RightFieldId)));


    editSField(RightFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleStageBase::getHandleBottom          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfBottom,
             this->getType().getFieldDesc(BottomFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandleBottom         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfBottom,
             this->getType().getFieldDesc(BottomFieldId)));


    editSField(BottomFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleStageBase::getHandleTop             (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTop,
             this->getType().getFieldDesc(TopFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandleTop            (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTop,
             this->getType().getFieldDesc(TopFieldId)));


    editSField(TopFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleStageBase::getHandleCamera          (void) const
{
    SFUnrecCameraPtr::GetHandlePtr returnValue(
        new  SFUnrecCameraPtr::GetHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandleCamera         (void)
{
    SFUnrecCameraPtr::EditHandlePtr returnValue(
        new  SFUnrecCameraPtr::EditHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId)));

    returnValue->setSetMethod(
        boost::bind(&SimpleStage::setCamera,
                    static_cast<SimpleStage *>(this), _1));

    editSField(CameraFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleStageBase::getHandleBackground      (void) const
{
    SFUnrecBackgroundPtr::GetHandlePtr returnValue(
        new  SFUnrecBackgroundPtr::GetHandle(
             &_sfBackground,
             this->getType().getFieldDesc(BackgroundFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandleBackground     (void)
{
    SFUnrecBackgroundPtr::EditHandlePtr returnValue(
        new  SFUnrecBackgroundPtr::EditHandle(
             &_sfBackground,
             this->getType().getFieldDesc(BackgroundFieldId)));

    returnValue->setSetMethod(
        boost::bind(&SimpleStage::setBackground,
                    static_cast<SimpleStage *>(this), _1));

    editSField(BackgroundFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleStageBase::getHandlePreRenderCallbacks (void) const
{
    MFRenderFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandlePreRenderCallbacks(void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr SimpleStageBase::getHandlePostRenderCallbacks (void) const
{
    MFRenderFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr SimpleStageBase::editHandlePostRenderCallbacks(void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SimpleStageBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SimpleStageBase::createAspectCopy(void) const
{
    SimpleStage *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleStage *>(this));

    return returnValue;
}
#endif

void SimpleStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SimpleStage *>(this)->setCamera(NULL);

    static_cast<SimpleStage *>(this)->setBackground(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfPreRenderCallbacks.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPostRenderCallbacks.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SimpleStage *>::_type("SimpleStagePtr", "StagePtr");
#endif


OSG_END_NAMESPACE
