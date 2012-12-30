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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBASESKELETONJOINTFIELDS_H_
#define _OSGBASESKELETONJOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class BaseSkeletonJoint;

OSG_GEN_CONTAINERPTR(BaseSkeletonJoint);
/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<BaseSkeletonJoint *, nsOSG> :
    public FieldTraitsFCPtrBase<BaseSkeletonJoint *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<BaseSkeletonJoint *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBaseSkeletonJointPtr"; 
}


/*! \ingroup GrpDynamicsFieldTraits
 */
template <>
struct FieldTraits<BaseSkeletonJoint *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<BaseSkeletonJoint *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<BaseSkeletonJoint *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildBaseSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<BaseSkeletonJoint *, nsOSG + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildBaseSkeletonJointPtr"; 
}


/*! \ingroup GrpDynamicsFieldTraits
 */
template <>
struct FieldTraits<BaseSkeletonJoint *, nsOSG + 2> : 
    public FieldTraitsFCPtrBase<BaseSkeletonJoint *, nsOSG + 2>
{
  private:

    static  DataType                                _type;

  public:

    static const bool bIsPointerField = true;

    typedef FieldTraits<BaseSkeletonJoint *, nsOSG + 2> Self;


    enum             { Convertible = Self::NotConvertible };
    
    static OSG_DYNAMICS_DLLMAPPING
                 DataType &getType (void);

    static const Char8    *getSName(void) 
    {
        return "SFParentBaseSkeletonJointPtr"; 
    }

    static const Char8    *getMName(void) 
    { 
        return "MFParentBaseSkeletonJointPtr"; 
    }
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<BaseSkeletonJoint *,
                      RecordedRefCountPolicy, nsOSG  > SFRecBaseSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<BaseSkeletonJoint *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecBaseSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<BaseSkeletonJoint *,
                      WeakRefCountPolicy, nsOSG      > SFWeakBaseSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<BaseSkeletonJoint *,
                      NoRefCountPolicy, nsOSG        > SFUncountedBaseSkeletonJointPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<BaseSkeletonJoint *,
                      RecordedRefCountPolicy, nsOSG  > MFRecBaseSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<BaseSkeletonJoint *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecBaseSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<BaseSkeletonJoint *,
                      WeakRefCountPolicy, nsOSG      > MFWeakBaseSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<BaseSkeletonJoint *,
                      NoRefCountPolicy, nsOSG        > MFUncountedBaseSkeletonJointPtr;



/*! \ingroup GrpDynamicsFieldSFields */
typedef ChildPointerSField<
          BaseSkeletonJoint *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > SFUnrecChildBaseSkeletonJointPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef ChildPointerMField<
          BaseSkeletonJoint *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > MFUnrecChildBaseSkeletonJointPtr;


/*! \ingroup GrpDynamicsFieldSFields */
typedef ParentPointerSField<
          BaseSkeletonJoint *, 
          NoRefCountPolicy,
          nsOSG + 2    > SFParentBaseSkeletonJointPtr;

/*! \ingroup GrpDynamicsFieldMFields */
typedef ParentPointerMField<
          BaseSkeletonJoint *, 
          NoRefCountPolicy,
          nsOSG + 2    > MFParentBaseSkeletonJointPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecBaseSkeletonJointPtr : 
    public PointerSField<BaseSkeletonJoint *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecBaseSkeletonJointPtr : 
    public PointerSField<BaseSkeletonJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakBaseSkeletonJointPtr :
    public PointerSField<BaseSkeletonJoint *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedBaseSkeletonJointPtr :
    public PointerSField<BaseSkeletonJoint *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecBaseSkeletonJointPtr :
    public PointerMField<BaseSkeletonJoint *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecBaseSkeletonJointPtr :
    public PointerMField<BaseSkeletonJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakBaseSkeletonJointPtr :
    public PointerMField<BaseSkeletonJoint *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedBaseSkeletonJointPtr :
    public PointerMField<BaseSkeletonJoint *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecChildBaseSkeletonJointPtr :
    public ChildPointerSField<
        BaseSkeletonJoint *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecChildBaseSkeletonJointPtr :
    public ChildPointerMField<
        BaseSkeletonJoint *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFParentBaseSkeletonJointPtr :
    public ParentPointerSField<
        BaseSkeletonJoint *, 
        NoRefCountPolicy,
        nsOSG + 2    > {};

/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFParentBaseSkeletonJointPtr :
    public  ParentPointerMField<
        BaseSkeletonJoint *, 
        NoRefCountPolicy,
        nsOSG + 2    > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBASESKELETONJOINTFIELDS_H_ */
