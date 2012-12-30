/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class GeoReferenceAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &GeoReferenceAttachmentBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GeoReferenceAttachmentBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GeoReferenceAttachmentBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the GeoReferenceAttachment::_sfDatum field.

inline
UInt32 &GeoReferenceAttachmentBase::editDatum(void)
{
    editSField(DatumFieldMask);

    return _sfDatum.getValue();
}

//! Get the value of the GeoReferenceAttachment::_sfDatum field.
inline
      UInt32  GeoReferenceAttachmentBase::getDatum(void) const
{
    return _sfDatum.getValue();
}

//! Set the value of the GeoReferenceAttachment::_sfDatum field.
inline
void GeoReferenceAttachmentBase::setDatum(const UInt32 value)
{
    editSField(DatumFieldMask);

    _sfDatum.setValue(value);
}
//! Get the value of the GeoReferenceAttachment::_sfEllipsoidAxis field.

inline
Vec2f &GeoReferenceAttachmentBase::editEllipsoidAxis(void)
{
    editSField(EllipsoidAxisFieldMask);

    return _sfEllipsoidAxis.getValue();
}

//! Get the value of the GeoReferenceAttachment::_sfEllipsoidAxis field.
inline
const Vec2f &GeoReferenceAttachmentBase::getEllipsoidAxis(void) const
{
    return _sfEllipsoidAxis.getValue();
}

//! Set the value of the GeoReferenceAttachment::_sfEllipsoidAxis field.
inline
void GeoReferenceAttachmentBase::setEllipsoidAxis(const Vec2f &value)
{
    editSField(EllipsoidAxisFieldMask);

    _sfEllipsoidAxis.setValue(value);
}
//! Get the value of the GeoReferenceAttachment::_sfOrigin field.

inline
Vec2f &GeoReferenceAttachmentBase::editOrigin(void)
{
    editSField(OriginFieldMask);

    return _sfOrigin.getValue();
}

//! Get the value of the GeoReferenceAttachment::_sfOrigin field.
inline
const Vec2f &GeoReferenceAttachmentBase::getOrigin(void) const
{
    return _sfOrigin.getValue();
}

//! Set the value of the GeoReferenceAttachment::_sfOrigin field.
inline
void GeoReferenceAttachmentBase::setOrigin(const Vec2f &value)
{
    editSField(OriginFieldMask);

    _sfOrigin.setValue(value);
}
//! Get the value of the GeoReferenceAttachment::_sfPixelSize field.

inline
Vec2f &GeoReferenceAttachmentBase::editPixelSize(void)
{
    editSField(PixelSizeFieldMask);

    return _sfPixelSize.getValue();
}

//! Get the value of the GeoReferenceAttachment::_sfPixelSize field.
inline
const Vec2f &GeoReferenceAttachmentBase::getPixelSize(void) const
{
    return _sfPixelSize.getValue();
}

//! Set the value of the GeoReferenceAttachment::_sfPixelSize field.
inline
void GeoReferenceAttachmentBase::setPixelSize(const Vec2f &value)
{
    editSField(PixelSizeFieldMask);

    _sfPixelSize.setValue(value);
}
//! Get the value of the GeoReferenceAttachment::_sfNoDataValue field.

inline
Real64 &GeoReferenceAttachmentBase::editNoDataValue(void)
{
    editSField(NoDataValueFieldMask);

    return _sfNoDataValue.getValue();
}

//! Get the value of the GeoReferenceAttachment::_sfNoDataValue field.
inline
      Real64  GeoReferenceAttachmentBase::getNoDataValue(void) const
{
    return _sfNoDataValue.getValue();
}

//! Set the value of the GeoReferenceAttachment::_sfNoDataValue field.
inline
void GeoReferenceAttachmentBase::setNoDataValue(const Real64 value)
{
    editSField(NoDataValueFieldMask);

    _sfNoDataValue.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void GeoReferenceAttachmentBase::execSync (      GeoReferenceAttachmentBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DatumFieldMask & whichField))
        _sfDatum.syncWith(pFrom->_sfDatum);

    if(FieldBits::NoField != (EllipsoidAxisFieldMask & whichField))
        _sfEllipsoidAxis.syncWith(pFrom->_sfEllipsoidAxis);

    if(FieldBits::NoField != (OriginFieldMask & whichField))
        _sfOrigin.syncWith(pFrom->_sfOrigin);

    if(FieldBits::NoField != (PixelSizeFieldMask & whichField))
        _sfPixelSize.syncWith(pFrom->_sfPixelSize);

    if(FieldBits::NoField != (NoDataValueFieldMask & whichField))
        _sfNoDataValue.syncWith(pFrom->_sfNoDataValue);
}
#endif


inline
const Char8 *GeoReferenceAttachmentBase::getClassname(void)
{
    return "GeoReferenceAttachment";
}
OSG_GEN_CONTAINERPTR(GeoReferenceAttachment);

OSG_END_NAMESPACE

