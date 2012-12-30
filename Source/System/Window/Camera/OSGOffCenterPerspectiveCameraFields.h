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


#ifndef _OSGOFFCENTERPERSPECTIVECAMERAFIELDS_H_
#define _OSGOFFCENTERPERSPECTIVECAMERAFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class OffCenterPerspectiveCamera;

OSG_GEN_CONTAINERPTR(OffCenterPerspectiveCamera);
/*! \ingroup GrpWindowCameraFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<OffCenterPerspectiveCamera *, nsOSG> :
    public FieldTraitsFCPtrBase<OffCenterPerspectiveCamera *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<OffCenterPerspectiveCamera *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecOffCenterPerspectiveCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecOffCenterPerspectiveCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakOffCenterPerspectiveCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdOffCenterPerspectiveCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecOffCenterPerspectiveCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecOffCenterPerspectiveCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakOffCenterPerspectiveCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OffCenterPerspectiveCamera *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdOffCenterPerspectiveCameraPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OffCenterPerspectiveCamera *,
                      RecordedRefCountPolicy, nsOSG  > SFRecOffCenterPerspectiveCameraPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OffCenterPerspectiveCamera *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecOffCenterPerspectiveCameraPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OffCenterPerspectiveCamera *,
                      WeakRefCountPolicy, nsOSG      > SFWeakOffCenterPerspectiveCameraPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OffCenterPerspectiveCamera *,
                      NoRefCountPolicy, nsOSG        > SFUncountedOffCenterPerspectiveCameraPtr;


/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OffCenterPerspectiveCamera *,
                      RecordedRefCountPolicy, nsOSG  > MFRecOffCenterPerspectiveCameraPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OffCenterPerspectiveCamera *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecOffCenterPerspectiveCameraPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OffCenterPerspectiveCamera *,
                      WeakRefCountPolicy, nsOSG      > MFWeakOffCenterPerspectiveCameraPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OffCenterPerspectiveCamera *,
                      NoRefCountPolicy, nsOSG        > MFUncountedOffCenterPerspectiveCameraPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecOffCenterPerspectiveCameraPtr : 
    public PointerSField<OffCenterPerspectiveCamera *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecOffCenterPerspectiveCameraPtr : 
    public PointerSField<OffCenterPerspectiveCamera *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakOffCenterPerspectiveCameraPtr :
    public PointerSField<OffCenterPerspectiveCamera *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedOffCenterPerspectiveCameraPtr :
    public PointerSField<OffCenterPerspectiveCamera *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecOffCenterPerspectiveCameraPtr :
    public PointerMField<OffCenterPerspectiveCamera *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecOffCenterPerspectiveCameraPtr :
    public PointerMField<OffCenterPerspectiveCamera *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakOffCenterPerspectiveCameraPtr :
    public PointerMField<OffCenterPerspectiveCamera *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedOffCenterPerspectiveCameraPtr :
    public PointerMField<OffCenterPerspectiveCamera *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGOFFCENTERPERSPECTIVECAMERAFIELDS_H_ */
