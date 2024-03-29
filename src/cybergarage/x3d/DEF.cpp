/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	DEF.cpp
*
******************************************************************/

#include <cybergarage/x3d/DEF.h>

using namespace CyberX3D;

DEF::DEF(const char *name, const char *string) 
{
	setName(name);
	setString(string);
}

DEF::~DEF() 
{
	remove();
}

////////////////////////////////////////////////
//	Name
////////////////////////////////////////////////

void DEF::setName(const char *name) 
{
	mName.setValue(name);
}

char *DEF::getName() 
{
	return mName.getValue();
}

////////////////////////////////////////////////
//	String
////////////////////////////////////////////////

void DEF::setString(const char *string) 
{
	mString.setValue(string);
}

char *DEF::getString() 
{
	return mString.getValue();
}
