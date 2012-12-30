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
 **     class BaseSkeletonJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGSkeleton.h"                // Skeleton Class

#include "OSGBaseSkeletonJointBase.h"
#include "OSGBaseSkeletonJoint.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BaseSkeletonJoint
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Skeleton *      BaseSkeletonJointBase::_sfSkeleton
    Parent skeleton.
*/

/*! \var Int16           BaseSkeletonJointBase::_sfJointId
    Id of the joint in the skeleton, used to assign vertices to joints.
    The joints in a skeleton must have a unique jointId and they should
    form an interval (no holes) [0, N].
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<BaseSkeletonJoint *, nsOSG>::_type(
    "BaseSkeletonJointPtr", 
    "GroupPtr", 
    BaseSkeletonJoint::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(BaseSkeletonJoint *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BaseSkeletonJoint *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BaseSkeletonJoint *,
                           nsOSG);

DataType &FieldTraits< BaseSkeletonJoint *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<BaseSkeletonJoint *, nsOSG>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      BaseSkeletonJoint *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      BaseSkeletonJoint *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1);


DataType &FieldTraits<BaseSkeletonJoint *, nsOSG + 2 >::getType(void)
{
    return FieldTraits<BaseSkeletonJoint *, nsOSG>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    BaseSkeletonJoint *,
                    NoRefCountPolicy,
                    nsOSG + 2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         BaseSkeletonJoint *,
                         NoRefCountPolicy,
                         nsOSG + 2);


OSG_MFIELDTYPE_INST(ParentPointerMField,
                    BaseSkeletonJoint *,
                    NoRefCountPolicy,
                    2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerMField,
                         BaseSkeletonJoint *,
                         NoRefCountPolicy,
                         2);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BaseSkeletonJointBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentSkeletonPtr::Description(
        SFParentSkeletonPtr::getClassType(),
        "skeleton",
        "Parent skeleton.\n",
        SkeletonFieldId, SkeletonFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&BaseSkeletonJoint::invalidEditField),
        static_cast     <FieldGetMethodSig >(&BaseSkeletonJoint::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt16::Description(
        SFInt16::getClassType(),
        "jointId",
        "Id of the joint in the skeleton, used to assign vertices to joints.\n"
        "The joints in a skeleton must have a unique jointId and they should\n"
        "form an interval (no holes) [0, N].\n",
        JointIdFieldId, JointIdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BaseSkeletonJoint::editHandleJointId),
        static_cast<FieldGetMethodSig >(&BaseSkeletonJoint::getHandleJointId));

    oType.addInitialDesc(pDesc);
}


BaseSkeletonJointBase::TypeObject BaseSkeletonJointBase::_type(
    BaseSkeletonJointBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    BaseSkeletonJoint::initMethod,
    BaseSkeletonJoint::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BaseSkeletonJoint::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"BaseSkeletonJoint\"\n"
    "   parent=\"Group\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   childFields=\"both\"\n"
    "   parentFields=\"both\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"skeleton\"\n"
    "     type=\"Skeleton\"\n"
    "     category=\"parentpointer\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"NULL\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"none\"\n"
    "     >\n"
    "    Parent skeleton.\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"jointId\"\n"
    "     type=\"Int16\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"BaseSkeletonJoint::INVALID_JOINT_ID\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Id of the joint in the skeleton, used to assign vertices to joints.\n"
    "    The joints in a skeleton must have a unique jointId and they should\n"
    "    form an interval (no holes) [0, N].\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BaseSkeletonJointBase::getType(void)
{
    return _type;
}

const FieldContainerType &BaseSkeletonJointBase::getType(void) const
{
    return _type;
}

UInt32 BaseSkeletonJointBase::getContainerSize(void) const
{
    return sizeof(BaseSkeletonJoint);
}

/*------------------------- decorator get ------------------------------*/



SFInt16 *BaseSkeletonJointBase::editSFJointId(void)
{
    editSField(JointIdFieldMask);

    return &_sfJointId;
}

const SFInt16 *BaseSkeletonJointBase::getSFJointId(void) const
{
    return &_sfJointId;
}






/*------------------------------ access -----------------------------------*/

SizeT BaseSkeletonJointBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        returnValue += _sfSkeleton.getBinSize();
    }
    if(FieldBits::NoField != (JointIdFieldMask & whichField))
    {
        returnValue += _sfJointId.getBinSize();
    }

    return returnValue;
}

void BaseSkeletonJointBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        _sfSkeleton.copyToBin(pMem);
    }
    if(FieldBits::NoField != (JointIdFieldMask & whichField))
    {
        _sfJointId.copyToBin(pMem);
    }
}

void BaseSkeletonJointBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        editSField(SkeletonFieldMask);
        _sfSkeleton.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (JointIdFieldMask & whichField))
    {
        editSField(JointIdFieldMask);
        _sfJointId.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

BaseSkeletonJointBase::BaseSkeletonJointBase(void) :
    Inherited(),
    _sfSkeleton               (NULL),
    _sfJointId                (Int16(BaseSkeletonJoint::INVALID_JOINT_ID))
{
}

BaseSkeletonJointBase::BaseSkeletonJointBase(const BaseSkeletonJointBase &source) :
    Inherited(source),
    _sfSkeleton               (NULL),
    _sfJointId                (source._sfJointId                )
{
}


/*-------------------------- destructors ----------------------------------*/

BaseSkeletonJointBase::~BaseSkeletonJointBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool BaseSkeletonJointBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == SkeletonFieldId)
    {
        Skeleton * pTypedParent =
            dynamic_cast< Skeleton * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfSkeleton.getValue         ();

            UInt16 oldChildFieldId =
                _sfSkeleton.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(SkeletonFieldMask);

            _sfSkeleton.setValue(static_cast<Skeleton *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool BaseSkeletonJointBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == SkeletonFieldId)
    {
        Skeleton * pTypedParent =
            dynamic_cast< Skeleton * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfSkeleton.getValue() == pTypedParent)
            {
                editSField(SkeletonFieldMask);

                _sfSkeleton.setValue(NULL, 0xFFFF);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr BaseSkeletonJointBase::getHandleSkeleton        (void) const
{
    SFParentSkeletonPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr BaseSkeletonJointBase::editHandleSkeleton       (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr BaseSkeletonJointBase::getHandleJointId         (void) const
{
    SFInt16::GetHandlePtr returnValue(
        new  SFInt16::GetHandle(
             &_sfJointId,
             this->getType().getFieldDesc(JointIdFieldId),
             const_cast<BaseSkeletonJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BaseSkeletonJointBase::editHandleJointId        (void)
{
    SFInt16::EditHandlePtr returnValue(
        new  SFInt16::EditHandle(
             &_sfJointId,
             this->getType().getFieldDesc(JointIdFieldId),
             this));


    editSField(JointIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BaseSkeletonJointBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BaseSkeletonJoint *pThis = static_cast<BaseSkeletonJoint *>(this);

    pThis->execSync(static_cast<BaseSkeletonJoint *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void BaseSkeletonJointBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
