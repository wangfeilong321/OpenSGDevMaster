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


#ifndef _OSGPASSIVEVIEWPORTFIELDS_H_
#define _OSGPASSIVEVIEWPORTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class PassiveViewport;

OSG_GEN_CONTAINERPTR(PassiveViewport);
/*! \ingroup GrpWindowPassiveFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<PassiveViewport *, nsOSG> :
    public FieldTraitsFCPtrBase<PassiveViewport *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<PassiveViewport *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPassiveViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveViewport *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPassiveViewportPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveViewport *,
                      RecordedRefCountPolicy, nsOSG  > SFRecPassiveViewportPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveViewport *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecPassiveViewportPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveViewport *,
                      WeakRefCountPolicy, nsOSG      > SFWeakPassiveViewportPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveViewport *,
                      NoRefCountPolicy, nsOSG        > SFUncountedPassiveViewportPtr;


/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveViewport *,
                      RecordedRefCountPolicy, nsOSG  > MFRecPassiveViewportPtr;
/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveViewport *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecPassiveViewportPtr;
/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveViewport *,
                      WeakRefCountPolicy, nsOSG      > MFWeakPassiveViewportPtr;
/*! \ingroup GrpWindowPassiveFieldMFields */
typedef PointerMField<PassiveViewport *,
                      NoRefCountPolicy, nsOSG        > MFUncountedPassiveViewportPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecPassiveViewportPtr : 
    public PointerSField<PassiveViewport *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecPassiveViewportPtr : 
    public PointerSField<PassiveViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakPassiveViewportPtr :
    public PointerSField<PassiveViewport *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedPassiveViewportPtr :
    public PointerSField<PassiveViewport *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowPassiveFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedPassiveViewportPtr :
    public PointerMField<PassiveViewport *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPASSIVEVIEWPORTFIELDS_H_ */
