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
 **     class SimpleStage
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSIMPLESTAGEBASE_H_
#define _OSGSIMPLESTAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGRenderCallbackStage.h" // Parent

#include "OSGSysFields.h"               // Left type
#include "OSGCameraFields.h"            // Camera type
#include "OSGBackgroundFields.h"        // Background type
#include "OSGForegroundFields.h"        // Foregrounds type

#include "OSGSimpleStageFields.h"

OSG_BEGIN_NAMESPACE


class SimpleStage;

//! \brief SimpleStage Base Class.

class OSG_GROUP_DLLMAPPING SimpleStageBase : public RenderCallbackStage
{
  public:

    typedef RenderCallbackStage Inherited;
    typedef RenderCallbackStage ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SimpleStage);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        LeftFieldId = Inherited::NextFieldId,
        RightFieldId = LeftFieldId + 1,
        BottomFieldId = RightFieldId + 1,
        TopFieldId = BottomFieldId + 1,
        CameraFieldId = TopFieldId + 1,
        BackgroundFieldId = CameraFieldId + 1,
        ForegroundsFieldId = BackgroundFieldId + 1,
        NextFieldId = ForegroundsFieldId + 1
    };

    static const OSG::BitVector LeftFieldMask =
        (TypeTraits<BitVector>::One << LeftFieldId);
    static const OSG::BitVector RightFieldMask =
        (TypeTraits<BitVector>::One << RightFieldId);
    static const OSG::BitVector BottomFieldMask =
        (TypeTraits<BitVector>::One << BottomFieldId);
    static const OSG::BitVector TopFieldMask =
        (TypeTraits<BitVector>::One << TopFieldId);
    static const OSG::BitVector CameraFieldMask =
        (TypeTraits<BitVector>::One << CameraFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector ForegroundsFieldMask =
        (TypeTraits<BitVector>::One << ForegroundsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFLeftType;
    typedef SFReal32          SFRightType;
    typedef SFReal32          SFBottomType;
    typedef SFReal32          SFTopType;
    typedef SFUnrecCameraPtr  SFCameraType;
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


                  SFReal32            *editSFLeft           (void);
            const SFReal32            *getSFLeft            (void) const;

                  SFReal32            *editSFRight          (void);
            const SFReal32            *getSFRight           (void) const;

                  SFReal32            *editSFBottom         (void);
            const SFReal32            *getSFBottom          (void) const;

                  SFReal32            *editSFTop            (void);
            const SFReal32            *getSFTop             (void) const;
            const SFUnrecCameraPtr    *getSFCamera         (void) const;
                  SFUnrecCameraPtr    *editSFCamera         (void);
            const SFUnrecBackgroundPtr *getSFBackground     (void) const;
                  SFUnrecBackgroundPtr *editSFBackground     (void);
            const MFUnrecForegroundPtr *getMFForegrounds    (void) const;
                  MFUnrecForegroundPtr *editMFForegrounds    (void);


                  Real32              &editLeft           (void);
                  Real32               getLeft            (void) const;

                  Real32              &editRight          (void);
                  Real32               getRight           (void) const;

                  Real32              &editBottom         (void);
                  Real32               getBottom          (void) const;

                  Real32              &editTop            (void);
                  Real32               getTop             (void) const;

                  Camera * getCamera         (void) const;

                  Background * getBackground     (void) const;

                  Foreground * getForegrounds    (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLeft           (const Real32 value);
            void setRight          (const Real32 value);
            void setBottom         (const Real32 value);
            void setTop            (const Real32 value);
            void setCamera         (Camera * const value);
            void setBackground     (Background * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToForegrounds           (Foreground * const value   );
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

    static  SimpleStageTransitPtr  create          (void);
    static  SimpleStage           *createEmpty     (void);

    static  SimpleStageTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SimpleStage            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SimpleStageTransitPtr  createDependent  (BitVector bFlags);

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

    SFReal32          _sfLeft;
    SFReal32          _sfRight;
    SFReal32          _sfBottom;
    SFReal32          _sfTop;
    SFUnrecCameraPtr  _sfCamera;
    SFUnrecBackgroundPtr _sfBackground;
    MFUnrecForegroundPtr _mfForegrounds;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleStageBase(void);
    SimpleStageBase(const SimpleStageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SimpleStageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SimpleStage *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleLeft            (void) const;
    EditFieldHandlePtr editHandleLeft           (void);
    GetFieldHandlePtr  getHandleRight           (void) const;
    EditFieldHandlePtr editHandleRight          (void);
    GetFieldHandlePtr  getHandleBottom          (void) const;
    EditFieldHandlePtr editHandleBottom         (void);
    GetFieldHandlePtr  getHandleTop             (void) const;
    EditFieldHandlePtr editHandleTop            (void);
    GetFieldHandlePtr  getHandleCamera          (void) const;
    EditFieldHandlePtr editHandleCamera         (void);
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

            void execSync (      SimpleStageBase *pFrom,
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
    void operator =(const SimpleStageBase &source);
};

typedef SimpleStageBase *SimpleStageBaseP;

typedef CoredNodeRefPtr  <SimpleStage> SimpleStageNodeRefPtr;
typedef CoredNodeMTRefPtr<SimpleStage> SimpleStageNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGSIMPLESTAGEBASE_H_ */
