/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	TriggerNode.h
*
******************************************************************/

#ifndef _CX3D_TRIGGERNODE_H_
#define _CX3D_TRIGGERNODE_H_

#include <cybergarage/x3d/VRML97Fields.h>
#include <cybergarage/x3d/SensorNode.h>

namespace CyberX3D {

class TriggerNode : public SensorNode {
	
	SFTime *set_triggerTimeField;
	SFTime *triggerTimeField;

public:

	TriggerNode();
	virtual ~TriggerNode();

	////////////////////////////////////////////////
	//	SetTriggerTime
	////////////////////////////////////////////////

	SFTime *getSetTriggerTimeField();
	
	void setSetTriggerTime(double value);
	double getSetTriggerTime();

	////////////////////////////////////////////////
	//	TriggerTime
	////////////////////////////////////////////////

	SFTime *getTriggerTimeField();
	
	void setTriggerTime(double value);
	double getTriggerTime();

};

}

#endif

