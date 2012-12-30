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
 **     class MatrixCameraDecorator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMATRIXCAMERADECORATORBASE_H_
#define _OSGMATRIXCAMERADECORATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

//#include "OSGBaseTypes.h"

#include "OSGCameraDecorator.h" // Parent

#include "OSGMathFields.h"              // PreViewing type

#include "OSGMatrixCameraDecoratorFields.h"

OSG_BEGIN_NAMESPACE


class MatrixCameraDecorator;

//! \brief MatrixCameraDecorator Base Class.

class OSG_WINDOW_DLLMAPPING MatrixCameraDecoratorBase : public CameraDecorator
{
  public:

    typedef CameraDecorator Inherited;
    typedef CameraDecorator ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(MatrixCameraDecorator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PreViewingFieldId = Inherited::NextFieldId,
        PostViewingFieldId = PreViewingFieldId + 1,
        PreProjectionTranslationFieldId = PostViewingFieldId + 1,
        PostProjectionTranslationFieldId = PreProjectionTranslationFieldId + 1,
        PreProjectionFieldId = PostProjectionTranslationFieldId + 1,
        PostProjectionFieldId = PreProjectionFieldId + 1,
        NextFieldId = PostProjectionFieldId + 1
    };

    static const OSG::BitVector PreViewingFieldMask =
        (TypeTraits<BitVector>::One << PreViewingFieldId);
    static const OSG::BitVector PostViewingFieldMask =
        (TypeTraits<BitVector>::One << PostViewingFieldId);
    static const OSG::BitVector PreProjectionTranslationFieldMask =
        (TypeTraits<BitVector>::One << PreProjectionTranslationFieldId);
    static const OSG::BitVector PostProjectionTranslationFieldMask =
        (TypeTraits<BitVector>::One << PostProjectionTranslationFieldId);
    static const OSG::BitVector PreProjectionFieldMask =
        (TypeTraits<BitVector>::One << PreProjectionFieldId);
    static const OSG::BitVector PostProjectionFieldMask =
        (TypeTraits<BitVector>::One << PostProjectionFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFMatrix          SFPreViewingType;
    typedef SFMatrix          SFPostViewingType;
    typedef SFMatrix          SFPreProjectionTranslationType;
    typedef SFMatrix          SFPostProjectionTranslationType;
    typedef SFMatrix          SFPreProjectionType;
    typedef SFMatrix          SFPostProjectionType;

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


                  SFMatrix            *editSFPreViewing     (void);
            const SFMatrix            *getSFPreViewing      (void) const;

                  SFMatrix            *editSFPostViewing    (void);
            const SFMatrix            *getSFPostViewing     (void) const;

                  SFMatrix            *editSFPreProjectionTranslation(void);
            const SFMatrix            *getSFPreProjectionTranslation (void) const;

                  SFMatrix            *editSFPostProjectionTranslation(void);
            const SFMatrix            *getSFPostProjectionTranslation (void) const;

                  SFMatrix            *editSFPreProjection  (void);
            const SFMatrix            *getSFPreProjection   (void) const;

                  SFMatrix            *editSFPostProjection (void);
            const SFMatrix            *getSFPostProjection  (void) const;


                  Matrix              &editPreViewing     (void);
            const Matrix              &getPreViewing      (void) const;

                  Matrix              &editPostViewing    (void);
            const Matrix              &getPostViewing     (void) const;

                  Matrix              &editPreProjectionTranslation(void);
            const Matrix              &getPreProjectionTranslation (void) const;

                  Matrix              &editPostProjectionTranslation(void);
            const Matrix              &getPostProjectionTranslation (void) const;

                  Matrix              &editPreProjection  (void);
            const Matrix              &getPreProjection   (void) const;

                  Matrix              &editPostProjection (void);
            const Matrix              &getPostProjection  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPreViewing     (const Matrix &value);
            void setPostViewing    (const Matrix &value);
            void setPreProjectionTranslation(const Matrix &value);
            void setPostProjectionTranslation(const Matrix &value);
            void setPreProjection  (const Matrix &value);
            void setPostProjection (const Matrix &value);

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

    static  MatrixCameraDecoratorTransitPtr  create          (void);
    static  MatrixCameraDecorator           *createEmpty     (void);

    static  MatrixCameraDecoratorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  MatrixCameraDecorator            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  MatrixCameraDecoratorTransitPtr  createDependent  (BitVector bFlags);

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

    SFMatrix          _sfPreViewing;
    SFMatrix          _sfPostViewing;
    SFMatrix          _sfPreProjectionTranslation;
    SFMatrix          _sfPostProjectionTranslation;
    SFMatrix          _sfPreProjection;
    SFMatrix          _sfPostProjection;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MatrixCameraDecoratorBase(void);
    MatrixCameraDecoratorBase(const MatrixCameraDecoratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MatrixCameraDecoratorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePreViewing      (void) const;
    EditFieldHandlePtr editHandlePreViewing     (void);
    GetFieldHandlePtr  getHandlePostViewing     (void) const;
    EditFieldHandlePtr editHandlePostViewing    (void);
    GetFieldHandlePtr  getHandlePreProjectionTranslation (void) const;
    EditFieldHandlePtr editHandlePreProjectionTranslation(void);
    GetFieldHandlePtr  getHandlePostProjectionTranslation (void) const;
    EditFieldHandlePtr editHandlePostProjectionTranslation(void);
    GetFieldHandlePtr  getHandlePreProjection   (void) const;
    EditFieldHandlePtr editHandlePreProjection  (void);
    GetFieldHandlePtr  getHandlePostProjection  (void) const;
    EditFieldHandlePtr editHandlePostProjection (void);

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

            void execSync (      MatrixCameraDecoratorBase *pFrom,
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
    void operator =(const MatrixCameraDecoratorBase &source);
};

typedef MatrixCameraDecoratorBase *MatrixCameraDecoratorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGMATRIXCAMERADECORATORBASE_H_ */
