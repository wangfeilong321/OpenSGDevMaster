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


#ifndef _OSGSTATEFIELDS_H_
#define _OSGSTATEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class State;

OSG_GEN_CONTAINERPTR(State);
/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<State *, nsOSG> :
    public FieldTraitsFCPtrBase<State *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<State *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecStatePtr"; 
}

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecStatePtr"; 
}

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakStatePtr"; 
}

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdStatePtr"; 
}

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecStatePtr"; 
}

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecStatePtr"; 
}

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakStatePtr"; 
}

template<> inline
const Char8 *FieldTraits<State *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdStatePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<State *,
                      RecordedRefCountPolicy, nsOSG  > SFRecStatePtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<State *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecStatePtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<State *,
                      WeakRefCountPolicy, nsOSG      > SFWeakStatePtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<State *,
                      NoRefCountPolicy, nsOSG        > SFUncountedStatePtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<State *,
                      RecordedRefCountPolicy, nsOSG  > MFRecStatePtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<State *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecStatePtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<State *,
                      WeakRefCountPolicy, nsOSG      > MFWeakStatePtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<State *,
                      NoRefCountPolicy, nsOSG        > MFUncountedStatePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecStatePtr : 
    public PointerSField<State *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecStatePtr : 
    public PointerSField<State *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakStatePtr :
    public PointerSField<State *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedStatePtr :
    public PointerSField<State *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecStatePtr :
    public PointerMField<State *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecStatePtr :
    public PointerMField<State *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakStatePtr :
    public PointerMField<State *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedStatePtr :
    public PointerMField<State *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSTATEFIELDS_H_ */
