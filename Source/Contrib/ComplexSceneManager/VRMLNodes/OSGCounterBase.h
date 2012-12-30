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
 **     class Counter
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOUNTERBASE_H_
#define _OSGCOUNTERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGNodeCore.h" // Parent

#include "OSGOSGAnyFields.h"            // IncTrigger type

#include "OSGCounterFields.h"

OSG_BEGIN_NAMESPACE


class Counter;

//! \brief Counter Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CounterBase : public NodeCore
{
  public:

    typedef NodeCore Inherited;
    typedef NodeCore ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Counter);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        IncTriggerFieldId = Inherited::NextFieldId,
        DecTriggerFieldId = IncTriggerFieldId + 1,
        ResetTriggerFieldId = DecTriggerFieldId + 1,
        NextFieldId = ResetTriggerFieldId + 1
    };

    static const OSG::BitVector IncTriggerFieldMask =
        (TypeTraits<BitVector>::One << IncTriggerFieldId);
    static const OSG::BitVector DecTriggerFieldMask =
        (TypeTraits<BitVector>::One << DecTriggerFieldId);
    static const OSG::BitVector ResetTriggerFieldMask =
        (TypeTraits<BitVector>::One << ResetTriggerFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFOSGAny          SFIncTriggerType;
    typedef SFOSGAny          SFDecTriggerType;
    typedef SFOSGAny          SFResetTriggerType;

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

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  CounterTransitPtr  create          (void);
    static  Counter           *createEmpty     (void);

    static  CounterTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Counter            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CounterTransitPtr  createDependent  (BitVector bFlags);

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

    SFOSGAny          _sfIncTrigger;
    SFOSGAny          _sfDecTrigger;
    SFOSGAny          _sfResetTrigger;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CounterBase(void);
    CounterBase(const CounterBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CounterBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleIncTrigger      (void) const;
    EditFieldHandlePtr editHandleIncTrigger     (void);
    GetFieldHandlePtr  getHandleDecTrigger      (void) const;
    EditFieldHandlePtr editHandleDecTrigger     (void);
    GetFieldHandlePtr  getHandleResetTrigger    (void) const;
    EditFieldHandlePtr editHandleResetTrigger   (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFOSGAny            *editSFIncTrigger     (void);
            const SFOSGAny            *getSFIncTrigger      (void) const;

                  SFOSGAny            *editSFDecTrigger     (void);
            const SFOSGAny            *getSFDecTrigger      (void) const;

                  SFOSGAny            *editSFResetTrigger   (void);
            const SFOSGAny            *getSFResetTrigger    (void) const;


                  OSGAny              &editIncTrigger     (void);
            const OSGAny              &getIncTrigger      (void) const;

                  OSGAny              &editDecTrigger     (void);
            const OSGAny              &getDecTrigger      (void) const;

                  OSGAny              &editResetTrigger   (void);
            const OSGAny              &getResetTrigger    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setIncTrigger     (const OSGAny &value);
            void setDecTrigger     (const OSGAny &value);
            void setResetTrigger   (const OSGAny &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      CounterBase *pFrom,
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
    void operator =(const CounterBase &source);
};

typedef CounterBase *CounterBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCOUNTERBASE_H_ */
