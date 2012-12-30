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
 **     class GeoVectorBufferProperty
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOVECTORBUFFERPROPERTYBASE_H_
#define _OSGGEOVECTORBUFFERPROPERTYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGeoVectorProperty.h" // Parent

#include "OSGSysFields.h"               // Stride type

#include "OSGGeoVectorBufferPropertyFields.h"

OSG_BEGIN_NAMESPACE


class GeoVectorBufferProperty;

//! \brief GeoVectorBufferProperty Base Class.

class OSG_DRAWABLE_DLLMAPPING GeoVectorBufferPropertyBase : public GeoVectorProperty
{
  public:

    typedef GeoVectorProperty Inherited;
    typedef GeoVectorProperty ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(GeoVectorBufferProperty);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        StrideFieldId = Inherited::NextFieldId,
        FormatFieldId = StrideFieldId + 1,
        FormatSizeFieldId = FormatFieldId + 1,
        DimensionFieldId = FormatSizeFieldId + 1,
        VectorTypeFieldId = DimensionFieldId + 1,
        SizeFieldId = VectorTypeFieldId + 1,
        NextFieldId = SizeFieldId + 1
    };

    static const OSG::BitVector StrideFieldMask =
        (TypeTraits<BitVector>::One << StrideFieldId);
    static const OSG::BitVector FormatFieldMask =
        (TypeTraits<BitVector>::One << FormatFieldId);
    static const OSG::BitVector FormatSizeFieldMask =
        (TypeTraits<BitVector>::One << FormatSizeFieldId);
    static const OSG::BitVector DimensionFieldMask =
        (TypeTraits<BitVector>::One << DimensionFieldId);
    static const OSG::BitVector VectorTypeFieldMask =
        (TypeTraits<BitVector>::One << VectorTypeFieldId);
    static const OSG::BitVector SizeFieldMask =
        (TypeTraits<BitVector>::One << SizeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFStrideType;
    typedef SFUInt32          SFFormatType;
    typedef SFUInt32          SFFormatSizeType;
    typedef SFUInt32          SFDimensionType;
    typedef SFUInt32          SFVectorTypeType;
    typedef SFUInt32          SFSizeType;

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


                  SFUInt32            *editSFStride         (void);
            const SFUInt32            *getSFStride          (void) const;

                  SFUInt32            *editSFFormat         (void);
            const SFUInt32            *getSFFormat          (void) const;

                  SFUInt32            *editSFFormatSize     (void);
            const SFUInt32            *getSFFormatSize      (void) const;

                  SFUInt32            *editSFDimension      (void);
            const SFUInt32            *getSFDimension       (void) const;

                  SFUInt32            *editSFVectorType     (void);
            const SFUInt32            *getSFVectorType      (void) const;

                  SFUInt32            *editSFSize           (void);
            const SFUInt32            *getSFSize            (void) const;


                  UInt32              &editStride         (void);
                  UInt32               getStride          (void) const;

                  UInt32              &editFormat         (void);
                  UInt32               getFormat          (void) const;

                  UInt32              &editFormatSize     (void);
                  UInt32               getFormatSize      (void) const;

                  UInt32              &editDimension      (void);
                  UInt32               getDimension       (void) const;

                  UInt32              &editVectorType     (void);
                  UInt32               getVectorType      (void) const;

                  UInt32              &editSize           (void);
                  UInt32               getSize            (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setStride         (const UInt32 value);
            void setFormat         (const UInt32 value);
            void setFormatSize     (const UInt32 value);
            void setDimension      (const UInt32 value);
            void setVectorType     (const UInt32 value);
            void setSize           (const UInt32 value);

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

    static  GeoVectorBufferPropertyTransitPtr  create          (void);
    static  GeoVectorBufferProperty           *createEmpty     (void);

    static  GeoVectorBufferPropertyTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  GeoVectorBufferProperty            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  GeoVectorBufferPropertyTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfStride;
    SFUInt32          _sfFormat;
    SFUInt32          _sfFormatSize;
    SFUInt32          _sfDimension;
    SFUInt32          _sfVectorType;
    SFUInt32          _sfSize;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GeoVectorBufferPropertyBase(void);
    GeoVectorBufferPropertyBase(const GeoVectorBufferPropertyBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeoVectorBufferPropertyBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleStride          (void) const;
    EditFieldHandlePtr editHandleStride         (void);
    GetFieldHandlePtr  getHandleFormat          (void) const;
    EditFieldHandlePtr editHandleFormat         (void);
    GetFieldHandlePtr  getHandleFormatSize      (void) const;
    EditFieldHandlePtr editHandleFormatSize     (void);
    GetFieldHandlePtr  getHandleDimension       (void) const;
    EditFieldHandlePtr editHandleDimension      (void);
    GetFieldHandlePtr  getHandleVectorType      (void) const;
    EditFieldHandlePtr editHandleVectorType     (void);
    GetFieldHandlePtr  getHandleSize            (void) const;
    EditFieldHandlePtr editHandleSize           (void);

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

            void execSync (      GeoVectorBufferPropertyBase *pFrom,
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
    void operator =(const GeoVectorBufferPropertyBase &source);
};

typedef GeoVectorBufferPropertyBase *GeoVectorBufferPropertyBaseP;

OSG_END_NAMESPACE

#endif /* _OSGGEOVECTORBUFFERPROPERTYBASE_H_ */
