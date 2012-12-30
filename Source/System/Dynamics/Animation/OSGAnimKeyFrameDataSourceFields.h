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


#ifndef _OSGANIMKEYFRAMEDATASOURCEFIELDS_H_
#define _OSGANIMKEYFRAMEDATASOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class AnimKeyFrameDataSource;

OSG_GEN_CONTAINERPTR(AnimKeyFrameDataSource);
/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<AnimKeyFrameDataSource *, nsOSG> :
    public FieldTraitsFCPtrBase<AnimKeyFrameDataSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<AnimKeyFrameDataSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimKeyFrameDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimKeyFrameDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimKeyFrameDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimKeyFrameDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimKeyFrameDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimKeyFrameDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimKeyFrameDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimKeyFrameDataSource *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimKeyFrameDataSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimKeyFrameDataSource *,
                      RecordedRefCountPolicy, nsOSG  > SFRecAnimKeyFrameDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimKeyFrameDataSource *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecAnimKeyFrameDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimKeyFrameDataSource *,
                      WeakRefCountPolicy, nsOSG      > SFWeakAnimKeyFrameDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimKeyFrameDataSource *,
                      NoRefCountPolicy, nsOSG        > SFUncountedAnimKeyFrameDataSourcePtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimKeyFrameDataSource *,
                      RecordedRefCountPolicy, nsOSG  > MFRecAnimKeyFrameDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimKeyFrameDataSource *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecAnimKeyFrameDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimKeyFrameDataSource *,
                      WeakRefCountPolicy, nsOSG      > MFWeakAnimKeyFrameDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimKeyFrameDataSource *,
                      NoRefCountPolicy, nsOSG        > MFUncountedAnimKeyFrameDataSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecAnimKeyFrameDataSourcePtr : 
    public PointerSField<AnimKeyFrameDataSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecAnimKeyFrameDataSourcePtr : 
    public PointerSField<AnimKeyFrameDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakAnimKeyFrameDataSourcePtr :
    public PointerSField<AnimKeyFrameDataSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedAnimKeyFrameDataSourcePtr :
    public PointerSField<AnimKeyFrameDataSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecAnimKeyFrameDataSourcePtr :
    public PointerMField<AnimKeyFrameDataSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecAnimKeyFrameDataSourcePtr :
    public PointerMField<AnimKeyFrameDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakAnimKeyFrameDataSourcePtr :
    public PointerMField<AnimKeyFrameDataSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedAnimKeyFrameDataSourcePtr :
    public PointerMField<AnimKeyFrameDataSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMKEYFRAMEDATASOURCEFIELDS_H_ */
