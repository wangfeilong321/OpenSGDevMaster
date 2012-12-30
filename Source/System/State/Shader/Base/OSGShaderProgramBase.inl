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
 **     class ShaderProgram!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &ShaderProgramBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderProgramBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderProgramBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderProgram::_sfShaderType field.

inline
GLenum &ShaderProgramBase::editShaderType(void)
{
    editSField(ShaderTypeFieldMask);

    return _sfShaderType.getValue();
}

//! Get the value of the ShaderProgram::_sfShaderType field.
inline
const GLenum &ShaderProgramBase::getShaderType(void) const
{
    return _sfShaderType.getValue();
}

//! Set the value of the ShaderProgram::_sfShaderType field.
inline
void ShaderProgramBase::setShaderType(const GLenum &value)
{
    editSField(ShaderTypeFieldMask);

    _sfShaderType.setValue(value);
}
//! Get the value of the ShaderProgram::_sfProgram field.

inline
std::string &ShaderProgramBase::editProgram(void)
{
    editSField(ProgramFieldMask);

    return _sfProgram.getValue();
}

//! Get the value of the ShaderProgram::_sfProgram field.
inline
const std::string &ShaderProgramBase::getProgram(void) const
{
    return _sfProgram.getValue();
}

//! Set the value of the ShaderProgram::_sfProgram field.
inline
void ShaderProgramBase::setProgram(const std::string &value)
{
    editSField(ProgramFieldMask);

    _sfProgram.setValue(value);
}
//! Get the value of the ShaderProgram::_sfDefines field.

inline
std::string &ShaderProgramBase::editDefines(void)
{
    editSField(DefinesFieldMask);

    return _sfDefines.getValue();
}

//! Get the value of the ShaderProgram::_sfDefines field.
inline
const std::string &ShaderProgramBase::getDefines(void) const
{
    return _sfDefines.getValue();
}

//! Set the value of the ShaderProgram::_sfDefines field.
inline
void ShaderProgramBase::setDefines(const std::string &value)
{
    editSField(DefinesFieldMask);

    _sfDefines.setValue(value);
}
//! Get the value of the ShaderProgram::_sfGLId field.

inline
UInt32 &ShaderProgramBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the ShaderProgram::_sfGLId field.
inline
      UInt32  ShaderProgramBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the ShaderProgram::_sfGLId field.
inline
void ShaderProgramBase::setGLId(const UInt32 value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}

//! Get the value of the ShaderProgram::_sfVariables field.
inline
ShaderProgramVariables * ShaderProgramBase::getVariables(void) const
{
    return _sfVariables.getValue();
}

//! Set the value of the ShaderProgram::_sfVariables field.
inline
void ShaderProgramBase::setVariables(ShaderProgramVariables * const value)
{
    editSField(VariablesFieldMask);

    _sfVariables.setValue(value);
}
//! Get the value of the ShaderProgram::_sfCgFrontEnd field.

inline
bool &ShaderProgramBase::editCgFrontEnd(void)
{
    editSField(CgFrontEndFieldMask);

    return _sfCgFrontEnd.getValue();
}

//! Get the value of the ShaderProgram::_sfCgFrontEnd field.
inline
      bool  ShaderProgramBase::getCgFrontEnd(void) const
{
    return _sfCgFrontEnd.getValue();
}

//! Set the value of the ShaderProgram::_sfCgFrontEnd field.
inline
void ShaderProgramBase::setCgFrontEnd(const bool value)
{
    editSField(CgFrontEndFieldMask);

    _sfCgFrontEnd.setValue(value);
}
//! Get the value of the ShaderProgram::_sfPointSize field.

inline
bool &ShaderProgramBase::editPointSize(void)
{
    editSField(PointSizeFieldMask);

    return _sfPointSize.getValue();
}

//! Get the value of the ShaderProgram::_sfPointSize field.
inline
      bool  ShaderProgramBase::getPointSize(void) const
{
    return _sfPointSize.getValue();
}

//! Set the value of the ShaderProgram::_sfPointSize field.
inline
void ShaderProgramBase::setPointSize(const bool value)
{
    editSField(PointSizeFieldMask);

    _sfPointSize.setValue(value);
}

//! Get the value of the \a index element the ShaderProgram::_mfFeedbackVaryings field.
inline
const std::string &ShaderProgramBase::getFeedbackVaryings(const UInt32 index) const
{
    return _mfFeedbackVaryings[index];
}

inline
std::string &ShaderProgramBase::editFeedbackVaryings(const UInt32 index)
{
    editMField(FeedbackVaryingsFieldMask, _mfFeedbackVaryings);

    return _mfFeedbackVaryings[index];
}


//! Get the value of the \a index element the ShaderProgram::_mfParameter field.
inline
const ShaderParameter &ShaderProgramBase::getParameter(const UInt32 index) const
{
    return _mfParameter[index];
}

inline
ShaderParameter &ShaderProgramBase::editParameter(const UInt32 index)
{
    editMField(ParameterFieldMask, _mfParameter);

    return _mfParameter[index];
}


//! Get the value of the \a index element the ShaderProgram::_mfAttributes field.
inline
const ShaderAttribute &ShaderProgramBase::getAttributes(const UInt32 index) const
{
    return _mfAttributes[index];
}

inline
ShaderAttribute &ShaderProgramBase::editAttributes(const UInt32 index)
{
    editMField(AttributesFieldMask, _mfAttributes);

    return _mfAttributes[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderProgramBase::execSync (      ShaderProgramBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ShaderTypeFieldMask & whichField))
        _sfShaderType.syncWith(pFrom->_sfShaderType);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
        _sfProgram.syncWith(pFrom->_sfProgram);

    if(FieldBits::NoField != (DefinesFieldMask & whichField))
        _sfDefines.syncWith(pFrom->_sfDefines);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pFrom->_sfGLId);

    if(FieldBits::NoField != (VariablesFieldMask & whichField))
        _sfVariables.syncWith(pFrom->_sfVariables);

    if(FieldBits::NoField != (FeedbackVaryingsFieldMask & whichField))
        _mfFeedbackVaryings.syncWith(pFrom->_mfFeedbackVaryings,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ParameterFieldMask & whichField))
        _mfParameter.syncWith(pFrom->_mfParameter,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (AttributesFieldMask & whichField))
        _mfAttributes.syncWith(pFrom->_mfAttributes,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
        _sfCgFrontEnd.syncWith(pFrom->_sfCgFrontEnd);

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
        _sfPointSize.syncWith(pFrom->_sfPointSize);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
        _mfParents.syncWith(pFrom->_mfParents,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DestroyedFunctorsFieldMask & whichField))
        _mfDestroyedFunctors.syncWith(pFrom->_mfDestroyedFunctors,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *ShaderProgramBase::getClassname(void)
{
    return "ShaderProgram";
}
OSG_GEN_CONTAINERPTR(ShaderProgram);

OSG_END_NAMESPACE

