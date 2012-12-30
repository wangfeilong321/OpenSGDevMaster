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


#ifndef _OSGSKYBACKGROUNDFIELDS_H_
#define _OSGSKYBACKGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class SkyBackground;

OSG_GEN_CONTAINERPTR(SkyBackground);
/*! \ingroup GrpWindowBackgroundFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<SkyBackground *, nsOSG> :
    public FieldTraitsFCPtrBase<SkyBackground *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<SkyBackground *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};


template<> inline
const Char8 *FieldTraits<SkyBackground *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSkyBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkyBackground *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSkyBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkyBackground *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSkyBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkyBackground *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSkyBackgroundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<SkyBackground *,
                      RecordedRefCountPolicy, nsOSG  > MFRecSkyBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<SkyBackground *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecSkyBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<SkyBackground *,
                      WeakRefCountPolicy, nsOSG      > MFWeakSkyBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<SkyBackground *,
                      NoRefCountPolicy, nsOSG        > MFUncountedSkyBackgroundPtr;




#else // these are the doxygen hacks


/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecSkyBackgroundPtr :
    public PointerMField<SkyBackground *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecSkyBackgroundPtr :
    public PointerMField<SkyBackground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakSkyBackgroundPtr :
    public PointerMField<SkyBackground *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedSkyBackgroundPtr :
    public PointerMField<SkyBackground *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKYBACKGROUNDFIELDS_H_ */
