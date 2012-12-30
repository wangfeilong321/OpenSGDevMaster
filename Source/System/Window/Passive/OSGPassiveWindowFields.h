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


#ifndef _OSGPASSIVEWINDOWFIELDS_H_
#define _OSGPASSIVEWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class PassiveWindow;

OSG_GEN_CONTAINERPTR(PassiveWindow);
/*! \ingroup GrpWindowPassiveFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<PassiveWindow *, nsOSG> :
    public FieldTraitsFCPtrBase<PassiveWindow *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<PassiveWindow *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPassiveWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPassiveWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPassiveWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPassiveWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPassiveWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPassiveWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPassiveWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveWindow *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPassiveWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveWindow *,
                      RecordedRefCountPolicy, nsOSG  > SFRecPassiveWindowPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveWindow *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecPassiveWindowPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveWindow *,
                      WeakRefCountPolicy, nsOSG      > SFWeakPassiveWindowPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveWindow *,
                      NoRefCountPolicy, nsOSG        > SFUncountedPassiveWindowPtr;


/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveWindow *,
                      RecordedRefCountPolicy, nsOSG  > MFRecPassiveWindowPtr;
/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveWindow *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecPassiveWindowPtr;
/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveWindow *,
                      WeakRefCountPolicy, nsOSG      > MFWeakPassiveWindowPtr;
/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveWindow *,
                      NoRefCountPolicy, nsOSG        > MFUncountedPassiveWindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecPassiveWindowPtr : 
    public PointerSField<PassiveWindow *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecPassiveWindowPtr : 
    public PointerSField<PassiveWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakPassiveWindowPtr :
    public PointerSField<PassiveWindow *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedPassiveWindowPtr :
    public PointerSField<PassiveWindow *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecPassiveWindowPtr :
    public PointerMField<PassiveWindow *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecPassiveWindowPtr :
    public PointerMField<PassiveWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakPassiveWindowPtr :
    public PointerMField<PassiveWindow *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedPassiveWindowPtr :
    public PointerMField<PassiveWindow *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPASSIVEWINDOWFIELDS_H_ */
