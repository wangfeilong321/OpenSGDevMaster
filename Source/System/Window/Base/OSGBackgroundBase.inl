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
 **     class Background!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &BackgroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 BackgroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 BackgroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Background::_sfClearStencilBit field.

inline
Int32 &BackgroundBase::editClearStencilBit(void)
{
    editSField(ClearStencilBitFieldMask);

    return _sfClearStencilBit.getValue();
}

//! Get the value of the Background::_sfClearStencilBit field.
inline
      Int32  BackgroundBase::getClearStencilBit(void) const
{
    return _sfClearStencilBit.getValue();
}

//! Set the value of the Background::_sfClearStencilBit field.
inline
void BackgroundBase::setClearStencilBit(const Int32 value)
{
    editSField(ClearStencilBitFieldMask);

    _sfClearStencilBit.setValue(value);
}
//! Get the value of the Background::_sfDepth field.

inline
Real32 &BackgroundBase::editDepth(void)
{
    editSField(DepthFieldMask);

    return _sfDepth.getValue();
}

//! Get the value of the Background::_sfDepth field.
inline
      Real32  BackgroundBase::getDepth(void) const
{
    return _sfDepth.getValue();
}

//! Set the value of the Background::_sfDepth field.
inline
void BackgroundBase::setDepth(const Real32 value)
{
    editSField(DepthFieldMask);

    _sfDepth.setValue(value);
}
//! Get the value of the Background::_sfClearDepth field.

inline
bool &BackgroundBase::editClearDepth(void)
{
    editSField(ClearDepthFieldMask);

    return _sfClearDepth.getValue();
}

//! Get the value of the Background::_sfClearDepth field.
inline
      bool  BackgroundBase::getClearDepth(void) const
{
    return _sfClearDepth.getValue();
}

//! Set the value of the Background::_sfClearDepth field.
inline
void BackgroundBase::setClearDepth(const bool value)
{
    editSField(ClearDepthFieldMask);

    _sfClearDepth.setValue(value);
}
//! Get the value of the Background::_sfClearColor field.

inline
bool &BackgroundBase::editClearColor(void)
{
    editSField(ClearColorFieldMask);

    return _sfClearColor.getValue();
}

//! Get the value of the Background::_sfClearColor field.
inline
      bool  BackgroundBase::getClearColor(void) const
{
    return _sfClearColor.getValue();
}

//! Set the value of the Background::_sfClearColor field.
inline
void BackgroundBase::setClearColor(const bool value)
{
    editSField(ClearColorFieldMask);

    _sfClearColor.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void BackgroundBase::execSync (      BackgroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
        _sfClearStencilBit.syncWith(pFrom->_sfClearStencilBit);

    if(FieldBits::NoField != (DepthFieldMask & whichField))
        _sfDepth.syncWith(pFrom->_sfDepth);

    if(FieldBits::NoField != (ClearDepthFieldMask & whichField))
        _sfClearDepth.syncWith(pFrom->_sfClearDepth);

    if(FieldBits::NoField != (ClearColorFieldMask & whichField))
        _sfClearColor.syncWith(pFrom->_sfClearColor);
}
#endif


inline
const Char8 *BackgroundBase::getClassname(void)
{
    return "Background";
}
OSG_GEN_CONTAINERPTR(Background);

OSG_END_NAMESPACE

