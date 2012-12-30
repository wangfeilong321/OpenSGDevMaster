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
 **     class PlaneMoveManipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &PlaneMoveManipulatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PlaneMoveManipulatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PlaneMoveManipulatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PlaneMoveManipulator::_sfAxis field.

inline
UInt16 &PlaneMoveManipulatorBase::editAxis(void)
{
    editSField(AxisFieldMask);

    return _sfAxis.getValue();
}

//! Get the value of the PlaneMoveManipulator::_sfAxis field.
inline
      UInt16  PlaneMoveManipulatorBase::getAxis(void) const
{
    return _sfAxis.getValue();
}

//! Set the value of the PlaneMoveManipulator::_sfAxis field.
inline
void PlaneMoveManipulatorBase::setAxis(const UInt16 value)
{
    editSField(AxisFieldMask);

    _sfAxis.setValue(value);
}
//! Get the value of the PlaneMoveManipulator::_sfBaseTranslation field.

inline
Vec3f &PlaneMoveManipulatorBase::editBaseTranslation(void)
{
    editSField(BaseTranslationFieldMask);

    return _sfBaseTranslation.getValue();
}

//! Get the value of the PlaneMoveManipulator::_sfBaseTranslation field.
inline
const Vec3f &PlaneMoveManipulatorBase::getBaseTranslation(void) const
{
    return _sfBaseTranslation.getValue();
}

//! Set the value of the PlaneMoveManipulator::_sfBaseTranslation field.
inline
void PlaneMoveManipulatorBase::setBaseTranslation(const Vec3f &value)
{
    editSField(BaseTranslationFieldMask);

    _sfBaseTranslation.setValue(value);
}
//! Get the value of the PlaneMoveManipulator::_sfBaseRotation field.

inline
Quaternion &PlaneMoveManipulatorBase::editBaseRotation(void)
{
    editSField(BaseRotationFieldMask);

    return _sfBaseRotation.getValue();
}

//! Get the value of the PlaneMoveManipulator::_sfBaseRotation field.
inline
const Quaternion &PlaneMoveManipulatorBase::getBaseRotation(void) const
{
    return _sfBaseRotation.getValue();
}

//! Set the value of the PlaneMoveManipulator::_sfBaseRotation field.
inline
void PlaneMoveManipulatorBase::setBaseRotation(const Quaternion &value)
{
    editSField(BaseRotationFieldMask);

    _sfBaseRotation.setValue(value);
}
//! Get the value of the PlaneMoveManipulator::_sfClickPoint field.

inline
Pnt3f &PlaneMoveManipulatorBase::editClickPoint(void)
{
    editSField(ClickPointFieldMask);

    return _sfClickPoint.getValue();
}

//! Get the value of the PlaneMoveManipulator::_sfClickPoint field.
inline
const Pnt3f &PlaneMoveManipulatorBase::getClickPoint(void) const
{
    return _sfClickPoint.getValue();
}

//! Set the value of the PlaneMoveManipulator::_sfClickPoint field.
inline
void PlaneMoveManipulatorBase::setClickPoint(const Pnt3f &value)
{
    editSField(ClickPointFieldMask);

    _sfClickPoint.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PlaneMoveManipulatorBase::execSync (      PlaneMoveManipulatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
        _sfAxis.syncWith(pFrom->_sfAxis);

    if(FieldBits::NoField != (BaseTranslationFieldMask & whichField))
        _sfBaseTranslation.syncWith(pFrom->_sfBaseTranslation);

    if(FieldBits::NoField != (BaseRotationFieldMask & whichField))
        _sfBaseRotation.syncWith(pFrom->_sfBaseRotation);

    if(FieldBits::NoField != (ClickPointFieldMask & whichField))
        _sfClickPoint.syncWith(pFrom->_sfClickPoint);
}
#endif


inline
const Char8 *PlaneMoveManipulatorBase::getClassname(void)
{
    return "PlaneMoveManipulator";
}
OSG_GEN_CONTAINERPTR(PlaneMoveManipulator);

OSG_END_NAMESPACE

