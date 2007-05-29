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
 **     class Switch!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SwitchBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SwitchBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SwitchBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Switch::_sfChoice field.

inline
Int32 &SwitchBase::editChoice(void)
{
    editSField(ChoiceFieldMask);

    return _sfChoice.getValue();
}

//! Get the value of the Switch::_sfChoice field.
inline
const Int32 &SwitchBase::getChoice(void) const
{
    return _sfChoice.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Int32               &SwitchBase::getChoice         (void)
{
    return this->editChoice         ();
}
#endif

//! Set the value of the Switch::_sfChoice field.
inline
void SwitchBase::setChoice(const Int32 &value)
{
    editSField(ChoiceFieldMask);

    _sfChoice.setValue(value);
}

//! create a new instance of the class
inline
SwitchPtr SwitchBase::create(void)
{
    SwitchPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<Switch::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void SwitchBase::execSync(      SwitchBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
        _sfChoice.syncWith(pOther->_sfChoice);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void SwitchBase::execSync (      SwitchBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
        _sfChoice.syncWith(pFrom->_sfChoice);
}
#endif

#if 0
inline
void SwitchBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *SwitchBase::getClassname(void)
{
    return "Switch";
}

typedef PointerBuilder<Switch>::ObjPtr          SwitchPtr;
typedef PointerBuilder<Switch>::ObjPtrConst     SwitchPtrConst;
typedef PointerBuilder<Switch>::ObjConstPtr     SwitchConstPtr;

typedef PointerBuilder<Switch>::ObjPtrArg       SwitchPtrArg;
typedef PointerBuilder<Switch>::ObjConstPtrArg  SwitchConstPtrArg;
typedef PointerBuilder<Switch>::ObjPtrConstArg  SwitchPtrConstArg;

OSG_END_NAMESPACE

