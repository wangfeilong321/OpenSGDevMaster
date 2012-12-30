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


#ifndef _OSGSHADERVARIABLEVEC2FFIELDS_H_
#define _OSGSHADERVARIABLEVEC2FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ShaderVariableVec2f;

OSG_GEN_CONTAINERPTR(ShaderVariableVec2f);
/*! \ingroup GrpSystemShaderFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderVariableVec2f *, nsOSG> :
    public FieldTraitsFCPtrBase<ShaderVariableVec2f *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ShaderVariableVec2f *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderVariableVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderVariableVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderVariableVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderVariableVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderVariableVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderVariableVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderVariableVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec2f *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderVariableVec2fPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec2f *,
                      RecordedRefCountPolicy, nsOSG  > SFRecShaderVariableVec2fPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec2f *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecShaderVariableVec2fPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec2f *,
                      WeakRefCountPolicy, nsOSG      > SFWeakShaderVariableVec2fPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec2f *,
                      NoRefCountPolicy, nsOSG        > SFUncountedShaderVariableVec2fPtr;


/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec2f *,
                      RecordedRefCountPolicy, nsOSG  > MFRecShaderVariableVec2fPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec2f *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecShaderVariableVec2fPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec2f *,
                      WeakRefCountPolicy, nsOSG      > MFWeakShaderVariableVec2fPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec2f *,
                      NoRefCountPolicy, nsOSG        > MFUncountedShaderVariableVec2fPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderVariableVec2fPtr : 
    public PointerSField<ShaderVariableVec2f *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderVariableVec2fPtr : 
    public PointerSField<ShaderVariableVec2f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderVariableVec2fPtr :
    public PointerSField<ShaderVariableVec2f *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderVariableVec2fPtr :
    public PointerSField<ShaderVariableVec2f *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderVariableVec2fPtr :
    public PointerMField<ShaderVariableVec2f *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderVariableVec2fPtr :
    public PointerMField<ShaderVariableVec2f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderVariableVec2fPtr :
    public PointerMField<ShaderVariableVec2f *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderVariableVec2fPtr :
    public PointerMField<ShaderVariableVec2f *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERVARIABLEVEC2FFIELDS_H_ */
