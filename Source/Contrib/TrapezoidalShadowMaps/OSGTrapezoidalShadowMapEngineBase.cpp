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
 **     class TrapezoidalShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGTrapezoidalShadowMapEngineBase.h"
#include "OSGTrapezoidalShadowMapEngine.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TrapezoidalShadowMapEngine
    Implements Trapezoidal Shadow Maps.
    See http://www.comp.nus.edu.sg/~tants/tsm.html for more information.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TrapezoidalShadowMapEngine *, nsOSG>::_type(
    "TrapezoidalShadowMapEnginePtr", 
    "ShaderShadowMapEnginePtr", 
    TrapezoidalShadowMapEngine::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TrapezoidalShadowMapEngine *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TrapezoidalShadowMapEngine *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TrapezoidalShadowMapEngine *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TrapezoidalShadowMapEngineBase::classDescInserter(TypeObject &oType)
{
}


TrapezoidalShadowMapEngineBase::TypeObject TrapezoidalShadowMapEngineBase::_type(
    TrapezoidalShadowMapEngineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TrapezoidalShadowMapEngineBase::createEmptyLocal),
    TrapezoidalShadowMapEngine::initMethod,
    TrapezoidalShadowMapEngine::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TrapezoidalShadowMapEngine::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TrapezoidalShadowMapEngine\"\n"
    "    parent=\"ShaderShadowMapEngine\"\n"
    "    library=\"ContribTrapezoidalShadowMaps\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "  Implements Trapezoidal Shadow Maps.\n"
    "  See http://www.comp.nus.edu.sg/~tants/tsm.html for more information.\n"
    "</FieldContainer>\n",
    "Implements Trapezoidal Shadow Maps.\n"
    "See http://www.comp.nus.edu.sg/~tants/tsm.html for more information.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TrapezoidalShadowMapEngineBase::getType(void)
{
    return _type;
}

const FieldContainerType &TrapezoidalShadowMapEngineBase::getType(void) const
{
    return _type;
}

UInt32 TrapezoidalShadowMapEngineBase::getContainerSize(void) const
{
    return sizeof(TrapezoidalShadowMapEngine);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT TrapezoidalShadowMapEngineBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void TrapezoidalShadowMapEngineBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void TrapezoidalShadowMapEngineBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
TrapezoidalShadowMapEngineTransitPtr TrapezoidalShadowMapEngineBase::createLocal(BitVector bFlags)
{
    TrapezoidalShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TrapezoidalShadowMapEngine>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TrapezoidalShadowMapEngineTransitPtr TrapezoidalShadowMapEngineBase::createDependent(BitVector bFlags)
{
    TrapezoidalShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TrapezoidalShadowMapEngine>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TrapezoidalShadowMapEngineTransitPtr TrapezoidalShadowMapEngineBase::create(void)
{
    TrapezoidalShadowMapEngineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TrapezoidalShadowMapEngine>(tmpPtr);
    }

    return fc;
}

TrapezoidalShadowMapEngine *TrapezoidalShadowMapEngineBase::createEmptyLocal(BitVector bFlags)
{
    TrapezoidalShadowMapEngine *returnValue;

    newPtr<TrapezoidalShadowMapEngine>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TrapezoidalShadowMapEngine *TrapezoidalShadowMapEngineBase::createEmpty(void)
{
    TrapezoidalShadowMapEngine *returnValue;

    newPtr<TrapezoidalShadowMapEngine>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TrapezoidalShadowMapEngineBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TrapezoidalShadowMapEngine *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TrapezoidalShadowMapEngine *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TrapezoidalShadowMapEngineBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TrapezoidalShadowMapEngine *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TrapezoidalShadowMapEngine *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TrapezoidalShadowMapEngineBase::shallowCopy(void) const
{
    TrapezoidalShadowMapEngine *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TrapezoidalShadowMapEngine *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TrapezoidalShadowMapEngineBase::TrapezoidalShadowMapEngineBase(void) :
    Inherited()
{
}

TrapezoidalShadowMapEngineBase::TrapezoidalShadowMapEngineBase(const TrapezoidalShadowMapEngineBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

TrapezoidalShadowMapEngineBase::~TrapezoidalShadowMapEngineBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void TrapezoidalShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TrapezoidalShadowMapEngine *pThis = static_cast<TrapezoidalShadowMapEngine *>(this);

    pThis->execSync(static_cast<TrapezoidalShadowMapEngine *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TrapezoidalShadowMapEngineBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TrapezoidalShadowMapEngine *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TrapezoidalShadowMapEngine *>(pRefAspect),
                  dynamic_cast<const TrapezoidalShadowMapEngine *>(this));

    return returnValue;
}
#endif

void TrapezoidalShadowMapEngineBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
