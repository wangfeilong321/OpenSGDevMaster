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
 **     class CSMSortFirstWinOptions!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &CSMSortFirstWinOptionsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CSMSortFirstWinOptionsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CSMSortFirstWinOptionsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CSMSortFirstWinOptions::_sfCompression field.

inline
std::string &CSMSortFirstWinOptionsBase::editCompression(void)
{
    editSField(CompressionFieldMask);

    return _sfCompression.getValue();
}

//! Get the value of the CSMSortFirstWinOptions::_sfCompression field.
inline
const std::string &CSMSortFirstWinOptionsBase::getCompression(void) const
{
    return _sfCompression.getValue();
}

//! Set the value of the CSMSortFirstWinOptions::_sfCompression field.
inline
void CSMSortFirstWinOptionsBase::setCompression(const std::string &value)
{
    editSField(CompressionFieldMask);

    _sfCompression.setValue(value);
}
//! Get the value of the CSMSortFirstWinOptions::_sfSubtileSize field.

inline
UInt32 &CSMSortFirstWinOptionsBase::editSubtileSize(void)
{
    editSField(SubtileSizeFieldMask);

    return _sfSubtileSize.getValue();
}

//! Get the value of the CSMSortFirstWinOptions::_sfSubtileSize field.
inline
      UInt32  CSMSortFirstWinOptionsBase::getSubtileSize(void) const
{
    return _sfSubtileSize.getValue();
}

//! Set the value of the CSMSortFirstWinOptions::_sfSubtileSize field.
inline
void CSMSortFirstWinOptionsBase::setSubtileSize(const UInt32 value)
{
    editSField(SubtileSizeFieldMask);

    _sfSubtileSize.setValue(value);
}
//! Get the value of the CSMSortFirstWinOptions::_sfCompose field.

inline
bool &CSMSortFirstWinOptionsBase::editCompose(void)
{
    editSField(ComposeFieldMask);

    return _sfCompose.getValue();
}

//! Get the value of the CSMSortFirstWinOptions::_sfCompose field.
inline
      bool  CSMSortFirstWinOptionsBase::getCompose(void) const
{
    return _sfCompose.getValue();
}

//! Set the value of the CSMSortFirstWinOptions::_sfCompose field.
inline
void CSMSortFirstWinOptionsBase::setCompose(const bool value)
{
    editSField(ComposeFieldMask);

    _sfCompose.setValue(value);
}
//! Get the value of the CSMSortFirstWinOptions::_sfUseFaceDistribution field.

inline
bool &CSMSortFirstWinOptionsBase::editUseFaceDistribution(void)
{
    editSField(UseFaceDistributionFieldMask);

    return _sfUseFaceDistribution.getValue();
}

//! Get the value of the CSMSortFirstWinOptions::_sfUseFaceDistribution field.
inline
      bool  CSMSortFirstWinOptionsBase::getUseFaceDistribution(void) const
{
    return _sfUseFaceDistribution.getValue();
}

//! Set the value of the CSMSortFirstWinOptions::_sfUseFaceDistribution field.
inline
void CSMSortFirstWinOptionsBase::setUseFaceDistribution(const bool value)
{
    editSField(UseFaceDistributionFieldMask);

    _sfUseFaceDistribution.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CSMSortFirstWinOptionsBase::execSync (      CSMSortFirstWinOptionsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
        _sfCompression.syncWith(pFrom->_sfCompression);

    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
        _sfSubtileSize.syncWith(pFrom->_sfSubtileSize);

    if(FieldBits::NoField != (ComposeFieldMask & whichField))
        _sfCompose.syncWith(pFrom->_sfCompose);

    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
        _sfUseFaceDistribution.syncWith(pFrom->_sfUseFaceDistribution);
}
#endif


inline
const Char8 *CSMSortFirstWinOptionsBase::getClassname(void)
{
    return "CSMSortFirstWinOptions";
}
OSG_GEN_CONTAINERPTR(CSMSortFirstWinOptions);

OSG_END_NAMESPACE

