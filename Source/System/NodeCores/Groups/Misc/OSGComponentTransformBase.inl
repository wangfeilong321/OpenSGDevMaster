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
 **     class ComponentTransform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ComponentTransformBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ComponentTransformBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ComponentTransformBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ComponentTransform::_sfCenter field.

inline
Vec3r &ComponentTransformBase::editCenter(void)
{
    editSField(CenterFieldMask);

    return _sfCenter.getValue();
}

//! Get the value of the ComponentTransform::_sfCenter field.
inline
const Vec3r &ComponentTransformBase::getCenter(void) const
{
    return _sfCenter.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3r               &ComponentTransformBase::getCenter         (void)
{
    return this->editCenter         ();
}
#endif

//! Set the value of the ComponentTransform::_sfCenter field.
inline
void ComponentTransformBase::setCenter(const Vec3r &value)
{
    editSField(CenterFieldMask);

    _sfCenter.setValue(value);
}
//! Get the value of the ComponentTransform::_sfRotation field.

inline
Quaternionr &ComponentTransformBase::editRotation(void)
{
    editSField(RotationFieldMask);

    return _sfRotation.getValue();
}

//! Get the value of the ComponentTransform::_sfRotation field.
inline
const Quaternionr &ComponentTransformBase::getRotation(void) const
{
    return _sfRotation.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Quaternionr         &ComponentTransformBase::getRotation       (void)
{
    return this->editRotation       ();
}
#endif

//! Set the value of the ComponentTransform::_sfRotation field.
inline
void ComponentTransformBase::setRotation(const Quaternionr &value)
{
    editSField(RotationFieldMask);

    _sfRotation.setValue(value);
}
//! Get the value of the ComponentTransform::_sfScale field.

inline
Vec3r &ComponentTransformBase::editScale(void)
{
    editSField(ScaleFieldMask);

    return _sfScale.getValue();
}

//! Get the value of the ComponentTransform::_sfScale field.
inline
const Vec3r &ComponentTransformBase::getScale(void) const
{
    return _sfScale.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3r               &ComponentTransformBase::getScale          (void)
{
    return this->editScale          ();
}
#endif

//! Set the value of the ComponentTransform::_sfScale field.
inline
void ComponentTransformBase::setScale(const Vec3r &value)
{
    editSField(ScaleFieldMask);

    _sfScale.setValue(value);
}
//! Get the value of the ComponentTransform::_sfScaleOrientation field.

inline
Quaternionr &ComponentTransformBase::editScaleOrientation(void)
{
    editSField(ScaleOrientationFieldMask);

    return _sfScaleOrientation.getValue();
}

//! Get the value of the ComponentTransform::_sfScaleOrientation field.
inline
const Quaternionr &ComponentTransformBase::getScaleOrientation(void) const
{
    return _sfScaleOrientation.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Quaternionr         &ComponentTransformBase::getScaleOrientation(void)
{
    return this->editScaleOrientation();
}
#endif

//! Set the value of the ComponentTransform::_sfScaleOrientation field.
inline
void ComponentTransformBase::setScaleOrientation(const Quaternionr &value)
{
    editSField(ScaleOrientationFieldMask);

    _sfScaleOrientation.setValue(value);
}
//! Get the value of the ComponentTransform::_sfTranslation field.

inline
Vec3r &ComponentTransformBase::editTranslation(void)
{
    editSField(TranslationFieldMask);

    return _sfTranslation.getValue();
}

//! Get the value of the ComponentTransform::_sfTranslation field.
inline
const Vec3r &ComponentTransformBase::getTranslation(void) const
{
    return _sfTranslation.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3r               &ComponentTransformBase::getTranslation    (void)
{
    return this->editTranslation    ();
}
#endif

//! Set the value of the ComponentTransform::_sfTranslation field.
inline
void ComponentTransformBase::setTranslation(const Vec3r &value)
{
    editSField(TranslationFieldMask);

    _sfTranslation.setValue(value);
}

//! create a new instance of the class
inline
ComponentTransformPtr ComponentTransformBase::create(void)
{
    ComponentTransformPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<ComponentTransform::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ComponentTransformBase::execSync(      ComponentTransformBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pOther->_sfCenter);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
        _sfRotation.syncWith(pOther->_sfRotation);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (ScaleOrientationFieldMask & whichField))
        _sfScaleOrientation.syncWith(pOther->_sfScaleOrientation);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
        _sfTranslation.syncWith(pOther->_sfTranslation);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ComponentTransformBase::execSync (      ComponentTransformBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pFrom->_sfCenter);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
        _sfRotation.syncWith(pFrom->_sfRotation);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pFrom->_sfScale);

    if(FieldBits::NoField != (ScaleOrientationFieldMask & whichField))
        _sfScaleOrientation.syncWith(pFrom->_sfScaleOrientation);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
        _sfTranslation.syncWith(pFrom->_sfTranslation);
}
#endif

#if 0
inline
void ComponentTransformBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ComponentTransformBase::getClassname(void)
{
    return "ComponentTransform";
}

typedef PointerBuilder<ComponentTransform>::ObjPtr          ComponentTransformPtr;
typedef PointerBuilder<ComponentTransform>::ObjPtrConst     ComponentTransformPtrConst;
typedef PointerBuilder<ComponentTransform>::ObjConstPtr     ComponentTransformConstPtr;

typedef PointerBuilder<ComponentTransform>::ObjPtrArg       ComponentTransformPtrArg;
typedef PointerBuilder<ComponentTransform>::ObjConstPtrArg  ComponentTransformConstPtrArg;
typedef PointerBuilder<ComponentTransform>::ObjPtrConstArg  ComponentTransformPtrConstArg;

OSG_END_NAMESPACE

