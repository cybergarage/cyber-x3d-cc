/******************************************************************
*
*	CyberX3D for C++
*
*	Copyright(C)SatoshiKonno1996-2002
*
*	File:	NodeType.h
*
******************************************************************/

#ifndef _CX3D_NODETYPE_H_
#define _CX3D_NODETYPE_H_

namespace CyberX3D {

/******************************************************************
* NodeConstants
******************************************************************/

enum {
UNKNOWN_NODE = -1,
ANCHOR_NODE = 0, //"ANCHOR";
APPEARANCE_NODE, //"APPEARANCE";
AUDIOCLIP_NODE, //"AUDIOCLIP";
BACKGROUND_NODE, //"BACKGROUND";
BILLBOARD_NODE, //"BILLBOARD";
BOX_NODE, //"BOX";
COLLISION_NODE, //"COLLISION";
COLORINTERPOLATOR_NODE, //"COLORINTERPOLATOR";
COLOR_NODE, //"COLOR";
CONE_NODE, //"CONE";
COORDINATEINTERPOLATOR_NODE, //"COORDINATEINTERPOLATOR";
COORDINATE_NODE, //"COORDINATE";
CYLINDER_NODE, //"CYLINDER";
CYLINDERSENSOR_NODE, //"CYLINDERSENSOR";
DEF_NODE, //"DEF";
DIRECTIONALLIGHT_NODE, //"DIRECTIONALLIGHT";
ELEVATIONGRID_NODE, //"ELEVATIONGRID";
EXTRUSION_NODE, //"EXTRUSION";
FOG_NODE, //"FOG";
FONTSTYLE_NODE, //"FONTSTYLE";
GROUP_NODE, //"GROUP";
IMAGETEXTURE_NODE, //"IMAGETEXTURE";
INDEXEDFACESET_NODE, //"INDEXEDFACESET";
INDEXEDLINESET_NODE, //"INDEXEDLINESET";
INLINE_NODE, //"INLINE";
LOD_NODE, //"LOD";
MATERIAL_NODE, //"MATERIAL";
MOVIETEXTURE_NODE, //"MOVIETEXTURE";
NAVIGATIONINFO_NODE, //"NAVIGATIONINFO";
NORMALINTERPOLATOR_NODE, //"NORMALINTERPOLATOR";
NORMAL_NODE, //"NORMAL";
ORIENTATIONINTERPOLATOR_NODE, //"ORIENTATIONINTERPOLATOR";
PIXELTEXTURE_NODE, //"PIXELTEXTURE";
PLANESENSOR_NODE, //"PLANESENSOR";
POINTLIGHT_NODE, //"POINTLIGHT";
POINTSET_NODE, //"POINTSET";
POSITIONINTERPOLATOR_NODE, //"POSITIONINTERPOLATOR";
PROXIMITYSENSOR_NODE, //"PROXIMITYSENSOR";
ROOT_NODE, //"ROOT";
SCALARINTERPOLATOR_NODE, //"SCALARINTERPOLATOR";
SCRIPT_NODE, //"SCRIPT";
SHAPE_NODE, //"SHAPE";
SOUND_NODE, //"SOUND";
SPHERE_NODE, //"SPHERE";
SPHERESENSOR_NODE, //"SPHERESENSOR";
SPOTLIGHT_NODE, //"SPOTLIGHT";
SWITCH_NODE, //"SWITCH";
TEXT_NODE, //"TEXT";
TEXTURECOORDINATE_NODE, //"TEXTURECOORDINATE";
TEXTURETRANSFORM_NODE, //"TEXTURETRANSFORM";
TIMESENSOR_NODE, //"TIMESENSOR";
TOUCHSENSOR_NODE, //"TOUCHSENSOR";
TRANSFORM_NODE, //"TRANSFORM";
VIEWPOINT_NODE, //"VIEWPOINT";
VISIBILITYSENSOR_NODE, //"VISIBILITYSENSOR";
WORLDINFO_NODE, //"WORLDINFO";
XML_NODE,
// 9. Networking component (X3D)
LOADSENSOR_NODE,
// 10. Grouping component (X3D)
STATICGROUP_NODE,
// 11. Rendering component (X3D)
COLORRGBA_NODE, 
TRIANGLESET_NODE,  
TRIANGLEFANSET_NODE,
TRIANGLESTRIPSET_NODE,
// 12. Shape component (X3D)
FILLPROPERTIES_NODE,
LINEPROPERTIES_NODE,
// 14. Geometry2D component (X3D)
ARC2D_NODE,
ARCCLOSE2D_NODE,
CIRCLE2D_NODE,
DISK2D_NODE,
POLYLINE2D_NODE,
POLYPOINT2D_NODE,
RECTANGLE2D_NODE,
TRIANGLESET2D_NODE,
// 18. Texturing component (x3D)
MULTITEXTURE_NODE,
MULTITEXTURECOORD_NODE,
MULTITEXTURETRANSFORM_NODE,
TEXCOORDGEN_NODE,
// 19. Interpolation component (X3D)
COORDINATEINTERPOLATOR2D_NODE,
POSITIONINTERPOLATOR2D_NODE,
// 21. Key device sensor component (X3D)
KEYSENSOR_NODE,
STRINGSENSOR_NODE,
// 30. Event Utilities component (X3D)
BOOLEANFILTER_NODE,
BOOLEANTOGGLE_NODE,
BOOLEANTRIGGER_NODE,
BOOLEANSEQUENCER_NODE,
INTEGERTRIGGER_NODE,
INTEGERSEQUENCER_NODE,
TIMETRIGGER_NODE,
// Deprecated components (X3D)
BOOLEANTIMETRIGGER_NODE, 
SHAPE2D_NODE,
TRANSFORM2D_NODE,
NODESEQUENCER_NODE,
// Scene (X3D)
SCENE_NODE, 
// ROUTE(X3D)
ROUTE_NODE, 
};

/******************************************************************
* FieldConstants
******************************************************************/

enum {
AMBIENTINTENSITY_FIELD, //"AMBIENTINTENSITY";
ATTENUATION_FIELD, //"ATTENUATION";
AUTOOFFSET_FIELD, //"AUTOOFFSET";
AVATARSIZE_FIELD, //"AVATARSIZE";
AXISOFROTATION_FIELD, //"AXISOFROTATION";
BACKURL_FIELD, //"BACKURL";
BEAMWIDTH_FIELD, //"BEAMWIDTH";
BEGINCAP_FIELD, //"BEGINCAP";
BINDTIME_FIELD, //"BINDTIME";
BOTTOM_FIELD, //"BOTTOM";
BOTTOMRADIUS_FIELD, //"BOTTOMRADIUS";
BOTTOMURL_FIELD, //"BOTTOMURL";
CCW_FIELD, //"CCW";
CENTER_FIELD, //"CENTER";
COLLIDE_FIELD, //"COLLIDE";
COLLIDETIME_FIELD, //"COLLIDETIME";
COLOR_FIELD, //"COLOR";
COLORINDEX_FIELD, //"COLORINDEX";
COLORPERVERTEX_FIELD, //"COLORPERVERTEX";
CONVEX_FIELD, //"CONVEX";
COORDINDEX_FIELD, //"COORDINDEX";
CREASEANGLE_FIELD, //"CREASEANGLE";
CROSSSECTION_FIELD, //"CROSSSECTION";
CUTOFFANGLE_FIELD, //"CUTOFFANGLE";
CYCLEINTERVAL_FIELD, //"CYCLEINTERVAL";
CYCLETIME_FIELD, //"CYCLETIME";
DESCRIPTION_FIELD, //"DESCRIPTION";
DIFFUSECOLOR_FIELD, //"DIFFUSECOLOR";
DIRECTOUTPUT_FIELD, //"DIRECTOUTPUT";
DIRECTION_FIELD, //"DIRECTION";
DISKANGLE_FIELD, //"DISKANGLE";
DURATION_FIELD, //"DURATION";
EMISSIVECOLOR_FIELD, //"EMISSIVECOLOR";
ENABLED_FIELD, //"ENABLED";
ENDCAP_FIELD, //"ENDCAP";
ENTERTIME_FIELD, //"ENTERTIME";
EXITTIME_FIELD, //"EXITTIME";
FAMILY_FIELD, //"FAMILY";
_FIELDOFVIEW_FIELD, //"_FIELDOFVIEW";
FOGTYPE_FIELD, //"FOGTYPE";
FRACTION_FIELD, //"FRACTION";
FRONTURL_FIELD, //"FRONTURL";
GROUNDANGLE_FIELD, //"GROUNDANGLE";
GROUNDCOLOR_FIELD, //"GROUNDCOLOR";
HEADLIGHT_FIELD, //"HEADLIGHT";
HEIGHT_FIELD, //"HEIGHT";
HITNORMAL_FIELD, //"HITNORMAL";
HITPOINT_FIELD, //"HITPOINT";
HITTEXCOORD_FIELD, //"HITTEXCOORD";
HORIZONTAL_FIELD, //"HORIZONTAL";
IMAGE_FIELD, //"IMAGE";
INREGIONPRIVATE_FIELD, //"INREGION";
INFO_FIELD, //"INFO";
INTENSITY_FIELD, //"INTENSITY";
ISACTIVE_FIELD, //"ISACTIVE";
ISBOUND_FIELD, //"ISBOUND";
ISOVER_FIELD, //"ISOVER";
JUMP_FIELD, //"JUMP";
JUSTIFY_FIELD, //"JUSTIFY";
KEY_FIELD, //"KEY";
KEYVALUE_FIELD, //"KEYVALUE";
LANGUAGE_FIELD, //"LANGUAGE";
LEFTTORIGHT_FIELD, //"LEFTTORIGHT";
LEFTURL_FIELD, //"LEFTURL";
LENGTH_FIELD, //"LENGTH";
LOCATION_FIELD, //"LOCATION";
LOOP_FIELD, //"LOOP";
MAXANGLE_FIELD, //"MAXANGLE";
MAXBACK_FIELD, //"MAXBACK";
MAXEXTENT_FIELD, //"MAXEXTENT";
MAXFRONT_FIELD, //"MAXFRONT";
MAXPOSITION_FIELD, //"MAXPOSITION";
MINANGLE_FIELD, //"MINANGLE";
MINBACK_FIELD, //"MINBACK";
MINFRONT_FIELD, //"MINFRONT";
MINPOSITION_FIELD, //"MINPOSITION";
MUSTEVALUATE_FIELD, //"MUSTEVALUATE";
NORMALINDEX_FIELD, //"NORMALINDEX";
NORMALPERVERTEX_FIELD, //"NORMALPERVERTEX";
OFFSET_FIELD, //"OFFSET";
ON_FIELD, //"ON";
ORIENTATION_FIELD, //"ORIENTATION";
PARAMETER_FIELD, //"PARAMETER";
PITCH_FIELD, //"PITCH";
POINT_FIELD, //"POINT";
POSITION_FIELD, //"POSITION";
PRIORITY_FIELD, //"PRIORITY";
RADIUS_FIELD, //"RADIUS";
RANGE_FIELD, //"RANGE";
REPEATS_FIELD, //"REPEATS";
REPEATT_FIELD, //"REPEATT";
RIGHTURL_FIELD, //"RIGHTURL";
ROTATION_FIELD, //"ROTATION";
SCALE_FIELD, //"SCALE";
SCALEORIENTATION_FIELD, //"SCALEORIENTATION";
SETBIND_FIELD, //"SET_BIND";
SHININESS_FIELD, //"SHININESS";
SIDE_FIELD, //"SIDE";
SIZE_FIELD, //"SIZE";
SKYANGLE_FIELD, //"SKYANGLE";
SKYCOLOR_FIELD, //"SKYCOLOR";
SOLID_FIELD, //"SOLID";
SPACING_FIELD, //"SPACING";
SPATIALIZE_FIELD, //"SPATIALIZE";
SPECULARCOLOR_FIELD, //"SPECULARCOLOR";
SPEED_FIELD, //"SPEED";
SPEEDTIME_FIELD, //"SPEEDTIME";
SPINE_FIELD, //"SPINE";
STARTTIME_FIELD, //"STARTTIME";
STOPTIME_FIELD, //"STOPTIME";
STRING_FIELD, //"STRING";
STYLE_FIELD, //"STYLE";
TEXCOORDINDEX_FIELD, //"TEXCOORDINDEX";
TIME_FIELD, //"TIME";
TITLE_FIELD, //"TITLE";
TOP_FIELD, //"TOP";
TOPTOBOTTOM_FIELD, //"TOPTOBOTTOM";
TOPURL_FIELD, //"TOPURL";
TOUCHTIME_FIELD, //"TOUCHTIME";
TRACKPOINT_FIELD, //"TRACKPOINT";
TRANSLATION_FIELD, //"TRANSLATION";
TRANSPARENCY_FIELD, //"TRANSPARENCY";
TYPE_FIELD, //"TYPE";
URL_FIELD, //"URL";
VALUE_FIELD, //"VALUE";
VECTOR_FIELD, //"VECTOR";
VISIBILITYLIMIT_FIELD, //"VISIBILITYLIMIT";
VISIBILITYRANGE_FIELD, //"VISIBILITYRANGE";
WHICHCHOICE_FIELD, //"WHICHCHOICE";
XDIMENSION_FIELD, //"XDIMENSION";
XSPACING_FIELD, //"XSPACING";
ZDIMENSION_FIELD, //"ZDIMENSION";
ZSPACING_FIELD, //"ZSPACING";
};

/******************************************************************
* NodeConstants
******************************************************************/

int GetNodeType(const char *nodeString);
int GetFieldType(const char *nodeString);

const char *GetNodeTypeString(int nodeType);

}

#endif
