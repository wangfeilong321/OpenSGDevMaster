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


#ifndef _OSGANIMTIMESENSORFIELDS_H_
#define _OSGANIMTIMESENSORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class AnimTimeSensor;

OSG_GEN_CONTAINERPTR(AnimTimeSensor);
/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<AnimTimeSensor *, nsOSG> :
    public FieldTraitsFCPtrBase<AnimTimeSensor *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<AnimTimeSensor *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimTimeSensor *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimTimeSensorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTimeSensor *,
                      RecordedRefCountPolicy, nsOSG  > SFRecAnimTimeSensorPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTimeSensor *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecAnimTimeSensorPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTimeSensor *,
                      WeakRefCountPolicy, nsOSG      > SFWeakAnimTimeSensorPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimTimeSensor *,
                      NoRefCountPolicy, nsOSG        > SFUncountedAnimTimeSensorPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTimeSensor *,
                      RecordedRefCountPolicy, nsOSG  > MFRecAnimTimeSensorPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTimeSensor *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecAnimTimeSensorPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTimeSensor *,
                      WeakRefCountPolicy, nsOSG      > MFWeakAnimTimeSensorPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimTimeSensor *,
                      NoRefCountPolicy, nsOSG        > MFUncountedAnimTimeSensorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecAnimTimeSensorPtr : 
    public PointerSField<AnimTimeSensor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecAnimTimeSensorPtr : 
    public PointerSField<AnimTimeSensor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakAnimTimeSensorPtr :
    public PointerSField<AnimTimeSensor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedAnimTimeSensorPtr :
    public PointerSField<AnimTimeSensor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecAnimTimeSensorPtr :
    public PointerMField<AnimTimeSensor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecAnimTimeSensorPtr :
    public PointerMField<AnimTimeSensor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakAnimTimeSensorPtr :
    public PointerMField<AnimTimeSensor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedAnimTimeSensorPtr :
    public PointerMField<AnimTimeSensor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMTIMESENSORFIELDS_H_ */
