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
 **     class ShaderProgram!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // ShaderType default header
#include "OSGChangedFunctorMFields.h"     // DestroyedFunctors default header

#include <OSGShaderProgramVariables.h> // Variables Class
#include <OSGFieldContainer.h> // Parents Class

#include "OSGShaderProgramBase.h"
#include "OSGShaderProgram.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderProgram
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          ShaderProgramBase::_sfShaderType
    
*/

/*! \var std::string     ShaderProgramBase::_sfProgram
    
*/

/*! \var UInt32          ShaderProgramBase::_sfGLId
    
*/

/*! \var ShaderProgramVariables * ShaderProgramBase::_sfVariables
    fragment program object
*/

/*! \var ShaderParameter ShaderProgramBase::_mfParameter
    
*/

/*! \var bool            ShaderProgramBase::_sfCgFrontEnd
    
*/

/*! \var bool            ShaderProgramBase::_sfPointSize
    Flag to set whether the shader can change the point size.
*/

/*! \var FieldContainer * ShaderProgramBase::_mfParents
    
*/

/*! \var ChangedFunctorCallback ShaderProgramBase::_mfDestroyedFunctors
    
*/


void ShaderProgramBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "shaderType",
        "",
        ShaderTypeFieldId, ShaderTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgram::editHandleShaderType),
        static_cast<FieldGetMethodSig >(&ShaderProgram::getHandleShaderType));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "program",
        "",
        ProgramFieldId, ProgramFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgram::editHandleProgram),
        static_cast<FieldGetMethodSig >(&ShaderProgram::getHandleProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&ShaderProgram::editHandleGLId),
        static_cast<FieldGetMethodSig >(&ShaderProgram::getHandleGLId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecChildShaderProgramVariablesPtr::Description(
        SFUnrecChildShaderProgramVariablesPtr::getClassType(),
        "variables",
        "fragment program object\n",
        VariablesFieldId, VariablesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgram::editHandleVariables),
        static_cast<FieldGetMethodSig >(&ShaderProgram::getHandleVariables));

    oType.addInitialDesc(pDesc);

    pDesc = new MFShaderParameter::Description(
        MFShaderParameter::getClassType(),
        "parameter",
        "",
        ParameterFieldId, ParameterFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgram::editHandleParameter),
        static_cast<FieldGetMethodSig >(&ShaderProgram::getHandleParameter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "cgFrontEnd",
        "",
        CgFrontEndFieldId, CgFrontEndFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgram::editHandleCgFrontEnd),
        static_cast<FieldGetMethodSig >(&ShaderProgram::getHandleCgFrontEnd));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "pointSize",
        "Flag to set whether the shader can change the point size.\n",
        PointSizeFieldId, PointSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgram::editHandlePointSize),
        static_cast<FieldGetMethodSig >(&ShaderProgram::getHandlePointSize));

    oType.addInitialDesc(pDesc);

    pDesc = new MFParentFieldContainerPtr::Description(
        MFParentFieldContainerPtr::getClassType(),
        "parents",
        "",
        ParentsFieldId, ParentsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderProgram::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderProgram::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFChangedFunctorCallback::Description(
        MFChangedFunctorCallback::getClassType(),
        "destroyedFunctors",
        "",
        DestroyedFunctorsFieldId, DestroyedFunctorsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderProgram::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderProgram::invalidGetField));

    oType.addInitialDesc(pDesc);
}


ShaderProgramBase::TypeObject ShaderProgramBase::_type(
    ShaderProgramBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderProgramBase::createEmptyLocal),
    ShaderProgram::initMethod,
    ShaderProgram::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderProgramBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderProgram\"\n"
    "   parent=\"FieldContainer\"\n"
    "   library=\"System\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   >\n"
    "\n"
    "  <Field\n"
    "     name=\"shaderType\"\n"
    "     type=\"GLenum\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"GL_NONE\"\n"
    "     defaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"program\"\n"
    "     type=\"std::string\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"GLId\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "\t defaultValue=\"0\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"variables\"\n"
    "\t type=\"ShaderProgramVariables\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"childpointer\"\n"
    "     childParentType=\"FieldContainer\"\n"
    "     linkParentField=\"Parents\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"parameter\"\n"
    "     type=\"ShaderParameter\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"cgFrontEnd\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  \n"
    "  <Field\n"
    "\t name=\"pointSize\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tFlag to set whether the shader can change the point size.\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"parents\"\n"
    "\t type=\"FieldContainer\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"none\"\n"
    "     category=\"parentpointer\"\n"
    "\t >\n"
    "  </Field> \n"
    " \n"
    "  <Field\n"
    "\t name=\"destroyedFunctors\"\n"
    "\t type=\"ChangedFunctorCallback\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"none\"\n"
    "     defaultHeader=\"OSGChangedFunctorMFields.h\"\n"
    "\t >\n"
    "  </Field> \n"
    " \n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderProgramBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderProgramBase::getType(void) const
{
    return _type;
}

UInt32 ShaderProgramBase::getContainerSize(void) const
{
    return sizeof(ShaderProgram);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *ShaderProgramBase::editSFShaderType(void)
{
    editSField(ShaderTypeFieldMask);

    return &_sfShaderType;
}

const SFGLenum *ShaderProgramBase::getSFShaderType(void) const
{
    return &_sfShaderType;
}


SFString *ShaderProgramBase::editSFProgram(void)
{
    editSField(ProgramFieldMask);

    return &_sfProgram;
}

const SFString *ShaderProgramBase::getSFProgram(void) const
{
    return &_sfProgram;
}


SFUInt32 *ShaderProgramBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *ShaderProgramBase::getSFGLId(void) const
{
    return &_sfGLId;
}


//! Get the ShaderProgram::_sfVariables field.
const SFUnrecChildShaderProgramVariablesPtr *ShaderProgramBase::getSFVariables(void) const
{
    return &_sfVariables;
}

SFUnrecChildShaderProgramVariablesPtr *ShaderProgramBase::editSFVariables      (void)
{
    editSField(VariablesFieldMask);

    return &_sfVariables;
}

MFShaderParameter *ShaderProgramBase::editMFParameter(void)
{
    editMField(ParameterFieldMask, _mfParameter);

    return &_mfParameter;
}

const MFShaderParameter *ShaderProgramBase::getMFParameter(void) const
{
    return &_mfParameter;
}


SFBool *ShaderProgramBase::editSFCgFrontEnd(void)
{
    editSField(CgFrontEndFieldMask);

    return &_sfCgFrontEnd;
}

const SFBool *ShaderProgramBase::getSFCgFrontEnd(void) const
{
    return &_sfCgFrontEnd;
}


SFBool *ShaderProgramBase::editSFPointSize(void)
{
    editSField(PointSizeFieldMask);

    return &_sfPointSize;
}

const SFBool *ShaderProgramBase::getSFPointSize(void) const
{
    return &_sfPointSize;
}








/*------------------------------ access -----------------------------------*/

UInt32 ShaderProgramBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShaderTypeFieldMask & whichField))
    {
        returnValue += _sfShaderType.getBinSize();
    }
    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        returnValue += _sfProgram.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        returnValue += _sfVariables.getBinSize();
    }
    if(FieldBits::NoField != (ParameterFieldMask & whichField))
    {
        returnValue += _mfParameter.getBinSize();
    }
    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        returnValue += _sfCgFrontEnd.getBinSize();
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        returnValue += _sfPointSize.getBinSize();
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        returnValue += _mfParents.getBinSize();
    }
    if(FieldBits::NoField != (DestroyedFunctorsFieldMask & whichField))
    {
        returnValue += _mfDestroyedFunctors.getBinSize();
    }

    return returnValue;
}

void ShaderProgramBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShaderTypeFieldMask & whichField))
    {
        _sfShaderType.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        _sfProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParameterFieldMask & whichField))
    {
        _mfParameter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DestroyedFunctorsFieldMask & whichField))
    {
        _mfDestroyedFunctors.copyToBin(pMem);
    }
}

void ShaderProgramBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShaderTypeFieldMask & whichField))
    {
        _sfShaderType.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProgramFieldMask & whichField))
    {
        _sfProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParameterFieldMask & whichField))
    {
        _mfParameter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DestroyedFunctorsFieldMask & whichField))
    {
        _mfDestroyedFunctors.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderProgramTransitPtr ShaderProgramBase::createLocal(BitVector bFlags)
{
    ShaderProgramTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderProgram>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderProgramTransitPtr ShaderProgramBase::createDependent(BitVector bFlags)
{
    ShaderProgramTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderProgram>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderProgramTransitPtr ShaderProgramBase::create(void)
{
    ShaderProgramTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderProgram>(tmpPtr);
    }

    return fc;
}

ShaderProgram *ShaderProgramBase::createEmptyLocal(BitVector bFlags)
{
    ShaderProgram *returnValue;

    newPtr<ShaderProgram>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderProgram *ShaderProgramBase::createEmpty(void)
{
    ShaderProgram *returnValue;

    newPtr<ShaderProgram>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderProgramBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderProgram *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgram *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderProgram *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgram *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramBase::shallowCopy(void) const
{
    ShaderProgram *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderProgram *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderProgramBase::ShaderProgramBase(void) :
    Inherited(),
    _sfShaderType             (GLenum(GL_NONE)),
    _sfProgram                (),
    _sfGLId                   (UInt32(0)),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfParameter              (),
    _sfCgFrontEnd             (bool(false)),
    _sfPointSize              (bool(false)),
    _mfParents                (),
    _mfDestroyedFunctors      ()
{
}

ShaderProgramBase::ShaderProgramBase(const ShaderProgramBase &source) :
    Inherited(source),
    _sfShaderType             (source._sfShaderType             ),
    _sfProgram                (source._sfProgram                ),
    _sfGLId                   (source._sfGLId                   ),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfParameter              (source._mfParameter              ),
    _sfCgFrontEnd             (source._sfCgFrontEnd             ),
    _sfPointSize              (source._sfPointSize              ),
    _mfParents                (),
    _mfDestroyedFunctors      (source._mfDestroyedFunctors      )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderProgramBase::~ShaderProgramBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool ShaderProgramBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            editMField(ParentsFieldMask, _mfParents);

            _mfParents.push_back(pParent, childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool ShaderProgramBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            Int32 iParentIdx = _mfParents.findIndex(pParent);

            if(iParentIdx != -1)
            {
                editMField(ParentsFieldMask, _mfParents);

                _mfParents.erase(iParentIdx);

                return true;
            }

            FWARNING(("ShaderProgramBase::unlinkParent: "
                      "Child <-> Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}


/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool ShaderProgramBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == VariablesFieldId)
    {
        ShaderProgramVariables * pTypedChild =
            dynamic_cast<ShaderProgramVariables *>(pChild);

        if(pTypedChild != NULL)
        {
            if(pTypedChild == _sfVariables.getValue())
            {
                editSField(VariablesFieldMask);

                _sfVariables.setValue(NULL);

                return true;
            }

            FWARNING(("ShaderProgramBase::unlinkParent: Child <-> "
                      "Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void ShaderProgramBase::onCreate(const ShaderProgram *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShaderProgram *pThis = static_cast<ShaderProgram *>(this);

        pThis->setVariables(source->getVariables());
    }
}

GetFieldHandlePtr ShaderProgramBase::getHandleShaderType      (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfShaderType,
             this->getType().getFieldDesc(ShaderTypeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleShaderType     (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfShaderType,
             this->getType().getFieldDesc(ShaderTypeFieldId)));


    editSField(ShaderTypeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandleProgram         (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfProgram,
             this->getType().getFieldDesc(ProgramFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleProgram        (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfProgram,
             this->getType().getFieldDesc(ProgramFieldId)));


    editSField(ProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId)));


    editSField(GLIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandleVariables       (void) const
{
    SFUnrecChildShaderProgramVariablesPtr::GetHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::GetHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleVariables      (void)
{
    SFUnrecChildShaderProgramVariablesPtr::EditHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::EditHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId)));

    returnValue->setSetMethod(
        boost::bind(&ShaderProgram::setVariables,
                    static_cast<ShaderProgram *>(this), _1));

    editSField(VariablesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandleParameter       (void) const
{
    MFShaderParameter::GetHandlePtr returnValue(
        new  MFShaderParameter::GetHandle(
             &_mfParameter,
             this->getType().getFieldDesc(ParameterFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleParameter      (void)
{
    MFShaderParameter::EditHandlePtr returnValue(
        new  MFShaderParameter::EditHandle(
             &_mfParameter,
             this->getType().getFieldDesc(ParameterFieldId)));


    editMField(ParameterFieldMask, _mfParameter);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandleCgFrontEnd      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfCgFrontEnd,
             this->getType().getFieldDesc(CgFrontEndFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleCgFrontEnd     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfCgFrontEnd,
             this->getType().getFieldDesc(CgFrontEndFieldId)));


    editSField(CgFrontEndFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandlePointSize       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPointSize,
             this->getType().getFieldDesc(PointSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandlePointSize      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPointSize,
             this->getType().getFieldDesc(PointSizeFieldId)));


    editSField(PointSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandleParents         (void) const
{
    MFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleParents        (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderProgramBase::getHandleDestroyedFunctors (void) const
{
    MFChangedFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderProgramBase::editHandleDestroyedFunctors(void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderProgramBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderProgram *pThis = static_cast<ShaderProgram *>(this);

    pThis->execSync(static_cast<ShaderProgram *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderProgramBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderProgram *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderProgram *>(pRefAspect),
                  dynamic_cast<const ShaderProgram *>(this));

    return returnValue;
}
#endif

void ShaderProgramBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShaderProgram *>(this)->setVariables(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfParameter.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfDestroyedFunctors.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderProgram *>::_type("ShaderProgramPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderProgram *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderProgram *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderProgram *,
                           0);

OSG_END_NAMESPACE
