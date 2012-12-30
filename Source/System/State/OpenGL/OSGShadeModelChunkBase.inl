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
 **     class ShadeModelChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &ShadeModelChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShadeModelChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShadeModelChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShadeModelChunk::_sfShadeModel field.

inline
GLenum &ShadeModelChunkBase::editShadeModel(void)
{
    editSField(ShadeModelFieldMask);

    return _sfShadeModel.getValue();
}

//! Get the value of the ShadeModelChunk::_sfShadeModel field.
inline
const GLenum &ShadeModelChunkBase::getShadeModel(void) const
{
    return _sfShadeModel.getValue();
}

//! Set the value of the ShadeModelChunk::_sfShadeModel field.
inline
void ShadeModelChunkBase::setShadeModel(const GLenum &value)
{
    editSField(ShadeModelFieldMask);

    _sfShadeModel.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ShadeModelChunkBase::execSync (      ShadeModelChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ShadeModelFieldMask & whichField))
        _sfShadeModel.syncWith(pFrom->_sfShadeModel);
}
#endif


inline
const Char8 *ShadeModelChunkBase::getClassname(void)
{
    return "ShadeModelChunk";
}
OSG_GEN_CONTAINERPTR(ShadeModelChunk);

OSG_END_NAMESPACE

