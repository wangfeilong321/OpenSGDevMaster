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
 **     class SortLastWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &SortLastWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SortLastWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SortLastWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SortLastWindow::_sfGroupsChanged field.

inline
bool &SortLastWindowBase::editGroupsChanged(void)
{
    editSField(GroupsChangedFieldMask);

    return _sfGroupsChanged.getValue();
}

//! Get the value of the SortLastWindow::_sfGroupsChanged field.
inline
      bool  SortLastWindowBase::getGroupsChanged(void) const
{
    return _sfGroupsChanged.getValue();
}

//! Set the value of the SortLastWindow::_sfGroupsChanged field.
inline
void SortLastWindowBase::setGroupsChanged(const bool value)
{
    editSField(GroupsChangedFieldMask);

    _sfGroupsChanged.setValue(value);
}

//! Get the value of the \a index element the SortLastWindow::_mfGroupNodes field.
inline
Node * SortLastWindowBase::getGroupNodes(const UInt32 index) const
{
    return _mfGroupNodes[index];
}

//! Get the value of the \a index element the SortLastWindow::_mfGroupLengths field.
inline
      UInt32  SortLastWindowBase::getGroupLengths(const UInt32 index) const
{
    return _mfGroupLengths[index];
}

inline
UInt32 &SortLastWindowBase::editGroupLengths(const UInt32 index)
{
    editMField(GroupLengthsFieldMask, _mfGroupLengths);

    return _mfGroupLengths[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void SortLastWindowBase::execSync (      SortLastWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (GroupNodesFieldMask & whichField))
        _mfGroupNodes.syncWith(pFrom->_mfGroupNodes,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GroupLengthsFieldMask & whichField))
        _mfGroupLengths.syncWith(pFrom->_mfGroupLengths,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GroupsChangedFieldMask & whichField))
        _sfGroupsChanged.syncWith(pFrom->_sfGroupsChanged);
}
#endif


inline
const Char8 *SortLastWindowBase::getClassname(void)
{
    return "SortLastWindow";
}
OSG_GEN_CONTAINERPTR(SortLastWindow);

OSG_END_NAMESPACE

