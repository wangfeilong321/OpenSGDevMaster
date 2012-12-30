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


#ifndef _OSGANIMDATASOURCEFIELDS_H_
#define _OSGANIMDATASOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class AnimDataSource;

OSG_GEN_CONTAINERPTR(AnimDataSource);
/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<AnimDataSource *, nsOSG> :
    public FieldTraitsFCPtrBase<AnimDataSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<AnimDataSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimDataSource *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimDataSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimDataSource *,
                      RecordedRefCountPolicy, nsOSG  > SFRecAnimDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimDataSource *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecAnimDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimDataSource *,
                      WeakRefCountPolicy, nsOSG      > SFWeakAnimDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimDataSource *,
                      NoRefCountPolicy, nsOSG        > SFUncountedAnimDataSourcePtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimDataSource *,
                      RecordedRefCountPolicy, nsOSG  > MFRecAnimDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimDataSource *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecAnimDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimDataSource *,
                      WeakRefCountPolicy, nsOSG      > MFWeakAnimDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimDataSource *,
                      NoRefCountPolicy, nsOSG        > MFUncountedAnimDataSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecAnimDataSourcePtr : 
    public PointerSField<AnimDataSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecAnimDataSourcePtr : 
    public PointerSField<AnimDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakAnimDataSourcePtr :
    public PointerSField<AnimDataSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedAnimDataSourcePtr :
    public PointerSField<AnimDataSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecAnimDataSourcePtr :
    public PointerMField<AnimDataSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecAnimDataSourcePtr :
    public PointerMField<AnimDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakAnimDataSourcePtr :
    public PointerMField<AnimDataSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedAnimDataSourcePtr :
    public PointerMField<AnimDataSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMDATASOURCEFIELDS_H_ */
