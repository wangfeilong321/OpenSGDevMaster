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


#ifndef _OSGTRANSLATIONTRANSFORMATIONELEMENTFIELDS_H_
#define _OSGTRANSLATIONTRANSFORMATIONELEMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TranslationTransformationElement;

OSG_GEN_CONTAINERPTR(TranslationTransformationElement);
/*! \ingroup GrpGroupFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<TranslationTransformationElement *, nsOSG> :
    public FieldTraitsFCPtrBase<TranslationTransformationElement *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TranslationTransformationElement *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTranslationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTranslationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTranslationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTranslationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTranslationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTranslationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTranslationTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TranslationTransformationElement *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTranslationTransformationElementPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TranslationTransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTranslationTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TranslationTransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTranslationTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TranslationTransformationElement *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTranslationTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TranslationTransformationElement *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTranslationTransformationElementPtr;


/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TranslationTransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTranslationTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TranslationTransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTranslationTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TranslationTransformationElement *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTranslationTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TranslationTransformationElement *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTranslationTransformationElementPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecTranslationTransformationElementPtr : 
    public PointerSField<TranslationTransformationElement *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecTranslationTransformationElementPtr : 
    public PointerSField<TranslationTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakTranslationTransformationElementPtr :
    public PointerSField<TranslationTransformationElement *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedTranslationTransformationElementPtr :
    public PointerSField<TranslationTransformationElement *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecTranslationTransformationElementPtr :
    public PointerMField<TranslationTransformationElement *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecTranslationTransformationElementPtr :
    public PointerMField<TranslationTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakTranslationTransformationElementPtr :
    public PointerMField<TranslationTransformationElement *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedTranslationTransformationElementPtr :
    public PointerMField<TranslationTransformationElement *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTRANSLATIONTRANSFORMATIONELEMENTFIELDS_H_ */
