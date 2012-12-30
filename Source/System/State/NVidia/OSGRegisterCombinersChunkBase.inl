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
 **     class RegisterCombinersChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &RegisterCombinersChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RegisterCombinersChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RegisterCombinersChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the RegisterCombinersChunk::_sfColor0 field.

inline
Color4f &RegisterCombinersChunkBase::editColor0(void)
{
    editSField(Color0FieldMask);

    return _sfColor0.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfColor0 field.
inline
const Color4f &RegisterCombinersChunkBase::getColor0(void) const
{
    return _sfColor0.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfColor0 field.
inline
void RegisterCombinersChunkBase::setColor0(const Color4f &value)
{
    editSField(Color0FieldMask);

    _sfColor0.setValue(value);
}
//! Get the value of the RegisterCombinersChunk::_sfColor1 field.

inline
Color4f &RegisterCombinersChunkBase::editColor1(void)
{
    editSField(Color1FieldMask);

    return _sfColor1.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfColor1 field.
inline
const Color4f &RegisterCombinersChunkBase::getColor1(void) const
{
    return _sfColor1.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfColor1 field.
inline
void RegisterCombinersChunkBase::setColor1(const Color4f &value)
{
    editSField(Color1FieldMask);

    _sfColor1.setValue(value);
}
//! Get the value of the RegisterCombinersChunk::_sfColorSumClamp field.

inline
bool &RegisterCombinersChunkBase::editColorSumClamp(void)
{
    editSField(ColorSumClampFieldMask);

    return _sfColorSumClamp.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfColorSumClamp field.
inline
      bool  RegisterCombinersChunkBase::getColorSumClamp(void) const
{
    return _sfColorSumClamp.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfColorSumClamp field.
inline
void RegisterCombinersChunkBase::setColorSumClamp(const bool value)
{
    editSField(ColorSumClampFieldMask);

    _sfColorSumClamp.setValue(value);
}
//! Get the value of the RegisterCombinersChunk::_sfPerStageConstants field.

inline
UInt8 &RegisterCombinersChunkBase::editPerStageConstants(void)
{
    editSField(PerStageConstantsFieldMask);

    return _sfPerStageConstants.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfPerStageConstants field.
inline
      UInt8  RegisterCombinersChunkBase::getPerStageConstants(void) const
{
    return _sfPerStageConstants.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfPerStageConstants field.
inline
void RegisterCombinersChunkBase::setPerStageConstants(const UInt8 value)
{
    editSField(PerStageConstantsFieldMask);

    _sfPerStageConstants.setValue(value);
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableArgb field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableArgb(const UInt32 index) const
{
    return _mfVariableArgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableArgb(const UInt32 index)
{
    editMField(VariableArgbFieldMask, _mfVariableArgb);

    return _mfVariableArgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableBrgb field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableBrgb(const UInt32 index) const
{
    return _mfVariableBrgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableBrgb(const UInt32 index)
{
    editMField(VariableBrgbFieldMask, _mfVariableBrgb);

    return _mfVariableBrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableCrgb field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableCrgb(const UInt32 index) const
{
    return _mfVariableCrgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableCrgb(const UInt32 index)
{
    editMField(VariableCrgbFieldMask, _mfVariableCrgb);

    return _mfVariableCrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableDrgb field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableDrgb(const UInt32 index) const
{
    return _mfVariableDrgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableDrgb(const UInt32 index)
{
    editMField(VariableDrgbFieldMask, _mfVariableDrgb);

    return _mfVariableDrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableAalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableAalpha(const UInt32 index) const
{
    return _mfVariableAalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableAalpha(const UInt32 index)
{
    editMField(VariableAalphaFieldMask, _mfVariableAalpha);

    return _mfVariableAalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableBalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableBalpha(const UInt32 index) const
{
    return _mfVariableBalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableBalpha(const UInt32 index)
{
    editMField(VariableBalphaFieldMask, _mfVariableBalpha);

    return _mfVariableBalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableCalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableCalpha(const UInt32 index) const
{
    return _mfVariableCalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableCalpha(const UInt32 index)
{
    editMField(VariableCalphaFieldMask, _mfVariableCalpha);

    return _mfVariableCalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableDalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableDalpha(const UInt32 index) const
{
    return _mfVariableDalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableDalpha(const UInt32 index)
{
    editMField(VariableDalphaFieldMask, _mfVariableDalpha);

    return _mfVariableDalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputABrgb field.
inline
const GLenum &RegisterCombinersChunkBase::getOutputABrgb(const UInt32 index) const
{
    return _mfOutputABrgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editOutputABrgb(const UInt32 index)
{
    editMField(OutputABrgbFieldMask, _mfOutputABrgb);

    return _mfOutputABrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputCDrgb field.
inline
const GLenum &RegisterCombinersChunkBase::getOutputCDrgb(const UInt32 index) const
{
    return _mfOutputCDrgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editOutputCDrgb(const UInt32 index)
{
    editMField(OutputCDrgbFieldMask, _mfOutputCDrgb);

    return _mfOutputCDrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputSumrgb field.
inline
const GLenum &RegisterCombinersChunkBase::getOutputSumrgb(const UInt32 index) const
{
    return _mfOutputSumrgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editOutputSumrgb(const UInt32 index)
{
    editMField(OutputSumrgbFieldMask, _mfOutputSumrgb);

    return _mfOutputSumrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfScalergb field.
inline
const GLenum &RegisterCombinersChunkBase::getScalergb(const UInt32 index) const
{
    return _mfScalergb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editScalergb(const UInt32 index)
{
    editMField(ScalergbFieldMask, _mfScalergb);

    return _mfScalergb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfBiasrgb field.
inline
const GLenum &RegisterCombinersChunkBase::getBiasrgb(const UInt32 index) const
{
    return _mfBiasrgb[index];
}

inline
GLenum &RegisterCombinersChunkBase::editBiasrgb(const UInt32 index)
{
    editMField(BiasrgbFieldMask, _mfBiasrgb);

    return _mfBiasrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputABalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getOutputABalpha(const UInt32 index) const
{
    return _mfOutputABalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editOutputABalpha(const UInt32 index)
{
    editMField(OutputABalphaFieldMask, _mfOutputABalpha);

    return _mfOutputABalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputCDalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getOutputCDalpha(const UInt32 index) const
{
    return _mfOutputCDalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editOutputCDalpha(const UInt32 index)
{
    editMField(OutputCDalphaFieldMask, _mfOutputCDalpha);

    return _mfOutputCDalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputSumalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getOutputSumalpha(const UInt32 index) const
{
    return _mfOutputSumalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editOutputSumalpha(const UInt32 index)
{
    editMField(OutputSumalphaFieldMask, _mfOutputSumalpha);

    return _mfOutputSumalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfDotABrgb field.
inline
      UInt8  RegisterCombinersChunkBase::getDotABrgb(const UInt32 index) const
{
    return _mfDotABrgb[index];
}

inline
UInt8 &RegisterCombinersChunkBase::editDotABrgb(const UInt32 index)
{
    editMField(DotABrgbFieldMask, _mfDotABrgb);

    return _mfDotABrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfDotCDrgb field.
inline
      UInt8  RegisterCombinersChunkBase::getDotCDrgb(const UInt32 index) const
{
    return _mfDotCDrgb[index];
}

inline
UInt8 &RegisterCombinersChunkBase::editDotCDrgb(const UInt32 index)
{
    editMField(DotCDrgbFieldMask, _mfDotCDrgb);

    return _mfDotCDrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfMuxSumrgb field.
inline
      UInt8  RegisterCombinersChunkBase::getMuxSumrgb(const UInt32 index) const
{
    return _mfMuxSumrgb[index];
}

inline
UInt8 &RegisterCombinersChunkBase::editMuxSumrgb(const UInt32 index)
{
    editMField(MuxSumrgbFieldMask, _mfMuxSumrgb);

    return _mfMuxSumrgb[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfScalealpha field.
inline
const GLenum &RegisterCombinersChunkBase::getScalealpha(const UInt32 index) const
{
    return _mfScalealpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editScalealpha(const UInt32 index)
{
    editMField(ScalealphaFieldMask, _mfScalealpha);

    return _mfScalealpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfBiasalpha field.
inline
const GLenum &RegisterCombinersChunkBase::getBiasalpha(const UInt32 index) const
{
    return _mfBiasalpha[index];
}

inline
GLenum &RegisterCombinersChunkBase::editBiasalpha(const UInt32 index)
{
    editMField(BiasalphaFieldMask, _mfBiasalpha);

    return _mfBiasalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfMuxSumalpha field.
inline
      UInt8  RegisterCombinersChunkBase::getMuxSumalpha(const UInt32 index) const
{
    return _mfMuxSumalpha[index];
}

inline
UInt8 &RegisterCombinersChunkBase::editMuxSumalpha(const UInt32 index)
{
    editMField(MuxSumalphaFieldMask, _mfMuxSumalpha);

    return _mfMuxSumalpha[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableE field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableE(const UInt32 index) const
{
    return _mfVariableE[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableE(const UInt32 index)
{
    editMField(VariableEFieldMask, _mfVariableE);

    return _mfVariableE[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableF field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableF(const UInt32 index) const
{
    return _mfVariableF[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableF(const UInt32 index)
{
    editMField(VariableFFieldMask, _mfVariableF);

    return _mfVariableF[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableG field.
inline
const GLenum &RegisterCombinersChunkBase::getVariableG(const UInt32 index) const
{
    return _mfVariableG[index];
}

inline
GLenum &RegisterCombinersChunkBase::editVariableG(const UInt32 index)
{
    editMField(VariableGFieldMask, _mfVariableG);

    return _mfVariableG[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfCombinerColor0 field.
inline
const Color4f &RegisterCombinersChunkBase::getCombinerColor0(const UInt32 index) const
{
    return _mfCombinerColor0[index];
}

inline
Color4f &RegisterCombinersChunkBase::editCombinerColor0(const UInt32 index)
{
    editMField(CombinerColor0FieldMask, _mfCombinerColor0);

    return _mfCombinerColor0[index];
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfCombinerColor1 field.
inline
const Color4f &RegisterCombinersChunkBase::getCombinerColor1(const UInt32 index) const
{
    return _mfCombinerColor1[index];
}

inline
Color4f &RegisterCombinersChunkBase::editCombinerColor1(const UInt32 index)
{
    editMField(CombinerColor1FieldMask, _mfCombinerColor1);

    return _mfCombinerColor1[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void RegisterCombinersChunkBase::execSync (      RegisterCombinersChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (Color0FieldMask & whichField))
        _sfColor0.syncWith(pFrom->_sfColor0);

    if(FieldBits::NoField != (Color1FieldMask & whichField))
        _sfColor1.syncWith(pFrom->_sfColor1);

    if(FieldBits::NoField != (ColorSumClampFieldMask & whichField))
        _sfColorSumClamp.syncWith(pFrom->_sfColorSumClamp);

    if(FieldBits::NoField != (VariableArgbFieldMask & whichField))
        _mfVariableArgb.syncWith(pFrom->_mfVariableArgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableBrgbFieldMask & whichField))
        _mfVariableBrgb.syncWith(pFrom->_mfVariableBrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableCrgbFieldMask & whichField))
        _mfVariableCrgb.syncWith(pFrom->_mfVariableCrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableDrgbFieldMask & whichField))
        _mfVariableDrgb.syncWith(pFrom->_mfVariableDrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableAalphaFieldMask & whichField))
        _mfVariableAalpha.syncWith(pFrom->_mfVariableAalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableBalphaFieldMask & whichField))
        _mfVariableBalpha.syncWith(pFrom->_mfVariableBalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableCalphaFieldMask & whichField))
        _mfVariableCalpha.syncWith(pFrom->_mfVariableCalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableDalphaFieldMask & whichField))
        _mfVariableDalpha.syncWith(pFrom->_mfVariableDalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutputABrgbFieldMask & whichField))
        _mfOutputABrgb.syncWith(pFrom->_mfOutputABrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutputCDrgbFieldMask & whichField))
        _mfOutputCDrgb.syncWith(pFrom->_mfOutputCDrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutputSumrgbFieldMask & whichField))
        _mfOutputSumrgb.syncWith(pFrom->_mfOutputSumrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ScalergbFieldMask & whichField))
        _mfScalergb.syncWith(pFrom->_mfScalergb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (BiasrgbFieldMask & whichField))
        _mfBiasrgb.syncWith(pFrom->_mfBiasrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutputABalphaFieldMask & whichField))
        _mfOutputABalpha.syncWith(pFrom->_mfOutputABalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutputCDalphaFieldMask & whichField))
        _mfOutputCDalpha.syncWith(pFrom->_mfOutputCDalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutputSumalphaFieldMask & whichField))
        _mfOutputSumalpha.syncWith(pFrom->_mfOutputSumalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DotABrgbFieldMask & whichField))
        _mfDotABrgb.syncWith(pFrom->_mfDotABrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DotCDrgbFieldMask & whichField))
        _mfDotCDrgb.syncWith(pFrom->_mfDotCDrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (MuxSumrgbFieldMask & whichField))
        _mfMuxSumrgb.syncWith(pFrom->_mfMuxSumrgb,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ScalealphaFieldMask & whichField))
        _mfScalealpha.syncWith(pFrom->_mfScalealpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (BiasalphaFieldMask & whichField))
        _mfBiasalpha.syncWith(pFrom->_mfBiasalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (MuxSumalphaFieldMask & whichField))
        _mfMuxSumalpha.syncWith(pFrom->_mfMuxSumalpha,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableEFieldMask & whichField))
        _mfVariableE.syncWith(pFrom->_mfVariableE,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableFFieldMask & whichField))
        _mfVariableF.syncWith(pFrom->_mfVariableF,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (VariableGFieldMask & whichField))
        _mfVariableG.syncWith(pFrom->_mfVariableG,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (CombinerColor0FieldMask & whichField))
        _mfCombinerColor0.syncWith(pFrom->_mfCombinerColor0,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (CombinerColor1FieldMask & whichField))
        _mfCombinerColor1.syncWith(pFrom->_mfCombinerColor1,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (PerStageConstantsFieldMask & whichField))
        _sfPerStageConstants.syncWith(pFrom->_sfPerStageConstants);
}
#endif


inline
const Char8 *RegisterCombinersChunkBase::getClassname(void)
{
    return "RegisterCombinersChunk";
}
OSG_GEN_CONTAINERPTR(RegisterCombinersChunk);

OSG_END_NAMESPACE

