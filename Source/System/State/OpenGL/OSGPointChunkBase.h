/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class PointChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPOINTCHUNKBASE_H_
#define _OSGPOINTCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGReal32Fields.h" // Size type
#include "OSGBoolFields.h" // Smooth type
#include "OSGReal32Fields.h" // MinSize type
#include "OSGReal32Fields.h" // MaxSize type
#include "OSGReal32Fields.h" // ConstantAttenuation type
#include "OSGReal32Fields.h" // LinearAttenuation type
#include "OSGReal32Fields.h" // QuadraticAttenuation type
#include "OSGReal32Fields.h" // FadeThreshold type
#include "OSGBoolFields.h" // Sprite type
#include "OSGGLenumFields.h" // RMode type

#include "OSGPointChunkFields.h"

OSG_BEGIN_NAMESPACE

class PointChunk;

//! \brief PointChunk Base Class.

class OSG_STATE_DLLMAPPING PointChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              PointChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              PointChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              PointChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              PointChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              PointChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              PointChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SizeFieldId = Inherited::NextFieldId,
        SmoothFieldId = SizeFieldId + 1,
        MinSizeFieldId = SmoothFieldId + 1,
        MaxSizeFieldId = MinSizeFieldId + 1,
        ConstantAttenuationFieldId = MaxSizeFieldId + 1,
        LinearAttenuationFieldId = ConstantAttenuationFieldId + 1,
        QuadraticAttenuationFieldId = LinearAttenuationFieldId + 1,
        FadeThresholdFieldId = QuadraticAttenuationFieldId + 1,
        SpriteFieldId = FadeThresholdFieldId + 1,
        RModeFieldId = SpriteFieldId + 1,
        NextFieldId = RModeFieldId + 1
    };

    static const OSG::BitVector SizeFieldMask =
        (TypeTraits<BitVector>::One << SizeFieldId);
    static const OSG::BitVector SmoothFieldMask =
        (TypeTraits<BitVector>::One << SmoothFieldId);
    static const OSG::BitVector MinSizeFieldMask =
        (TypeTraits<BitVector>::One << MinSizeFieldId);
    static const OSG::BitVector MaxSizeFieldMask =
        (TypeTraits<BitVector>::One << MaxSizeFieldId);
    static const OSG::BitVector ConstantAttenuationFieldMask =
        (TypeTraits<BitVector>::One << ConstantAttenuationFieldId);
    static const OSG::BitVector LinearAttenuationFieldMask =
        (TypeTraits<BitVector>::One << LinearAttenuationFieldId);
    static const OSG::BitVector QuadraticAttenuationFieldMask =
        (TypeTraits<BitVector>::One << QuadraticAttenuationFieldId);
    static const OSG::BitVector FadeThresholdFieldMask =
        (TypeTraits<BitVector>::One << FadeThresholdFieldId);
    static const OSG::BitVector SpriteFieldMask =
        (TypeTraits<BitVector>::One << SpriteFieldId);
    static const OSG::BitVector RModeFieldMask =
        (TypeTraits<BitVector>::One << RModeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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


#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFSize            (void);
#endif
                  SFReal32            *editSFSize           (void);
            const SFReal32            *getSFSize            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFSmooth          (void);
#endif
                  SFBool              *editSFSmooth         (void);
            const SFBool              *getSFSmooth          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFMinSize         (void);
#endif
                  SFReal32            *editSFMinSize        (void);
            const SFReal32            *getSFMinSize         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFMaxSize         (void);
#endif
                  SFReal32            *editSFMaxSize        (void);
            const SFReal32            *getSFMaxSize         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFConstantAttenuation (void);
#endif
                  SFReal32            *editSFConstantAttenuation(void);
            const SFReal32            *getSFConstantAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFLinearAttenuation (void);
#endif
                  SFReal32            *editSFLinearAttenuation(void);
            const SFReal32            *getSFLinearAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFQuadraticAttenuation (void);
#endif
                  SFReal32            *editSFQuadraticAttenuation(void);
            const SFReal32            *getSFQuadraticAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFFadeThreshold   (void);
#endif
                  SFReal32            *editSFFadeThreshold  (void);
            const SFReal32            *getSFFadeThreshold   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFSprite          (void);
#endif
                  SFBool              *editSFSprite         (void);
            const SFBool              *getSFSprite          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFRMode           (void);
#endif
                  SFGLenum            *editSFRMode          (void);
            const SFGLenum            *getSFRMode           (void) const;


#ifdef OSG_1_GET_COMPAT
                  Real32              &getSize            (void);
#endif
                  Real32              &editSize           (void);
            const Real32              &getSize            (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getSmooth          (void);
#endif
                  bool                &editSmooth         (void);
            const bool                &getSmooth          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getMinSize         (void);
#endif
                  Real32              &editMinSize        (void);
            const Real32              &getMinSize         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getMaxSize         (void);
#endif
                  Real32              &editMaxSize        (void);
            const Real32              &getMaxSize         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getConstantAttenuation (void);
#endif
                  Real32              &editConstantAttenuation(void);
            const Real32              &getConstantAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getLinearAttenuation (void);
#endif
                  Real32              &editLinearAttenuation(void);
            const Real32              &getLinearAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getQuadraticAttenuation (void);
#endif
                  Real32              &editQuadraticAttenuation(void);
            const Real32              &getQuadraticAttenuation (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getFadeThreshold   (void);
#endif
                  Real32              &editFadeThreshold  (void);
            const Real32              &getFadeThreshold   (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getSprite          (void);
#endif
                  bool                &editSprite         (void);
            const bool                &getSprite          (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getRMode           (void);
#endif
                  GLenum              &editRMode          (void);
            const GLenum              &getRMode           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSize           (const Real32 &value);
            void setSmooth         (const bool &value);
            void setMinSize        (const Real32 &value);
            void setMaxSize        (const Real32 &value);
            void setConstantAttenuation(const Real32 &value);
            void setLinearAttenuation(const Real32 &value);
            void setQuadraticAttenuation(const Real32 &value);
            void setFadeThreshold  (const Real32 &value);
            void setSprite         (const bool &value);
            void setRMode          (const GLenum &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  PointChunkPtr create     (void);
    static  PointChunkPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32          _sfSize;
    SFBool            _sfSmooth;
    SFReal32          _sfMinSize;
    SFReal32          _sfMaxSize;
    SFReal32          _sfConstantAttenuation;
    SFReal32          _sfLinearAttenuation;
    SFReal32          _sfQuadraticAttenuation;
    SFReal32          _sfFadeThreshold;
    SFBool            _sfSprite;
    SFGLenum          _sfRMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PointChunkBase(void);
    PointChunkBase(const PointChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PointChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      PointChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      PointChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PointChunkBase &source);
};

typedef PointChunkBase *PointChunkBaseP;

/** Type specific RefPtr type for PointChunk. */
typedef RefPtr<PointChunkPtr> PointChunkRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<PointChunkBase::isNodeCore>,
    CoredNodePtr<PointChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        PointChunkNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGPOINTCHUNKBASE_H_ */
