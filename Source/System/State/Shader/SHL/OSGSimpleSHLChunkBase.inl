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
 **     class SimpleSHLChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleSHLChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SimpleSHLChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SimpleSHLChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleSHLChunk::_sfVertexProgram field.

inline
std::string &SimpleSHLChunkBase::editVertexProgram(void)
{
    editSField(VertexProgramFieldMask);

    return _sfVertexProgram.getValue();
}

//! Get the value of the SimpleSHLChunk::_sfVertexProgram field.
inline
const std::string &SimpleSHLChunkBase::getVertexProgram(void) const
{
    return _sfVertexProgram.getValue();
}

//! Set the value of the SimpleSHLChunk::_sfVertexProgram field.
inline
void SimpleSHLChunkBase::setVertexProgram(const std::string &value)
{
    editSField(VertexProgramFieldMask);

    _sfVertexProgram.setValue(value);
}
//! Get the value of the SimpleSHLChunk::_sfGeometryProgram field.

inline
std::string &SimpleSHLChunkBase::editGeometryProgram(void)
{
    editSField(GeometryProgramFieldMask);

    return _sfGeometryProgram.getValue();
}

//! Get the value of the SimpleSHLChunk::_sfGeometryProgram field.
inline
const std::string &SimpleSHLChunkBase::getGeometryProgram(void) const
{
    return _sfGeometryProgram.getValue();
}

//! Set the value of the SimpleSHLChunk::_sfGeometryProgram field.
inline
void SimpleSHLChunkBase::setGeometryProgram(const std::string &value)
{
    editSField(GeometryProgramFieldMask);

    _sfGeometryProgram.setValue(value);
}
//! Get the value of the SimpleSHLChunk::_sfFragmentProgram field.

inline
std::string &SimpleSHLChunkBase::editFragmentProgram(void)
{
    editSField(FragmentProgramFieldMask);

    return _sfFragmentProgram.getValue();
}

//! Get the value of the SimpleSHLChunk::_sfFragmentProgram field.
inline
const std::string &SimpleSHLChunkBase::getFragmentProgram(void) const
{
    return _sfFragmentProgram.getValue();
}

//! Set the value of the SimpleSHLChunk::_sfFragmentProgram field.
inline
void SimpleSHLChunkBase::setFragmentProgram(const std::string &value)
{
    editSField(FragmentProgramFieldMask);

    _sfFragmentProgram.setValue(value);
}
//! Get the value of the SimpleSHLChunk::_sfCgFrontEnd field.

inline
bool &SimpleSHLChunkBase::editCgFrontEnd(void)
{
    editSField(CgFrontEndFieldMask);

    return _sfCgFrontEnd.getValue();
}

//! Get the value of the SimpleSHLChunk::_sfCgFrontEnd field.
inline
      bool  SimpleSHLChunkBase::getCgFrontEnd(void) const
{
    return _sfCgFrontEnd.getValue();
}

//! Set the value of the SimpleSHLChunk::_sfCgFrontEnd field.
inline
void SimpleSHLChunkBase::setCgFrontEnd(const bool value)
{
    editSField(CgFrontEndFieldMask);

    _sfCgFrontEnd.setValue(value);
}

//! Get the value of the SimpleSHLChunk::_sfVariables field.
inline
ShaderProgramVariables * SimpleSHLChunkBase::getVariables(void) const
{
    return _sfVariables.getValue();
}

//! Set the value of the SimpleSHLChunk::_sfVariables field.
inline
void SimpleSHLChunkBase::setVariables(ShaderProgramVariables * const value)
{
    editSField(VariablesFieldMask);

    _sfVariables.setValue(value);
}
//! Get the value of the SimpleSHLChunk::_sfGLId field.

inline
UInt32 &SimpleSHLChunkBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the SimpleSHLChunk::_sfGLId field.
inline
      UInt32  SimpleSHLChunkBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the SimpleSHLChunk::_sfGLId field.
inline
void SimpleSHLChunkBase::setGLId(const UInt32 value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}
//! Get the value of the SimpleSHLChunk::_sfPointSize field.

inline
bool &SimpleSHLChunkBase::editPointSize(void)
{
    editSField(PointSizeFieldMask);

    return _sfPointSize.getValue();
}

//! Get the value of the SimpleSHLChunk::_sfPointSize field.
inline
      bool  SimpleSHLChunkBase::getPointSize(void) const
{
    return _sfPointSize.getValue();
}

//! Set the value of the SimpleSHLChunk::_sfPointSize field.
inline
void SimpleSHLChunkBase::setPointSize(const bool value)
{
    editSField(PointSizeFieldMask);

    _sfPointSize.setValue(value);
}

//! Get the value of the \a index element the SimpleSHLChunk::_mfVariableLocations field.
inline
      Int32  SimpleSHLChunkBase::getVariableLocations(const UInt32 index) const
{
    return _mfVariableLocations[index];
}

inline
Int32 &SimpleSHLChunkBase::editVariableLocations(const UInt32 index)
{
    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return _mfVariableLocations[index];
}


//! Get the value of the \a index element the SimpleSHLChunk::_mfProceduralVariableLocations field.
inline
      Int32  SimpleSHLChunkBase::getProceduralVariableLocations(const UInt32 index) const
{
    return _mfProceduralVariableLocations[index];
}

inline
Int32 &SimpleSHLChunkBase::editProceduralVariableLocations(const UInt32 index)
{
    editMField(ProceduralVariableLocationsFieldMask, _mfProceduralVariableLocations);

    return _mfProceduralVariableLocations[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleSHLChunkBase::execSync (      SimpleSHLChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
        _sfVertexProgram.syncWith(pFrom->_sfVertexProgram);

    if(FieldBits::NoField != (GeometryProgramFieldMask & whichField))
        _sfGeometryProgram.syncWith(pFrom->_sfGeometryProgram);

    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
        _sfFragmentProgram.syncWith(pFrom->_sfFragmentProgram);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
        _sfCgFrontEnd.syncWith(pFrom->_sfCgFrontEnd);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
        _sfVariables.syncWith(pFrom->_sfVariables);

    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
        _mfVariableLocations.syncWith(pFrom->_mfVariableLocations,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ProceduralVariableLocationsFieldMask & whichField))
        _mfProceduralVariableLocations.syncWith(pFrom->_mfProceduralVariableLocations,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pFrom->_sfGLId);

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
        _sfPointSize.syncWith(pFrom->_sfPointSize);
}
#endif


inline
const Char8 *SimpleSHLChunkBase::getClassname(void)
{
    return "SimpleSHLChunk";
}
OSG_GEN_CONTAINERPTR(SimpleSHLChunk);

OSG_END_NAMESPACE

