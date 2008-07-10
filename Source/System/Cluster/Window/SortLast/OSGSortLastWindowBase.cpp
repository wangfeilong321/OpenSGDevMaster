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
 **     class SortLastWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // GroupNodes Class

#include "OSGSortLastWindowBase.h"
#include "OSGSortLastWindow.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SortLastWindow
    Cluster rendering configuration for sort first image composition
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Node *          SortLastWindowBase::_mfGroupNodes
    
*/

/*! \var UInt32          SortLastWindowBase::_mfGroupLengths
    
*/

/*! \var bool            SortLastWindowBase::_sfGroupsChanged
    
*/


void SortLastWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecNodePtr::Description(
        MFUnrecNodePtr::getClassType(),
        "groupNodes",
        "",
        GroupNodesFieldId, GroupNodesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortLastWindow::editHandleGroupNodes),
        static_cast<FieldGetMethodSig >(&SortLastWindow::getHandleGroupNodes));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "groupLengths",
        "",
        GroupLengthsFieldId, GroupLengthsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortLastWindow::editHandleGroupLengths),
        static_cast<FieldGetMethodSig >(&SortLastWindow::getHandleGroupLengths));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "groupsChanged",
        "",
        GroupsChangedFieldId, GroupsChangedFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortLastWindow::editHandleGroupsChanged),
        static_cast<FieldGetMethodSig >(&SortLastWindow::getHandleGroupsChanged));

    oType.addInitialDesc(pDesc);
}


SortLastWindowBase::TypeObject SortLastWindowBase::_type(
    SortLastWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SortLastWindowBase::createEmptyLocal),
    SortLastWindow::initMethod,
    SortLastWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SortLastWindowBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SortLastWindow\"\n"
    "\tparent=\"ClusterWindow\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "Cluster rendering configuration for sort first image composition\n"
    "\t<Field\n"
    "\t\tname=\"groupNodes\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"groupLengths\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"groupsChanged\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Cluster rendering configuration for sort first image composition\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SortLastWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &SortLastWindowBase::getType(void) const
{
    return _type;
}

UInt32 SortLastWindowBase::getContainerSize(void) const
{
    return sizeof(SortLastWindow);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SortLastWindow::_mfGroupNodes field.
const MFUnrecNodePtr *SortLastWindowBase::getMFGroupNodes(void) const
{
    return &_mfGroupNodes;
}

MFUnrecNodePtr      *SortLastWindowBase::editMFGroupNodes     (void)
{
    editMField(GroupNodesFieldMask, _mfGroupNodes);

    return &_mfGroupNodes;
}

MFUInt32 *SortLastWindowBase::editMFGroupLengths(void)
{
    editMField(GroupLengthsFieldMask, _mfGroupLengths);

    return &_mfGroupLengths;
}

const MFUInt32 *SortLastWindowBase::getMFGroupLengths(void) const
{
    return &_mfGroupLengths;
}


SFBool *SortLastWindowBase::editSFGroupsChanged(void)
{
    editSField(GroupsChangedFieldMask);

    return &_sfGroupsChanged;
}

const SFBool *SortLastWindowBase::getSFGroupsChanged(void) const
{
    return &_sfGroupsChanged;
}




void SortLastWindowBase::pushToGroupNodes(Node * const value)
{
    editMField(GroupNodesFieldMask, _mfGroupNodes);

    _mfGroupNodes.push_back(value);
}

void SortLastWindowBase::assignGroupNodes(const MFUnrecNodePtr    &value)
{
    MFUnrecNodePtr   ::const_iterator elemIt  =
        value.begin();
    MFUnrecNodePtr   ::const_iterator elemEnd =
        value.end  ();

    static_cast<SortLastWindow *>(this)->clearGroupNodes();

    while(elemIt != elemEnd)
    {
        this->pushToGroupNodes(*elemIt);

        ++elemIt;
    }
}

void SortLastWindowBase::removeFromGroupNodes(UInt32 uiIndex)
{
    if(uiIndex < _mfGroupNodes.size())
    {
        editMField(GroupNodesFieldMask, _mfGroupNodes);

        _mfGroupNodes.erase(uiIndex);
    }
}

void SortLastWindowBase::removeObjFromGroupNodes(Node * const value)
{
    Int32 iElemIdx = _mfGroupNodes.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(GroupNodesFieldMask, _mfGroupNodes);

        _mfGroupNodes.erase(iElemIdx);
    }
}
void SortLastWindowBase::clearGroupNodes(void)
{
    editMField(GroupNodesFieldMask, _mfGroupNodes);


    _mfGroupNodes.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 SortLastWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GroupNodesFieldMask & whichField))
    {
        returnValue += _mfGroupNodes.getBinSize();
    }
    if(FieldBits::NoField != (GroupLengthsFieldMask & whichField))
    {
        returnValue += _mfGroupLengths.getBinSize();
    }
    if(FieldBits::NoField != (GroupsChangedFieldMask & whichField))
    {
        returnValue += _sfGroupsChanged.getBinSize();
    }

    return returnValue;
}

void SortLastWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GroupNodesFieldMask & whichField))
    {
        _mfGroupNodes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GroupLengthsFieldMask & whichField))
    {
        _mfGroupLengths.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GroupsChangedFieldMask & whichField))
    {
        _sfGroupsChanged.copyToBin(pMem);
    }
}

void SortLastWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GroupNodesFieldMask & whichField))
    {
        _mfGroupNodes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GroupLengthsFieldMask & whichField))
    {
        _mfGroupLengths.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GroupsChangedFieldMask & whichField))
    {
        _sfGroupsChanged.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SortLastWindowTransitPtr SortLastWindowBase::createLocal(BitVector bFlags)
{
    SortLastWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SortLastWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SortLastWindowTransitPtr SortLastWindowBase::create(void)
{
    SortLastWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SortLastWindow>(tmpPtr);
    }

    return fc;
}

SortLastWindow *SortLastWindowBase::createEmptyLocal(BitVector bFlags)
{
    SortLastWindow *returnValue;

    newPtr<SortLastWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SortLastWindow *SortLastWindowBase::createEmpty(void)
{
    SortLastWindow *returnValue;

    newPtr<SortLastWindow>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SortLastWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SortLastWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SortLastWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SortLastWindowBase::shallowCopy(void) const
{
    SortLastWindow *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SortLastWindow *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SortLastWindowBase::SortLastWindowBase(void) :
    Inherited(),
    _mfGroupNodes             (),
    _mfGroupLengths           (),
    _sfGroupsChanged          ()
{
}

SortLastWindowBase::SortLastWindowBase(const SortLastWindowBase &source) :
    Inherited(source),
    _mfGroupNodes             (),
    _mfGroupLengths           (source._mfGroupLengths           ),
    _sfGroupsChanged          (source._sfGroupsChanged          )
{
}


/*-------------------------- destructors ----------------------------------*/

SortLastWindowBase::~SortLastWindowBase(void)
{
}

void SortLastWindowBase::onCreate(const SortLastWindow *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SortLastWindow *pThis = static_cast<SortLastWindow *>(this);

        MFUnrecNodePtr::const_iterator GroupNodesIt  =
            source->_mfGroupNodes.begin();
        MFUnrecNodePtr::const_iterator GroupNodesEnd =
            source->_mfGroupNodes.end  ();

        while(GroupNodesIt != GroupNodesEnd)
        {
            pThis->pushToGroupNodes(*GroupNodesIt);

            ++GroupNodesIt;
        }
    }
}

GetFieldHandlePtr SortLastWindowBase::getHandleGroupNodes      (void) const
{
    MFUnrecNodePtr::GetHandlePtr returnValue(
        new  MFUnrecNodePtr::GetHandle(
             &_mfGroupNodes,
             this->getType().getFieldDesc(GroupNodesFieldId)));

    return returnValue;
}

EditFieldHandlePtr SortLastWindowBase::editHandleGroupNodes     (void)
{
    MFUnrecNodePtr::EditHandlePtr returnValue(
        new  MFUnrecNodePtr::EditHandle(
             &_mfGroupNodes,
             this->getType().getFieldDesc(GroupNodesFieldId)));

    returnValue->setAddMethod(
        boost::bind(&SortLastWindow::pushToGroupNodes,
                    static_cast<SortLastWindow *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&SortLastWindow::removeFromGroupNodes,
                    static_cast<SortLastWindow *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&SortLastWindow::removeObjFromGroupNodes,
                    static_cast<SortLastWindow *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&SortLastWindow::clearGroupNodes,
                    static_cast<SortLastWindow *>(this)));

    editMField(GroupNodesFieldMask, _mfGroupNodes);

    return returnValue;
}

GetFieldHandlePtr SortLastWindowBase::getHandleGroupLengths    (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfGroupLengths,
             this->getType().getFieldDesc(GroupLengthsFieldId)));

    return returnValue;
}

EditFieldHandlePtr SortLastWindowBase::editHandleGroupLengths   (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfGroupLengths,
             this->getType().getFieldDesc(GroupLengthsFieldId)));


    editMField(GroupLengthsFieldMask, _mfGroupLengths);

    return returnValue;
}

GetFieldHandlePtr SortLastWindowBase::getHandleGroupsChanged   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfGroupsChanged,
             this->getType().getFieldDesc(GroupsChangedFieldId)));

    return returnValue;
}

EditFieldHandlePtr SortLastWindowBase::editHandleGroupsChanged  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfGroupsChanged,
             this->getType().getFieldDesc(GroupsChangedFieldId)));


    editSField(GroupsChangedFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SortLastWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SortLastWindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SortLastWindowBase::createAspectCopy(void) const
{
    SortLastWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SortLastWindow *>(this));

    return returnValue;
}
#endif

void SortLastWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SortLastWindow *>(this)->clearGroupNodes();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfGroupLengths.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SortLastWindow *>::_type("SortLastWindowPtr", "ClusterWindowPtr");
#endif


OSG_END_NAMESPACE
