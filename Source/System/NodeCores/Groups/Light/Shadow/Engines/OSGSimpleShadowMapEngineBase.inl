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
 **     class SimpleShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &SimpleShadowMapEngineBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SimpleShadowMapEngineBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SimpleShadowMapEngineBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleShadowMapEngine::_sfShadowColor field.

inline
Color4f &SimpleShadowMapEngineBase::editShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return _sfShadowColor.getValue();
}

//! Get the value of the SimpleShadowMapEngine::_sfShadowColor field.
inline
const Color4f &SimpleShadowMapEngineBase::getShadowColor(void) const
{
    return _sfShadowColor.getValue();
}

//! Set the value of the SimpleShadowMapEngine::_sfShadowColor field.
inline
void SimpleShadowMapEngineBase::setShadowColor(const Color4f &value)
{
    editSField(ShadowColorFieldMask);

    _sfShadowColor.setValue(value);
}
//! Get the value of the SimpleShadowMapEngine::_sfForceTextureUnit field.

inline
Int32 &SimpleShadowMapEngineBase::editForceTextureUnit(void)
{
    editSField(ForceTextureUnitFieldMask);

    return _sfForceTextureUnit.getValue();
}

//! Get the value of the SimpleShadowMapEngine::_sfForceTextureUnit field.
inline
      Int32  SimpleShadowMapEngineBase::getForceTextureUnit(void) const
{
    return _sfForceTextureUnit.getValue();
}

//! Set the value of the SimpleShadowMapEngine::_sfForceTextureUnit field.
inline
void SimpleShadowMapEngineBase::setForceTextureUnit(const Int32 value)
{
    editSField(ForceTextureUnitFieldMask);

    _sfForceTextureUnit.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleShadowMapEngineBase::execSync (      SimpleShadowMapEngineBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
        _sfShadowColor.syncWith(pFrom->_sfShadowColor);

    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
        _sfForceTextureUnit.syncWith(pFrom->_sfForceTextureUnit);
}
#endif


inline
const Char8 *SimpleShadowMapEngineBase::getClassname(void)
{
    return "SimpleShadowMapEngine";
}
OSG_GEN_CONTAINERPTR(SimpleShadowMapEngine);

OSG_END_NAMESPACE

