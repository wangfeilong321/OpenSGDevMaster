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
 **     class GradientBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGRADIENTBACKGROUNDBASE_H_
#define _OSGGRADIENTBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGBackground.h" // Parent

#include "OSGColor3fFields.h" // Color type
#include "OSGReal32Fields.h" // Position type

#include "OSGGradientBackgroundFields.h"

OSG_BEGIN_NAMESPACE

class GradientBackground;

//! \brief GradientBackground Base Class.

class OSG_WINDOW_DLLMAPPING GradientBackgroundBase : public Background
{
  public:

    typedef Background Inherited;
    typedef Background ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              GradientBackground>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              GradientBackground>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              GradientBackground>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              GradientBackground>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              GradientBackground>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<BackgroundPtr,
                              BackgroundConstPtr,
                              GradientBackground>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ColorFieldId = Inherited::NextFieldId,
        PositionFieldId = ColorFieldId + 1,
        NextFieldId = PositionFieldId + 1
    };

    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
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

    static  GradientBackgroundPtr create     (void);
    static  GradientBackgroundPtr createEmpty(void);

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

    MFColor3f         _mfColor;
    MFReal32          _mfPosition;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GradientBackgroundBase(void);
    GradientBackgroundBase(const GradientBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GradientBackgroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_COMPAT
                  MFColor3f           *getMFColor           (void);
#endif
                  MFColor3f           *editMFColor          (void);
            const MFColor3f           *getMFColor           (void) const;

#ifdef OSG_1_COMPAT
                  MFReal32            *getMFPosition        (void);
#endif
                  MFReal32            *editMFPosition       (void);
            const MFReal32            *getMFPosition        (void) const;


#ifdef OSG_1_COMPAT
                  Color3f             &getColor           (const UInt32 index);
                  MFColor3f           &getColor          (void);
#endif
                  Color3f             &editColor          (const UInt32 index);
            const Color3f             &getColor           (const UInt32 index) const;
                  MFColor3f           &editColor          (void);
            const MFColor3f           &getColor           (void) const;

#ifdef OSG_1_COMPAT
                  Real32              &getPosition        (const UInt32 index);
                  MFReal32            &getPosition       (void);
#endif
                  Real32              &editPosition       (const UInt32 index);
            const Real32              &getPosition        (const UInt32 index) const;
                  MFReal32            &editPosition       (void);
            const MFReal32            &getPosition        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToColor               (const Color3f& value   );
    void insertIntoColor      (UInt32                uiIndex,
                                             const Color3f& value   );
    void replaceInColor   (UInt32                uiIndex,
                                             const Color3f& value   );
    void replaceInColor  (const Color3f& pOldElem,
                                             const Color3f& pNewElem);
    void removeFromColor (UInt32                uiIndex );
    void removeFromColor(const Color3f& value   );
    void clearColor                 (void                          );



    void pushToPosition            (const Real32& value   );
    void insertIntoPosition      (UInt32                uiIndex,
                                             const Real32& value   );
    void replaceInPosition  (UInt32                uiIndex,
                                             const Real32& value   );
    void replaceInPosition (const Real32& pOldElem,
                                             const Real32& pNewElem);
    void removeFromPosition (UInt32                uiIndex );
    void removeFromPosition(const Real32& value   );
    void clearPosition              (void                          );



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

            void execSync (      GradientBackgroundBase *pFrom,
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

            void execSync (      GradientBackgroundBase *pFrom,
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
    void operator =(const GradientBackgroundBase &source);
};

typedef GradientBackgroundBase *GradientBackgroundBaseP;

/** Type specific RefPtr type for GradientBackground. */
typedef RefPtr<GradientBackgroundPtr> GradientBackgroundRefPtr;

typedef osgIF<
    GradientBackgroundBase::isNodeCore,

    CoredNodePtr<GradientBackground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        GradientBackgroundNodePtr;

OSG_END_NAMESPACE

#define OSGGRADIENTBACKGROUNDBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGGRADIENTBACKGROUNDBASE_H_ */
