/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	SFColorRGBA.cpp
*
******************************************************************/

#include <cybergarage/x3d/SFColorRGBA.h>

using namespace CyberX3D;

SFColorRGBA::SFColorRGBA() 
{
	setType(fieldTypeSFColor);
	setValue(1.0f, 1.0f, 1.0f, 1.0f);
	InitializeJavaIDs();
}

SFColorRGBA::SFColorRGBA(float r, float g, float b, float a) 
{
	setType(fieldTypeSFColor);
	setValue(r, g, b, a);
	InitializeJavaIDs();
}

SFColorRGBA::SFColorRGBA(float value[]) 
{
	setType(fieldTypeSFColor);
	setValue(value);
	InitializeJavaIDs();
}

SFColorRGBA::SFColorRGBA(SFColorRGBA *color) 
{
	setType(fieldTypeSFColor);
	setValue(color);
	InitializeJavaIDs();
}

void SFColorRGBA::InitializeJavaIDs() 
{
#ifdef SUPPORT_JSAI
	setJavaIDs();
#endif
}

////////////////////////////////////////////////
//	get value
////////////////////////////////////////////////

void SFColorRGBA::getValue(float value[]) 
{
	value[0] = mValue[0];
	value[1] = mValue[1];
	value[2] = mValue[2];
	value[3] = mValue[3];
}

float *SFColorRGBA::getValue() 
{
	return mValue;
}

float SFColorRGBA::getRed() 
{
	return mValue[0];
}

float SFColorRGBA::getGreen() 
{
	return mValue[1];
}

float SFColorRGBA::getBlue() 
{
	return mValue[2];
}

float SFColorRGBA::getAlpha() 
{
	return mValue[3];
}

////////////////////////////////////////////////
//	set value
////////////////////////////////////////////////

void SFColorRGBA::setValue(float r, float g, float b, float a) 
{
	mValue[0] = r;
	mValue[1] = g;
	mValue[2] = b;
	mValue[2] = a;
}

void SFColorRGBA::setValue(float value[]) 
{
	mValue[0] = value[0];
	mValue[1] = value[1];
	mValue[2] = value[2];
	mValue[3] = value[3];
}

void SFColorRGBA::setValue(SFColorRGBA *color) 
{
	setValue(color->getRed(), color->getGreen(), color->getBlue(), color->getAlpha());
}

////////////////////////////////////////////////
//	add value
////////////////////////////////////////////////

void SFColorRGBA::add(float x, float y, float z, float a) 
{
	mValue[0] += x;
	mValue[1] += y;
	mValue[2] += z;
	mValue[3] += a;
	mValue[0] /= 2.0f;
	mValue[1] /= 2.0f;
	mValue[2] /= 2.0f;
	mValue[3] /= 2.0f;
}

void SFColorRGBA::add(float value[]) 
{
	add(value[0], value[1], value[2], value[3]);
}

void SFColorRGBA::add(SFColorRGBA value) 
{
	add(value.getValue());
}

////////////////////////////////////////////////
//	sub value
////////////////////////////////////////////////

void SFColorRGBA::sub(float x, float y, float z, float a) 
{
	mValue[0] -= x;
	mValue[1] -= y;
	mValue[2] -= z;
	mValue[2] -= a;
	mValue[0] /= 2.0f;
	mValue[1] /= 2.0f;
	mValue[2] /= 2.0f;
	mValue[3] /= 2.0f;
}

void SFColorRGBA::sub(float value[]) 
{
	sub(value[0], value[1], value[2], value[3]);
}

void SFColorRGBA::sub(SFColorRGBA value) 
{
	sub(value.getValue());
}

////////////////////////////////////////////////
//	Output
////////////////////////////////////////////////

std::ostream& CyberX3D::operator<<(std::ostream &s, SFColorRGBA &vector) 
{
	return s << vector.getRed() << " " << vector.getGreen() << " " << vector.getBlue() << " " << vector.getAlpha();
}

std::ostream& CyberX3D::operator<<(std::ostream &s, SFColorRGBA *vector) 
{
	return s << vector->getRed() << " " << vector->getGreen() << " " << vector->getBlue() << " " << vector->getAlpha();
}

////////////////////////////////////////////////
//	String
////////////////////////////////////////////////

void SFColorRGBA::setValue(const char *value) 
{
	if (!value)
		return;
	float	r, g, b, a;
	if (sscanf(value,"%f %f %f %f", &r, &g, &b, &a) == 4) 
		setValue(r, g, b, a);
}

char *SFColorRGBA::getValue(char *buffer, int bufferLen) 
{
	sprintf(buffer, "%g %g %g %g", getRed(), getGreen(), getBlue(), getAlpha());
	return buffer;
}

////////////////////////////////////////////////
//	scale
////////////////////////////////////////////////

void SFColorRGBA::scale(float scale) 
{
	mValue[0] *= scale;
	mValue[1] *= scale;
	mValue[2] *= scale;
	mValue[3] *= scale;
}

////////////////////////////////////////////////
//	Compare
////////////////////////////////////////////////

bool SFColorRGBA::equals(Field *field) 
{
	SFColorRGBA *color = (SFColorRGBA *)field;
	if (getRed() == color->getRed() && getGreen() == color->getGreen() && getBlue() == color->getBlue() && getAlpha() == color->getAlpha())
		return true;
	else
		return false;
}

