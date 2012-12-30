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
 **     class ClipPlaneChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGGL.h"                        // Enable default header

#include "OSGNode.h"                    // Beacon Class

#include "OSGClipPlaneChunkBase.h"
#include "OSGClipPlaneChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ClipPlaneChunk
    See \ref PageSystemClipPlaneChunk for a description.

    This chunk wraps glCLipPlane() (OSG::ClipPlaneChunk::_sfEquation) and
    glEnable(GL_CLIP_PLANEi) (OSG::ClipPlaneChunk::_sfEnable). The coordinate
    system the plane is in is defined by OSG::ClipPlaneChunk::_sfBeacon.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec4f           ClipPlaneChunkBase::_sfEquation
    Defines the equation of the clip plane. Standard format, if (a,b,c,d) is
    the plane a point (x,y,z) is visible if a*x+b*y+c*z+d "= 0.
*/

/*! \var bool            ClipPlaneChunkBase::_sfEnable
    Defines activation state of the clip plane.
*/

/*! \var Node *          ClipPlaneChunkBase::_sfBeacon
    The object that defines the clip planes's coordinate system. The clip
    plane is positioned relative to this system.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ClipPlaneChunk *, nsOSG>::_type(
    "ClipPlaneChunkPtr", 
    "StateChunkPtr", 
    ClipPlaneChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ClipPlaneChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ClipPlaneChunk *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ClipPlaneChunk *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ClipPlaneChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "equation",
        "Defines the equation of the clip plane. Standard format, if (a,b,c,d) is\n"
        "the plane a point (x,y,z) is visible if a*x+b*y+c*z+d \"= 0.\n",
        EquationFieldId, EquationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ClipPlaneChunk::editHandleEquation),
        static_cast<FieldGetMethodSig >(&ClipPlaneChunk::getHandleEquation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enable",
        "Defines activation state of the clip plane.\n",
        EnableFieldId, EnableFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ClipPlaneChunk::editHandleEnable),
        static_cast<FieldGetMethodSig >(&ClipPlaneChunk::getHandleEnable));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "beacon",
        "The object that defines the clip planes's coordinate system. The clip\n"
        "plane is positioned relative to this system.\n",
        BeaconFieldId, BeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ClipPlaneChunk::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&ClipPlaneChunk::getHandleBeacon));

    oType.addInitialDesc(pDesc);
}


ClipPlaneChunkBase::TypeObject ClipPlaneChunkBase::_type(
    ClipPlaneChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ClipPlaneChunkBase::createEmptyLocal),
    ClipPlaneChunk::initMethod,
    ClipPlaneChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ClipPlaneChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ClipPlaneChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"State\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpStateOpenGL\"\n"
    "   >\n"
    "  See \\ref PageSystemClipPlaneChunk for a description.\n"
    "\n"
    "  This chunk wraps glCLipPlane() (OSG::ClipPlaneChunk::_sfEquation) and\n"
    "  glEnable(GL_CLIP_PLANEi) (OSG::ClipPlaneChunk::_sfEnable). The coordinate\n"
    "  system the plane is in is defined by OSG::ClipPlaneChunk::_sfBeacon.\n"
    "  <Field\n"
    "\t name=\"equation\"\n"
    "\t type=\"Vec4f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0, 0, 1, 0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tDefines the equation of the clip plane. Standard format, if (a,b,c,d) is\n"
    "    the plane a point (x,y,z) is visible if a*x+b*y+c*z+d &quot;= 0.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"enable\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRUE\"\n"
    "\t defaultHeader=\"&quot;OSGGL.h&quot;\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tDefines activation state of the clip plane.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"beacon\"\n"
    "\t type=\"Node\"\n"
    "     category=\"weakpointer\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    The object that defines the clip planes's coordinate system. The clip\n"
    "    plane is positioned relative to this system.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemClipPlaneChunk for a description.\n"
    "\n"
    "This chunk wraps glCLipPlane() (OSG::ClipPlaneChunk::_sfEquation) and\n"
    "glEnable(GL_CLIP_PLANEi) (OSG::ClipPlaneChunk::_sfEnable). The coordinate\n"
    "system the plane is in is defined by OSG::ClipPlaneChunk::_sfBeacon.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ClipPlaneChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ClipPlaneChunkBase::getType(void) const
{
    return _type;
}

UInt32 ClipPlaneChunkBase::getContainerSize(void) const
{
    return sizeof(ClipPlaneChunk);
}

/*------------------------- decorator get ------------------------------*/


SFVec4f *ClipPlaneChunkBase::editSFEquation(void)
{
    editSField(EquationFieldMask);

    return &_sfEquation;
}

const SFVec4f *ClipPlaneChunkBase::getSFEquation(void) const
{
    return &_sfEquation;
}


SFBool *ClipPlaneChunkBase::editSFEnable(void)
{
    editSField(EnableFieldMask);

    return &_sfEnable;
}

const SFBool *ClipPlaneChunkBase::getSFEnable(void) const
{
    return &_sfEnable;
}


//! Get the ClipPlaneChunk::_sfBeacon field.
const SFWeakNodePtr *ClipPlaneChunkBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFWeakNodePtr       *ClipPlaneChunkBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}





/*------------------------------ access -----------------------------------*/

SizeT ClipPlaneChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        returnValue += _sfEquation.getBinSize();
    }
    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        returnValue += _sfEnable.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    return returnValue;
}

void ClipPlaneChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        _sfEquation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        _sfEnable.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
}

void ClipPlaneChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        editSField(EquationFieldMask);
        _sfEquation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        editSField(EnableFieldMask);
        _sfEnable.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        editSField(BeaconFieldMask);
        _sfBeacon.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ClipPlaneChunkTransitPtr ClipPlaneChunkBase::createLocal(BitVector bFlags)
{
    ClipPlaneChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ClipPlaneChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ClipPlaneChunkTransitPtr ClipPlaneChunkBase::createDependent(BitVector bFlags)
{
    ClipPlaneChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ClipPlaneChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ClipPlaneChunkTransitPtr ClipPlaneChunkBase::create(void)
{
    ClipPlaneChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ClipPlaneChunk>(tmpPtr);
    }

    return fc;
}

ClipPlaneChunk *ClipPlaneChunkBase::createEmptyLocal(BitVector bFlags)
{
    ClipPlaneChunk *returnValue;

    newPtr<ClipPlaneChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ClipPlaneChunk *ClipPlaneChunkBase::createEmpty(void)
{
    ClipPlaneChunk *returnValue;

    newPtr<ClipPlaneChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ClipPlaneChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ClipPlaneChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ClipPlaneChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ClipPlaneChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ClipPlaneChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ClipPlaneChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ClipPlaneChunkBase::shallowCopy(void) const
{
    ClipPlaneChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ClipPlaneChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ClipPlaneChunkBase::ClipPlaneChunkBase(void) :
    Inherited(),
    _sfEquation               (Vec4f(0, 0, 1, 0)),
    _sfEnable                 (bool(GL_TRUE)),
    _sfBeacon                 (NULL)
{
}

ClipPlaneChunkBase::ClipPlaneChunkBase(const ClipPlaneChunkBase &source) :
    Inherited(source),
    _sfEquation               (source._sfEquation               ),
    _sfEnable                 (source._sfEnable                 ),
    _sfBeacon                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

ClipPlaneChunkBase::~ClipPlaneChunkBase(void)
{
}

void ClipPlaneChunkBase::onCreate(const ClipPlaneChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ClipPlaneChunk *pThis = static_cast<ClipPlaneChunk *>(this);

        pThis->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr ClipPlaneChunkBase::getHandleEquation        (void) const
{
    SFVec4f::GetHandlePtr returnValue(
        new  SFVec4f::GetHandle(
             &_sfEquation,
             this->getType().getFieldDesc(EquationFieldId),
             const_cast<ClipPlaneChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ClipPlaneChunkBase::editHandleEquation       (void)
{
    SFVec4f::EditHandlePtr returnValue(
        new  SFVec4f::EditHandle(
             &_sfEquation,
             this->getType().getFieldDesc(EquationFieldId),
             this));


    editSField(EquationFieldMask);

    return returnValue;
}

GetFieldHandlePtr ClipPlaneChunkBase::getHandleEnable          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnable,
             this->getType().getFieldDesc(EnableFieldId),
             const_cast<ClipPlaneChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ClipPlaneChunkBase::editHandleEnable         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnable,
             this->getType().getFieldDesc(EnableFieldId),
             this));


    editSField(EnableFieldMask);

    return returnValue;
}

GetFieldHandlePtr ClipPlaneChunkBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             const_cast<ClipPlaneChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ClipPlaneChunkBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ClipPlaneChunk::setBeacon,
                    static_cast<ClipPlaneChunk *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ClipPlaneChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ClipPlaneChunk *pThis = static_cast<ClipPlaneChunk *>(this);

    pThis->execSync(static_cast<ClipPlaneChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ClipPlaneChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ClipPlaneChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ClipPlaneChunk *>(pRefAspect),
                  dynamic_cast<const ClipPlaneChunk *>(this));

    return returnValue;
}
#endif

void ClipPlaneChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ClipPlaneChunk *>(this)->setBeacon(NULL);


}


OSG_END_NAMESPACE
