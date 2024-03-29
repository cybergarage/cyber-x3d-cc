/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	SFVec2d.cpp
*
******************************************************************/

#include <cybergarage/x3d/SFVec2d.h>

using namespace CyberX3D;

SFVec2d::SFVec2d() 
{
	setType(fieldTypeSFVec2d);
	setValue(0.0, 0.0);
}

SFVec2d::SFVec2d(double x, double y) 
{
	setType(fieldTypeSFVec2d);
	setValue(x, y);
}

SFVec2d::SFVec2d(double value[]) 
{
	setType(fieldTypeSFVec2d);
	setValue(value);
}

SFVec2d::SFVec2d(SFVec2d *value) 
{
	setType(fieldTypeSFVec2d);
	setValue(value);
}

////////////////////////////////////////////////
//	get value
////////////////////////////////////////////////

void SFVec2d::getValue(double value[]) 
{
	value[0] = mValue[0];
	value[1] = mValue[1];
}

double *SFVec2d::getValue() 
{
	return mValue;
}

double SFVec2d::getX() 
{
	return mValue[0];
}

double SFVec2d::getY() 
{
	return mValue[1];
}

////////////////////////////////////////////////
//	set value
////////////////////////////////////////////////

void SFVec2d::setValue(double x, double y) 
{
	mValue[0] = x;
	mValue[1] = y;
}

void SFVec2d::setValue(double value[]) 
{
	mValue[0] = value[0];
	mValue[1] = value[1];
}

void SFVec2d::setValue(SFVec2d *vector) 
{
	setValue(vector->getX(), vector->getY());
}

void SFVec2d::setX(double x) 
{
	setValue(x, getY());
}

void SFVec2d::setY(double y) 
{
	setValue(getX(), y);
}

////////////////////////////////////////////////
//	add value
////////////////////////////////////////////////

void SFVec2d::add(double x, double y) 
{
	mValue[0] += x;
	mValue[1] += y;
}

void SFVec2d::add(double value[]) 
{
	mValue[0] += value[0];
	mValue[1] += value[1];
}

void SFVec2d::add(SFVec2d value) 
{
	add(value.getValue());
}

void SFVec2d::translate(double x, double y) 
{
	add(x, y);
}

void SFVec2d::translate(double value[]) 
{
	add(value);
}

void SFVec2d::translate(SFVec2d value) 
{
	add(value);
}

////////////////////////////////////////////////
//	sub value
////////////////////////////////////////////////

void SFVec2d::sub(double x, double y) 
{
	mValue[0] -= x;
	mValue[1] -= y;
}

void SFVec2d::sub(double value[]) 
{
	mValue[0] -= value[0];
	mValue[1] -= value[1];
}

void SFVec2d::sub(SFVec2d value) 
{
	sub(value.getValue());
}

////////////////////////////////////////////////
//	scale
////////////////////////////////////////////////

void SFVec2d::scale(double value) 
{
	mValue[0] *= value;
	mValue[1] *= value;
}	
	
void SFVec2d::scale(double xscale, double yscale) 
{
	mValue[0] *= xscale;
	mValue[1] *= yscale;
}

void SFVec2d::scale(double value[2]) 
{
	scale(value[0], value[1]);
}

////////////////////////////////////////////////
//	invert
////////////////////////////////////////////////

void SFVec2d::invert() 
{
	mValue[0] = -mValue[0];
	mValue[1] = -mValue[1];
}

////////////////////////////////////////////////
//	scalar
////////////////////////////////////////////////

double SFVec2d::getScalar()
{
	return (double)sqrt(mValue[0]*mValue[0]+mValue[1]*mValue[1]);
}

////////////////////////////////////////////////
//	normalize
////////////////////////////////////////////////

void SFVec2d::normalize()
{
	double scale = getScalar();
	if (scale != 0.0f) {
		mValue[0] /= scale;
		mValue[1] /= scale;
	}
}

////////////////////////////////////////////////
//	Output
////////////////////////////////////////////////

std::ostream& CyberX3D::operator<<(std::ostream &s, SFVec2d &vector) 
{
	return s << vector.getX() << " " << vector.getY();
}

std::ostream& CyberX3D::operator<<(std::ostream &s, SFVec2d *vector) 
{
	return s << vector->getX() << " " << vector->getY();
}

////////////////////////////////////////////////
//	String
////////////////////////////////////////////////

void SFVec2d::setValue(const char *value) 
{
	if (!value)
		return;
	double	x, y;
	if (sscanf(value,"%lf %lf", &x, &y) == 2) 
		setValue(x, y);
}

char *SFVec2d::getValue(char *buffer, int bufferLen) 
{
	sprintf(buffer, "%g %g", getX(), getY());
	return buffer;
}

////////////////////////////////////////////////
//	Compare
////////////////////////////////////////////////

bool SFVec2d::equals(Field *field) 
{
	SFVec2d *vector = (SFVec2d *)field;
	if (getX() == vector->getX() && getY() == vector->getY())
		return true;
	else
		return false;
}

bool SFVec2d::equals(double value[2]) 
{
	SFVec2d vector(value);
	return equals(&vector);
}

bool SFVec2d::equals(double x, double y) 
{
	SFVec2d vector(x, y);
	return equals(&vector);
}
