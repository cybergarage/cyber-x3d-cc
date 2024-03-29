/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File: CylinderSensorNode.cpp
*
*	Revisions:
*
*	12/07/02
*		- Changed the super class from SensorNode to DragSensorNode.
*		- Moved the following fields to DragSensorNode.
*			autoOffset, trackPoint
*
******************************************************************/

#include <cybergarage/x3d/CylinderSensorNode.h>

using namespace CyberX3D;

CylinderSensorNode::CylinderSensorNode() 
{
	setHeaderFlag(false);
	setType(CYLINDERSENSOR_NODE);

	// diskAngle exposed field
	diskAngleField = new SFFloat(0.262f);
	addExposedField(diskAngleFieldString, diskAngleField);

	// minAngle exposed field
	minAngleField = new SFFloat(0.0f);
	addExposedField(minAngleFieldString, minAngleField);

	// maxAngle exposed field
	maxAngleField = new SFFloat(-1.0f);
	addExposedField(maxAngleFieldString, maxAngleField);

	// offset exposed field
	offsetField = new SFFloat(0.0f);
	addExposedField(offsetFieldString, offsetField);

	// rotation eventOut field
	rotationField = new SFRotation(0.0f, 0.0f, 1.0f, 0.0f);
	addEventOut(rotationFieldString, rotationField);
}

CylinderSensorNode::~CylinderSensorNode() 
{
}

////////////////////////////////////////////////
//	DiskAngle
////////////////////////////////////////////////

SFFloat *CylinderSensorNode::getDiskAngleField()
{
	if (isInstanceNode() == false)
		return diskAngleField;
	return (SFFloat *)getExposedField(diskAngleFieldString);
}
	
void CylinderSensorNode::setDiskAngle(float value)
{
	getDiskAngleField()->setValue(value);
}

float CylinderSensorNode::getDiskAngle() 
{
	return getDiskAngleField()->getValue();
}

////////////////////////////////////////////////
//	MinAngle
////////////////////////////////////////////////

SFFloat *CylinderSensorNode::getMinAngleField()
{
	if (isInstanceNode() == false)
		return minAngleField;
	return (SFFloat *)getExposedField(minAngleFieldString);
}
	
void CylinderSensorNode::setMinAngle(float value) 
{
	getMinAngleField()->setValue(value);
}

float CylinderSensorNode::getMinAngle() 
{
	return getMinAngleField()->getValue();
}

////////////////////////////////////////////////
//	MaxAngle
////////////////////////////////////////////////

SFFloat *CylinderSensorNode::getMaxAngleField()
{
	if (isInstanceNode() == false)
		return maxAngleField;
	return (SFFloat *)getExposedField(maxAngleFieldString);
}
	
void CylinderSensorNode::setMaxAngle(float value) 
{
	getMaxAngleField()->setValue(value);
}

float CylinderSensorNode::getMaxAngle() 
{
	return getMaxAngleField()->getValue();
}

////////////////////////////////////////////////
//	Offset
////////////////////////////////////////////////

SFFloat *CylinderSensorNode::getOffsetField()
{
	if (isInstanceNode() == false)
		return offsetField;
	return (SFFloat *)getExposedField(offsetFieldString);
}
	
void CylinderSensorNode::setOffset(float value) 
{
	getOffsetField()->setValue(value);
}

float CylinderSensorNode::getOffset() 
{
	return getOffsetField()->getValue();
}

////////////////////////////////////////////////
//	Rotation
////////////////////////////////////////////////

SFRotation *CylinderSensorNode::getRotationChangedField()
{
	if (isInstanceNode() == false)
		return rotationField;
	return (SFRotation *)getEventOut(rotationFieldString);
}
	
void CylinderSensorNode::setRotationChanged(float value[]) 
{
	getRotationChangedField()->setValue(value);
}

void CylinderSensorNode::setRotationChanged(float x, float y, float z, float rot) 
{
	getRotationChangedField()->setValue(x, y, z, rot);
}

void CylinderSensorNode::getRotationChanged(float value[]) 
{
	getRotationChangedField()->getValue(value);
}

////////////////////////////////////////////////
//	List
////////////////////////////////////////////////

CylinderSensorNode *CylinderSensorNode::next() 
{
	return (CylinderSensorNode *)Node::next(getType());
}

CylinderSensorNode *CylinderSensorNode::nextTraversal() 
{
	return (CylinderSensorNode *)Node::nextTraversalByType(getType());
}

////////////////////////////////////////////////
//	functions
////////////////////////////////////////////////
	
bool CylinderSensorNode::isChildNodeType(Node *node)
{
	return false;
}

void CylinderSensorNode::initialize() 
{
	setIsActive(false);
}

void CylinderSensorNode::uninitialize()
{
}

void CylinderSensorNode::update() 
{
}

////////////////////////////////////////////////
//	Infomation
////////////////////////////////////////////////

void CylinderSensorNode::outputContext(std::ostream &printStream, char *indentString) 
{
	SFBool *autoOffset = getAutoOffsetField();
	SFBool *enabled = getEnabledField();

	printStream << indentString << "\t" << "autoOffset " << autoOffset << std::endl;
	printStream << indentString << "\t" << "diskAngle " << getDiskAngle() << std::endl;
	printStream << indentString << "\t" << "enabled " << enabled << std::endl;
	printStream << indentString << "\t" << "maxAngle " << getMaxAngle() << std::endl;
	printStream << indentString << "\t" << "minAngle " << getMinAngle() << std::endl;
	printStream << indentString << "\t" << "offset " << getOffset() << std::endl;
}
