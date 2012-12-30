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


#ifndef _OSGFOREGROUNDFIELDS_H_
#define _OSGFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class Foreground;

OSG_GEN_CONTAINERPTR(Foreground);
/*! \ingroup GrpSystemWindowFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<Foreground *, nsOSG> :
    public FieldTraitsFCPtrBase<Foreground *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<Foreground *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Foreground *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdForegroundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Foreground *,
                      RecordedRefCountPolicy, nsOSG  > SFRecForegroundPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Foreground *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecForegroundPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Foreground *,
                      WeakRefCountPolicy, nsOSG      > SFWeakForegroundPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Foreground *,
                      NoRefCountPolicy, nsOSG        > SFUncountedForegroundPtr;


/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Foreground *,
                      RecordedRefCountPolicy, nsOSG  > MFRecForegroundPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Foreground *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecForegroundPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Foreground *,
                      WeakRefCountPolicy, nsOSG      > MFWeakForegroundPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Foreground *,
                      NoRefCountPolicy, nsOSG        > MFUncountedForegroundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecForegroundPtr : 
    public PointerSField<Foreground *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecForegroundPtr : 
    public PointerSField<Foreground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakForegroundPtr :
    public PointerSField<Foreground *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedForegroundPtr :
    public PointerSField<Foreground *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecForegroundPtr :
    public PointerMField<Foreground *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecForegroundPtr :
    public PointerMField<Foreground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakForegroundPtr :
    public PointerMField<Foreground *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedForegroundPtr :
    public PointerMField<Foreground *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGFOREGROUNDFIELDS_H_ */
