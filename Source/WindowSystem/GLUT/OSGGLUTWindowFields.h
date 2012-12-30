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


#ifndef _OSGGLUTWINDOWFIELDS_H_
#define _OSGGLUTWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowGLUTDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class GLUTWindow;

OSG_GEN_CONTAINERPTR(GLUTWindow);
/*! \ingroup GrpWindowGLUTFieldTraits
    \ingroup GrpLibOSGWindowGLUT
 */
template <>
struct FieldTraits<GLUTWindow *, nsOSG> :
    public FieldTraitsFCPtrBase<GLUTWindow *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<GLUTWindow *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOWGLUT_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGLUTWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGLUTWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGLUTWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGLUTWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGLUTWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGLUTWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGLUTWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<GLUTWindow *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGLUTWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowGLUTFieldSFields */
typedef PointerSField<GLUTWindow *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGLUTWindowPtr;
/*! \ingroup GrpWindowGLUTFieldSFields */
typedef PointerSField<GLUTWindow *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGLUTWindowPtr;
/*! \ingroup GrpWindowGLUTFieldSFields */
typedef PointerSField<GLUTWindow *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGLUTWindowPtr;
/*! \ingroup GrpWindowGLUTFieldSFields */
typedef PointerSField<GLUTWindow *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGLUTWindowPtr;


/*! \ingroup GrpWindowGLUTFieldMFields */
typedef PointerMField<GLUTWindow *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGLUTWindowPtr;
/*! \ingroup GrpWindowGLUTFieldMFields */
typedef PointerMField<GLUTWindow *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGLUTWindowPtr;
/*! \ingroup GrpWindowGLUTFieldMFields */
typedef PointerMField<GLUTWindow *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGLUTWindowPtr;
/*! \ingroup GrpWindowGLUTFieldMFields */
typedef PointerMField<GLUTWindow *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGLUTWindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowGLUTFieldSFields \ingroup GrpLibOSGWindowGLUT */
struct SFRecGLUTWindowPtr : 
    public PointerSField<GLUTWindow *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowGLUTFieldSFields \ingroup GrpLibOSGWindowGLUT */
struct SFUnrecGLUTWindowPtr : 
    public PointerSField<GLUTWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowGLUTFieldSFields \ingroup GrpLibOSGWindowGLUT */
struct SFWeakGLUTWindowPtr :
    public PointerSField<GLUTWindow *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowGLUTFieldSFields \ingroup GrpLibOSGWindowGLUT */
struct SFUncountedGLUTWindowPtr :
    public PointerSField<GLUTWindow *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowGLUTFieldMFields \ingroup GrpLibOSGWindowGLUT */
struct MFRecGLUTWindowPtr :
    public PointerMField<GLUTWindow *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowGLUTFieldMFields \ingroup GrpLibOSGWindowGLUT */
struct MFUnrecGLUTWindowPtr :
    public PointerMField<GLUTWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowGLUTFieldMFields \ingroup GrpLibOSGWindowGLUT */
struct MFWeakGLUTWindowPtr :
    public PointerMField<GLUTWindow *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowGLUTFieldMFields \ingroup GrpLibOSGWindowGLUT */
struct MFUncountedGLUTWindowPtr :
    public PointerMField<GLUTWindow *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGLUTWINDOWFIELDS_H_ */
