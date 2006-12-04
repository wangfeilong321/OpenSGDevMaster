/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class Image!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ImageBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ImageBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ImageBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Image::_sfDimension field.

inline
Int32 &ImageBase::editDimension(void)
{
    editSField(DimensionFieldMask);

    return _sfDimension.getValue();
}

//! Get the value of the Image::_sfDimension field.
inline
const Int32 &ImageBase::getDimension(void) const
{
    return _sfDimension.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getDimension      (void)
{
    return this->editDimension      ();
}
#endif

//! Set the value of the Image::_sfDimension field.
inline
void ImageBase::setDimension(const Int32 &value)
{
    editSField(DimensionFieldMask);

    _sfDimension.setValue(value);
}
//! Get the value of the Image::_sfWidth field.

inline
Int32 &ImageBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the Image::_sfWidth field.
inline
const Int32 &ImageBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getWidth          (void)
{
    return this->editWidth          ();
}
#endif

//! Set the value of the Image::_sfWidth field.
inline
void ImageBase::setWidth(const Int32 &value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the Image::_sfHeight field.

inline
Int32 &ImageBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the Image::_sfHeight field.
inline
const Int32 &ImageBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getHeight         (void)
{
    return this->editHeight         ();
}
#endif

//! Set the value of the Image::_sfHeight field.
inline
void ImageBase::setHeight(const Int32 &value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}
//! Get the value of the Image::_sfDepth field.

inline
Int32 &ImageBase::editDepth(void)
{
    editSField(DepthFieldMask);

    return _sfDepth.getValue();
}

//! Get the value of the Image::_sfDepth field.
inline
const Int32 &ImageBase::getDepth(void) const
{
    return _sfDepth.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getDepth          (void)
{
    return this->editDepth          ();
}
#endif

//! Set the value of the Image::_sfDepth field.
inline
void ImageBase::setDepth(const Int32 &value)
{
    editSField(DepthFieldMask);

    _sfDepth.setValue(value);
}
//! Get the value of the Image::_sfBpp field.

inline
Int32 &ImageBase::editBpp(void)
{
    editSField(BppFieldMask);

    return _sfBpp.getValue();
}

//! Get the value of the Image::_sfBpp field.
inline
const Int32 &ImageBase::getBpp(void) const
{
    return _sfBpp.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getBpp            (void)
{
    return this->editBpp            ();
}
#endif

//! Set the value of the Image::_sfBpp field.
inline
void ImageBase::setBpp(const Int32 &value)
{
    editSField(BppFieldMask);

    _sfBpp.setValue(value);
}
//! Get the value of the Image::_sfMipMapCount field.

inline
Int32 &ImageBase::editMipMapCount(void)
{
    editSField(MipMapCountFieldMask);

    return _sfMipMapCount.getValue();
}

//! Get the value of the Image::_sfMipMapCount field.
inline
const Int32 &ImageBase::getMipMapCount(void) const
{
    return _sfMipMapCount.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getMipMapCount    (void)
{
    return this->editMipMapCount    ();
}
#endif

//! Set the value of the Image::_sfMipMapCount field.
inline
void ImageBase::setMipMapCount(const Int32 &value)
{
    editSField(MipMapCountFieldMask);

    _sfMipMapCount.setValue(value);
}
//! Get the value of the Image::_sfFrameCount field.

inline
Int32 &ImageBase::editFrameCount(void)
{
    editSField(FrameCountFieldMask);

    return _sfFrameCount.getValue();
}

//! Get the value of the Image::_sfFrameCount field.
inline
const Int32 &ImageBase::getFrameCount(void) const
{
    return _sfFrameCount.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getFrameCount     (void)
{
    return this->editFrameCount     ();
}
#endif

//! Set the value of the Image::_sfFrameCount field.
inline
void ImageBase::setFrameCount(const Int32 &value)
{
    editSField(FrameCountFieldMask);

    _sfFrameCount.setValue(value);
}
//! Get the value of the Image::_sfFrameDelay field.

inline
Time &ImageBase::editFrameDelay(void)
{
    editSField(FrameDelayFieldMask);

    return _sfFrameDelay.getValue();
}

//! Get the value of the Image::_sfFrameDelay field.
inline
const Time &ImageBase::getFrameDelay(void) const
{
    return _sfFrameDelay.getValue();
}

#ifdef OSG_1_COMPAT
inline
Time                &ImageBase::getFrameDelay     (void)
{
    return this->editFrameDelay     ();
}
#endif

//! Set the value of the Image::_sfFrameDelay field.
inline
void ImageBase::setFrameDelay(const Time &value)
{
    editSField(FrameDelayFieldMask);

    _sfFrameDelay.setValue(value);
}
//! Get the value of the Image::_sfPixelFormat field.

inline
UInt32 &ImageBase::editPixelFormat(void)
{
    editSField(PixelFormatFieldMask);

    return _sfPixelFormat.getValue();
}

//! Get the value of the Image::_sfPixelFormat field.
inline
const UInt32 &ImageBase::getPixelFormat(void) const
{
    return _sfPixelFormat.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt32              &ImageBase::getPixelFormat    (void)
{
    return this->editPixelFormat    ();
}
#endif

//! Set the value of the Image::_sfPixelFormat field.
inline
void ImageBase::setPixelFormat(const UInt32 &value)
{
    editSField(PixelFormatFieldMask);

    _sfPixelFormat.setValue(value);
}
//! Get the value of the Image::_sfFrameSize field.

inline
Int32 &ImageBase::editFrameSize(void)
{
    editSField(FrameSizeFieldMask);

    return _sfFrameSize.getValue();
}

//! Get the value of the Image::_sfFrameSize field.
inline
const Int32 &ImageBase::getFrameSize(void) const
{
    return _sfFrameSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getFrameSize      (void)
{
    return this->editFrameSize      ();
}
#endif

//! Set the value of the Image::_sfFrameSize field.
inline
void ImageBase::setFrameSize(const Int32 &value)
{
    editSField(FrameSizeFieldMask);

    _sfFrameSize.setValue(value);
}
//! Get the value of the Image::_sfName field.

inline
std::string &ImageBase::editName(void)
{
    editSField(NameFieldMask);

    return _sfName.getValue();
}

//! Get the value of the Image::_sfName field.
inline
const std::string &ImageBase::getName(void) const
{
    return _sfName.getValue();
}

#ifdef OSG_1_COMPAT
inline
std::string         &ImageBase::getName           (void)
{
    return this->editName           ();
}
#endif

//! Set the value of the Image::_sfName field.
inline
void ImageBase::setName(const std::string &value)
{
    editSField(NameFieldMask);

    _sfName.setValue(value);
}
//! Get the value of the Image::_sfDataType field.

inline
Int32 &ImageBase::editDataType(void)
{
    editSField(DataTypeFieldMask);

    return _sfDataType.getValue();
}

//! Get the value of the Image::_sfDataType field.
inline
const Int32 &ImageBase::getDataType(void) const
{
    return _sfDataType.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getDataType       (void)
{
    return this->editDataType       ();
}
#endif

//! Set the value of the Image::_sfDataType field.
inline
void ImageBase::setDataType(const Int32 &value)
{
    editSField(DataTypeFieldMask);

    _sfDataType.setValue(value);
}
//! Get the value of the Image::_sfComponentSize field.

inline
Int32 &ImageBase::editComponentSize(void)
{
    editSField(ComponentSizeFieldMask);

    return _sfComponentSize.getValue();
}

//! Get the value of the Image::_sfComponentSize field.
inline
const Int32 &ImageBase::getComponentSize(void) const
{
    return _sfComponentSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getComponentSize  (void)
{
    return this->editComponentSize  ();
}
#endif

//! Set the value of the Image::_sfComponentSize field.
inline
void ImageBase::setComponentSize(const Int32 &value)
{
    editSField(ComponentSizeFieldMask);

    _sfComponentSize.setValue(value);
}
//! Get the value of the Image::_sfSideCount field.

inline
Int32 &ImageBase::editSideCount(void)
{
    editSField(SideCountFieldMask);

    return _sfSideCount.getValue();
}

//! Get the value of the Image::_sfSideCount field.
inline
const Int32 &ImageBase::getSideCount(void) const
{
    return _sfSideCount.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getSideCount      (void)
{
    return this->editSideCount      ();
}
#endif

//! Set the value of the Image::_sfSideCount field.
inline
void ImageBase::setSideCount(const Int32 &value)
{
    editSField(SideCountFieldMask);

    _sfSideCount.setValue(value);
}
//! Get the value of the Image::_sfSideSize field.

inline
Int32 &ImageBase::editSideSize(void)
{
    editSField(SideSizeFieldMask);

    return _sfSideSize.getValue();
}

//! Get the value of the Image::_sfSideSize field.
inline
const Int32 &ImageBase::getSideSize(void) const
{
    return _sfSideSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32               &ImageBase::getSideSize       (void)
{
    return this->editSideSize       ();
}
#endif

//! Set the value of the Image::_sfSideSize field.
inline
void ImageBase::setSideSize(const Int32 &value)
{
    editSField(SideSizeFieldMask);

    _sfSideSize.setValue(value);
}
//! Get the value of the Image::_sfForceCompressedData field.

inline
bool &ImageBase::editForceCompressedData(void)
{
    editSField(ForceCompressedDataFieldMask);

    return _sfForceCompressedData.getValue();
}

//! Get the value of the Image::_sfForceCompressedData field.
inline
const bool &ImageBase::getForceCompressedData(void) const
{
    return _sfForceCompressedData.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &ImageBase::getForceCompressedData(void)
{
    return this->editForceCompressedData();
}
#endif

//! Set the value of the Image::_sfForceCompressedData field.
inline
void ImageBase::setForceCompressedData(const bool &value)
{
    editSField(ForceCompressedDataFieldMask);

    _sfForceCompressedData.setValue(value);
}
//! Get the value of the Image::_sfForceAlphaChannel field.

inline
bool &ImageBase::editForceAlphaChannel(void)
{
    editSField(ForceAlphaChannelFieldMask);

    return _sfForceAlphaChannel.getValue();
}

//! Get the value of the Image::_sfForceAlphaChannel field.
inline
const bool &ImageBase::getForceAlphaChannel(void) const
{
    return _sfForceAlphaChannel.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &ImageBase::getForceAlphaChannel(void)
{
    return this->editForceAlphaChannel();
}
#endif

//! Set the value of the Image::_sfForceAlphaChannel field.
inline
void ImageBase::setForceAlphaChannel(const bool &value)
{
    editSField(ForceAlphaChannelFieldMask);

    _sfForceAlphaChannel.setValue(value);
}
//! Get the value of the Image::_sfForceColorChannel field.

inline
bool &ImageBase::editForceColorChannel(void)
{
    editSField(ForceColorChannelFieldMask);

    return _sfForceColorChannel.getValue();
}

//! Get the value of the Image::_sfForceColorChannel field.
inline
const bool &ImageBase::getForceColorChannel(void) const
{
    return _sfForceColorChannel.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &ImageBase::getForceColorChannel(void)
{
    return this->editForceColorChannel();
}
#endif

//! Set the value of the Image::_sfForceColorChannel field.
inline
void ImageBase::setForceColorChannel(const bool &value)
{
    editSField(ForceColorChannelFieldMask);

    _sfForceColorChannel.setValue(value);
}
//! Get the value of the Image::_sfForceAlphaBinary field.

inline
bool &ImageBase::editForceAlphaBinary(void)
{
    editSField(ForceAlphaBinaryFieldMask);

    return _sfForceAlphaBinary.getValue();
}

//! Get the value of the Image::_sfForceAlphaBinary field.
inline
const bool &ImageBase::getForceAlphaBinary(void) const
{
    return _sfForceAlphaBinary.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &ImageBase::getForceAlphaBinary(void)
{
    return this->editForceAlphaBinary();
}
#endif

//! Set the value of the Image::_sfForceAlphaBinary field.
inline
void ImageBase::setForceAlphaBinary(const bool &value)
{
    editSField(ForceAlphaBinaryFieldMask);

    _sfForceAlphaBinary.setValue(value);
}

//! Get the value of the \a index element the Image::_mfParents field.
inline
ParentFieldContainerPtrConst ImageBase::getParents(const UInt32 index) const
{
    return _mfParents[index];
}

//! Get the Image::_mfParents field.
inline
const MFParentFieldContainerPtr &ImageBase::getParents(void) const
{
    return _mfParents;
}

//! Get the value of the \a index element the Image::_mfPixel field.
inline
const UInt8 &ImageBase::getPixel(const UInt32 index) const
{
    return _mfPixel[index];
}

inline
UInt8 &ImageBase::editPixel(const UInt32 index)
{
    editMField(PixelFieldMask, _mfPixel);

    return _mfPixel[index];
}

//! Get the Image::_mfPixel field.
inline
MFUInt8 &ImageBase::editPixel(void)
{
    editMField(PixelFieldMask, _mfPixel);

    return _mfPixel;
}

#ifdef OSG_1_COMPAT
inline
UInt8               &ImageBase::getPixel          (const UInt32 index)
{
    return this->editPixel          (index);
}

inline
MFUInt8             &ImageBase::getPixel          (void)
{
    return this->editPixel          ();
}

#endif


//! Get the Image::_mfPixel field.
inline
const MFUInt8 &ImageBase::getPixel(void) const
{
    return _mfPixel;
}

//! create a new instance of the class
inline
ImagePtr ImageBase::create(void)
{
    ImagePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<Image::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ImageBase::execSync(      ImageBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
        _mfParents.syncWith(pOther->_mfParents,
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (DimensionFieldMask & whichField))
        _sfDimension.syncWith(pOther->_sfDimension);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pOther->_sfHeight);

    if(FieldBits::NoField != (DepthFieldMask & whichField))
        _sfDepth.syncWith(pOther->_sfDepth);

    if(FieldBits::NoField != (BppFieldMask & whichField))
        _sfBpp.syncWith(pOther->_sfBpp);

    if(FieldBits::NoField != (MipMapCountFieldMask & whichField))
        _sfMipMapCount.syncWith(pOther->_sfMipMapCount);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
        _sfFrameCount.syncWith(pOther->_sfFrameCount);

    if(FieldBits::NoField != (FrameDelayFieldMask & whichField))
        _sfFrameDelay.syncWith(pOther->_sfFrameDelay);

    if(FieldBits::NoField != (PixelFormatFieldMask & whichField))
        _sfPixelFormat.syncWith(pOther->_sfPixelFormat);

    if(FieldBits::NoField != (PixelFieldMask & whichField))
        _mfPixel.syncWith(pOther->_mfPixel,
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (FrameSizeFieldMask & whichField))
        _sfFrameSize.syncWith(pOther->_sfFrameSize);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pOther->_sfName);

    if(FieldBits::NoField != (DataTypeFieldMask & whichField))
        _sfDataType.syncWith(pOther->_sfDataType);

    if(FieldBits::NoField != (ComponentSizeFieldMask & whichField))
        _sfComponentSize.syncWith(pOther->_sfComponentSize);

    if(FieldBits::NoField != (SideCountFieldMask & whichField))
        _sfSideCount.syncWith(pOther->_sfSideCount);

    if(FieldBits::NoField != (SideSizeFieldMask & whichField))
        _sfSideSize.syncWith(pOther->_sfSideSize);

    if(FieldBits::NoField != (ForceCompressedDataFieldMask & whichField))
        _sfForceCompressedData.syncWith(pOther->_sfForceCompressedData);

    if(FieldBits::NoField != (ForceAlphaChannelFieldMask & whichField))
        _sfForceAlphaChannel.syncWith(pOther->_sfForceAlphaChannel);

    if(FieldBits::NoField != (ForceColorChannelFieldMask & whichField))
        _sfForceColorChannel.syncWith(pOther->_sfForceColorChannel);

    if(FieldBits::NoField != (ForceAlphaBinaryFieldMask & whichField))
        _sfForceAlphaBinary.syncWith(pOther->_sfForceAlphaBinary);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ImageBase::execSync (      ImageBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
        _mfParents.syncWith(pFrom->_mfParents,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DimensionFieldMask & whichField))
        _sfDimension.syncWith(pFrom->_sfDimension);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);

    if(FieldBits::NoField != (DepthFieldMask & whichField))
        _sfDepth.syncWith(pFrom->_sfDepth);

    if(FieldBits::NoField != (BppFieldMask & whichField))
        _sfBpp.syncWith(pFrom->_sfBpp);

    if(FieldBits::NoField != (MipMapCountFieldMask & whichField))
        _sfMipMapCount.syncWith(pFrom->_sfMipMapCount);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
        _sfFrameCount.syncWith(pFrom->_sfFrameCount);

    if(FieldBits::NoField != (FrameDelayFieldMask & whichField))
        _sfFrameDelay.syncWith(pFrom->_sfFrameDelay);

    if(FieldBits::NoField != (PixelFormatFieldMask & whichField))
        _sfPixelFormat.syncWith(pFrom->_sfPixelFormat);

    if(FieldBits::NoField != (PixelFieldMask & whichField))
        _mfPixel.syncWith(pFrom->_mfPixel,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FrameSizeFieldMask & whichField))
        _sfFrameSize.syncWith(pFrom->_sfFrameSize);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pFrom->_sfName);

    if(FieldBits::NoField != (DataTypeFieldMask & whichField))
        _sfDataType.syncWith(pFrom->_sfDataType);

    if(FieldBits::NoField != (ComponentSizeFieldMask & whichField))
        _sfComponentSize.syncWith(pFrom->_sfComponentSize);

    if(FieldBits::NoField != (SideCountFieldMask & whichField))
        _sfSideCount.syncWith(pFrom->_sfSideCount);

    if(FieldBits::NoField != (SideSizeFieldMask & whichField))
        _sfSideSize.syncWith(pFrom->_sfSideSize);

    if(FieldBits::NoField != (ForceCompressedDataFieldMask & whichField))
        _sfForceCompressedData.syncWith(pFrom->_sfForceCompressedData);

    if(FieldBits::NoField != (ForceAlphaChannelFieldMask & whichField))
        _sfForceAlphaChannel.syncWith(pFrom->_sfForceAlphaChannel);

    if(FieldBits::NoField != (ForceColorChannelFieldMask & whichField))
        _sfForceColorChannel.syncWith(pFrom->_sfForceColorChannel);

    if(FieldBits::NoField != (ForceAlphaBinaryFieldMask & whichField))
        _sfForceAlphaBinary.syncWith(pFrom->_sfForceAlphaBinary);
}
#endif

#if 0
inline
void ImageBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.beginEdit(uiAspect, uiContainerSize);
    }

    if(FieldBits::NoField != (PixelFieldMask & whichField))
    {
        _mfPixel.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *ImageBase::getClassname(void)
{
    return "Image";
}

typedef PointerBuilder<Image>::ObjPtr          ImagePtr;
typedef PointerBuilder<Image>::ObjPtrConst     ImagePtrConst;
typedef PointerBuilder<Image>::ObjConstPtr     ImageConstPtr;

typedef PointerBuilder<Image>::ObjPtrArg       ImagePtrArg;
typedef PointerBuilder<Image>::ObjConstPtrArg  ImageConstPtrArg;
typedef PointerBuilder<Image>::ObjPtrConstArg  ImagePtrConstArg;

OSG_END_NAMESPACE

#define OSGIMAGEBASE_INLINE_CVSID "@(#)$Id$"
