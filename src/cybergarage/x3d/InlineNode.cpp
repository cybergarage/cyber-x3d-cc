/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	InlineNode.cpp
*
*	Revisions:
*
*	11/19/02
*		- Changed the super class from GroupingNode to BoundedNode.
*
 *	11/15/02
*		- Added the follwing new X3D fields.
*			load
*
******************************************************************/

#include <cybergarage/x3d/SceneGraph.h>

using namespace CyberX3D;

const static char loadFieldString[] = "load";

InlineNode::InlineNode() 
{
	setHeaderFlag(false);
	setType(INLINE_NODE);

	///////////////////////////
	// VRML97 Field 
	///////////////////////////

	// url exposed field
	urlField = new MFString();
	addExposedField(urlFieldString, urlField);

	///////////////////////////
	// X3D Field 
	///////////////////////////
		
	// load exposed field
	loadField = new SFBool();
	addExposedField(loadFieldString, loadField);
}

InlineNode::~InlineNode() 
{
}

////////////////////////////////////////////////
// Url
////////////////////////////////////////////////

MFString *InlineNode::getUrlField()
{
	if (isInstanceNode() == false)
		return urlField;
	return (MFString *)getExposedField(urlFieldString);
}

void InlineNode::addUrl(char *value) 
{
	getUrlField()->addValue(value);
}

int InlineNode::getNUrls() 
{
	return getUrlField()->getSize();
}

char *InlineNode::getUrl(int index) 
{
	return getUrlField()->get1Value(index);
}

void InlineNode::setUrl(int index, char *urlString) 
{
	getUrlField()->set1Value(index, urlString);
}

////////////////////////////////////////////////
//	Load (X3D)
////////////////////////////////////////////////

SFBool *InlineNode::getLoadField() 
{
	if (isInstanceNode() == false)
		return loadField;
	return (SFBool *)getExposedField(loadFieldString);
}
	
void InlineNode::setLoad(bool value) 
{
	getLoadField()->setValue(value);
}

bool InlineNode::getLoad() 
{
	return getLoadField()->getValue();
}
	
bool InlineNode::isLoad() 
{
	return getLoad();
}

////////////////////////////////////////////////
//	List
////////////////////////////////////////////////

InlineNode *InlineNode::next() 
{
	return (InlineNode *)Node::next(getType());
}

InlineNode *InlineNode::nextTraversal() 
{
	return (InlineNode *)Node::nextTraversalByType(getType());
}

////////////////////////////////////////////////
//	functions
////////////////////////////////////////////////
	
bool InlineNode::isChildNodeType(Node *node)
{
	return false;
}

void InlineNode::update() 
{
}

////////////////////////////////////////////////
//	Infomation
////////////////////////////////////////////////

void InlineNode::outputContext(std::ostream &printStream, char *indentString) 
{
	if (0 < getNUrls()) {
		MFString *url = getUrlField();
		printStream << indentString << "\t" << "url [" << std::endl;
		url->MField::outputContext(printStream, indentString, "\t\t");
		printStream << indentString << "\t" << "]" << std::endl;
	}
}

////////////////////////////////////////////////////////////
//	InlineNode::initialize
////////////////////////////////////////////////////////////

void InlineNode::initialize()
{
	if (isInstanceNode() == false && isInitialized() == false) {
		SceneGraph	sg;
		if (getSceneGraph() != NULL)
			sg.setOption(getSceneGraph()->getOption());

		int nUrls = getNUrls();
		for (int n=0; n<nUrls; n++) {
			sg.load(getUrl(n));
			Node *node = sg.getNodes();
			while (node) {
				Node *nextNode = node->next();
				moveChildNode(node);
				node = nextNode;
			}
			for (Route *route = sg.getRoutes(); route; route = route->next()) {
				getSceneGraph()->addRoute(route->getEventOutNode()->getName(), route->getEventOutField()->getName(),
											route->getEventInNode()->getName(), route->getEventInField()->getName());
			}
			sg.clear();
		}
		setInitialized(true);
	}
}

////////////////////////////////////////////////////////////
//	InlineNode::uninitialize
////////////////////////////////////////////////////////////

void InlineNode::uninitialize()
{
	Node *node=getChildNodes();
	while (node) {
		Node *nextNode = node->next();
		node->remove();
		delete node;
		node = nextNode;
	}
	setInitialized(false);
}
