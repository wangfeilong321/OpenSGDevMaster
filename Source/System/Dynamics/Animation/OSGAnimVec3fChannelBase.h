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
 **     class AnimVec3fChannel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGANIMVEC3FCHANNELBASE_H_
#define _OSGANIMVEC3FCHANNELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAnimChannel.h" // Parent

#include "OSGAnimVec3fDataSourceFields.h" // Data type
#include "OSGSysFields.h"               // InValue type
#include "OSGVecFields.h"               // OutValue type

#include "OSGAnimVec3fChannelFields.h"

OSG_BEGIN_NAMESPACE

class AnimVec3fChannel;

//! \brief AnimVec3fChannel Base Class.

class OSG_DYNAMICS_DLLMAPPING AnimVec3fChannelBase : public AnimChannel
{
  public:

    typedef AnimChannel Inherited;
    typedef AnimChannel ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(AnimVec3fChannel);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DataFieldId = Inherited::NextFieldId,
        InValueFieldId = DataFieldId + 1,
        OutValueFieldId = InValueFieldId + 1,
        NextFieldId = OutValueFieldId + 1
    };

    static const OSG::BitVector DataFieldMask =
        (TypeTraits<BitVector>::One << DataFieldId);
    static const OSG::BitVector InValueFieldMask =
        (TypeTraits<BitVector>::One << InValueFieldId);
    static const OSG::BitVector OutValueFieldMask =
        (TypeTraits<BitVector>::One << OutValueFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecAnimVec3fDataSourcePtr SFDataType;
    typedef SFReal32          SFInValueType;
    typedef SFVec3f           SFOutValueType;

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

            const SFUnrecAnimVec3fDataSourcePtr *getSFData           (void) const;
                  SFUnrecAnimVec3fDataSourcePtr *editSFData           (void);

                  SFReal32            *editSFInValue        (void);
            const SFReal32            *getSFInValue         (void) const;

                  SFVec3f             *editSFOutValue       (void);
            const SFVec3f             *getSFOutValue        (void) const;


                  AnimVec3fDataSource * getData           (void) const;

                  Real32              &editInValue        (void);
                  Real32               getInValue         (void) const;

                  Vec3f               &editOutValue       (void);
            const Vec3f               &getOutValue        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setData           (AnimVec3fDataSource * const value);
            void setInValue        (const Real32 value);
            void setOutValue       (const Vec3f &value);

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

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  AnimVec3fChannelTransitPtr  create          (void);
    static  AnimVec3fChannel           *createEmpty     (void);

    static  AnimVec3fChannelTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  AnimVec3fChannel            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  AnimVec3fChannelTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecAnimVec3fDataSourcePtr _sfData;
    SFReal32          _sfInValue;
    SFVec3f           _sfOutValue;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    AnimVec3fChannelBase(void);
    AnimVec3fChannelBase(const AnimVec3fChannelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AnimVec3fChannelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const AnimVec3fChannel *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleData            (void) const;
    EditFieldHandlePtr editHandleData           (void);
    GetFieldHandlePtr  getHandleInValue         (void) const;
    EditFieldHandlePtr editHandleInValue        (void);
    GetFieldHandlePtr  getHandleOutValue        (void) const;
    EditFieldHandlePtr editHandleOutValue       (void);

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

            void execSync (      AnimVec3fChannelBase *pFrom,
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
    void operator =(const AnimVec3fChannelBase &source);
};

typedef AnimVec3fChannelBase *AnimVec3fChannelBaseP;

typedef CoredNodeRefPtr  <AnimVec3fChannel> AnimVec3fChannelNodeRefPtr;
typedef CoredNodeMTRefPtr<AnimVec3fChannel> AnimVec3fChannelNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGANIMVEC3FCHANNELBASE_H_ */
