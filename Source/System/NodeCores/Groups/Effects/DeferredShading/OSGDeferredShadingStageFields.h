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


#ifndef _OSGDEFERREDSHADINGSTAGEFIELDS_H_
#define _OSGDEFERREDSHADINGSTAGEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class DeferredShadingStage;

OSG_GEN_CONTAINERPTR(DeferredShadingStage);
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldTraits
    \ingroup GrpLibOSGEffectGroups
 */
template <>
struct FieldTraits<DeferredShadingStage *, nsOSG> :
    public FieldTraitsFCPtrBase<DeferredShadingStage *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<DeferredShadingStage *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EFFECTGROUPS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDeferredShadingStagePtr"; 
}

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDeferredShadingStagePtr"; 
}

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDeferredShadingStagePtr"; 
}

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDeferredShadingStagePtr"; 
}

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDeferredShadingStagePtr"; 
}

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDeferredShadingStagePtr"; 
}

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDeferredShadingStagePtr"; 
}

template<> inline
const Char8 *FieldTraits<DeferredShadingStage *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDeferredShadingStagePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DeferredShadingStage *,
                      RecordedRefCountPolicy, nsOSG  > SFRecDeferredShadingStagePtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DeferredShadingStage *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecDeferredShadingStagePtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DeferredShadingStage *,
                      WeakRefCountPolicy, nsOSG      > SFWeakDeferredShadingStagePtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields */
typedef PointerSField<DeferredShadingStage *,
                      NoRefCountPolicy, nsOSG        > SFUncountedDeferredShadingStagePtr;


/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DeferredShadingStage *,
                      RecordedRefCountPolicy, nsOSG  > MFRecDeferredShadingStagePtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DeferredShadingStage *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecDeferredShadingStagePtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DeferredShadingStage *,
                      WeakRefCountPolicy, nsOSG      > MFWeakDeferredShadingStagePtr;
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields */
typedef PointerMField<DeferredShadingStage *,
                      NoRefCountPolicy, nsOSG        > MFUncountedDeferredShadingStagePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFRecDeferredShadingStagePtr : 
    public PointerSField<DeferredShadingStage *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUnrecDeferredShadingStagePtr : 
    public PointerSField<DeferredShadingStage *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFWeakDeferredShadingStagePtr :
    public PointerSField<DeferredShadingStage *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUncountedDeferredShadingStagePtr :
    public PointerSField<DeferredShadingStage *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFRecDeferredShadingStagePtr :
    public PointerMField<DeferredShadingStage *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUnrecDeferredShadingStagePtr :
    public PointerMField<DeferredShadingStage *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFWeakDeferredShadingStagePtr :
    public PointerMField<DeferredShadingStage *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpEffectsGroupsDeferredShadingFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUncountedDeferredShadingStagePtr :
    public PointerMField<DeferredShadingStage *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDEFERREDSHADINGSTAGEFIELDS_H_ */
