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
 **     class CubeMapGenerator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCUBEMAPGENERATORBASE_H_
#define _OSGCUBEMAPGENERATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGDynamicStateGenerator.h" // Parent

#include "OSGNodeFields.h"              // Root type
#include "OSGTextureObjChunkFields.h"   // Texture type
#include "OSGVecFields.h"               // TextureSize type
#include "OSGBaseFields.h"              // TextureFormat type
#include "OSGSysFields.h"               // OriginMode type
#include "OSGBackgroundFields.h"        // Background type
#include "OSGCameraFields.h"            // Camera type

#include "OSGCubeMapGeneratorFields.h"

OSG_BEGIN_NAMESPACE


class CubeMapGenerator;

//! \brief CubeMapGenerator Base Class.

class OSG_GROUP_DLLMAPPING CubeMapGeneratorBase : public DynamicStateGenerator
{
  public:

    typedef DynamicStateGenerator Inherited;
    typedef DynamicStateGenerator ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CubeMapGenerator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootFieldId = Inherited::NextFieldId,
        ExcludeFieldId = RootFieldId + 1,
        TextureFieldId = ExcludeFieldId + 1,
        TextureSizeFieldId = TextureFieldId + 1,
        TextureFormatFieldId = TextureSizeFieldId + 1,
        BeaconFieldId = TextureFormatFieldId + 1,
        OriginFieldId = BeaconFieldId + 1,
        OriginModeFieldId = OriginFieldId + 1,
        TexUnitFieldId = OriginModeFieldId + 1,
        SetupModeFieldId = TexUnitFieldId + 1,
        BackgroundFieldId = SetupModeFieldId + 1,
        CameraFieldId = BackgroundFieldId + 1,
        NextFieldId = CameraFieldId + 1
    };

    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector ExcludeFieldMask =
        (TypeTraits<BitVector>::One << ExcludeFieldId);
    static const OSG::BitVector TextureFieldMask =
        (TypeTraits<BitVector>::One << TextureFieldId);
    static const OSG::BitVector TextureSizeFieldMask =
        (TypeTraits<BitVector>::One << TextureSizeFieldId);
    static const OSG::BitVector TextureFormatFieldMask =
        (TypeTraits<BitVector>::One << TextureFormatFieldId);
    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
    static const OSG::BitVector OriginFieldMask =
        (TypeTraits<BitVector>::One << OriginFieldId);
    static const OSG::BitVector OriginModeFieldMask =
        (TypeTraits<BitVector>::One << OriginModeFieldId);
    static const OSG::BitVector TexUnitFieldMask =
        (TypeTraits<BitVector>::One << TexUnitFieldId);
    static const OSG::BitVector SetupModeFieldMask =
        (TypeTraits<BitVector>::One << SetupModeFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector CameraFieldMask =
        (TypeTraits<BitVector>::One << CameraFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecNodePtr    SFRootType;
    typedef MFUnrecNodePtr    MFExcludeType;
    typedef SFUnrecTextureObjChunkPtr SFTextureType;
    typedef SFVec2s           SFTextureSizeType;
    typedef SFGLenum          SFTextureFormatType;
    typedef SFWeakNodePtr     SFBeaconType;
    typedef SFPnt3f           SFOriginType;
    typedef SFUInt32          SFOriginModeType;
    typedef SFUInt32          SFTexUnitType;
    typedef SFUInt32          SFSetupModeType;
    typedef SFUnrecBackgroundPtr SFBackgroundType;
    typedef SFUnrecCameraPtr  SFCameraType;

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

            const SFUnrecNodePtr      *getSFRoot           (void) const;
                  SFUnrecNodePtr      *editSFRoot           (void);
            const MFUnrecNodePtr      *getMFExclude        (void) const;
                  MFUnrecNodePtr      *editMFExclude        (void);
            const SFUnrecTextureObjChunkPtr *getSFTexture        (void) const;
                  SFUnrecTextureObjChunkPtr *editSFTexture        (void);

                  SFVec2s             *editSFTextureSize    (void);
            const SFVec2s             *getSFTextureSize     (void) const;

                  SFGLenum            *editSFTextureFormat  (void);
            const SFGLenum            *getSFTextureFormat   (void) const;
            const SFWeakNodePtr       *getSFBeacon         (void) const;
                  SFWeakNodePtr       *editSFBeacon         (void);

                  SFPnt3f             *editSFOrigin         (void);
            const SFPnt3f             *getSFOrigin          (void) const;

                  SFUInt32            *editSFOriginMode     (void);
            const SFUInt32            *getSFOriginMode      (void) const;

                  SFUInt32            *editSFTexUnit        (void);
            const SFUInt32            *getSFTexUnit         (void) const;

                  SFUInt32            *editSFSetupMode      (void);
            const SFUInt32            *getSFSetupMode       (void) const;
            const SFUnrecBackgroundPtr *getSFBackground     (void) const;
                  SFUnrecBackgroundPtr *editSFBackground     (void);
            const SFUnrecCameraPtr    *getSFCamera         (void) const;
                  SFUnrecCameraPtr    *editSFCamera         (void);


                  Node * getRoot           (void) const;

                  Node * getExclude        (const UInt32 index) const;

                  TextureObjChunk * getTexture        (void) const;

                  Vec2s               &editTextureSize    (void);
            const Vec2s               &getTextureSize     (void) const;

                  GLenum              &editTextureFormat  (void);
            const GLenum              &getTextureFormat   (void) const;

                  Node * getBeacon         (void) const;

                  Pnt3f               &editOrigin         (void);
            const Pnt3f               &getOrigin          (void) const;

                  UInt32              &editOriginMode     (void);
                  UInt32               getOriginMode      (void) const;

                  UInt32              &editTexUnit        (void);
                  UInt32               getTexUnit         (void) const;

                  UInt32              &editSetupMode      (void);
                  UInt32               getSetupMode       (void) const;

                  Background * getBackground     (void) const;

                  Camera * getCamera         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRoot           (Node * const value);
            void setTexture        (TextureObjChunk * const value);
            void setTextureSize    (const Vec2s &value);
            void setTextureFormat  (const GLenum &value);
            void setBeacon         (Node * const value);
            void setOrigin         (const Pnt3f &value);
            void setOriginMode     (const UInt32 value);
            void setTexUnit        (const UInt32 value);
            void setSetupMode      (const UInt32 value);
            void setBackground     (Background * const value);
            void setCamera         (Camera * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToExclude             (Node * const value   );
    void assignExclude            (const MFUnrecNodePtr    &value);
    void removeFromExclude (UInt32               uiIndex );
    void removeObjFromExclude(Node * const value   );
    void clearExclude               (void                         );

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

    static  CubeMapGeneratorTransitPtr  create          (void);
    static  CubeMapGenerator           *createEmpty     (void);

    static  CubeMapGeneratorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CubeMapGenerator            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CubeMapGeneratorTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecNodePtr    _sfRoot;
    MFUnrecNodePtr    _mfExclude;
    SFUnrecTextureObjChunkPtr _sfTexture;
    SFVec2s           _sfTextureSize;
    SFGLenum          _sfTextureFormat;
    SFWeakNodePtr     _sfBeacon;
    SFPnt3f           _sfOrigin;
    SFUInt32          _sfOriginMode;
    SFUInt32          _sfTexUnit;
    SFUInt32          _sfSetupMode;
    SFUnrecBackgroundPtr _sfBackground;
    SFUnrecCameraPtr  _sfCamera;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CubeMapGeneratorBase(void);
    CubeMapGeneratorBase(const CubeMapGeneratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CubeMapGeneratorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CubeMapGenerator *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleExclude         (void) const;
    EditFieldHandlePtr editHandleExclude        (void);
    GetFieldHandlePtr  getHandleTexture         (void) const;
    EditFieldHandlePtr editHandleTexture        (void);
    GetFieldHandlePtr  getHandleTextureSize     (void) const;
    EditFieldHandlePtr editHandleTextureSize    (void);
    GetFieldHandlePtr  getHandleTextureFormat   (void) const;
    EditFieldHandlePtr editHandleTextureFormat  (void);
    GetFieldHandlePtr  getHandleBeacon          (void) const;
    EditFieldHandlePtr editHandleBeacon         (void);
    GetFieldHandlePtr  getHandleOrigin          (void) const;
    EditFieldHandlePtr editHandleOrigin         (void);
    GetFieldHandlePtr  getHandleOriginMode      (void) const;
    EditFieldHandlePtr editHandleOriginMode     (void);
    GetFieldHandlePtr  getHandleTexUnit         (void) const;
    EditFieldHandlePtr editHandleTexUnit        (void);
    GetFieldHandlePtr  getHandleSetupMode       (void) const;
    EditFieldHandlePtr editHandleSetupMode      (void);
    GetFieldHandlePtr  getHandleBackground      (void) const;
    EditFieldHandlePtr editHandleBackground     (void);
    GetFieldHandlePtr  getHandleCamera          (void) const;
    EditFieldHandlePtr editHandleCamera         (void);

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

            void execSync (      CubeMapGeneratorBase *pFrom,
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
    void operator =(const CubeMapGeneratorBase &source);
};

typedef CubeMapGeneratorBase *CubeMapGeneratorBaseP;

typedef CoredNodeRefPtr  <CubeMapGenerator> CubeMapGeneratorNodeRefPtr;
typedef CoredNodeMTRefPtr<CubeMapGenerator> CubeMapGeneratorNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGCUBEMAPGENERATORBASE_H_ */
