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


#ifndef _OSGGEOPROPERTYFIELDS_H_
#define _OSGGEOPROPERTYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class GeoProperty;

OSG_GEN_CONTAINERPTR(GeoProperty);
/*! \ingroup GrpDrawablesGeometryFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<GeoProperty *, nsOSG> :
    public FieldTraitsFCPtrBase<GeoProperty *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<GeoProperty *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoPropertyPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoProperty *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGeoPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoProperty *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGeoPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoProperty *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGeoPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoProperty *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGeoPropertyPtr;


/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoProperty *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGeoPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoProperty *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGeoPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoProperty *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGeoPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoProperty *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGeoPropertyPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecGeoPropertyPtr : 
    public PointerSField<GeoProperty *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecGeoPropertyPtr : 
    public PointerSField<GeoProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakGeoPropertyPtr :
    public PointerSField<GeoProperty *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedGeoPropertyPtr :
    public PointerSField<GeoProperty *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOPROPERTYFIELDS_H_ */
