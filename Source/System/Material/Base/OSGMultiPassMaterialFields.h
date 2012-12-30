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


#ifndef _OSGMULTIPASSMATERIALFIELDS_H_
#define _OSGMULTIPASSMATERIALFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class MultiPassMaterial;

OSG_GEN_CONTAINERPTR(MultiPassMaterial);
/*! \ingroup GrpSystemMaterialFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<MultiPassMaterial *, nsOSG> :
    public FieldTraitsFCPtrBase<MultiPassMaterial *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<MultiPassMaterial *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMultiPassMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMultiPassMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMultiPassMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMultiPassMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMultiPassMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMultiPassMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMultiPassMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPassMaterial *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMultiPassMaterialPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<MultiPassMaterial *,
                      RecordedRefCountPolicy, nsOSG  > SFRecMultiPassMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<MultiPassMaterial *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecMultiPassMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<MultiPassMaterial *,
                      WeakRefCountPolicy, nsOSG      > SFWeakMultiPassMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<MultiPassMaterial *,
                      NoRefCountPolicy, nsOSG        > SFUncountedMultiPassMaterialPtr;


/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<MultiPassMaterial *,
                      RecordedRefCountPolicy, nsOSG  > MFRecMultiPassMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<MultiPassMaterial *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecMultiPassMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<MultiPassMaterial *,
                      WeakRefCountPolicy, nsOSG      > MFWeakMultiPassMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<MultiPassMaterial *,
                      NoRefCountPolicy, nsOSG        > MFUncountedMultiPassMaterialPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecMultiPassMaterialPtr : 
    public PointerSField<MultiPassMaterial *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecMultiPassMaterialPtr : 
    public PointerSField<MultiPassMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakMultiPassMaterialPtr :
    public PointerSField<MultiPassMaterial *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedMultiPassMaterialPtr :
    public PointerSField<MultiPassMaterial *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecMultiPassMaterialPtr :
    public PointerMField<MultiPassMaterial *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecMultiPassMaterialPtr :
    public PointerMField<MultiPassMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakMultiPassMaterialPtr :
    public PointerMField<MultiPassMaterial *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedMultiPassMaterialPtr :
    public PointerMField<MultiPassMaterial *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMULTIPASSMATERIALFIELDS_H_ */
