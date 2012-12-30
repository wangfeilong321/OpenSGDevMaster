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
 **     class CgFXVariableTexObj!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &CgFXVariableTexObjBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CgFXVariableTexObjBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CgFXVariableTexObjBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CgFXVariableTexObj::_sfValue field.

inline
Int32 &CgFXVariableTexObjBase::editValue(void)
{
    editSField(ValueFieldMask);

    return _sfValue.getValue();
}

//! Get the value of the CgFXVariableTexObj::_sfValue field.
inline
      Int32  CgFXVariableTexObjBase::getValue(void) const
{
    return _sfValue.getValue();
}

//! Set the value of the CgFXVariableTexObj::_sfValue field.
inline
void CgFXVariableTexObjBase::setValue(const Int32 value)
{
    editSField(ValueFieldMask);

    _sfValue.setValue(value);
}
//! Get the value of the CgFXVariableTexObj::_sfFilePath field.

inline
std::string &CgFXVariableTexObjBase::editFilePath(void)
{
    editSField(FilePathFieldMask);

    return _sfFilePath.getValue();
}

//! Get the value of the CgFXVariableTexObj::_sfFilePath field.
inline
const std::string &CgFXVariableTexObjBase::getFilePath(void) const
{
    return _sfFilePath.getValue();
}

//! Set the value of the CgFXVariableTexObj::_sfFilePath field.
inline
void CgFXVariableTexObjBase::setFilePath(const std::string &value)
{
    editSField(FilePathFieldMask);

    _sfFilePath.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CgFXVariableTexObjBase::execSync (      CgFXVariableTexObjBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pFrom->_sfValue);

    if(FieldBits::NoField != (FilePathFieldMask & whichField))
        _sfFilePath.syncWith(pFrom->_sfFilePath);
}
#endif


inline
const Char8 *CgFXVariableTexObjBase::getClassname(void)
{
    return "CgFXVariableTexObj";
}
OSG_GEN_CONTAINERPTR(CgFXVariableTexObj);

OSG_END_NAMESPACE

