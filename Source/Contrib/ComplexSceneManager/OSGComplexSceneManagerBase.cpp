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
 **     class ComplexSceneManager!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // Globals Class
#include "OSGCSMDrawManager.h"          // DrawManager Class

#include "OSGComplexSceneManagerBase.h"
#include "OSGComplexSceneManager.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComplexSceneManager
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * ComplexSceneManagerBase::_mfGlobals
    
*/

/*! \var CSMDrawManager * ComplexSceneManagerBase::_sfDrawManager
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfStartTime
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfTimeScale
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfConstantTimeStep
    
*/

/*! \var bool            ComplexSceneManagerBase::_sfConstantTime
    
*/

/*! \var bool            ComplexSceneManagerBase::_sfPaused
    
*/

/*! \var bool            ComplexSceneManagerBase::_sfDumpFrameStart
    
*/

/*! \var bool            ComplexSceneManagerBase::_sfEnableWebService
    
*/

/*! \var UInt32          ComplexSceneManagerBase::_sfWebServicePort
    
*/

/*! \var std::string     ComplexSceneManagerBase::_sfWebServiceRoot
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ComplexSceneManager *, nsOSG>::_type(
    "ComplexSceneManagerPtr", 
    "FieldContainerPtr", 
    ComplexSceneManager::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ComplexSceneManager *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComplexSceneManagerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFRecFieldContainerPtr::Description(
        MFRecFieldContainerPtr::getClassType(),
        "globals",
        "",
        GlobalsFieldId, GlobalsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleGlobals),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleGlobals));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecCSMDrawManagerPtr::Description(
        SFUnrecCSMDrawManagerPtr::getClassType(),
        "drawManager",
        "",
        DrawManagerFieldId, DrawManagerFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleDrawManager),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleDrawManager));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "startTime",
        "",
        StartTimeFieldId, StartTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleStartTime),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleStartTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "timeScale",
        "",
        TimeScaleFieldId, TimeScaleFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleTimeScale),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleTimeScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "constantTimeStep",
        "",
        ConstantTimeStepFieldId, ConstantTimeStepFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleConstantTimeStep),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleConstantTimeStep));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "constantTime",
        "",
        ConstantTimeFieldId, ConstantTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleConstantTime),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleConstantTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "paused",
        "",
        PausedFieldId, PausedFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandlePaused),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandlePaused));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "dumpFrameStart",
        "",
        DumpFrameStartFieldId, DumpFrameStartFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleDumpFrameStart),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleDumpFrameStart));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enableWebService",
        "",
        EnableWebServiceFieldId, EnableWebServiceFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleEnableWebService),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleEnableWebService));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "webServicePort",
        "",
        WebServicePortFieldId, WebServicePortFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleWebServicePort),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleWebServicePort));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "webServiceRoot",
        "",
        WebServiceRootFieldId, WebServiceRootFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleWebServiceRoot),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleWebServiceRoot));

    oType.addInitialDesc(pDesc);
}


ComplexSceneManagerBase::TypeObject ComplexSceneManagerBase::_type(
    ComplexSceneManagerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ComplexSceneManagerBase::createEmptyLocal),
    ComplexSceneManager::initMethod,
    ComplexSceneManager::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComplexSceneManager::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ComplexSceneManager\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "  \n"
    "\t<Field\n"
    "\t\tname=\"globals\"\n"
    "\t\ttype=\"FieldContainer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"recpointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"drawManager\"\n"
    "\t\ttype=\"CSMDrawManager\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "<!--\n"
    "\t<Field\n"
    "\t\tname=\"sensorTask\"\n"
    "\t\ttype=\"SensorTask\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "-->\n"
    "\t<Field\n"
    "\t\tname=\"startTime\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"timeScale\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantTimeStep\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantTime\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"paused\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"dumpFrameStart\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"enableWebService\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"webServicePort\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"8080\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"webServiceRoot\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue='\"RootNode\"'\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComplexSceneManagerBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComplexSceneManagerBase::getType(void) const
{
    return _type;
}

UInt32 ComplexSceneManagerBase::getContainerSize(void) const
{
    return sizeof(ComplexSceneManager);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ComplexSceneManager::_mfGlobals field.
const MFRecFieldContainerPtr *ComplexSceneManagerBase::getMFGlobals(void) const
{
    return &_mfGlobals;
}

MFRecFieldContainerPtr *ComplexSceneManagerBase::editMFGlobals        (void)
{
    editMField(GlobalsFieldMask, _mfGlobals);

    return &_mfGlobals;
}

//! Get the ComplexSceneManager::_sfDrawManager field.
const SFUnrecCSMDrawManagerPtr *ComplexSceneManagerBase::getSFDrawManager(void) const
{
    return &_sfDrawManager;
}

SFUnrecCSMDrawManagerPtr *ComplexSceneManagerBase::editSFDrawManager    (void)
{
    editSField(DrawManagerFieldMask);

    return &_sfDrawManager;
}

SFTime *ComplexSceneManagerBase::editSFStartTime(void)
{
    editSField(StartTimeFieldMask);

    return &_sfStartTime;
}

const SFTime *ComplexSceneManagerBase::getSFStartTime(void) const
{
    return &_sfStartTime;
}


SFTime *ComplexSceneManagerBase::editSFTimeScale(void)
{
    editSField(TimeScaleFieldMask);

    return &_sfTimeScale;
}

const SFTime *ComplexSceneManagerBase::getSFTimeScale(void) const
{
    return &_sfTimeScale;
}


SFTime *ComplexSceneManagerBase::editSFConstantTimeStep(void)
{
    editSField(ConstantTimeStepFieldMask);

    return &_sfConstantTimeStep;
}

const SFTime *ComplexSceneManagerBase::getSFConstantTimeStep(void) const
{
    return &_sfConstantTimeStep;
}


SFBool *ComplexSceneManagerBase::editSFConstantTime(void)
{
    editSField(ConstantTimeFieldMask);

    return &_sfConstantTime;
}

const SFBool *ComplexSceneManagerBase::getSFConstantTime(void) const
{
    return &_sfConstantTime;
}


SFBool *ComplexSceneManagerBase::editSFPaused(void)
{
    editSField(PausedFieldMask);

    return &_sfPaused;
}

const SFBool *ComplexSceneManagerBase::getSFPaused(void) const
{
    return &_sfPaused;
}


SFBool *ComplexSceneManagerBase::editSFDumpFrameStart(void)
{
    editSField(DumpFrameStartFieldMask);

    return &_sfDumpFrameStart;
}

const SFBool *ComplexSceneManagerBase::getSFDumpFrameStart(void) const
{
    return &_sfDumpFrameStart;
}


SFBool *ComplexSceneManagerBase::editSFEnableWebService(void)
{
    editSField(EnableWebServiceFieldMask);

    return &_sfEnableWebService;
}

const SFBool *ComplexSceneManagerBase::getSFEnableWebService(void) const
{
    return &_sfEnableWebService;
}


SFUInt32 *ComplexSceneManagerBase::editSFWebServicePort(void)
{
    editSField(WebServicePortFieldMask);

    return &_sfWebServicePort;
}

const SFUInt32 *ComplexSceneManagerBase::getSFWebServicePort(void) const
{
    return &_sfWebServicePort;
}


SFString *ComplexSceneManagerBase::editSFWebServiceRoot(void)
{
    editSField(WebServiceRootFieldMask);

    return &_sfWebServiceRoot;
}

const SFString *ComplexSceneManagerBase::getSFWebServiceRoot(void) const
{
    return &_sfWebServiceRoot;
}




void ComplexSceneManagerBase::pushToGlobals(FieldContainer * const value)
{
    editMField(GlobalsFieldMask, _mfGlobals);

    _mfGlobals.push_back(value);
}

void ComplexSceneManagerBase::assignGlobals  (const MFRecFieldContainerPtr &value)
{
    MFRecFieldContainerPtr::const_iterator elemIt  =
        value.begin();
    MFRecFieldContainerPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ComplexSceneManager *>(this)->clearGlobals();

    while(elemIt != elemEnd)
    {
        this->pushToGlobals(*elemIt);

        ++elemIt;
    }
}

void ComplexSceneManagerBase::removeFromGlobals(UInt32 uiIndex)
{
    if(uiIndex < _mfGlobals.size())
    {
        editMField(GlobalsFieldMask, _mfGlobals);

        _mfGlobals.erase(uiIndex);
    }
}

void ComplexSceneManagerBase::removeObjFromGlobals(FieldContainer * const value)
{
    Int32 iElemIdx = _mfGlobals.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(GlobalsFieldMask, _mfGlobals);

        _mfGlobals.erase(iElemIdx);
    }
}
void ComplexSceneManagerBase::clearGlobals(void)
{
    editMField(GlobalsFieldMask, _mfGlobals);


    _mfGlobals.clear();
}



/*------------------------------ access -----------------------------------*/

SizeT ComplexSceneManagerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GlobalsFieldMask & whichField))
    {
        returnValue += _mfGlobals.getBinSize();
    }
    if(FieldBits::NoField != (DrawManagerFieldMask & whichField))
    {
        returnValue += _sfDrawManager.getBinSize();
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        returnValue += _sfStartTime.getBinSize();
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        returnValue += _sfTimeScale.getBinSize();
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        returnValue += _sfConstantTimeStep.getBinSize();
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        returnValue += _sfConstantTime.getBinSize();
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        returnValue += _sfPaused.getBinSize();
    }
    if(FieldBits::NoField != (DumpFrameStartFieldMask & whichField))
    {
        returnValue += _sfDumpFrameStart.getBinSize();
    }
    if(FieldBits::NoField != (EnableWebServiceFieldMask & whichField))
    {
        returnValue += _sfEnableWebService.getBinSize();
    }
    if(FieldBits::NoField != (WebServicePortFieldMask & whichField))
    {
        returnValue += _sfWebServicePort.getBinSize();
    }
    if(FieldBits::NoField != (WebServiceRootFieldMask & whichField))
    {
        returnValue += _sfWebServiceRoot.getBinSize();
    }

    return returnValue;
}

void ComplexSceneManagerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GlobalsFieldMask & whichField))
    {
        _mfGlobals.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawManagerFieldMask & whichField))
    {
        _sfDrawManager.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        _sfStartTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        _sfTimeScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        _sfConstantTimeStep.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        _sfConstantTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        _sfPaused.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DumpFrameStartFieldMask & whichField))
    {
        _sfDumpFrameStart.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EnableWebServiceFieldMask & whichField))
    {
        _sfEnableWebService.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WebServicePortFieldMask & whichField))
    {
        _sfWebServicePort.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WebServiceRootFieldMask & whichField))
    {
        _sfWebServiceRoot.copyToBin(pMem);
    }
}

void ComplexSceneManagerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GlobalsFieldMask & whichField))
    {
        editMField(GlobalsFieldMask, _mfGlobals);
        _mfGlobals.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawManagerFieldMask & whichField))
    {
        editSField(DrawManagerFieldMask);
        _sfDrawManager.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        editSField(StartTimeFieldMask);
        _sfStartTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        editSField(TimeScaleFieldMask);
        _sfTimeScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        editSField(ConstantTimeStepFieldMask);
        _sfConstantTimeStep.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        editSField(ConstantTimeFieldMask);
        _sfConstantTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        editSField(PausedFieldMask);
        _sfPaused.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DumpFrameStartFieldMask & whichField))
    {
        editSField(DumpFrameStartFieldMask);
        _sfDumpFrameStart.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EnableWebServiceFieldMask & whichField))
    {
        editSField(EnableWebServiceFieldMask);
        _sfEnableWebService.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WebServicePortFieldMask & whichField))
    {
        editSField(WebServicePortFieldMask);
        _sfWebServicePort.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WebServiceRootFieldMask & whichField))
    {
        editSField(WebServiceRootFieldMask);
        _sfWebServiceRoot.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ComplexSceneManagerTransitPtr ComplexSceneManagerBase::createLocal(BitVector bFlags)
{
    ComplexSceneManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComplexSceneManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComplexSceneManagerTransitPtr ComplexSceneManagerBase::createDependent(BitVector bFlags)
{
    ComplexSceneManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComplexSceneManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComplexSceneManagerTransitPtr ComplexSceneManagerBase::create(void)
{
    return createLocal();
}

ComplexSceneManager *ComplexSceneManagerBase::createEmptyLocal(BitVector bFlags)
{
    ComplexSceneManager *returnValue;

    newPtr<ComplexSceneManager>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComplexSceneManager *ComplexSceneManagerBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr ComplexSceneManagerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComplexSceneManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComplexSceneManager *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComplexSceneManagerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComplexSceneManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComplexSceneManager *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComplexSceneManagerBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

ComplexSceneManagerBase::ComplexSceneManagerBase(void) :
    Inherited(),
    _mfGlobals                (),
    _sfDrawManager            (NULL),
    _sfStartTime              (Time(0.0)),
    _sfTimeScale              (Time(1.0)),
    _sfConstantTimeStep       (Time(0.0)),
    _sfConstantTime           (bool(false)),
    _sfPaused                 (bool(false)),
    _sfDumpFrameStart         (bool(false)),
    _sfEnableWebService       (bool(false)),
    _sfWebServicePort         (UInt32(8080)),
    _sfWebServiceRoot         (std::string("RootNode"))
{
}

ComplexSceneManagerBase::ComplexSceneManagerBase(const ComplexSceneManagerBase &source) :
    Inherited(source),
    _mfGlobals                (),
    _sfDrawManager            (NULL),
    _sfStartTime              (source._sfStartTime              ),
    _sfTimeScale              (source._sfTimeScale              ),
    _sfConstantTimeStep       (source._sfConstantTimeStep       ),
    _sfConstantTime           (source._sfConstantTime           ),
    _sfPaused                 (source._sfPaused                 ),
    _sfDumpFrameStart         (source._sfDumpFrameStart         ),
    _sfEnableWebService       (source._sfEnableWebService       ),
    _sfWebServicePort         (source._sfWebServicePort         ),
    _sfWebServiceRoot         (source._sfWebServiceRoot         )
{
}


/*-------------------------- destructors ----------------------------------*/

ComplexSceneManagerBase::~ComplexSceneManagerBase(void)
{
}

void ComplexSceneManagerBase::onCreate(const ComplexSceneManager *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ComplexSceneManager *pThis = static_cast<ComplexSceneManager *>(this);

        MFRecFieldContainerPtr::const_iterator GlobalsIt  =
            source->_mfGlobals.begin();
        MFRecFieldContainerPtr::const_iterator GlobalsEnd =
            source->_mfGlobals.end  ();

        while(GlobalsIt != GlobalsEnd)
        {
            pThis->pushToGlobals(*GlobalsIt);

            ++GlobalsIt;
        }

        pThis->setDrawManager(source->getDrawManager());
    }
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleGlobals         (void) const
{
    MFRecFieldContainerPtr::GetHandlePtr returnValue(
        new  MFRecFieldContainerPtr::GetHandle(
             &_mfGlobals,
             this->getType().getFieldDesc(GlobalsFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleGlobals        (void)
{
    MFRecFieldContainerPtr::EditHandlePtr returnValue(
        new  MFRecFieldContainerPtr::EditHandle(
             &_mfGlobals,
             this->getType().getFieldDesc(GlobalsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ComplexSceneManager::pushToGlobals,
                    static_cast<ComplexSceneManager *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ComplexSceneManager::removeFromGlobals,
                    static_cast<ComplexSceneManager *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ComplexSceneManager::removeObjFromGlobals,
                    static_cast<ComplexSceneManager *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ComplexSceneManager::clearGlobals,
                    static_cast<ComplexSceneManager *>(this)));

    editMField(GlobalsFieldMask, _mfGlobals);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleDrawManager     (void) const
{
    SFUnrecCSMDrawManagerPtr::GetHandlePtr returnValue(
        new  SFUnrecCSMDrawManagerPtr::GetHandle(
             &_sfDrawManager,
             this->getType().getFieldDesc(DrawManagerFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleDrawManager    (void)
{
    SFUnrecCSMDrawManagerPtr::EditHandlePtr returnValue(
        new  SFUnrecCSMDrawManagerPtr::EditHandle(
             &_sfDrawManager,
             this->getType().getFieldDesc(DrawManagerFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ComplexSceneManager::setDrawManager,
                    static_cast<ComplexSceneManager *>(this), _1));

    editSField(DrawManagerFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleStartTime       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleStartTime      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId),
             this));


    editSField(StartTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleTimeScale       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleTimeScale      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId),
             this));


    editSField(TimeScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleConstantTimeStep (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfConstantTimeStep,
             this->getType().getFieldDesc(ConstantTimeStepFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleConstantTimeStep(void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfConstantTimeStep,
             this->getType().getFieldDesc(ConstantTimeStepFieldId),
             this));


    editSField(ConstantTimeStepFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleConstantTime    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfConstantTime,
             this->getType().getFieldDesc(ConstantTimeFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleConstantTime   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfConstantTime,
             this->getType().getFieldDesc(ConstantTimeFieldId),
             this));


    editSField(ConstantTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandlePaused          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPaused,
             this->getType().getFieldDesc(PausedFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandlePaused         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPaused,
             this->getType().getFieldDesc(PausedFieldId),
             this));


    editSField(PausedFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleDumpFrameStart  (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfDumpFrameStart,
             this->getType().getFieldDesc(DumpFrameStartFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleDumpFrameStart (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfDumpFrameStart,
             this->getType().getFieldDesc(DumpFrameStartFieldId),
             this));


    editSField(DumpFrameStartFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleEnableWebService (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnableWebService,
             this->getType().getFieldDesc(EnableWebServiceFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleEnableWebService(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnableWebService,
             this->getType().getFieldDesc(EnableWebServiceFieldId),
             this));


    editSField(EnableWebServiceFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleWebServicePort  (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfWebServicePort,
             this->getType().getFieldDesc(WebServicePortFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleWebServicePort (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfWebServicePort,
             this->getType().getFieldDesc(WebServicePortFieldId),
             this));


    editSField(WebServicePortFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleWebServiceRoot  (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfWebServiceRoot,
             this->getType().getFieldDesc(WebServiceRootFieldId),
             const_cast<ComplexSceneManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleWebServiceRoot (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfWebServiceRoot,
             this->getType().getFieldDesc(WebServiceRootFieldId),
             this));


    editSField(WebServiceRootFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ComplexSceneManagerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComplexSceneManager *pThis = static_cast<ComplexSceneManager *>(this);

    pThis->execSync(static_cast<ComplexSceneManager *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComplexSceneManagerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComplexSceneManager *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComplexSceneManager *>(pRefAspect),
                  dynamic_cast<const ComplexSceneManager *>(this));

    return returnValue;
}
#endif

void ComplexSceneManagerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ComplexSceneManager *>(this)->clearGlobals();

    static_cast<ComplexSceneManager *>(this)->setDrawManager(NULL);


}


OSG_END_NAMESPACE
