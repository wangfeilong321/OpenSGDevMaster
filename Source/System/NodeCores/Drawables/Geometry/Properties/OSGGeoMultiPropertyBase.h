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
 **     class GeoMultiProperty
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOMULTIPROPERTYBASE_H_
#define _OSGGEOMULTIPROPERTYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGeoVectorProperty.h" // Parent

#include "OSGGeoMultiPropertyDataFields.h" // Container type
#include "OSGSysFields.h"               // Offset type
#include "OSGBaseFields.h"              // IFormat type

#include "OSGGeoMultiPropertyFields.h"

OSG_BEGIN_NAMESPACE


class GeoMultiProperty;

//! \brief GeoMultiProperty Base Class.

class OSG_DRAWABLE_DLLMAPPING GeoMultiPropertyBase : public GeoVectorProperty
{
  public:

    typedef GeoVectorProperty Inherited;
    typedef GeoVectorProperty ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(GeoMultiProperty);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ContainerFieldId = Inherited::NextFieldId,
        OffsetFieldId = ContainerFieldId + 1,
        IFormatFieldId = OffsetFieldId + 1,
        IDimensionFieldId = IFormatFieldId + 1,
        ISizeFieldId = IDimensionFieldId + 1,
        INormalizeFieldId = ISizeFieldId + 1,
        IStrideFieldId = INormalizeFieldId + 1,
        NextFieldId = IStrideFieldId + 1
    };

    static const OSG::BitVector ContainerFieldMask =
        (TypeTraits<BitVector>::One << ContainerFieldId);
    static const OSG::BitVector OffsetFieldMask =
        (TypeTraits<BitVector>::One << OffsetFieldId);
    static const OSG::BitVector IFormatFieldMask =
        (TypeTraits<BitVector>::One << IFormatFieldId);
    static const OSG::BitVector IDimensionFieldMask =
        (TypeTraits<BitVector>::One << IDimensionFieldId);
    static const OSG::BitVector ISizeFieldMask =
        (TypeTraits<BitVector>::One << ISizeFieldId);
    static const OSG::BitVector INormalizeFieldMask =
        (TypeTraits<BitVector>::One << INormalizeFieldId);
    static const OSG::BitVector IStrideFieldMask =
        (TypeTraits<BitVector>::One << IStrideFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecGeoMultiPropertyDataPtr SFContainerType;
    typedef SFUInt32          SFOffsetType;
    typedef SFGLenum          SFIFormatType;
    typedef SFUInt32          SFIDimensionType;
    typedef SFUInt32          SFISizeType;
    typedef SFBool            SFINormalizeType;
    typedef SFUInt32          SFIStrideType;

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

            const SFUnrecGeoMultiPropertyDataPtr *getSFContainer      (void) const;
                  SFUnrecGeoMultiPropertyDataPtr *editSFContainer      (void);

                  SFUInt32            *editSFOffset         (void);
            const SFUInt32            *getSFOffset          (void) const;

                  SFGLenum            *editSFIFormat        (void);
            const SFGLenum            *getSFIFormat         (void) const;

                  SFUInt32            *editSFIDimension     (void);
            const SFUInt32            *getSFIDimension      (void) const;

                  SFUInt32            *editSFISize          (void);
            const SFUInt32            *getSFISize           (void) const;

                  SFBool              *editSFINormalize     (void);
            const SFBool              *getSFINormalize      (void) const;

                  SFUInt32            *editSFIStride        (void);
            const SFUInt32            *getSFIStride         (void) const;


                  GeoMultiPropertyData * getContainer      (void) const;

                  UInt32              &editOffset         (void);
                  UInt32               getOffset          (void) const;

                  GLenum              &editIFormat        (void);
            const GLenum              &getIFormat         (void) const;

                  UInt32              &editIDimension     (void);
                  UInt32               getIDimension      (void) const;

                  UInt32              &editISize          (void);
                  UInt32               getISize           (void) const;

                  bool                &editINormalize     (void);
                  bool                 getINormalize      (void) const;

                  UInt32              &editIStride        (void);
                  UInt32               getIStride         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setContainer      (GeoMultiPropertyData * const value);
            void setOffset         (const UInt32 value);
            void setIFormat        (const GLenum &value);
            void setIDimension     (const UInt32 value);
            void setISize          (const UInt32 value);
            void setINormalize     (const bool value);
            void setIStride        (const UInt32 value);

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
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  GeoMultiPropertyTransitPtr  create          (void);
    static  GeoMultiProperty           *createEmpty     (void);

    static  GeoMultiPropertyTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  GeoMultiProperty            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  GeoMultiPropertyTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecGeoMultiPropertyDataPtr _sfContainer;
    SFUInt32          _sfOffset;
    SFGLenum          _sfIFormat;
    SFUInt32          _sfIDimension;
    SFUInt32          _sfISize;
    SFBool            _sfINormalize;
    SFUInt32          _sfIStride;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GeoMultiPropertyBase(void);
    GeoMultiPropertyBase(const GeoMultiPropertyBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeoMultiPropertyBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const GeoMultiProperty *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleContainer       (void) const;
    EditFieldHandlePtr editHandleContainer      (void);
    GetFieldHandlePtr  getHandleOffset          (void) const;
    EditFieldHandlePtr editHandleOffset         (void);
    GetFieldHandlePtr  getHandleIFormat         (void) const;
    EditFieldHandlePtr editHandleIFormat        (void);
    GetFieldHandlePtr  getHandleIDimension      (void) const;
    EditFieldHandlePtr editHandleIDimension     (void);
    GetFieldHandlePtr  getHandleISize           (void) const;
    EditFieldHandlePtr editHandleISize          (void);
    GetFieldHandlePtr  getHandleINormalize      (void) const;
    EditFieldHandlePtr editHandleINormalize     (void);
    GetFieldHandlePtr  getHandleIStride         (void) const;
    EditFieldHandlePtr editHandleIStride        (void);

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

            void execSync (      GeoMultiPropertyBase *pFrom,
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
    void operator =(const GeoMultiPropertyBase &source);
};

typedef GeoMultiPropertyBase *GeoMultiPropertyBaseP;

OSG_END_NAMESPACE

#endif /* _OSGGEOMULTIPROPERTYBASE_H_ */
