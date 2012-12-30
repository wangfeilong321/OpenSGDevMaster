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
 **     class VRMLInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &VRMLInterpolatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 VRMLInterpolatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 VRMLInterpolatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the VRMLInterpolator::_sfInValue field.

inline
Real32 &VRMLInterpolatorBase::editInValue(void)
{
    editSField(InValueFieldMask);

    return _sfInValue.getValue();
}

//! Get the value of the VRMLInterpolator::_sfInValue field.
inline
      Real32  VRMLInterpolatorBase::getInValue(void) const
{
    return _sfInValue.getValue();
}

//! Set the value of the VRMLInterpolator::_sfInValue field.
inline
void VRMLInterpolatorBase::setInValue(const Real32 value)
{
    editSField(InValueFieldMask);

    _sfInValue.setValue(value);
}

//! Get the value of the \a index element the VRMLInterpolator::_mfKey field.
inline
      Real32  VRMLInterpolatorBase::getKey(const UInt32 index) const
{
    return _mfKey[index];
}

inline
Real32 &VRMLInterpolatorBase::editKey(const UInt32 index)
{
    editMField(KeyFieldMask, _mfKey);

    return _mfKey[index];
}


//! Get the value of the \a index element the VRMLInterpolator::_mfResortIndex field.
inline
      UInt32  VRMLInterpolatorBase::getResortIndex(const UInt32 index) const
{
    return _mfResortIndex[index];
}

inline
UInt32 &VRMLInterpolatorBase::editResortIndex(const UInt32 index)
{
    editMField(ResortIndexFieldMask, _mfResortIndex);

    return _mfResortIndex[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void VRMLInterpolatorBase::execSync (      VRMLInterpolatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (InValueFieldMask & whichField))
        _sfInValue.syncWith(pFrom->_sfInValue);

    if(FieldBits::NoField != (KeyFieldMask & whichField))
        _mfKey.syncWith(pFrom->_mfKey,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ResortIndexFieldMask & whichField))
        _mfResortIndex.syncWith(pFrom->_mfResortIndex,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *VRMLInterpolatorBase::getClassname(void)
{
    return "VRMLInterpolator";
}
OSG_GEN_CONTAINERPTR(VRMLInterpolator);

OSG_END_NAMESPACE

