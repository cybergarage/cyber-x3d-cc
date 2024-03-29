/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	KeyDeviceSensorNode.cpp
*
******************************************************************/

#include <cybergarage/x3d/KeyDeviceSensorNode.h>

using namespace CyberX3D;

static const char altKeyFieldString[] = "altKey";
static const char controlKeyFieldString[] = "controlKey";
static const char shiftKeyFieldString[] = "shiftKey";
static const char actionKeyPressFieldString[] = "actionKeyPress";
static const char actionKeyReleaseFieldString[] = "actionKeyRelease";
static const char keyPressFieldString[] = "keyPress";
static const char keyReleaseFieldString[] = "keyRelease";

KeyDeviceSensorNode::KeyDeviceSensorNode() 
{
	// altKeyField eventOut field
	altKeyField = new SFBool(false);
	addEventOut(altKeyFieldString, altKeyField);

	// controlKeyField eventOut field
	controlKeyField = new SFBool(false);
	addEventOut(controlKeyFieldString, controlKeyField);

	// shiftKeyField eventOut field
	shiftKeyField = new SFBool(false);
	addEventOut(shiftKeyFieldString, shiftKeyField);

	// actionKeyPressField eventOut field
	actionKeyPressField = new SFInt32(0);
	addEventOut(actionKeyPressFieldString, actionKeyPressField);

	// actionKeyReleaseField eventOut field
	actionKeyReleaseField = new SFInt32(0);
	addEventOut(actionKeyReleaseFieldString, actionKeyReleaseField);

	// keyPressField eventOut field
	keyPressField = new SFInt32(0);
	addEventOut(keyPressFieldString, keyPressField);

	// keyReleaseField eventOut field
	keyReleaseField = new SFInt32(0);
	addEventOut(keyReleaseFieldString, keyReleaseField);
}

KeyDeviceSensorNode::~KeyDeviceSensorNode() 
{
}

////////////////////////////////////////////////
//	AltKey
////////////////////////////////////////////////

SFBool *KeyDeviceSensorNode::getAltKeyField()
{
	if (isInstanceNode() == false)
		return altKeyField;
	return (SFBool *)getEventOut(altKeyFieldString);
}
	
void KeyDeviceSensorNode::setAltKey(bool value) 
{
	getAltKeyField()->setValue(value);
}

void KeyDeviceSensorNode::setAltKey(int value) 
{
	setAltKey(value ? true : false);
}

bool  KeyDeviceSensorNode::getAltKey() 
{
	return getAltKeyField()->getValue();
}

////////////////////////////////////////////////
//	ControlKey
////////////////////////////////////////////////

SFBool *KeyDeviceSensorNode::getControlKeyField()
{
	if (isInstanceNode() == false)
		return controlKeyField;
	return (SFBool *)getEventOut(controlKeyFieldString);
}
	
void KeyDeviceSensorNode::setControlKey(bool value) 
{
	getControlKeyField()->setValue(value);
}

void KeyDeviceSensorNode::setControlKey(int value) 
{
	setControlKey(value ? true : false);
}

bool  KeyDeviceSensorNode::getControlKey() 
{
	return getControlKeyField()->getValue();
}

////////////////////////////////////////////////
//	ShiftKey
////////////////////////////////////////////////

SFBool *KeyDeviceSensorNode::getShiftKeyField()
{
	if (isInstanceNode() == false)
		return shiftKeyField;
	return (SFBool *)getEventOut(shiftKeyFieldString);
}
	
void KeyDeviceSensorNode::setShiftKey(bool value) 
{
	getShiftKeyField()->setValue(value);
}

void KeyDeviceSensorNode::setShiftKey(int value) 
{
	setShiftKey(value ? true : false);
}

bool  KeyDeviceSensorNode::getShiftKey() 
{
	return getShiftKeyField()->getValue();
}

////////////////////////////////////////////////
//	ActionKeyPress
////////////////////////////////////////////////

SFInt32 *KeyDeviceSensorNode::getActionKeyPressField()
{
	if (isInstanceNode() == false)
		return actionKeyPressField;
	return (SFInt32 *)getEventOut(actionKeyPressFieldString);
}
	
void KeyDeviceSensorNode::setActionKeyPress(int value) 
{
	getActionKeyPressField()->setValue(value);
}

int KeyDeviceSensorNode::getActionKeyPress() 
{
	return getActionKeyPressField()->getValue();
}

////////////////////////////////////////////////
//	ActionKeyRelease
////////////////////////////////////////////////

SFInt32 *KeyDeviceSensorNode::getActionKeyReleaseField()
{
	if (isInstanceNode() == false)
		return actionKeyReleaseField;
	return (SFInt32 *)getEventOut(actionKeyReleaseFieldString);
}
	
void KeyDeviceSensorNode::setActionKeyRelease(int value) 
{
	getActionKeyReleaseField()->setValue(value);
}

int KeyDeviceSensorNode::getActionKeyRelease() 
{
	return getActionKeyReleaseField()->getValue();
}

////////////////////////////////////////////////
//	KeyPress
////////////////////////////////////////////////

SFInt32 *KeyDeviceSensorNode::getKeyPressField()
{
	if (isInstanceNode() == false)
		return keyPressField;
	return (SFInt32 *)getEventOut(keyPressFieldString);
}
	
void KeyDeviceSensorNode::setKeyPress(int value) 
{
	getKeyPressField()->setValue(value);
}

int KeyDeviceSensorNode::getKeyPress() 
{
	return getKeyPressField()->getValue();
}

////////////////////////////////////////////////
//	KeyRelease
////////////////////////////////////////////////

SFInt32 *KeyDeviceSensorNode::getKeyReleaseField()
{
	if (isInstanceNode() == false)
		return keyReleaseField;
	return (SFInt32 *)getEventOut(keyReleaseFieldString);
}
	
void KeyDeviceSensorNode::setKeyRelease(int value) 
{
	getKeyReleaseField()->setValue(value);
}

int KeyDeviceSensorNode::getKeyRelease() 
{
	return getKeyReleaseField()->getValue();
}
