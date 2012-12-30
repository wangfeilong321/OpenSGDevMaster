/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGROTATIONTRANSFORMATIONELEMENTFIELDS_H_
#define _OSGROTATIONTRANSFORMATIONELEMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class RotationTransformationElement;

OSG_GEN_CONTAINERPTR(RotationTransformationElement);
/*! \ingroup GrpGroupFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<RotationTransformationElement *, nsOSG> :
    public FieldTraitsFCPtrBase<RotationTransformationElement *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<RotationTransformationElement *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRotationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRotationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRotationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRotationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRotationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRotationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRotationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<RotationTransformationElement *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRotationTransformationElementPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<RotationTransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > SFRecRotationTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<RotationTransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecRotationTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<RotationTransformationElement *,
                      WeakRefCountPolicy, nsOSG      > SFWeakRotationTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<RotationTransformationElement *,
                      NoRefCountPolicy, nsOSG        > SFUncountedRotationTransformationElementPtr;


/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<RotationTransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > MFRecRotationTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<RotationTransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecRotationTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<RotationTransformationElement *,
                      WeakRefCountPolicy, nsOSG      > MFWeakRotationTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<RotationTransformationElement *,
                      NoRefCountPolicy, nsOSG        > MFUncountedRotationTransformationElementPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecRotationTransformationElementPtr : 
    public PointerSField<RotationTransformationElement *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecRotationTransformationElementPtr : 
    public PointerSField<RotationTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakRotationTransformationElementPtr :
    public PointerSField<RotationTransformationElement *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedRotationTransformationElementPtr :
    public PointerSField<RotationTransformationElement *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecRotationTransformationElementPtr :
    public PointerMField<RotationTransformationElement *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecRotationTransformationElementPtr :
    public PointerMField<RotationTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakRotationTransformationElementPtr :
    public PointerMField<RotationTransformationElement *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedRotationTransformationElementPtr :
    public PointerMField<RotationTransformationElement *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGROTATIONTRANSFORMATIONELEMENTFIELDS_H_ */
