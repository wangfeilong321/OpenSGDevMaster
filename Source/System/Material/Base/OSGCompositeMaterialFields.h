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


#ifndef _OSGCOMPOSITEMATERIALFIELDS_H_
#define _OSGCOMPOSITEMATERIALFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CompositeMaterial;

OSG_GEN_CONTAINERPTR(CompositeMaterial);
/*! \ingroup GrpSystemMaterialFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<CompositeMaterial *, nsOSG> :
    public FieldTraitsFCPtrBase<CompositeMaterial *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CompositeMaterial *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCompositeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCompositeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCompositeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCompositeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCompositeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCompositeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCompositeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<CompositeMaterial *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCompositeMaterialPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<CompositeMaterial *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCompositeMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<CompositeMaterial *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCompositeMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<CompositeMaterial *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCompositeMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldSFields */
typedef PointerSField<CompositeMaterial *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCompositeMaterialPtr;


/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<CompositeMaterial *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCompositeMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<CompositeMaterial *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCompositeMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<CompositeMaterial *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCompositeMaterialPtr;
/*! \ingroup GrpSystemMaterialFieldMFields */
typedef PointerMField<CompositeMaterial *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCompositeMaterialPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecCompositeMaterialPtr : 
    public PointerSField<CompositeMaterial *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecCompositeMaterialPtr : 
    public PointerSField<CompositeMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakCompositeMaterialPtr :
    public PointerSField<CompositeMaterial *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedCompositeMaterialPtr :
    public PointerSField<CompositeMaterial *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecCompositeMaterialPtr :
    public PointerMField<CompositeMaterial *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecCompositeMaterialPtr :
    public PointerMField<CompositeMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakCompositeMaterialPtr :
    public PointerMField<CompositeMaterial *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemMaterialFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedCompositeMaterialPtr :
    public PointerMField<CompositeMaterial *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMPOSITEMATERIALFIELDS_H_ */
