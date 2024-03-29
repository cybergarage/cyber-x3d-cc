/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	ParserNode.cpp
*
******************************************************************/

#include <cybergarage/x3d/ParserNode.h>

using namespace CyberX3D;

ParserNode::ParserNode(Node *node, int type) 
{ 
	setHeaderFlag(false); 
	mNode = node; 
	mType = type;
}

ParserNode::~ParserNode() 
{ 
	remove();
}
	
Node *ParserNode::getNode() 
{ 
	return mNode; 
}
	
int ParserNode::getType() 
{ 
	return mType; 
}
