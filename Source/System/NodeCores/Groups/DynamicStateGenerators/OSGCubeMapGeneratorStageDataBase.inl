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
 **     class CubeMapGeneratorStageData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &CubeMapGeneratorStageDataBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CubeMapGeneratorStageDataBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CubeMapGeneratorStageDataBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the CubeMapGeneratorStageData::_sfCamera field.
inline
Camera * CubeMapGeneratorStageDataBase::getCamera(void) const
{
    return _sfCamera.getValue();
}

//! Set the value of the CubeMapGeneratorStageData::_sfCamera field.
inline
void CubeMapGeneratorStageDataBase::setCamera(Camera * const value)
{
    editSField(CameraFieldMask);

    _sfCamera.setValue(value);
}

//! Get the value of the CubeMapGeneratorStageData::_sfTexTransform field.
inline
TextureTransformChunk * CubeMapGeneratorStageDataBase::getTexTransform(void) const
{
    return _sfTexTransform.getValue();
}

//! Set the value of the CubeMapGeneratorStageData::_sfTexTransform field.
inline
void CubeMapGeneratorStageDataBase::setTexTransform(TextureTransformChunk * const value)
{
    editSField(TexTransformFieldMask);

    _sfTexTransform.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CubeMapGeneratorStageDataBase::execSync (      CubeMapGeneratorStageDataBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
        _sfCamera.syncWith(pFrom->_sfCamera);

    if(FieldBits::NoField != (TexTransformFieldMask & whichField))
        _sfTexTransform.syncWith(pFrom->_sfTexTransform);
}
#endif


inline
const Char8 *CubeMapGeneratorStageDataBase::getClassname(void)
{
    return "CubeMapGeneratorStageData";
}
OSG_GEN_CONTAINERPTR(CubeMapGeneratorStageData);

OSG_END_NAMESPACE

