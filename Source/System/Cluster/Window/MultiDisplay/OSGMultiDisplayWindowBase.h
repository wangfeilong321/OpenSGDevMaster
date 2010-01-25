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
 **     class MultiDisplayWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMULTIDISPLAYWINDOWBASE_H_
#define _OSGMULTIDISPLAYWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGClusterDef.h"

//#include "OSGBaseTypes.h"

#include "OSGClusterWindow.h" // Parent

#include "OSGSysFields.h"               // HServers type

#include "OSGMultiDisplayWindowFields.h"

OSG_BEGIN_NAMESPACE

class MultiDisplayWindow;

//! \brief MultiDisplayWindow Base Class.

class OSG_CLUSTER_DLLMAPPING MultiDisplayWindowBase : public ClusterWindow
{
  public:

    typedef ClusterWindow Inherited;
    typedef ClusterWindow ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(MultiDisplayWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        HServersFieldId = Inherited::NextFieldId,
        VServersFieldId = HServersFieldId + 1,
        ManageClientViewportsFieldId = VServersFieldId + 1,
        XOverlapFieldId = ManageClientViewportsFieldId + 1,
        YOverlapFieldId = XOverlapFieldId + 1,
        MaxDepthFieldId = YOverlapFieldId + 1,
        NextFieldId = MaxDepthFieldId + 1
    };

    static const OSG::BitVector HServersFieldMask =
        (TypeTraits<BitVector>::One << HServersFieldId);
    static const OSG::BitVector VServersFieldMask =
        (TypeTraits<BitVector>::One << VServersFieldId);
    static const OSG::BitVector ManageClientViewportsFieldMask =
        (TypeTraits<BitVector>::One << ManageClientViewportsFieldId);
    static const OSG::BitVector XOverlapFieldMask =
        (TypeTraits<BitVector>::One << XOverlapFieldId);
    static const OSG::BitVector YOverlapFieldMask =
        (TypeTraits<BitVector>::One << YOverlapFieldId);
    static const OSG::BitVector MaxDepthFieldMask =
        (TypeTraits<BitVector>::One << MaxDepthFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFHServersType;
    typedef SFUInt32          SFVServersType;
    typedef SFBool            SFManageClientViewportsType;
    typedef SFInt32           SFXOverlapType;
    typedef SFInt32           SFYOverlapType;
    typedef SFInt32           SFMaxDepthType;

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


                  SFUInt32            *editSFHServers       (void);
            const SFUInt32            *getSFHServers        (void) const;

                  SFUInt32            *editSFVServers       (void);
            const SFUInt32            *getSFVServers        (void) const;

                  SFBool              *editSFManageClientViewports(void);
            const SFBool              *getSFManageClientViewports (void) const;

                  SFInt32             *editSFXOverlap       (void);
            const SFInt32             *getSFXOverlap        (void) const;

                  SFInt32             *editSFYOverlap       (void);
            const SFInt32             *getSFYOverlap        (void) const;

                  SFInt32             *editSFMaxDepth       (void);
            const SFInt32             *getSFMaxDepth        (void) const;


                  UInt32              &editHServers       (void);
                  UInt32               getHServers        (void) const;

                  UInt32              &editVServers       (void);
                  UInt32               getVServers        (void) const;

                  bool                &editManageClientViewports(void);
                  bool                 getManageClientViewports (void) const;

                  Int32               &editXOverlap       (void);
                  Int32                getXOverlap        (void) const;

                  Int32               &editYOverlap       (void);
                  Int32                getYOverlap        (void) const;

                  Int32               &editMaxDepth       (void);
                  Int32                getMaxDepth        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setHServers       (const UInt32 value);
            void setVServers       (const UInt32 value);
            void setManageClientViewports(const bool value);
            void setXOverlap       (const Int32 value);
            void setYOverlap       (const Int32 value);
            void setMaxDepth       (const Int32 value);

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

    static  MultiDisplayWindowTransitPtr  create          (void);
    static  MultiDisplayWindow           *createEmpty     (void);

    static  MultiDisplayWindowTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  MultiDisplayWindow            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  MultiDisplayWindowTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfHServers;
    SFUInt32          _sfVServers;
    SFBool            _sfManageClientViewports;
    SFInt32           _sfXOverlap;
    SFInt32           _sfYOverlap;
    SFInt32           _sfMaxDepth;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MultiDisplayWindowBase(void);
    MultiDisplayWindowBase(const MultiDisplayWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MultiDisplayWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleHServers        (void) const;
    EditFieldHandlePtr editHandleHServers       (void);
    GetFieldHandlePtr  getHandleVServers        (void) const;
    EditFieldHandlePtr editHandleVServers       (void);
    GetFieldHandlePtr  getHandleManageClientViewports (void) const;
    EditFieldHandlePtr editHandleManageClientViewports(void);
    GetFieldHandlePtr  getHandleXOverlap        (void) const;
    EditFieldHandlePtr editHandleXOverlap       (void);
    GetFieldHandlePtr  getHandleYOverlap        (void) const;
    EditFieldHandlePtr editHandleYOverlap       (void);
    GetFieldHandlePtr  getHandleMaxDepth        (void) const;
    EditFieldHandlePtr editHandleMaxDepth       (void);

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

            void execSync (      MultiDisplayWindowBase *pFrom,
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
    void operator =(const MultiDisplayWindowBase &source);
};

typedef MultiDisplayWindowBase *MultiDisplayWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGMULTIDISPLAYWINDOWBASE_H_ */
