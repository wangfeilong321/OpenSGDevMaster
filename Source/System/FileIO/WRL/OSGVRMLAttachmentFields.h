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


#ifndef _OSGVRMLATTACHMENTFIELDS_H_
#define _OSGVRMLATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGFileIODef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class VRMLAttachment;

OSG_GEN_CONTAINERPTR(VRMLAttachment);
/*! \ingroup GrpFileIOWRLFieldTraits
    \ingroup GrpLibOSGFileIO
 */
template <>
struct FieldTraits<VRMLAttachment *, nsOSG> :
    public FieldTraitsFCPtrBase<VRMLAttachment *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<VRMLAttachment *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_FILEIO_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecVRMLAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecVRMLAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakVRMLAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdVRMLAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecVRMLAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecVRMLAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakVRMLAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<VRMLAttachment *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdVRMLAttachmentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpFileIOWRLFieldSFields */
typedef PointerSField<VRMLAttachment *,
                      RecordedRefCountPolicy, nsOSG  > SFRecVRMLAttachmentPtr;
/*! \ingroup GrpFileIOWRLFieldSFields */
typedef PointerSField<VRMLAttachment *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecVRMLAttachmentPtr;
/*! \ingroup GrpFileIOWRLFieldSFields */
typedef PointerSField<VRMLAttachment *,
                      WeakRefCountPolicy, nsOSG      > SFWeakVRMLAttachmentPtr;
/*! \ingroup GrpFileIOWRLFieldSFields */
typedef PointerSField<VRMLAttachment *,
                      NoRefCountPolicy, nsOSG        > SFUncountedVRMLAttachmentPtr;


/*! \ingroup GrpFileIOWRLFieldMFields */
typedef PointerMField<VRMLAttachment *,
                      RecordedRefCountPolicy, nsOSG  > MFRecVRMLAttachmentPtr;
/*! \ingroup GrpFileIOWRLFieldMFields */
typedef PointerMField<VRMLAttachment *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecVRMLAttachmentPtr;
/*! \ingroup GrpFileIOWRLFieldMFields */
typedef PointerMField<VRMLAttachment *,
                      WeakRefCountPolicy, nsOSG      > MFWeakVRMLAttachmentPtr;
/*! \ingroup GrpFileIOWRLFieldMFields */
typedef PointerMField<VRMLAttachment *,
                      NoRefCountPolicy, nsOSG        > MFUncountedVRMLAttachmentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpFileIOWRLFieldSFields \ingroup GrpLibOSGFileIO */
struct SFRecVRMLAttachmentPtr : 
    public PointerSField<VRMLAttachment *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpFileIOWRLFieldSFields \ingroup GrpLibOSGFileIO */
struct SFUnrecVRMLAttachmentPtr : 
    public PointerSField<VRMLAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpFileIOWRLFieldSFields \ingroup GrpLibOSGFileIO */
struct SFWeakVRMLAttachmentPtr :
    public PointerSField<VRMLAttachment *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpFileIOWRLFieldSFields \ingroup GrpLibOSGFileIO */
struct SFUncountedVRMLAttachmentPtr :
    public PointerSField<VRMLAttachment *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpFileIOWRLFieldMFields \ingroup GrpLibOSGFileIO */
struct MFRecVRMLAttachmentPtr :
    public PointerMField<VRMLAttachment *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpFileIOWRLFieldMFields \ingroup GrpLibOSGFileIO */
struct MFUnrecVRMLAttachmentPtr :
    public PointerMField<VRMLAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpFileIOWRLFieldMFields \ingroup GrpLibOSGFileIO */
struct MFWeakVRMLAttachmentPtr :
    public PointerMField<VRMLAttachment *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpFileIOWRLFieldMFields \ingroup GrpLibOSGFileIO */
struct MFUncountedVRMLAttachmentPtr :
    public PointerMField<VRMLAttachment *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGVRMLATTACHMENTFIELDS_H_ */
