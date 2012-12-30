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


#ifndef _OSGGEOVECTORBUFFERREFPROPERTYFIELDS_H_
#define _OSGGEOVECTORBUFFERREFPROPERTYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class GeoVectorBufferRefProperty;

OSG_GEN_CONTAINERPTR(GeoVectorBufferRefProperty);
/*! \ingroup GrpDrawablesGeometryFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<GeoVectorBufferRefProperty *, nsOSG> :
    public FieldTraitsFCPtrBase<GeoVectorBufferRefProperty *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<GeoVectorBufferRefProperty *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoVectorBufferRefPropertyPtr"; 
}


/*! \ingroup GrpDrawablesGeometryFieldTraits
 */
template <>
struct FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<GeoVectorBufferRefProperty *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildGeoVectorBufferRefPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorBufferRefProperty *, nsOSG + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildGeoVectorBufferRefPropertyPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoVectorBufferRefProperty *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGeoVectorBufferRefPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoVectorBufferRefProperty *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGeoVectorBufferRefPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoVectorBufferRefProperty *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGeoVectorBufferRefPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoVectorBufferRefProperty *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGeoVectorBufferRefPropertyPtr;


/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoVectorBufferRefProperty *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGeoVectorBufferRefPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoVectorBufferRefProperty *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGeoVectorBufferRefPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoVectorBufferRefProperty *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGeoVectorBufferRefPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoVectorBufferRefProperty *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGeoVectorBufferRefPropertyPtr;



/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef ChildPointerSField<
          GeoVectorBufferRefProperty *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > SFUnrecChildGeoVectorBufferRefPropertyPtr;


/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef ChildPointerMField<
          GeoVectorBufferRefProperty *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > MFUnrecChildGeoVectorBufferRefPropertyPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecGeoVectorBufferRefPropertyPtr : 
    public PointerSField<GeoVectorBufferRefProperty *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecGeoVectorBufferRefPropertyPtr : 
    public PointerSField<GeoVectorBufferRefProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakGeoVectorBufferRefPropertyPtr :
    public PointerSField<GeoVectorBufferRefProperty *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedGeoVectorBufferRefPropertyPtr :
    public PointerSField<GeoVectorBufferRefProperty *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecGeoVectorBufferRefPropertyPtr :
    public PointerMField<GeoVectorBufferRefProperty *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecGeoVectorBufferRefPropertyPtr :
    public PointerMField<GeoVectorBufferRefProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakGeoVectorBufferRefPropertyPtr :
    public PointerMField<GeoVectorBufferRefProperty *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedGeoVectorBufferRefPropertyPtr :
    public PointerMField<GeoVectorBufferRefProperty *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecChildGeoVectorBufferRefPropertyPtr :
    public ChildPointerSField<
        GeoVectorBufferRefProperty *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecChildGeoVectorBufferRefPropertyPtr :
    public ChildPointerMField<
        GeoVectorBufferRefProperty *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOVECTORBUFFERREFPROPERTYFIELDS_H_ */
