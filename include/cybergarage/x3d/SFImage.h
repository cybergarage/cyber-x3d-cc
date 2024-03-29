/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	SFImage.h
*
******************************************************************/

#ifndef _CV97_SFIMAGE_H_
#define _CV97_SFIMAGE_H_

#include <cybergarage/x3d/MField.h>
#include <cybergarage/x3d/SFInt32.h>

namespace CyberX3D {

class SFImage : public MField {

	static	int	mInit;

public:

	SFImage();

	void InitializeJavaIDs();

	void addValue(int value);
	void addValue(SFInt32 *sfvalue);
	void addValue(const char *value);

	void insertValue(int index, int value);
	int get1Value(int index);

	void set1Value(int index, int value);
	void setValue(MField *mfield);

	int getValueCount() 
	{
		return 1;
	}

	////////////////////////////////////////////////
	//	Output
	////////////////////////////////////////////////

	void outputContext(std::ostream& printStream, char *indentString);

	////////////////////////////////////////////////
	//	toString
	////////////////////////////////////////////////

	void setValue(const char *value);
	char *getValue(char *buffer, int bufferLen);

	////////////////////////////////////////////////
	//	Java
	////////////////////////////////////////////////

#ifdef SUPPORT_JSAI

private:

	static jclass		mFieldClassID;
	static jclass		mConstFieldClassID;

	static jmethodID	mInitMethodID;
	static jmethodID	mSetValueMethodID;
	static jmethodID	mGetValueMethodID;
	static jmethodID	mSetNameMethodID;

	static jmethodID	mConstInitMethodID;
	static jmethodID	mConstSetValueMethodID;
	static jmethodID	mConstGetValueMethodID;
	static jmethodID	mConstSetNameMethodID;

public:

	void		setJavaIDs();

	jclass		getFieldID()			{return mFieldClassID;}
	jclass		getConstFieldID()		{return mConstFieldClassID;}

	jmethodID	getInitMethodID()		{return mInitMethodID;}
	jmethodID	getSetValueMethodID()		{return mSetValueMethodID;}
	jmethodID	getGetValueMethodID()		{return mGetValueMethodID;}
	jmethodID	getSetNameMethodID()		{return mSetNameMethodID;}

	jmethodID	getConstInitMethodID()		{return mConstInitMethodID;}
	jmethodID	getConstSetValueMethodID()	{return mConstSetValueMethodID;}
	jmethodID	getConstGetValueMethodID()	{return mConstGetValueMethodID;}
	jmethodID	getConstSetNameMethodID()	{return mConstSetNameMethodID;}

	jobject toJavaObject(int bConstField = 0);
	void setValue(jobject field, int bConstField = 0);
	void getValue(jobject field, int bConstField = 0);

#endif
};

}

#endif
