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

#include "OSGBaseTypes.h"

#include "OSGClusterWindow.h" // Parent

#include "OSGUInt32Fields.h" // HServers type
#include "OSGUInt32Fields.h" // VServers type
#include "OSGBoolFields.h" // ManageClientViewports type
#include "OSGInt32Fields.h" // XOverlap type
#include "OSGInt32Fields.h" // YOverlap type

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

    typedef PointerFwdBuilder<ClusterWindowPtr,
                              ClusterWindowConstPtr,
                              MultiDisplayWindow>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<ClusterWindowPtr,
                              ClusterWindowConstPtr,
                              MultiDisplayWindow>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<ClusterWindowPtr,
                              ClusterWindowConstPtr,
                              MultiDisplayWindow>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<ClusterWindowPtr,
                              ClusterWindowConstPtr,
                              MultiDisplayWindow>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<ClusterWindowPtr,
                              ClusterWindowConstPtr,
                              MultiDisplayWindow>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<ClusterWindowPtr,
                              ClusterWindowConstPtr,
                              MultiDisplayWindow>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        HServersFieldId = Inherited::NextFieldId,
        VServersFieldId = HServersFieldId + 1,
        ManageClientViewportsFieldId = VServersFieldId + 1,
        XOverlapFieldId = ManageClientViewportsFieldId + 1,
        YOverlapFieldId = XOverlapFieldId + 1,
        NextFieldId = YOverlapFieldId + 1
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
                  SFUInt32            *getSFHServers        (void);
#endif
                  SFUInt32            *editSFHServers       (void);
            const SFUInt32            *getSFHServers        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFVServers        (void);
#endif
                  SFUInt32            *editSFVServers       (void);
            const SFUInt32            *getSFVServers        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFManageClientViewports (void);
#endif
                  SFBool              *editSFManageClientViewports(void);
            const SFBool              *getSFManageClientViewports (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFXOverlap        (void);
#endif
                  SFInt32             *editSFXOverlap       (void);
            const SFInt32             *getSFXOverlap        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFYOverlap        (void);
#endif
                  SFInt32             *editSFYOverlap       (void);
            const SFInt32             *getSFYOverlap        (void) const;


#ifdef OSG_1_GET_COMPAT
                  UInt32              &getHServers        (void);
#endif
                  UInt32              &editHServers       (void);
            const UInt32              &getHServers        (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getVServers        (void);
#endif
                  UInt32              &editVServers       (void);
            const UInt32              &getVServers        (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getManageClientViewports (void);
#endif
                  bool                &editManageClientViewports(void);
            const bool                &getManageClientViewports (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getXOverlap        (void);
#endif
                  Int32               &editXOverlap       (void);
            const Int32               &getXOverlap        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getYOverlap        (void);
#endif
                  Int32               &editYOverlap       (void);
            const Int32               &getYOverlap        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setHServers       (const UInt32 &value);
            void setVServers       (const UInt32 &value);
            void setManageClientViewports(const bool &value);
            void setXOverlap       (const Int32 &value);
            void setYOverlap       (const Int32 &value);

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

    static  MultiDisplayWindowPtr create     (void);
    static  MultiDisplayWindowPtr createEmpty(void);

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

    SFUInt32          _sfHServers;
    SFUInt32          _sfVServers;
    SFBool            _sfManageClientViewports;
    SFInt32           _sfXOverlap;
    SFInt32           _sfYOverlap;

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
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      MultiDisplayWindowBase *pFrom,
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
    void operator =(const MultiDisplayWindowBase &source);
};

typedef MultiDisplayWindowBase *MultiDisplayWindowBaseP;

/** Type specific RefPtr type for MultiDisplayWindow. */
typedef RefPtr<MultiDisplayWindowPtr> MultiDisplayWindowRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<MultiDisplayWindowBase::isNodeCore>,
    CoredNodePtr<MultiDisplayWindow>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        MultiDisplayWindowNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGMULTIDISPLAYWINDOWBASE_H_ */
