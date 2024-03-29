/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	Bounded2DNode.h
*
******************************************************************/

#ifndef _CX3D_BOUNDED2DNODE_H_
#define _CX3D_BOUNDED2DNODE_H_

#include <cybergarage/x3d/Node.h>
#include <cybergarage/x3d/Bounded2DObject.h>
#include <cybergarage/x3d/BoundingBox2D.h>

namespace CyberX3D {

class Bounded2DNode : public Node, public Bounded2DObject {

	SFVec2f *bboxCenterField;
	SFVec2f *bboxSizeField;

public:

	Bounded2DNode();
	virtual ~Bounded2DNode();

	////////////////////////////////////////////////
	//	BoundingBox2DSize
	////////////////////////////////////////////////

	SFVec2f *getBoundingBoxSizeField();

	void setBoundingBoxSize(float value[]);
	void setBoundingBoxSize(float x, float y);
	void getBoundingBoxSize(float value[]);

	////////////////////////////////////////////////
	//	BoundingBox2DCenter
	////////////////////////////////////////////////

	SFVec2f *getBoundingBoxCenterField();

	void setBoundingBoxCenter(float value[]);
	void setBoundingBoxCenter(float x, float y);
	void getBoundingBoxCenter(float value[]);

	////////////////////////////////////////////////
	//	BoundingBox2D
	////////////////////////////////////////////////

	void setBoundingBox(BoundingBox2D *bbox);
	void updateBoundingBox();
};

void UpdateBoundingBox2D(Node *node, BoundingBox2D *bbox);

}

#endif

