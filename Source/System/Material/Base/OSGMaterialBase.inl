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
 **     class Material!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &MaterialBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MaterialBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MaterialBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Material::_sfSortKey field.

inline
Int32 &MaterialBase::editSortKey(void)
{
    editSField(SortKeyFieldMask);

    return _sfSortKey.getValue();
}

//! Get the value of the Material::_sfSortKey field.
inline
      Int32  MaterialBase::getSortKey(void) const
{
    return _sfSortKey.getValue();
}

//! Set the value of the Material::_sfSortKey field.
inline
void MaterialBase::setSortKey(const Int32 value)
{
    editSField(SortKeyFieldMask);

    _sfSortKey.setValue(value);
}
//! Get the value of the Material::_sfTransparencyMode field.

inline
Int32 &MaterialBase::editTransparencyMode(void)
{
    editSField(TransparencyModeFieldMask);

    return _sfTransparencyMode.getValue();
}

//! Get the value of the Material::_sfTransparencyMode field.
inline
      Int32  MaterialBase::getTransparencyMode(void) const
{
    return _sfTransparencyMode.getValue();
}

//! Set the value of the Material::_sfTransparencyMode field.
inline
void MaterialBase::setTransparencyMode(const Int32 value)
{
    editSField(TransparencyModeFieldMask);

    _sfTransparencyMode.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MaterialBase::execSync (      MaterialBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SortKeyFieldMask & whichField))
        _sfSortKey.syncWith(pFrom->_sfSortKey);

    if(FieldBits::NoField != (TransparencyModeFieldMask & whichField))
        _sfTransparencyMode.syncWith(pFrom->_sfTransparencyMode);
}
#endif


inline
const Char8 *MaterialBase::getClassname(void)
{
    return "Material";
}
OSG_GEN_CONTAINERPTR(Material);

OSG_END_NAMESPACE

