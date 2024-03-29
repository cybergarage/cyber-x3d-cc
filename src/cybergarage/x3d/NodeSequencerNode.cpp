/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	NodeSequencerNode.cpp
*
******************************************************************/

#include <cybergarage/x3d/NodeSequencerNode.h>

using namespace CyberX3D;

NodeSequencerNode::NodeSequencerNode() 
{
	setHeaderFlag(false);
	setType(NODESEQUENCER_NODE);

	// keyValue exposed field
	keyValueField = new MFNode();
	addExposedField(keyValueFieldString, keyValueField);

	// value_changed eventOut field
	valueField = new SFNode();
	addEventOut(valueFieldString, valueField);
}

NodeSequencerNode::~NodeSequencerNode() 
{
}

////////////////////////////////////////////////
//	keyValue
////////////////////////////////////////////////

MFNode *NodeSequencerNode::getKeyValueField()
{
	if (isInstanceNode() == false)
		return keyValueField;
	return (MFNode *)getExposedField(keyValueFieldString);
}
	
void NodeSequencerNode::addKeyValue(Node *value) 
{
	getKeyValueField()->addValue(value);
}

int NodeSequencerNode::getNKeyValues() 
{
	return getKeyValueField()->getSize();
}
	
Node *NodeSequencerNode::getKeyValue(int index) 
{
	return getKeyValueField()->get1Value(index);
}

////////////////////////////////////////////////
//	value
////////////////////////////////////////////////

SFNode *NodeSequencerNode::getValueField()
{
	if (isInstanceNode() == false)
		return valueField;
	return (SFNode *)getEventOut(valueFieldString);
}
	
void NodeSequencerNode::setValue(Node *vector) 
{
	getValueField()->setValue(vector);
}

Node *NodeSequencerNode::getValue() 
{
	return getValueField()->getValue();
}

////////////////////////////////////////////////
//	functions
////////////////////////////////////////////////
	
bool NodeSequencerNode::isChildNodeType(Node *node)
{
	return false;
}

void NodeSequencerNode::initialize() 
{
}

void NodeSequencerNode::uninitialize() 
{
}

void NodeSequencerNode::update() 
{
/*
	float fraction = getFraction();
	int index = -1;
	int nKey = getNKeys();
	for (int n=0; n<(nKey-1); n++) {
		if (getKey(n) <= fraction && fraction <= getKey(n+1)) {
			index = n;
			break;
		}
	}
	if (index == -1)
		return;

	float scale = (fraction - getKey(index)) / (getKey(index+1) - getKey(index));

	float value1 = getKeyValue(index);
	float value2 = getKeyValue(index+1);
	float valueOut = value1 + (value2 - value1)*scale;

	setValue(valueOut);
	sendEvent(getValueField());
*/
}

////////////////////////////////////////////////
//	Output
////////////////////////////////////////////////

void NodeSequencerNode::outputContext(std::ostream &printStream, char *indentString) 
{
}

////////////////////////////////////////////////
//	List
////////////////////////////////////////////////

NodeSequencerNode *NodeSequencerNode::next() 
{
	return (NodeSequencerNode *)Node::next(getType());
}

NodeSequencerNode *NodeSequencerNode::nextTraversal() 
{
	return (NodeSequencerNode *)Node::nextTraversalByType(getType());
}
