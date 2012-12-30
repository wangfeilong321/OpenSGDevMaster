/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: Johannes Brunen                                                  *
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


#ifndef _OSGMATERIALCHUNKOVERRIDEGROUPFIELDS_H_
#define _OSGMATERIALCHUNKOVERRIDEGROUPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class MaterialChunkOverrideGroup;

OSG_GEN_CONTAINERPTR(MaterialChunkOverrideGroup);
/*! \ingroup GrpGroupMiscFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<MaterialChunkOverrideGroup *, nsOSG> :
    public FieldTraitsFCPtrBase<MaterialChunkOverrideGroup *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<MaterialChunkOverrideGroup *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMaterialChunkOverrideGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMaterialChunkOverrideGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMaterialChunkOverrideGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMaterialChunkOverrideGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMaterialChunkOverrideGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMaterialChunkOverrideGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMaterialChunkOverrideGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMaterialChunkOverrideGroupPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<MaterialChunkOverrideGroup *,
                      RecordedRefCountPolicy, nsOSG  > SFRecMaterialChunkOverrideGroupPtr;
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<MaterialChunkOverrideGroup *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecMaterialChunkOverrideGroupPtr;
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<MaterialChunkOverrideGroup *,
                      WeakRefCountPolicy, nsOSG      > SFWeakMaterialChunkOverrideGroupPtr;
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<MaterialChunkOverrideGroup *,
                      NoRefCountPolicy, nsOSG        > SFUncountedMaterialChunkOverrideGroupPtr;


/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<MaterialChunkOverrideGroup *,
                      RecordedRefCountPolicy, nsOSG  > MFRecMaterialChunkOverrideGroupPtr;
/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<MaterialChunkOverrideGroup *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecMaterialChunkOverrideGroupPtr;
/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<MaterialChunkOverrideGroup *,
                      WeakRefCountPolicy, nsOSG      > MFWeakMaterialChunkOverrideGroupPtr;
/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<MaterialChunkOverrideGroup *,
                      NoRefCountPolicy, nsOSG        > MFUncountedMaterialChunkOverrideGroupPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecMaterialChunkOverrideGroupPtr : 
    public PointerSField<MaterialChunkOverrideGroup *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecMaterialChunkOverrideGroupPtr : 
    public PointerSField<MaterialChunkOverrideGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakMaterialChunkOverrideGroupPtr :
    public PointerSField<MaterialChunkOverrideGroup *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedMaterialChunkOverrideGroupPtr :
    public PointerSField<MaterialChunkOverrideGroup *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecMaterialChunkOverrideGroupPtr :
    public PointerMField<MaterialChunkOverrideGroup *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecMaterialChunkOverrideGroupPtr :
    public PointerMField<MaterialChunkOverrideGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakMaterialChunkOverrideGroupPtr :
    public PointerMField<MaterialChunkOverrideGroup *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedMaterialChunkOverrideGroupPtr :
    public PointerMField<MaterialChunkOverrideGroup *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMATERIALCHUNKOVERRIDEGROUPFIELDS_H_ */
