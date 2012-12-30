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
 **     class IntersectProxyAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGIntersectProxyAttachmentBase.h"
#include "OSGIntersectProxyAttachment.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::IntersectProxyAttachment
    Base class for attachments that proxy the intersect testing for the
    core they are attached to or the whole hierarchy below them.
    This attachment should be attached to nodes.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            IntersectProxyAttachmentBase::_sfVisitChildren
    Controls if the intersect should visit children of the node this
    is attached to.
    If true, the attachment is effectively a proxy for the core of the
    node. If false, the attachment is a proxy for the whole hierarchy
    below the node.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<IntersectProxyAttachment *, nsOSG>::_type(
    "IntersectProxyAttachmentPtr", 
    "AttachmentPtr", 
    IntersectProxyAttachment::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(IntersectProxyAttachment *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           IntersectProxyAttachment *,
                           nsOSG);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void IntersectProxyAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "visitChildren",
        "Controls if the intersect should visit children of the node this\n"
        "is attached to.\n"
        "If true, the attachment is effectively a proxy for the core of the\n"
        "node. If false, the attachment is a proxy for the whole hierarchy\n"
        "below the node.\n",
        VisitChildrenFieldId, VisitChildrenFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&IntersectProxyAttachment::editHandleVisitChildren),
        static_cast<FieldGetMethodSig >(&IntersectProxyAttachment::getHandleVisitChildren));

    oType.addInitialDesc(pDesc);
}


IntersectProxyAttachmentBase::TypeObject IntersectProxyAttachmentBase::_type(
    IntersectProxyAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "IntersectProxyAttachment",
    nsOSG, //Namespace
    NULL,
    IntersectProxyAttachment::initMethod,
    IntersectProxyAttachment::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&IntersectProxyAttachment::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"IntersectProxyAttachment\"\n"
    "    parent=\"Attachment\"\n"
    "    library=\"System\"\n"
    "    pointerfieldtypes=\"single\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    docGroupBase=\"GrpSystemFieldContainer\"\n"
    "    >\n"
    "    Base class for attachments that proxy the intersect testing for the\n"
    "    core they are attached to or the whole hierarchy below them.\n"
    "    This attachment should be attached to nodes.\n"
    "\n"
    "    <Field\n"
    "        name=\"visitChildren\"\n"
    "        type=\"bool\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"true\"\n"
    "        >\n"
    "        Controls if the intersect should visit children of the node this\n"
    "        is attached to.\n"
    "        If true, the attachment is effectively a proxy for the core of the\n"
    "        node. If false, the attachment is a proxy for the whole hierarchy\n"
    "        below the node.\n"
    "    </Field>\n"
    "\n"
    "</FieldContainer>\n",
    "Base class for attachments that proxy the intersect testing for the\n"
    "core they are attached to or the whole hierarchy below them.\n"
    "This attachment should be attached to nodes.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &IntersectProxyAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &IntersectProxyAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 IntersectProxyAttachmentBase::getContainerSize(void) const
{
    return sizeof(IntersectProxyAttachment);
}

/*------------------------- decorator get ------------------------------*/


SFBool *IntersectProxyAttachmentBase::editSFVisitChildren(void)
{
    editSField(VisitChildrenFieldMask);

    return &_sfVisitChildren;
}

const SFBool *IntersectProxyAttachmentBase::getSFVisitChildren(void) const
{
    return &_sfVisitChildren;
}






/*------------------------------ access -----------------------------------*/

SizeT IntersectProxyAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VisitChildrenFieldMask & whichField))
    {
        returnValue += _sfVisitChildren.getBinSize();
    }

    return returnValue;
}

void IntersectProxyAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VisitChildrenFieldMask & whichField))
    {
        _sfVisitChildren.copyToBin(pMem);
    }
}

void IntersectProxyAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VisitChildrenFieldMask & whichField))
    {
        editSField(VisitChildrenFieldMask);
        _sfVisitChildren.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

IntersectProxyAttachmentBase::IntersectProxyAttachmentBase(void) :
    Inherited(),
    _sfVisitChildren          (bool(true))
{
}

IntersectProxyAttachmentBase::IntersectProxyAttachmentBase(const IntersectProxyAttachmentBase &source) :
    Inherited(source),
    _sfVisitChildren          (source._sfVisitChildren          )
{
}


/*-------------------------- destructors ----------------------------------*/

IntersectProxyAttachmentBase::~IntersectProxyAttachmentBase(void)
{
}


GetFieldHandlePtr IntersectProxyAttachmentBase::getHandleVisitChildren   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfVisitChildren,
             this->getType().getFieldDesc(VisitChildrenFieldId),
             const_cast<IntersectProxyAttachmentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr IntersectProxyAttachmentBase::editHandleVisitChildren  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfVisitChildren,
             this->getType().getFieldDesc(VisitChildrenFieldId),
             this));


    editSField(VisitChildrenFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void IntersectProxyAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    IntersectProxyAttachment *pThis = static_cast<IntersectProxyAttachment *>(this);

    pThis->execSync(static_cast<IntersectProxyAttachment *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void IntersectProxyAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
