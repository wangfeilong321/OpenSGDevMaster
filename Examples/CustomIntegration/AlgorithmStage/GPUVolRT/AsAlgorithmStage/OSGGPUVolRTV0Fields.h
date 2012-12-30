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


#ifndef _OSGGPUVOLRTV0FIELDS_H_
#define _OSGGPUVOLRTV0FIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGExGPUVolRTDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class GPUVolRTV0;

OSG_GEN_CONTAINERPTR(GPUVolRTV0);
/*! \ingroup GrpExGPUVolRTFieldTraits
    \ingroup GrpLibOSGExGPUVolRT
 */
template <>
struct FieldTraits<GPUVolRTV0 *, nsOSG> :
    public FieldTraitsFCPtrBase<GPUVolRTV0 *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<GPUVolRTV0 *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EXGPUVOLRT_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGPUVolRTV0Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGPUVolRTV0Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGPUVolRTV0Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGPUVolRTV0Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGPUVolRTV0Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGPUVolRTV0Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGPUVolRTV0Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV0 *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGPUVolRTV0Ptr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV0 *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGPUVolRTV0Ptr;
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV0 *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGPUVolRTV0Ptr;
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV0 *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGPUVolRTV0Ptr;
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV0 *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGPUVolRTV0Ptr;


/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV0 *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGPUVolRTV0Ptr;
/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV0 *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGPUVolRTV0Ptr;
/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV0 *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGPUVolRTV0Ptr;
/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV0 *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGPUVolRTV0Ptr;




#else // these are the doxygen hacks

/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFRecGPUVolRTV0Ptr : 
    public PointerSField<GPUVolRTV0 *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFUnrecGPUVolRTV0Ptr : 
    public PointerSField<GPUVolRTV0 *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFWeakGPUVolRTV0Ptr :
    public PointerSField<GPUVolRTV0 *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFUncountedGPUVolRTV0Ptr :
    public PointerSField<GPUVolRTV0 *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFRecGPUVolRTV0Ptr :
    public PointerMField<GPUVolRTV0 *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFUnrecGPUVolRTV0Ptr :
    public PointerMField<GPUVolRTV0 *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFWeakGPUVolRTV0Ptr :
    public PointerMField<GPUVolRTV0 *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFUncountedGPUVolRTV0Ptr :
    public PointerMField<GPUVolRTV0 *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGPUVOLRTV0FIELDS_H_ */
