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
 **     class MatrixCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MatrixCameraBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MatrixCameraBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MatrixCameraBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MatrixCamera::_sfProjectionMatrix field.

inline
Matrix &MatrixCameraBase::editProjectionMatrix(void)
{
    editSField(ProjectionMatrixFieldMask);

    return _sfProjectionMatrix.getValue();
}

//! Get the value of the MatrixCamera::_sfProjectionMatrix field.
inline
const Matrix &MatrixCameraBase::getProjectionMatrix(void) const
{
    return _sfProjectionMatrix.getValue();
}

#ifdef OSG_1_COMPAT
inline
Matrix              &MatrixCameraBase::getProjectionMatrix(void)
{
    return this->editProjectionMatrix();
}
#endif

//! Set the value of the MatrixCamera::_sfProjectionMatrix field.
inline
void MatrixCameraBase::setProjectionMatrix(const Matrix &value)
{
    editSField(ProjectionMatrixFieldMask);

    _sfProjectionMatrix.setValue(value);
}
//! Get the value of the MatrixCamera::_sfModelviewMatrix field.

inline
Matrix &MatrixCameraBase::editModelviewMatrix(void)
{
    editSField(ModelviewMatrixFieldMask);

    return _sfModelviewMatrix.getValue();
}

//! Get the value of the MatrixCamera::_sfModelviewMatrix field.
inline
const Matrix &MatrixCameraBase::getModelviewMatrix(void) const
{
    return _sfModelviewMatrix.getValue();
}

#ifdef OSG_1_COMPAT
inline
Matrix              &MatrixCameraBase::getModelviewMatrix(void)
{
    return this->editModelviewMatrix();
}
#endif

//! Set the value of the MatrixCamera::_sfModelviewMatrix field.
inline
void MatrixCameraBase::setModelviewMatrix(const Matrix &value)
{
    editSField(ModelviewMatrixFieldMask);

    _sfModelviewMatrix.setValue(value);
}

//! create a new instance of the class
inline
MatrixCameraPtr MatrixCameraBase::create(void)
{
    MatrixCameraPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<MatrixCamera::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void MatrixCameraBase::execSync(      MatrixCameraBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
        _sfProjectionMatrix.syncWith(pOther->_sfProjectionMatrix);

    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
        _sfModelviewMatrix.syncWith(pOther->_sfModelviewMatrix);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void MatrixCameraBase::execSync (      MatrixCameraBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
        _sfProjectionMatrix.syncWith(pFrom->_sfProjectionMatrix);

    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
        _sfModelviewMatrix.syncWith(pFrom->_sfModelviewMatrix);
}
#endif

#if 0
inline
void MatrixCameraBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *MatrixCameraBase::getClassname(void)
{
    return "MatrixCamera";
}

typedef PointerBuilder<MatrixCamera>::ObjPtr          MatrixCameraPtr;
typedef PointerBuilder<MatrixCamera>::ObjPtrConst     MatrixCameraPtrConst;
typedef PointerBuilder<MatrixCamera>::ObjConstPtr     MatrixCameraConstPtr;

typedef PointerBuilder<MatrixCamera>::ObjPtrArg       MatrixCameraPtrArg;
typedef PointerBuilder<MatrixCamera>::ObjConstPtrArg  MatrixCameraConstPtrArg;
typedef PointerBuilder<MatrixCamera>::ObjPtrConstArg  MatrixCameraPtrConstArg;

OSG_END_NAMESPACE

#define OSGMATRIXCAMERABASE_INLINE_CVSID "@(#)$Id$"
