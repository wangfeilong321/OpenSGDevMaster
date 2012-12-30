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


#ifndef _OSGSKINNINGALGORITHMFIELDS_H_
#define _OSGSKINNINGALGORITHMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class SkinningAlgorithm;

OSG_GEN_CONTAINERPTR(SkinningAlgorithm);
/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<SkinningAlgorithm *, nsOSG> :
    public FieldTraitsFCPtrBase<SkinningAlgorithm *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<SkinningAlgorithm *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSkinningAlgorithmPtr"; 
}


/*! \ingroup GrpDynamicsFieldTraits
 */
template <>
struct FieldTraits<SkinningAlgorithm *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<SkinningAlgorithm *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<SkinningAlgorithm *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildSkinningAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkinningAlgorithm *, nsOSG + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildSkinningAlgorithmPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkinningAlgorithm *,
                      RecordedRefCountPolicy, nsOSG  > SFRecSkinningAlgorithmPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkinningAlgorithm *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecSkinningAlgorithmPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkinningAlgorithm *,
                      WeakRefCountPolicy, nsOSG      > SFWeakSkinningAlgorithmPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkinningAlgorithm *,
                      NoRefCountPolicy, nsOSG        > SFUncountedSkinningAlgorithmPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkinningAlgorithm *,
                      RecordedRefCountPolicy, nsOSG  > MFRecSkinningAlgorithmPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkinningAlgorithm *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecSkinningAlgorithmPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkinningAlgorithm *,
                      WeakRefCountPolicy, nsOSG      > MFWeakSkinningAlgorithmPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkinningAlgorithm *,
                      NoRefCountPolicy, nsOSG        > MFUncountedSkinningAlgorithmPtr;



/*! \ingroup GrpDynamicsFieldSFields */
typedef ChildPointerSField<
          SkinningAlgorithm *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > SFUnrecChildSkinningAlgorithmPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef ChildPointerMField<
          SkinningAlgorithm *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > MFUnrecChildSkinningAlgorithmPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecSkinningAlgorithmPtr : 
    public PointerSField<SkinningAlgorithm *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecSkinningAlgorithmPtr : 
    public PointerSField<SkinningAlgorithm *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakSkinningAlgorithmPtr :
    public PointerSField<SkinningAlgorithm *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedSkinningAlgorithmPtr :
    public PointerSField<SkinningAlgorithm *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecSkinningAlgorithmPtr :
    public PointerMField<SkinningAlgorithm *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecSkinningAlgorithmPtr :
    public PointerMField<SkinningAlgorithm *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakSkinningAlgorithmPtr :
    public PointerMField<SkinningAlgorithm *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedSkinningAlgorithmPtr :
    public PointerMField<SkinningAlgorithm *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecChildSkinningAlgorithmPtr :
    public ChildPointerSField<
        SkinningAlgorithm *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecChildSkinningAlgorithmPtr :
    public ChildPointerMField<
        SkinningAlgorithm *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKINNINGALGORITHMFIELDS_H_ */
