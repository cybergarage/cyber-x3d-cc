/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	ElevationGridNode.cpp
*
*	Revisions:
*
*	12/03/02
*		- Changed the super class from Geometry3DNode to ComposedGeometryNode.
*
******************************************************************/

#include <cybergarage/x3d/ElevationGridNode.h>
#include <cybergarage/x3d/Graphic3D.h>
#include <cybergarage/x3d/MathUtil.h>

using namespace CyberX3D;

ElevationGridNode::ElevationGridNode() 
{
	setHeaderFlag(false);
	setType(ELEVATIONGRID_NODE);

	// xSpacing field
	xSpacingField = new SFFloat(0.0f);
	addField(xSpacingFieldString, xSpacingField);

	// zSpacing field
	zSpacingField = new SFFloat(0.0f);
	addField(zSpacingFieldString, zSpacingField);

	// xDimension field
	xDimensionField = new SFInt32(0);
	addField(xDimensionFieldString, xDimensionField);

	// zDimension field
	zDimensionField = new SFInt32(0);
	addField(zDimensionFieldString, zDimensionField);

	// creaseAngle exposed field
	creaseAngleField = new SFFloat(0.0f);
	creaseAngleField->setName(creaseAngleFieldString);
	addField(creaseAngleField);

	// height exposed field
	heightField = new MFFloat();
	addField(heightFieldString, heightField);

	///////////////////////////
	// EventIn
	///////////////////////////

	// height eventIn
	MFFloat *setHeightField = new MFFloat();
	addEventIn(heightFieldString, setHeightField);
}

ElevationGridNode::~ElevationGridNode() 
{
}

////////////////////////////////////////////////
//	xSpacing
////////////////////////////////////////////////

SFFloat *ElevationGridNode::getXSpacingField()
{
	if (isInstanceNode() == false)
		return xSpacingField;
	return (SFFloat *)getField(xSpacingFieldString);
}

void ElevationGridNode::setXSpacing(float value) 
{
	getXSpacingField()->setValue(value);
}

float ElevationGridNode::getXSpacing() 
{
	return getXSpacingField()->getValue();
}

////////////////////////////////////////////////
//	zSpacing
////////////////////////////////////////////////

SFFloat *ElevationGridNode::getZSpacingField()
{
	if (isInstanceNode() == false)
		return zSpacingField;
	return (SFFloat *)getField(zSpacingFieldString);
}

void ElevationGridNode::setZSpacing(float value) 
{
	getZSpacingField()->setValue(value);
}

float ElevationGridNode::getZSpacing() 
{
	return getZSpacingField()->getValue();
}

////////////////////////////////////////////////
//	xDimension
////////////////////////////////////////////////

SFInt32 *ElevationGridNode::getXDimensionField()
{
	if (isInstanceNode() == false)
		return xDimensionField;
	return (SFInt32 *)getField(xDimensionFieldString);
}

void ElevationGridNode::setXDimension(int value) 
{
	getXDimensionField()->setValue(value);
}

int ElevationGridNode::getXDimension() 
{
	return getXDimensionField()->getValue();
}

////////////////////////////////////////////////
//	zDimension
////////////////////////////////////////////////

SFInt32 *ElevationGridNode::getZDimensionField()
{
	if (isInstanceNode() == false)
		return zDimensionField;
	return (SFInt32 *)getField(zDimensionFieldString);
}

void ElevationGridNode::setZDimension(int value) 
{
	getZDimensionField()->setValue(value);
}

int ElevationGridNode::getZDimension() 
{
	return getZDimensionField()->getValue();
}

////////////////////////////////////////////////
//	CreaseAngle
////////////////////////////////////////////////

SFFloat *ElevationGridNode::getCreaseAngleField()
{
	if (isInstanceNode() == false)
		return creaseAngleField;
	return (SFFloat *)getField(creaseAngleFieldString);
}
	
void ElevationGridNode::setCreaseAngle(float value) 
{
	getCreaseAngleField()->setValue(value);
}

float ElevationGridNode::getCreaseAngle() 
{
	return getCreaseAngleField()->getValue();
}

////////////////////////////////////////////////
// height
////////////////////////////////////////////////

MFFloat *ElevationGridNode::getHeightField()
{
	if (isInstanceNode() == false)
		return heightField;
	return (MFFloat *)getField(heightFieldString);
}

void ElevationGridNode::addHeight(float value) 
{
	getHeightField()->addValue(value);
}

int ElevationGridNode::getNHeights() 
{
	return getHeightField()->getSize();
}

float ElevationGridNode::getHeight(int index) 
{
	return getHeightField()->get1Value(index);
}

////////////////////////////////////////////////
//	List
////////////////////////////////////////////////

ElevationGridNode *ElevationGridNode::next() 
{
	return (ElevationGridNode *)Node::next(getType());
}

ElevationGridNode *ElevationGridNode::nextTraversal() 
{
	return (ElevationGridNode *)Node::nextTraversalByType(getType());
}

////////////////////////////////////////////////
//	functions
////////////////////////////////////////////////
	
bool ElevationGridNode::isChildNodeType(Node *node)
{
	if (node->isColorNode() || node->isNormalNode() || node->isTextureCoordinateNode())
		return true;
	else
		return false;
}

void ElevationGridNode::uninitialize() 
{
}

void ElevationGridNode::update() 
{
}

////////////////////////////////////////////////
//	Infomation
////////////////////////////////////////////////

void ElevationGridNode::outputContext(std::ostream &printStream, char *indentString) 
{
	SFBool *ccw = getCCWField();
	SFBool *solid = getSolidField();
	SFBool *colorPerVertex = getColorPerVertexField();
	SFBool *normalPerVertex = getNormalPerVertexField();

	printStream << indentString << "\t" << "xDimension " << getXDimension() << std::endl;
	printStream << indentString << "\t" << "xSpacing " << getXSpacing() << std::endl;
	printStream << indentString << "\t" << "zDimension " << getZDimension() << std::endl;
	printStream << indentString << "\t" << "zSpacing " << getZSpacing() << std::endl;

	if (0 < getNHeights()) {
		MFFloat *height = getHeightField();
		printStream << indentString << "\t" << "height [" << std::endl;
		height->MField::outputContext(printStream, indentString, "\t\t");
		printStream << indentString << "\t" << "]" << std::endl;
	}

	printStream << indentString << "\t" << "colorPerVertex " << colorPerVertex << std::endl;
	printStream << indentString << "\t" << "normalPerVertex " << normalPerVertex << std::endl;
	printStream << indentString << "\t" << "ccw " << ccw << std::endl;
	printStream << indentString << "\t" << "solid " << solid << std::endl;
	printStream << indentString << "\t" << "creaseAngle " << getCreaseAngle() << std::endl;
		
	NormalNode *normal = getNormalNodes();
	if (normal != NULL) {
		if (normal->isInstanceNode() == false) {
			if (normal->getName() != NULL && strlen(normal->getName()))
				printStream << indentString << "\t" << "normal " << "DEF " << normal->getName() << " Normal {" << std::endl;
			else
				printStream << indentString << "\t" << "normal Normal {" << std::endl;
			normal->Node::outputContext(printStream, indentString, "\t");
			printStream << indentString << "\t" << "}" << std::endl;
		}
		else 
			printStream << indentString << "\t" << "normal USE " << normal->getName() << std::endl;
	}

	ColorNode *color = getColorNodes();
	if (color != NULL) {
		if (color->isInstanceNode() == false) {
			if (color->getName() != NULL && strlen(color->getName()))
				printStream << indentString << "\t" << "color " << "DEF " << color->getName() << " Color {" << std::endl;
			else
				printStream << indentString << "\t" << "color Color {" << std::endl;
			color->Node::outputContext(printStream, indentString, "\t");
			printStream << indentString << "\t" << "}" << std::endl;
		}
		else 
			printStream << indentString << "\t" << "color USE " << color->getName() << std::endl;
	}

	TextureCoordinateNode *texCoord = getTextureCoordinateNodes();
	if (texCoord != NULL) {
		if (texCoord->isInstanceNode() == false) {
			if (texCoord->getName() != NULL && strlen(texCoord->getName()))
				printStream << indentString << "\t" << "texCoord " << "DEF " << texCoord->getName() << " TextureCoordinate {" << std::endl;
			else
				printStream << indentString << "\t" << "texCoord TextureCoordinate {" << std::endl;
			texCoord->Node::outputContext(printStream, indentString, "\t");
			printStream << indentString << "\t" << "}" << std::endl;
		}
		else 
			printStream << indentString << "\t" << "texCoord USE " << texCoord->getName() << std::endl;
	}
}

////////////////////////////////////////////////
//	GroupingNode::recomputeBoundingBox
////////////////////////////////////////////////

void ElevationGridNode::initialize() 
{
	if (!isInitialized()) {
#ifdef SUPPORT_OPENGL
		recomputeDisplayList();
#endif
		recomputeBoundingBox();
		setInitialized(true);
	}
}

////////////////////////////////////////////////
//	GroupingNode::recomputeBoundingBox
////////////////////////////////////////////////

void ElevationGridNode::recomputeBoundingBox()
{
	float xSize = getXDimension()*getXSpacing();
	float zSize = getZDimension()*getZSpacing();

	setBoundingBoxCenter(xSize/2.0f, 0.0f, zSize/2.0f);
	setBoundingBoxSize(xSize, 0.0f, zSize);
}

////////////////////////////////////////////////
//	Polygons
////////////////////////////////////////////////

int ElevationGridNode::getNPolygons()
{
	int xDimension = getXDimension();
	int zDimension = getZDimension();

	if (xDimension <=0 || zDimension <= 0)
		return 0;

	return (xDimension - 1) * (zDimension - 1) * 4;
}

////////////////////////////////////////////////
//	GroupingNode::recomputeDisplayList
////////////////////////////////////////////////

#ifdef SUPPORT_OPENGL

static void DrawElevationGrid(ElevationGridNode *eg)
{
	int xDimension = eg->getXDimension();
	int zDimension = eg->getZDimension();

	int nPoints = xDimension * zDimension;

	float xSpacing = eg->getXSpacing();
	float zSpacing = eg->getZSpacing();

	int x, z;

	SFVec3f *point = new SFVec3f[nPoints];
	for (x=0; x<xDimension; x++) {
		for (z=0; z<zDimension; z++) {
			float xpos = xSpacing * x;
			float ypos = eg->getHeight(x + z*zDimension);
			float zpos = zSpacing * z;
			point[x + z*xDimension].setValue(xpos, ypos, zpos);
		}
	}
	
	ColorNode				*color		= eg->getColorNodes();
	NormalNode				*normal		= eg->getNormalNodes();
	TextureCoordinateNode	*texCoord	= eg->getTextureCoordinateNodes();

	bool	bColorPerVertex		= eg->getColorPerVertex();
	bool	bNormalPerVertex	= eg->getNormalPerVertex();

	bool ccw = eg->getCCW();
	if (ccw == true)
		glFrontFace(GL_CCW);
	else
		glFrontFace(GL_CW);

	bool solid = eg->getSolid();
	if (solid == false)
		glDisable(GL_CULL_FACE);
	else
		glEnable(GL_CULL_FACE);

	glNormal3f(0.0f, 1.0f, 0.0f);
	for (x=0; x<xDimension-1; x++) {
		for (z=0; z<zDimension-1; z++) {

			int n;

			if (bColorPerVertex == false && color) {
				float	egColor[4]; egColor[3] = 1.0f;
				color->getColor(x + z*zDimension, egColor);
				glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, egColor);
//				glColor3fv(egColor);
			}
			if (bNormalPerVertex == false && normal) {
				float egNormal[3];
				normal->getVector(x + z*zDimension, egNormal);
				glNormal3fv(egNormal);
			}

			float	egPoint[4][3]; 
			float	egColor[4][4]; 
			float	egNormal[4][3];
			float	egTexCoord[4][2];

			egColor[0][3] = egColor[1][3] = egColor[2][3] = egColor[3][3] = 1.0f;

			for (n=0; n<4; n++) {
				
				int xIndex = x + ((n < 2) ? 0 : 1);
				int zIndex = z + (n%2);
				int index = xIndex + zIndex*xDimension;

				if (bColorPerVertex == true && color)
					color->getColor(index, egColor[n]);

				if (bNormalPerVertex == true && normal)
					normal->getVector(index, egNormal[n]);

				if (texCoord)
					texCoord->getPoint(index, egTexCoord[n]);
				else {
					egTexCoord[n][0] = (float)xIndex / (float)(xDimension-1);
					egTexCoord[n][1] = (float)zIndex / (float)(zDimension-1);
				}

				point[index].getValue(egPoint[n]);
			}
	
			glBegin(GL_POLYGON);
			for (n=0; n<3; n++) {
				if (bColorPerVertex == true && color) {
					glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, egColor[n]);
//					glColor3fv(egColor);
				}
				if (bNormalPerVertex == true && normal)
					glNormal3fv(egNormal[n]);
				glTexCoord2fv(egTexCoord[n]);
				glVertex3fv(egPoint[n]);
			}
 			glEnd();

			glBegin(GL_POLYGON);
			for (n=3; 0<n; n--) {
				if (bColorPerVertex == true && color) {
					glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, egColor[n]);
//					glColor3fv(egColor);
				}
				if (bNormalPerVertex == true && normal)
					glNormal3fv(egNormal[n]);
				glTexCoord2fv(egTexCoord[n]);
				glVertex3fv(egPoint[n]);
			}
 			glEnd();
		}
	}

	if (ccw == false)
		glFrontFace(GL_CCW);

	if (solid == false)
		glEnable(GL_CULL_FACE);

	delete []point;
}

void ElevationGridNode::recomputeDisplayList()
{
	unsigned int nCurrentDisplayList = getDisplayList();
	if (0 < nCurrentDisplayList)
		glDeleteLists(nCurrentDisplayList, 1);

	unsigned int nNewDisplayList = glGenLists(1);
	glNewList(nNewDisplayList, GL_COMPILE);
		DrawElevationGrid(this);
	glEndList();

	setDisplayList(nNewDisplayList);
}

#endif
