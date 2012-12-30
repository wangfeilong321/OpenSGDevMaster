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


#ifndef _OSGLINUXEVENTOPTIONSFIELDS_H_
#define _OSGLINUXEVENTOPTIONSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class LinuxEventOptions;

OSG_GEN_CONTAINERPTR(LinuxEventOptions);
/*! \ingroup GrpContribCSMFieldTraits
    \ingroup GrpLibOSGContribCSM
 */
template <>
struct FieldTraits<LinuxEventOptions *, nsOSG> :
    public FieldTraitsFCPtrBase<LinuxEventOptions *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<LinuxEventOptions *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

};

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLinuxEventOptionsPtr"; 
}



/*! \ingroup GrpContribCSMFieldTraits
 */
template <>
struct FieldTraits<LinuxEventOptions *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<LinuxEventOptions *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<LinuxEventOptions *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);
};

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildLinuxEventOptionsPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<LinuxEventOptions *,
                      RecordedRefCountPolicy, nsOSG  > SFRecLinuxEventOptionsPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<LinuxEventOptions *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecLinuxEventOptionsPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<LinuxEventOptions *,
                      WeakRefCountPolicy, nsOSG      > SFWeakLinuxEventOptionsPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<LinuxEventOptions *,
                      NoRefCountPolicy, nsOSG        > SFUncountedLinuxEventOptionsPtr;



/*! \ingroup GrpContribCSMFieldSFields */
typedef ChildPointerSField<
          LinuxEventOptions *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > SFUnrecChildLinuxEventOptionsPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFRecLinuxEventOptionsPtr : 
    public PointerSField<LinuxEventOptions *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecLinuxEventOptionsPtr : 
    public PointerSField<LinuxEventOptions *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFWeakLinuxEventOptionsPtr :
    public PointerSField<LinuxEventOptions *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUncountedLinuxEventOptionsPtr :
    public PointerSField<LinuxEventOptions *,
                         NoRefCountPolicy> {};



/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecChildLinuxEventOptionsPtr :
    public ChildPointerSField<
        LinuxEventOptions *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLINUXEVENTOPTIONSFIELDS_H_ */
