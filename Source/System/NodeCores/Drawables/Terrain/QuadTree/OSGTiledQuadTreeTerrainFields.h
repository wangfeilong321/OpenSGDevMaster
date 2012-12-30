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


#ifndef _OSGTILEDQUADTREETERRAINFIELDS_H_
#define _OSGTILEDQUADTREETERRAINFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TiledQuadTreeTerrain;

OSG_GEN_CONTAINERPTR(TiledQuadTreeTerrain);
/*! \ingroup GrpDrawablesTerrainFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<TiledQuadTreeTerrain *, nsOSG> :
    public FieldTraitsFCPtrBase<TiledQuadTreeTerrain *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TiledQuadTreeTerrain *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTiledQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTiledQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTiledQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTiledQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTiledQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTiledQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTiledQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<TiledQuadTreeTerrain *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTiledQuadTreeTerrainPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawablesTerrainFieldSFields */
typedef PointerSField<TiledQuadTreeTerrain *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTiledQuadTreeTerrainPtr;
/*! \ingroup GrpDrawablesTerrainFieldSFields */
typedef PointerSField<TiledQuadTreeTerrain *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTiledQuadTreeTerrainPtr;
/*! \ingroup GrpDrawablesTerrainFieldSFields */
typedef PointerSField<TiledQuadTreeTerrain *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTiledQuadTreeTerrainPtr;
/*! \ingroup GrpDrawablesTerrainFieldSFields */
typedef PointerSField<TiledQuadTreeTerrain *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTiledQuadTreeTerrainPtr;


/*! \ingroup GrpDrawablesTerrainFieldMFields */
typedef PointerMField<TiledQuadTreeTerrain *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTiledQuadTreeTerrainPtr;
/*! \ingroup GrpDrawablesTerrainFieldMFields */
typedef PointerMField<TiledQuadTreeTerrain *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTiledQuadTreeTerrainPtr;
/*! \ingroup GrpDrawablesTerrainFieldMFields */
typedef PointerMField<TiledQuadTreeTerrain *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTiledQuadTreeTerrainPtr;
/*! \ingroup GrpDrawablesTerrainFieldMFields */
typedef PointerMField<TiledQuadTreeTerrain *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTiledQuadTreeTerrainPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawablesTerrainFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecTiledQuadTreeTerrainPtr : 
    public PointerSField<TiledQuadTreeTerrain *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesTerrainFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecTiledQuadTreeTerrainPtr : 
    public PointerSField<TiledQuadTreeTerrain *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesTerrainFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakTiledQuadTreeTerrainPtr :
    public PointerSField<TiledQuadTreeTerrain *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawablesTerrainFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedTiledQuadTreeTerrainPtr :
    public PointerSField<TiledQuadTreeTerrain *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawablesTerrainFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecTiledQuadTreeTerrainPtr :
    public PointerMField<TiledQuadTreeTerrain *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawablesTerrainFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecTiledQuadTreeTerrainPtr :
    public PointerMField<TiledQuadTreeTerrain *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesTerrainFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakTiledQuadTreeTerrainPtr :
    public PointerMField<TiledQuadTreeTerrain *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawablesTerrainFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedTiledQuadTreeTerrainPtr :
    public PointerMField<TiledQuadTreeTerrain *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTILEDQUADTREETERRAINFIELDS_H_ */
