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
 **     class CPUSkinningDataAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &CPUSkinningDataAttachmentBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CPUSkinningDataAttachmentBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CPUSkinningDataAttachmentBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CPUSkinningDataAttachment::_sfDataValid field.

inline
bool &CPUSkinningDataAttachmentBase::editDataValid(void)
{
    editSField(DataValidFieldMask);

    return _sfDataValid.getValue();
}

//! Get the value of the CPUSkinningDataAttachment::_sfDataValid field.
inline
      bool  CPUSkinningDataAttachmentBase::getDataValid(void) const
{
    return _sfDataValid.getValue();
}

//! Set the value of the CPUSkinningDataAttachment::_sfDataValid field.
inline
void CPUSkinningDataAttachmentBase::setDataValid(const bool value)
{
    editSField(DataValidFieldMask);

    _sfDataValid.setValue(value);
}

//! Get the value of the \a index element the CPUSkinningDataAttachment::_mfProperties field.
inline
GeoVectorProperty * CPUSkinningDataAttachmentBase::getProperties(const UInt32 index) const
{
    return _mfProperties[index];
}

//! Get the value of the \a index element the CPUSkinningDataAttachment::_mfJointMatrices field.
inline
const Matrix &CPUSkinningDataAttachmentBase::getJointMatrices(const UInt32 index) const
{
    return _mfJointMatrices[index];
}

inline
Matrix &CPUSkinningDataAttachmentBase::editJointMatrices(const UInt32 index)
{
    editMField(JointMatricesFieldMask, _mfJointMatrices);

    return _mfJointMatrices[index];
}


//! Get the value of the \a index element the CPUSkinningDataAttachment::_mfJointNormalMatrices field.
inline
const Matrix &CPUSkinningDataAttachmentBase::getJointNormalMatrices(const UInt32 index) const
{
    return _mfJointNormalMatrices[index];
}

inline
Matrix &CPUSkinningDataAttachmentBase::editJointNormalMatrices(const UInt32 index)
{
    editMField(JointNormalMatricesFieldMask, _mfJointNormalMatrices);

    return _mfJointNormalMatrices[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void CPUSkinningDataAttachmentBase::execSync (      CPUSkinningDataAttachmentBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
        _mfProperties.syncWith(pFrom->_mfProperties,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (JointMatricesFieldMask & whichField))
        _mfJointMatrices.syncWith(pFrom->_mfJointMatrices,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (JointNormalMatricesFieldMask & whichField))
        _mfJointNormalMatrices.syncWith(pFrom->_mfJointNormalMatrices,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DataValidFieldMask & whichField))
        _sfDataValid.syncWith(pFrom->_sfDataValid);
}
#endif


inline
const Char8 *CPUSkinningDataAttachmentBase::getClassname(void)
{
    return "CPUSkinningDataAttachment";
}
OSG_GEN_CONTAINERPTR(CPUSkinningDataAttachment);

OSG_END_NAMESPACE

