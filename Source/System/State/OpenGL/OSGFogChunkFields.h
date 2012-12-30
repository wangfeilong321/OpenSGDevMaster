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


#ifndef _OSGFOGCHUNKFIELDS_H_
#define _OSGFOGCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class FogChunk;

OSG_GEN_CONTAINERPTR(FogChunk);
/*! \ingroup GrpStateOpenGLFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<FogChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<FogChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<FogChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFogChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFogChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFogChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFogChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFogChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFogChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFogChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<FogChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFogChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<FogChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecFogChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<FogChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecFogChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<FogChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakFogChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<FogChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedFogChunkPtr;


/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<FogChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecFogChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<FogChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecFogChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<FogChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakFogChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<FogChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedFogChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFRecFogChunkPtr : 
    public PointerSField<FogChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecFogChunkPtr : 
    public PointerSField<FogChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFWeakFogChunkPtr :
    public PointerSField<FogChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedFogChunkPtr :
    public PointerSField<FogChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFRecFogChunkPtr :
    public PointerMField<FogChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecFogChunkPtr :
    public PointerMField<FogChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFWeakFogChunkPtr :
    public PointerMField<FogChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedFogChunkPtr :
    public PointerMField<FogChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGFOGCHUNKFIELDS_H_ */
