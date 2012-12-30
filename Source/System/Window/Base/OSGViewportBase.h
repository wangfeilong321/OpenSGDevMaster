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
 **     class Viewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGVIEWPORTBASE_H_
#define _OSGVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGViewarea.h" // Parent

#include "OSGFieldContainerFields.h"    // Parent type
#include "OSGCameraFields.h"            // Camera type
#include "OSGNodeFields.h"              // Root type
#include "OSGBackgroundFields.h"        // Background type
#include "OSGForegroundFields.h"        // Foregrounds type

#include "OSGViewportFields.h"

OSG_BEGIN_NAMESPACE


class Viewport;

//! \brief Viewport Base Class.

class OSG_SYSTEM_DLLMAPPING ViewportBase : public Viewarea
{
  public:

    typedef Viewarea Inherited;
    typedef Viewarea ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Viewport);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ParentFieldId = Inherited::NextFieldId,
        CameraFieldId = ParentFieldId + 1,
        RootFieldId = CameraFieldId + 1,
        BackgroundFieldId = RootFieldId + 1,
        ForegroundsFieldId = BackgroundFieldId + 1,
        NextFieldId = ForegroundsFieldId + 1
    };

    static const OSG::BitVector ParentFieldMask =
        (TypeTraits<BitVector>::One << ParentFieldId);
    static const OSG::BitVector CameraFieldMask =
        (TypeTraits<BitVector>::One << CameraFieldId);
    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector ForegroundsFieldMask =
        (TypeTraits<BitVector>::One << ForegroundsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFParentFieldContainerPtr SFParentType;
    typedef SFUnrecCameraPtr  SFCameraType;
    typedef SFUnrecNodePtr    SFRootType;
    typedef SFUnrecBackgroundPtr SFBackgroundType;
    typedef MFUnrecForegroundPtr MFForegroundsType;

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

            const SFUnrecCameraPtr    *getSFCamera         (void) const;
                  SFUnrecCameraPtr    *editSFCamera         (void);
            const SFUnrecNodePtr      *getSFRoot           (void) const;
                  SFUnrecNodePtr      *editSFRoot           (void);
            const SFUnrecBackgroundPtr *getSFBackground     (void) const;
                  SFUnrecBackgroundPtr *editSFBackground     (void);
            const MFUnrecForegroundPtr *getMFForegrounds    (void) const;
                  MFUnrecForegroundPtr *editMFForegrounds    (void);


                  Camera * getCamera         (void) const;

                  Node * getRoot           (void) const;

                  Background * getBackground     (void) const;

                  Foreground * getForegrounds    (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCamera         (Camera * const value);
            void setRoot           (Node * const value);
            void setBackground     (Background * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void addForeground             (Foreground * const value   );
    void assignForegrounds          (const MFUnrecForegroundPtr &value);
    void removeFromForegrounds (UInt32               uiIndex );
    void removeObjFromForegrounds(Foreground * const value   );
    void clearForegrounds            (void                         );

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

    static  ViewportTransitPtr  create          (void);
    static  Viewport           *createEmpty     (void);

    static  ViewportTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Viewport            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ViewportTransitPtr  createDependent  (BitVector bFlags);

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

    SFParentFieldContainerPtr _sfParent;
    SFUnrecCameraPtr  _sfCamera;
    SFUnrecNodePtr    _sfRoot;
    SFUnrecBackgroundPtr _sfBackground;
    MFUnrecForegroundPtr _mfForegrounds;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ViewportBase(void);
    ViewportBase(const ViewportBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ViewportBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Viewport *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleParent          (void) const;
    EditFieldHandlePtr editHandleParent         (void);
    GetFieldHandlePtr  getHandleCamera          (void) const;
    EditFieldHandlePtr editHandleCamera         (void);
    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleBackground      (void) const;
    EditFieldHandlePtr editHandleBackground     (void);
    GetFieldHandlePtr  getHandleForegrounds     (void) const;
    EditFieldHandlePtr editHandleForegrounds    (void);

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

            void execSync (      ViewportBase *pFrom,
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
    void operator =(const ViewportBase &source);
};

typedef ViewportBase *ViewportBaseP;

OSG_END_NAMESPACE

#endif /* _OSGVIEWPORTBASE_H_ */
