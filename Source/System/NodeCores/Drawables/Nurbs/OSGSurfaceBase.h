/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class Surface
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSURFACEBASE_H_
#define _OSGSURFACEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGeometry.h" // Parent

#include "OSGSysFields.h"               // DimU type
#include "OSGGeoVectorPropertyFields.h" // ControlPoints type
#include "OSGVecFields.h"               // CurveControlPoints type

#include "OSGSurfaceFields.h"

OSG_BEGIN_NAMESPACE


class Surface;

//! \brief Surface Base Class.

class OSG_DRAWABLE_DLLMAPPING SurfaceBase : public Geometry
{
  public:

    typedef Geometry Inherited;
    typedef Geometry ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Surface);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DimUFieldId = Inherited::NextFieldId,
        DimVFieldId = DimUFieldId + 1,
        KnotsUFieldId = DimVFieldId + 1,
        KnotsVFieldId = KnotsUFieldId + 1,
        ControlPointsFieldId = KnotsVFieldId + 1,
        ErrorFieldId = ControlPointsFieldId + 1,
        NumCurvesFieldId = ErrorFieldId + 1,
        KnotLengthsFieldId = NumCurvesFieldId + 1,
        DimensionsFieldId = KnotLengthsFieldId + 1,
        CurveControlPointsFieldId = DimensionsFieldId + 1,
        KnotsFieldId = CurveControlPointsFieldId + 1,
        CurvesPerLoopFieldId = KnotsFieldId + 1,
        IsDelaunayFieldId = CurvesPerLoopFieldId + 1,
        TextureControlPointsFieldId = IsDelaunayFieldId + 1,
        DirtyMaskFieldId = TextureControlPointsFieldId + 1,
        SurfaceGLIdFieldId = DirtyMaskFieldId + 1,
        NextFieldId = SurfaceGLIdFieldId + 1
    };

    static const OSG::BitVector DimUFieldMask =
        (TypeTraits<BitVector>::One << DimUFieldId);
    static const OSG::BitVector DimVFieldMask =
        (TypeTraits<BitVector>::One << DimVFieldId);
    static const OSG::BitVector KnotsUFieldMask =
        (TypeTraits<BitVector>::One << KnotsUFieldId);
    static const OSG::BitVector KnotsVFieldMask =
        (TypeTraits<BitVector>::One << KnotsVFieldId);
    static const OSG::BitVector ControlPointsFieldMask =
        (TypeTraits<BitVector>::One << ControlPointsFieldId);
    static const OSG::BitVector ErrorFieldMask =
        (TypeTraits<BitVector>::One << ErrorFieldId);
    static const OSG::BitVector NumCurvesFieldMask =
        (TypeTraits<BitVector>::One << NumCurvesFieldId);
    static const OSG::BitVector KnotLengthsFieldMask =
        (TypeTraits<BitVector>::One << KnotLengthsFieldId);
    static const OSG::BitVector DimensionsFieldMask =
        (TypeTraits<BitVector>::One << DimensionsFieldId);
    static const OSG::BitVector CurveControlPointsFieldMask =
        (TypeTraits<BitVector>::One << CurveControlPointsFieldId);
    static const OSG::BitVector KnotsFieldMask =
        (TypeTraits<BitVector>::One << KnotsFieldId);
    static const OSG::BitVector CurvesPerLoopFieldMask =
        (TypeTraits<BitVector>::One << CurvesPerLoopFieldId);
    static const OSG::BitVector IsDelaunayFieldMask =
        (TypeTraits<BitVector>::One << IsDelaunayFieldId);
    static const OSG::BitVector TextureControlPointsFieldMask =
        (TypeTraits<BitVector>::One << TextureControlPointsFieldId);
    static const OSG::BitVector DirtyMaskFieldMask =
        (TypeTraits<BitVector>::One << DirtyMaskFieldId);
    static const OSG::BitVector SurfaceGLIdFieldMask =
        (TypeTraits<BitVector>::One << SurfaceGLIdFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFDimUType;
    typedef SFUInt32          SFDimVType;
    typedef MFReal32          MFKnotsUType;
    typedef MFReal32          MFKnotsVType;
    typedef SFUnrecChildGeoVectorPropertyPtr SFControlPointsType;
    typedef SFReal32          SFErrorType;
    typedef SFUInt32          SFNumCurvesType;
    typedef MFUInt32          MFKnotLengthsType;
    typedef MFUInt32          MFDimensionsType;
    typedef MFPnt3f           MFCurveControlPointsType;
    typedef MFReal32          MFKnotsType;
    typedef MFUInt32          MFCurvesPerLoopType;
    typedef SFBool            SFIsDelaunayType;
    typedef SFUnrecChildGeoVectorPropertyPtr SFTextureControlPointsType;
    typedef SFUInt32          SFDirtyMaskType;
    typedef SFInt32           SFSurfaceGLIdType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFDimU           (void);
            const SFUInt32            *getSFDimU            (void) const;

                  SFUInt32            *editSFDimV           (void);
            const SFUInt32            *getSFDimV            (void) const;

                  MFReal32            *editMFKnotsU         (void);
            const MFReal32            *getMFKnotsU          (void) const;

                  MFReal32            *editMFKnotsV         (void);
            const MFReal32            *getMFKnotsV          (void) const;
            const SFUnrecChildGeoVectorPropertyPtr *getSFControlPoints  (void) const;
                  SFUnrecChildGeoVectorPropertyPtr *editSFControlPoints  (void);

                  SFReal32            *editSFError          (void);
            const SFReal32            *getSFError           (void) const;

                  SFBool              *editSFIsDelaunay     (void);
            const SFBool              *getSFIsDelaunay      (void) const;
            const SFUnrecChildGeoVectorPropertyPtr *getSFTextureControlPoints(void) const;
                  SFUnrecChildGeoVectorPropertyPtr *editSFTextureControlPoints(void);


                  UInt32              &editDimU           (void);
                  UInt32               getDimU            (void) const;

                  UInt32              &editDimV           (void);
                  UInt32               getDimV            (void) const;

                  Real32              &editKnotsU         (const UInt32 index);
                  Real32               getKnotsU          (const UInt32 index) const;

                  Real32              &editKnotsV         (const UInt32 index);
                  Real32               getKnotsV          (const UInt32 index) const;

                  GeoVectorProperty * getControlPoints  (void) const;

                  Real32              &editError          (void);
                  Real32               getError           (void) const;

                  bool                &editIsDelaunay     (void);
                  bool                 getIsDelaunay      (void) const;

                  GeoVectorProperty * getTextureControlPoints(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDimU           (const UInt32 value);
            void setDimV           (const UInt32 value);
            void setControlPoints  (GeoVectorProperty * const value);
            void setError          (const Real32 value);
            void setIsDelaunay     (const bool value);
            void setTextureControlPoints(GeoVectorProperty * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SurfaceTransitPtr  create          (void);
    static  Surface           *createEmpty     (void);

    static  SurfaceTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Surface            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SurfaceTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32          _sfDimU;
    SFUInt32          _sfDimV;
    MFReal32          _mfKnotsU;
    MFReal32          _mfKnotsV;
    SFUnrecChildGeoVectorPropertyPtr _sfControlPoints;
    SFReal32          _sfError;
    SFUInt32          _sfNumCurves;
    MFUInt32          _mfKnotLengths;
    MFUInt32          _mfDimensions;
    MFPnt3f           _mfCurveControlPoints;
    MFReal32          _mfKnots;
    MFUInt32          _mfCurvesPerLoop;
    SFBool            _sfIsDelaunay;
    SFUnrecChildGeoVectorPropertyPtr _sfTextureControlPoints;
    SFUInt32          _sfDirtyMask;
    SFInt32           _sfSurfaceGLId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SurfaceBase(void);
    SurfaceBase(const SurfaceBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SurfaceBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Surface *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleDimU            (void) const;
    EditFieldHandlePtr editHandleDimU           (void);
    GetFieldHandlePtr  getHandleDimV            (void) const;
    EditFieldHandlePtr editHandleDimV           (void);
    GetFieldHandlePtr  getHandleKnotsU          (void) const;
    EditFieldHandlePtr editHandleKnotsU         (void);
    GetFieldHandlePtr  getHandleKnotsV          (void) const;
    EditFieldHandlePtr editHandleKnotsV         (void);
    GetFieldHandlePtr  getHandleControlPoints   (void) const;
    EditFieldHandlePtr editHandleControlPoints  (void);
    GetFieldHandlePtr  getHandleError           (void) const;
    EditFieldHandlePtr editHandleError          (void);
    GetFieldHandlePtr  getHandleNumCurves       (void) const;
    EditFieldHandlePtr editHandleNumCurves      (void);
    GetFieldHandlePtr  getHandleKnotLengths     (void) const;
    EditFieldHandlePtr editHandleKnotLengths    (void);
    GetFieldHandlePtr  getHandleDimensions      (void) const;
    EditFieldHandlePtr editHandleDimensions     (void);
    GetFieldHandlePtr  getHandleCurveControlPoints (void) const;
    EditFieldHandlePtr editHandleCurveControlPoints(void);
    GetFieldHandlePtr  getHandleKnots           (void) const;
    EditFieldHandlePtr editHandleKnots          (void);
    GetFieldHandlePtr  getHandleCurvesPerLoop   (void) const;
    EditFieldHandlePtr editHandleCurvesPerLoop  (void);
    GetFieldHandlePtr  getHandleIsDelaunay      (void) const;
    EditFieldHandlePtr editHandleIsDelaunay     (void);
    GetFieldHandlePtr  getHandleTextureControlPoints (void) const;
    EditFieldHandlePtr editHandleTextureControlPoints(void);
    GetFieldHandlePtr  getHandleDirtyMask       (void) const;
    EditFieldHandlePtr editHandleDirtyMask      (void);
    GetFieldHandlePtr  getHandleSurfaceGLId     (void) const;
    EditFieldHandlePtr editHandleSurfaceGLId    (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFNumCurves      (void);
            const SFUInt32            *getSFNumCurves       (void) const;

                  MFUInt32            *editMFKnotLengths    (void);
            const MFUInt32            *getMFKnotLengths     (void) const;

                  MFUInt32            *editMFDimensions     (void);
            const MFUInt32            *getMFDimensions      (void) const;

                  MFPnt3f             *editMFCurveControlPoints(void);
            const MFPnt3f             *getMFCurveControlPoints (void) const;

                  MFReal32            *editMFKnots          (void);
            const MFReal32            *getMFKnots           (void) const;

                  MFUInt32            *editMFCurvesPerLoop  (void);
            const MFUInt32            *getMFCurvesPerLoop   (void) const;

                  SFUInt32            *editSFDirtyMask      (void);
            const SFUInt32            *getSFDirtyMask       (void) const;

                  SFInt32             *editSFSurfaceGLId    (void);
            const SFInt32             *getSFSurfaceGLId     (void) const;


                  UInt32              &editNumCurves      (void);
                  UInt32               getNumCurves       (void) const;

                  UInt32              &editKnotLengths    (const UInt32 index);
                  UInt32               getKnotLengths     (const UInt32 index) const;

                  UInt32              &editDimensions     (const UInt32 index);
                  UInt32               getDimensions      (const UInt32 index) const;

                  Pnt3f               &editCurveControlPoints(const UInt32 index);
            const Pnt3f               &getCurveControlPoints (const UInt32 index) const;

                  Real32              &editKnots          (const UInt32 index);
                  Real32               getKnots           (const UInt32 index) const;

                  UInt32              &editCurvesPerLoop  (const UInt32 index);
                  UInt32               getCurvesPerLoop   (const UInt32 index) const;

                  UInt32              &editDirtyMask      (void);
                  UInt32               getDirtyMask       (void) const;

                  Int32               &editSurfaceGLId    (void);
                  Int32                getSurfaceGLId     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setNumCurves      (const UInt32 value);
            void setDirtyMask      (const UInt32 value);
            void setSurfaceGLId    (const Int32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SurfaceBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SurfaceBase &source);
};

typedef SurfaceBase *SurfaceBaseP;

typedef CoredNodeRefPtr  <Surface> SurfaceNodeRefPtr;
typedef CoredNodeMTRefPtr<Surface> SurfaceNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGSURFACEBASE_H_ */
