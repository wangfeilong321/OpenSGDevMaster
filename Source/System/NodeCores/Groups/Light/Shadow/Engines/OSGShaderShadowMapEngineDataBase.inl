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
 **     class ShaderShadowMapEngineData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &ShaderShadowMapEngineDataBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderShadowMapEngineDataBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderShadowMapEngineDataBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the ShaderShadowMapEngineData::_sfShadowTexChunk field.
inline
TextureObjChunk * ShaderShadowMapEngineDataBase::getShadowTexChunk(void) const
{
    return _sfShadowTexChunk.getValue();
}

//! Set the value of the ShaderShadowMapEngineData::_sfShadowTexChunk field.
inline
void ShaderShadowMapEngineDataBase::setShadowTexChunk(TextureObjChunk * const value)
{
    editSField(ShadowTexChunkFieldMask);

    _sfShadowTexChunk.setValue(value);
}

//! Get the value of the ShaderShadowMapEngineData::_sfShadowTexImage field.
inline
Image * ShaderShadowMapEngineDataBase::getShadowTexImage(void) const
{
    return _sfShadowTexImage.getValue();
}

//! Set the value of the ShaderShadowMapEngineData::_sfShadowTexImage field.
inline
void ShaderShadowMapEngineDataBase::setShadowTexImage(Image * const value)
{
    editSField(ShadowTexImageFieldMask);

    _sfShadowTexImage.setValue(value);
}

//! Get the value of the ShaderShadowMapEngineData::_sfBackground field.
inline
Background * ShaderShadowMapEngineDataBase::getBackground(void) const
{
    return _sfBackground.getValue();
}

//! Set the value of the ShaderShadowMapEngineData::_sfBackground field.
inline
void ShaderShadowMapEngineDataBase::setBackground(Background * const value)
{
    editSField(BackgroundFieldMask);

    _sfBackground.setValue(value);
}

//! Get the value of the \a index element the ShaderShadowMapEngineData::_mfRenderTargets field.
inline
FrameBufferObject * ShaderShadowMapEngineDataBase::getRenderTargets(const UInt32 index) const
{
    return _mfRenderTargets[index];
}

//! Get the value of the \a index element the ShaderShadowMapEngineData::_mfShadowTexBuffers field.
inline
TextureBuffer * ShaderShadowMapEngineDataBase::getShadowTexBuffers(const UInt32 index) const
{
    return _mfShadowTexBuffers[index];
}

//! Get the value of the \a index element the ShaderShadowMapEngineData::_mfLightPassMaterials field.
inline
ChunkMaterial * ShaderShadowMapEngineDataBase::getLightPassMaterials(const UInt32 index) const
{
    return _mfLightPassMaterials[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderShadowMapEngineDataBase::execSync (      ShaderShadowMapEngineDataBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RenderTargetsFieldMask & whichField))
        _mfRenderTargets.syncWith(pFrom->_mfRenderTargets,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ShadowTexBuffersFieldMask & whichField))
        _mfShadowTexBuffers.syncWith(pFrom->_mfShadowTexBuffers,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ShadowTexChunkFieldMask & whichField))
        _sfShadowTexChunk.syncWith(pFrom->_sfShadowTexChunk);

    if(FieldBits::NoField != (ShadowTexImageFieldMask & whichField))
        _sfShadowTexImage.syncWith(pFrom->_sfShadowTexImage);

    if(FieldBits::NoField != (LightPassMaterialsFieldMask & whichField))
        _mfLightPassMaterials.syncWith(pFrom->_mfLightPassMaterials,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pFrom->_sfBackground);
}
#endif


inline
const Char8 *ShaderShadowMapEngineDataBase::getClassname(void)
{
    return "ShaderShadowMapEngineData";
}
OSG_GEN_CONTAINERPTR(ShaderShadowMapEngineData);

OSG_END_NAMESPACE

