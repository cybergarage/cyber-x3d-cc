/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	MaterialNode.h
*
******************************************************************/

#ifndef _CX3D_MATERIALNODE_H_
#define _CX3D_MATERIALNODE_H_

#include <cybergarage/x3d/VRML97Fields.h>
#include <cybergarage/x3d/AppearanceChildNode.h>

namespace CyberX3D {

class MaterialNode : public AppearanceChildNode {

	SFFloat *transparencyField;
	SFFloat *ambientIntensityField;
	SFFloat *shininessField;
	SFColor *diffuseColorField;
	SFColor *specularColorField;
	SFColor *emissiveColorField;
	
public:

	MaterialNode();
	~MaterialNode();

	////////////////////////////////////////////////
	//	Transparency
	////////////////////////////////////////////////

	SFFloat *getTransparencyField();
	
	void setTransparency(float value);
	float getTransparency();

	////////////////////////////////////////////////
	//	AmbientIntensity
	////////////////////////////////////////////////

	SFFloat *getAmbientIntensityField();
	
	void setAmbientIntensity(float intensity);
	float getAmbientIntensity();

	////////////////////////////////////////////////
	//	Shininess
	////////////////////////////////////////////////

	SFFloat *getShininessField();
	
	void setShininess(float value);
	float getShininess();

	////////////////////////////////////////////////
	//	DiffuseColor
	////////////////////////////////////////////////

	SFColor *getDiffuseColorField();

	void setDiffuseColor(float value[]);
	void setDiffuseColor(float r, float g, float b);
	void getDiffuseColor(float value[]);

	////////////////////////////////////////////////
	//	SpecularColor
	////////////////////////////////////////////////

	SFColor *getSpecularColorField();

	void setSpecularColor(float value[]);
	void setSpecularColor(float r, float g, float b);
	void getSpecularColor(float value[]);

	////////////////////////////////////////////////
	//	EmissiveColor
	////////////////////////////////////////////////

	SFColor *getEmissiveColorField();

	void setEmissiveColor(float value[]);
	void setEmissiveColor(float r, float g, float b);
	void getEmissiveColor(float value[]);

	////////////////////////////////////////////////
	//	List
	////////////////////////////////////////////////

	MaterialNode *next();
	MaterialNode *nextTraversal();

	////////////////////////////////////////////////
	//	functions
	////////////////////////////////////////////////
	
	bool isChildNodeType(Node *node);
	void initialize();
	void uninitialize();
	void update();

	////////////////////////////////////////////////
	//	Infomation
	////////////////////////////////////////////////

	void outputContext(std::ostream &printStream, char *indentString);
};

}

#endif
