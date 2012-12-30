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
 **     class ShadowMapEngine
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADOWMAPENGINEBASE_H_
#define _OSGSHADOWMAPENGINEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGLightEngine.h" // Parent

#include "OSGTextureObjChunkFields.h"   // ShadowTexChunk type
#include "OSGSysFields.h"               // Width type

#include "OSGShadowMapEngineFields.h"

#include "OSGShadowMapEngineParent.h"

OSG_BEGIN_NAMESPACE


class ShadowMapEngine;

//! \brief ShadowMapEngine Base Class.

class OSG_GROUP_DLLMAPPING ShadowMapEngineBase : public ShadowMapEngineParent
{
  public:

    typedef ShadowMapEngineParent Inherited;
    typedef LightEngine ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShadowMapEngine);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ShadowTexChunkFieldId = Inherited::NextFieldId,
        WidthFieldId = ShadowTexChunkFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        OffsetBiasFieldId = HeightFieldId + 1,
        OffsetFactorFieldId = OffsetBiasFieldId + 1,
        ShadowTravMaskFieldId = OffsetFactorFieldId + 1,
        NextFieldId = ShadowTravMaskFieldId + 1
    };

    static const OSG::BitVector ShadowTexChunkFieldMask =
        (TypeTraits<BitVector>::One << ShadowTexChunkFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector OffsetBiasFieldMask =
        (TypeTraits<BitVector>::One << OffsetBiasFieldId);
    static const OSG::BitVector OffsetFactorFieldMask =
        (TypeTraits<BitVector>::One << OffsetFactorFieldId);
    static const OSG::BitVector ShadowTravMaskFieldMask =
        (TypeTraits<BitVector>::One << ShadowTravMaskFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecTextureObjChunkPtr SFShadowTexChunkType;
    typedef SFInt32           SFWidthType;
    typedef SFInt32           SFHeightType;
    typedef SFReal32          SFOffsetBiasType;
    typedef SFReal32          SFOffsetFactorType;
    typedef SFUInt32          SFShadowTravMaskType;

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

            const SFUnrecTextureObjChunkPtr *getSFShadowTexChunk (void) const;
                  SFUnrecTextureObjChunkPtr *editSFShadowTexChunk (void);

                  SFInt32             *editSFWidth          (void);
            const SFInt32             *getSFWidth           (void) const;

                  SFInt32             *editSFHeight         (void);
            const SFInt32             *getSFHeight          (void) const;

                  SFReal32            *editSFOffsetBias     (void);
            const SFReal32            *getSFOffsetBias      (void) const;

                  SFReal32            *editSFOffsetFactor   (void);
            const SFReal32            *getSFOffsetFactor    (void) const;

                  SFUInt32            *editSFShadowTravMask (void);
            const SFUInt32            *getSFShadowTravMask  (void) const;


                  TextureObjChunk * getShadowTexChunk (void) const;

                  Int32               &editWidth          (void);
                  Int32                getWidth           (void) const;

                  Int32               &editHeight         (void);
                  Int32                getHeight          (void) const;

                  Real32              &editOffsetBias     (void);
                  Real32               getOffsetBias      (void) const;

                  Real32              &editOffsetFactor   (void);
                  Real32               getOffsetFactor    (void) const;

                  UInt32              &editShadowTravMask (void);
                  UInt32               getShadowTravMask  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setShadowTexChunk (TextureObjChunk * const value);
            void setWidth          (const Int32 value);
            void setHeight         (const Int32 value);
            void setOffsetBias     (const Real32 value);
            void setOffsetFactor   (const Real32 value);
            void setShadowTravMask (const UInt32 value);

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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecTextureObjChunkPtr _sfShadowTexChunk;
    SFInt32           _sfWidth;
    SFInt32           _sfHeight;
    SFReal32          _sfOffsetBias;
    SFReal32          _sfOffsetFactor;
    SFUInt32          _sfShadowTravMask;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShadowMapEngineBase(void);
    ShadowMapEngineBase(const ShadowMapEngineBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShadowMapEngineBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ShadowMapEngine *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleShadowTexChunk  (void) const;
    EditFieldHandlePtr editHandleShadowTexChunk (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);
    GetFieldHandlePtr  getHandleOffsetBias      (void) const;
    EditFieldHandlePtr editHandleOffsetBias     (void);
    GetFieldHandlePtr  getHandleOffsetFactor    (void) const;
    EditFieldHandlePtr editHandleOffsetFactor   (void);
    GetFieldHandlePtr  getHandleShadowTravMask  (void) const;
    EditFieldHandlePtr editHandleShadowTravMask (void);

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

            void execSync (      ShadowMapEngineBase *pFrom,
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
    void operator =(const ShadowMapEngineBase &source);
};

typedef ShadowMapEngineBase *ShadowMapEngineBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADOWMAPENGINEBASE_H_ */
