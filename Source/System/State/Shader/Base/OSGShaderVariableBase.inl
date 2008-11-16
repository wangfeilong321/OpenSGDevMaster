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
 **     class ShaderVariable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderVariableBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderVariableBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderVariableBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderVariable::_sfName field.

inline
std::string &ShaderVariableBase::editName(void)
{
    editSField(NameFieldMask);

    return _sfName.getValue();
}

//! Get the value of the ShaderVariable::_sfName field.
inline
const std::string &ShaderVariableBase::getName(void) const
{
    return _sfName.getValue();
}

//! Set the value of the ShaderVariable::_sfName field.
inline
void ShaderVariableBase::setName(const std::string &value)
{
    editSField(NameFieldMask);

    _sfName.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderVariableBase::execSync (      ShaderVariableBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pFrom->_sfName);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
        _mfParents.syncWith(pFrom->_mfParents,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *ShaderVariableBase::getClassname(void)
{
    return "ShaderVariable";
}
OSG_GEN_CONTAINERPTR(ShaderVariable);

OSG_END_NAMESPACE

