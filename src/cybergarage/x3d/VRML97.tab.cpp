/* A Bison parser, made by GNU Bison 1.875b.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     FLOAT = 259,
     STRING = 260,
     NAME = 261,
     ANCHOR = 262,
     APPEARANCE = 263,
     AUDIOCLIP = 264,
     BACKGROUND = 265,
     BILLBOARD = 266,
     BOX = 267,
     COLLISION = 268,
     COLOR = 269,
     COLOR_INTERP = 270,
     COORDINATE = 271,
     COORDINATE_INTERP = 272,
     CYLINDER_SENSOR = 273,
     NULL_STRING = 274,
     CONE = 275,
     CUBE = 276,
     CYLINDER = 277,
     DIRECTIONALLIGHT = 278,
     FONTSTYLE = 279,
     ERROR = 280,
     EXTRUSION = 281,
     ELEVATION_GRID = 282,
     FOG = 283,
     INLINE = 284,
     MOVIE_TEXTURE = 285,
     NAVIGATION_INFO = 286,
     PIXEL_TEXTURE = 287,
     GROUP = 288,
     INDEXEDFACESET = 289,
     INDEXEDLINESET = 290,
     S_INFO = 291,
     LOD = 292,
     MATERIAL = 293,
     NORMAL = 294,
     POSITION_INTERP = 295,
     PROXIMITY_SENSOR = 296,
     SCALAR_INTERP = 297,
     SCRIPT = 298,
     SHAPE = 299,
     SOUND = 300,
     SPOTLIGHT = 301,
     SPHERE_SENSOR = 302,
     TEXT = 303,
     TEXTURE_COORDINATE = 304,
     TEXTURE_TRANSFORM = 305,
     TIME_SENSOR = 306,
     SWITCH = 307,
     TOUCH_SENSOR = 308,
     VIEWPOINT = 309,
     VISIBILITY_SENSOR = 310,
     WORLD_INFO = 311,
     NORMAL_INTERP = 312,
     ORIENTATION_INTERP = 313,
     POINTLIGHT = 314,
     POINTSET = 315,
     SPHERE = 316,
     PLANE_SENSOR = 317,
     TRANSFORM = 318,
     S_CHILDREN = 319,
     S_PARAMETER = 320,
     S_URL = 321,
     S_MATERIAL = 322,
     S_TEXTURETRANSFORM = 323,
     S_TEXTURE = 324,
     S_LOOP = 325,
     S_STARTTIME = 326,
     S_STOPTIME = 327,
     S_GROUNDANGLE = 328,
     S_GROUNDCOLOR = 329,
     S_SPEED = 330,
     S_AVATAR_SIZE = 331,
     S_BACKURL = 332,
     S_BOTTOMURL = 333,
     S_FRONTURL = 334,
     S_LEFTURL = 335,
     S_RIGHTURL = 336,
     S_TOPURL = 337,
     S_SKYANGLE = 338,
     S_SKYCOLOR = 339,
     S_AXIS_OF_ROTATION = 340,
     S_COLLIDE = 341,
     S_COLLIDETIME = 342,
     S_PROXY = 343,
     S_SIDE = 344,
     S_AUTO_OFFSET = 345,
     S_DISK_ANGLE = 346,
     S_ENABLED = 347,
     S_MAX_ANGLE = 348,
     S_MIN_ANGLE = 349,
     S_OFFSET = 350,
     S_BBOXSIZE = 351,
     S_BBOXCENTER = 352,
     S_VISIBILITY_LIMIT = 353,
     S_AMBIENT_INTENSITY = 354,
     S_NORMAL = 355,
     S_TEXCOORD = 356,
     S_CCW = 357,
     S_COLOR_PER_VERTEX = 358,
     S_CREASE_ANGLE = 359,
     S_NORMAL_PER_VERTEX = 360,
     S_XDIMENSION = 361,
     S_XSPACING = 362,
     S_ZDIMENSION = 363,
     S_ZSPACING = 364,
     S_BEGIN_CAP = 365,
     S_CROSS_SECTION = 366,
     S_END_CAP = 367,
     S_SPINE = 368,
     S_FOG_TYPE = 369,
     S_VISIBILITY_RANGE = 370,
     S_HORIZONTAL = 371,
     S_JUSTIFY = 372,
     S_LANGUAGE = 373,
     S_LEFT2RIGHT = 374,
     S_TOP2BOTTOM = 375,
     IMAGE_TEXTURE = 376,
     S_SOLID = 377,
     S_KEY = 378,
     S_KEYVALUE = 379,
     S_REPEAT_S = 380,
     S_REPEAT_T = 381,
     S_CONVEX = 382,
     S_BOTTOM = 383,
     S_PICTH = 384,
     S_COORD = 385,
     S_COLOR_INDEX = 386,
     S_COORD_INDEX = 387,
     S_NORMAL_INDEX = 388,
     S_MAX_POSITION = 389,
     S_MIN_POSITION = 390,
     S_ATTENUATION = 391,
     S_APPEARANCE = 392,
     S_GEOMETRY = 393,
     S_DIRECT_OUTPUT = 394,
     S_MUST_EVALUATE = 395,
     S_MAX_BACK = 396,
     S_MIN_BACK = 397,
     S_MAX_FRONT = 398,
     S_MIN_FRONT = 399,
     S_PRIORITY = 400,
     S_SOURCE = 401,
     S_SPATIALIZE = 402,
     S_BERM_WIDTH = 403,
     S_CHOICE = 404,
     S_WHICHCHOICE = 405,
     S_FONTSTYLE = 406,
     S_LENGTH = 407,
     S_MAX_EXTENT = 408,
     S_ROTATION = 409,
     S_SCALE = 410,
     S_CYCLE_INTERVAL = 411,
     S_FIELD_OF_VIEW = 412,
     S_JUMP = 413,
     S_TITLE = 414,
     S_TEXCOORD_INDEX = 415,
     S_HEADLIGHT = 416,
     S_TOP = 417,
     S_BOTTOMRADIUS = 418,
     S_HEIGHT = 419,
     S_POINT = 420,
     S_STRING = 421,
     S_SPACING = 422,
     S_TYPE = 423,
     S_RADIUS = 424,
     S_ON = 425,
     S_INTENSITY = 426,
     S_COLOR = 427,
     S_DIRECTION = 428,
     S_SIZE = 429,
     S_FAMILY = 430,
     S_STYLE = 431,
     S_RANGE = 432,
     S_CENTER = 433,
     S_TRANSLATION = 434,
     S_LEVEL = 435,
     S_DIFFUSECOLOR = 436,
     S_SPECULARCOLOR = 437,
     S_EMISSIVECOLOR = 438,
     S_SHININESS = 439,
     S_TRANSPARENCY = 440,
     S_VECTOR = 441,
     S_POSITION = 442,
     S_ORIENTATION = 443,
     S_LOCATION = 444,
     S_CUTOFFANGLE = 445,
     S_WHICHCHILD = 446,
     S_IMAGE = 447,
     S_SCALEORIENTATION = 448,
     S_DESCRIPTION = 449,
     SFBOOL = 450,
     SFFLOAT = 451,
     SFINT32 = 452,
     SFTIME = 453,
     SFROTATION = 454,
     SFNODE = 455,
     SFCOLOR = 456,
     SFIMAGE = 457,
     SFSTRING = 458,
     SFVEC2F = 459,
     SFVEC3F = 460,
     MFBOOL = 461,
     MFFLOAT = 462,
     MFINT32 = 463,
     MFTIME = 464,
     MFROTATION = 465,
     MFNODE = 466,
     MFCOLOR = 467,
     MFIMAGE = 468,
     MFSTRING = 469,
     MFVEC2F = 470,
     MFVEC3F = 471,
     FIELD = 472,
     EVENTIN = 473,
     EVENTOUT = 474,
     USE = 475,
     S_VALUE_CHANGED = 476
   };
#endif
#define NUMBER 258
#define FLOAT 259
#define STRING 260
#define NAME 261
#define ANCHOR 262
#define APPEARANCE 263
#define AUDIOCLIP 264
#define BACKGROUND 265
#define BILLBOARD 266
#define BOX 267
#define COLLISION 268
#define COLOR 269
#define COLOR_INTERP 270
#define COORDINATE 271
#define COORDINATE_INTERP 272
#define CYLINDER_SENSOR 273
#define NULL_STRING 274
#define CONE 275
#define CUBE 276
#define CYLINDER 277
#define DIRECTIONALLIGHT 278
#define FONTSTYLE 279
#define ERROR 280
#define EXTRUSION 281
#define ELEVATION_GRID 282
#define FOG 283
#define INLINE 284
#define MOVIE_TEXTURE 285
#define NAVIGATION_INFO 286
#define PIXEL_TEXTURE 287
#define GROUP 288
#define INDEXEDFACESET 289
#define INDEXEDLINESET 290
#define S_INFO 291
#define LOD 292
#define MATERIAL 293
#define NORMAL 294
#define POSITION_INTERP 295
#define PROXIMITY_SENSOR 296
#define SCALAR_INTERP 297
#define SCRIPT 298
#define SHAPE 299
#define SOUND 300
#define SPOTLIGHT 301
#define SPHERE_SENSOR 302
#define TEXT 303
#define TEXTURE_COORDINATE 304
#define TEXTURE_TRANSFORM 305
#define TIME_SENSOR 306
#define SWITCH 307
#define TOUCH_SENSOR 308
#define VIEWPOINT 309
#define VISIBILITY_SENSOR 310
#define WORLD_INFO 311
#define NORMAL_INTERP 312
#define ORIENTATION_INTERP 313
#define POINTLIGHT 314
#define POINTSET 315
#define SPHERE 316
#define PLANE_SENSOR 317
#define TRANSFORM 318
#define S_CHILDREN 319
#define S_PARAMETER 320
#define S_URL 321
#define S_MATERIAL 322
#define S_TEXTURETRANSFORM 323
#define S_TEXTURE 324
#define S_LOOP 325
#define S_STARTTIME 326
#define S_STOPTIME 327
#define S_GROUNDANGLE 328
#define S_GROUNDCOLOR 329
#define S_SPEED 330
#define S_AVATAR_SIZE 331
#define S_BACKURL 332
#define S_BOTTOMURL 333
#define S_FRONTURL 334
#define S_LEFTURL 335
#define S_RIGHTURL 336
#define S_TOPURL 337
#define S_SKYANGLE 338
#define S_SKYCOLOR 339
#define S_AXIS_OF_ROTATION 340
#define S_COLLIDE 341
#define S_COLLIDETIME 342
#define S_PROXY 343
#define S_SIDE 344
#define S_AUTO_OFFSET 345
#define S_DISK_ANGLE 346
#define S_ENABLED 347
#define S_MAX_ANGLE 348
#define S_MIN_ANGLE 349
#define S_OFFSET 350
#define S_BBOXSIZE 351
#define S_BBOXCENTER 352
#define S_VISIBILITY_LIMIT 353
#define S_AMBIENT_INTENSITY 354
#define S_NORMAL 355
#define S_TEXCOORD 356
#define S_CCW 357
#define S_COLOR_PER_VERTEX 358
#define S_CREASE_ANGLE 359
#define S_NORMAL_PER_VERTEX 360
#define S_XDIMENSION 361
#define S_XSPACING 362
#define S_ZDIMENSION 363
#define S_ZSPACING 364
#define S_BEGIN_CAP 365
#define S_CROSS_SECTION 366
#define S_END_CAP 367
#define S_SPINE 368
#define S_FOG_TYPE 369
#define S_VISIBILITY_RANGE 370
#define S_HORIZONTAL 371
#define S_JUSTIFY 372
#define S_LANGUAGE 373
#define S_LEFT2RIGHT 374
#define S_TOP2BOTTOM 375
#define IMAGE_TEXTURE 376
#define S_SOLID 377
#define S_KEY 378
#define S_KEYVALUE 379
#define S_REPEAT_S 380
#define S_REPEAT_T 381
#define S_CONVEX 382
#define S_BOTTOM 383
#define S_PICTH 384
#define S_COORD 385
#define S_COLOR_INDEX 386
#define S_COORD_INDEX 387
#define S_NORMAL_INDEX 388
#define S_MAX_POSITION 389
#define S_MIN_POSITION 390
#define S_ATTENUATION 391
#define S_APPEARANCE 392
#define S_GEOMETRY 393
#define S_DIRECT_OUTPUT 394
#define S_MUST_EVALUATE 395
#define S_MAX_BACK 396
#define S_MIN_BACK 397
#define S_MAX_FRONT 398
#define S_MIN_FRONT 399
#define S_PRIORITY 400
#define S_SOURCE 401
#define S_SPATIALIZE 402
#define S_BERM_WIDTH 403
#define S_CHOICE 404
#define S_WHICHCHOICE 405
#define S_FONTSTYLE 406
#define S_LENGTH 407
#define S_MAX_EXTENT 408
#define S_ROTATION 409
#define S_SCALE 410
#define S_CYCLE_INTERVAL 411
#define S_FIELD_OF_VIEW 412
#define S_JUMP 413
#define S_TITLE 414
#define S_TEXCOORD_INDEX 415
#define S_HEADLIGHT 416
#define S_TOP 417
#define S_BOTTOMRADIUS 418
#define S_HEIGHT 419
#define S_POINT 420
#define S_STRING 421
#define S_SPACING 422
#define S_TYPE 423
#define S_RADIUS 424
#define S_ON 425
#define S_INTENSITY 426
#define S_COLOR 427
#define S_DIRECTION 428
#define S_SIZE 429
#define S_FAMILY 430
#define S_STYLE 431
#define S_RANGE 432
#define S_CENTER 433
#define S_TRANSLATION 434
#define S_LEVEL 435
#define S_DIFFUSECOLOR 436
#define S_SPECULARCOLOR 437
#define S_EMISSIVECOLOR 438
#define S_SHININESS 439
#define S_TRANSPARENCY 440
#define S_VECTOR 441
#define S_POSITION 442
#define S_ORIENTATION 443
#define S_LOCATION 444
#define S_CUTOFFANGLE 445
#define S_WHICHCHILD 446
#define S_IMAGE 447
#define S_SCALEORIENTATION 448
#define S_DESCRIPTION 449
#define SFBOOL 450
#define SFFLOAT 451
#define SFINT32 452
#define SFTIME 453
#define SFROTATION 454
#define SFNODE 455
#define SFCOLOR 456
#define SFIMAGE 457
#define SFSTRING 458
#define SFVEC2F 459
#define SFVEC3F 460
#define MFBOOL 461
#define MFFLOAT 462
#define MFINT32 463
#define MFTIME 464
#define MFROTATION 465
#define MFNODE 466
#define MFCOLOR 467
#define MFIMAGE 468
#define MFSTRING 469
#define MFVEC2F 470
#define MFVEC3F 471
#define FIELD 472
#define EVENTIN 473
#define EVENTOUT 474
#define USE 475
#define S_VALUE_CHANGED 476




/* Copy the first part of user declarations.  */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 17 "VRML97.y"
typedef union YYSTYPE {
int		ival;
float	fval;
char	*sval;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 525 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 69 "VRML97.y"


#include <stdio.h>
#include <stdlib.h>

#ifndef __GNUC__
#define alloca	malloc
#endif

#include <cybergarage/x3d/SceneGraph.h>
#include <cybergarage/x3d/NodeType.h>
#include <cybergarage/x3d/VRML97Parser.h>
#include <cybergarage/x3d/VRML97ParserFunc.h>

using namespace CyberX3D;

static float gColor[3];
static float gVec2f[2];
static float gVec3f[3];
static float gRotation[4];
static int gWidth;
static int gHeight;
static int gComponents;

#define YYINITDEPTH  (1024 * 64)
#define	YYMAXDEPTH	(YYINITDEPTH * 64)

int yyerror(char *s);
int yyparse(void);
int yylex(void);



/* Line 214 of yacc.c.  */
#line 569 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  140
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1965

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  227
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  295
/* YYNRULES -- Number of rules. */
#define YYNRULES  712
/* YYNRULES -- Number of states. */
#define YYNSTATES  1193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   476

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   224,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   222,     2,   223,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   225,     2,   226,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   143,   148,   151,   152,   155,   159,   161,   164,   167,
     168,   170,   174,   176,   179,   182,   183,   185,   189,   191,
     194,   197,   198,   200,   204,   206,   209,   212,   213,   215,
     219,   221,   224,   227,   228,   230,   234,   236,   239,   242,
     243,   245,   249,   251,   254,   257,   258,   260,   264,   266,
     268,   271,   274,   275,   277,   279,   282,   285,   287,   290,
     293,   296,   298,   300,   302,   307,   310,   311,   314,   317,
     320,   323,   326,   329,   332,   335,   338,   341,   344,   346,
     351,   354,   355,   357,   360,   363,   366,   369,   372,   375,
     377,   382,   385,   386,   388,   390,   392,   394,   396,   398,
     400,   402,   404,   406,   409,   412,   415,   418,   421,   424,
     427,   430,   433,   436,   438,   443,   446,   447,   449,   452,
     454,   456,   458,   463,   466,   467,   470,   472,   477,   480,
     481,   486,   489,   492,   493,   495,   497,   500,   502,   504,
     507,   510,   513,   515,   520,   523,   524,   527,   529,   534,
     537,   538,   540,   542,   545,   548,   550,   555,   558,   559,
     562,   565,   568,   571,   573,   578,   581,   582,   584,   589,
     592,   593,   596,   599,   601,   606,   609,   610,   613,   616,
     619,   622,   625,   627,   632,   635,   636,   639,   642,   645,
     648,   651,   654,   656,   661,   664,   665,   668,   671,   674,
     677,   680,   682,   687,   690,   691,   693,   696,   699,   702,
     705,   708,   711,   714,   717,   720,   723,   726,   729,   732,
     735,   738,   741,   744,   747,   750,   752,   757,   760,   761,
     763,   765,   767,   769,   772,   775,   778,   781,   784,   787,
     790,   793,   796,   799,   801,   806,   809,   810,   813,   816,
     819,   821,   826,   829,   830,   832,   835,   838,   841,   844,
     847,   850,   853,   856,   859,   862,   866,   869,   870,   872,
     874,   876,   878,   883,   886,   887,   889,   892,   895,   898,
     900,   905,   908,   909,   911,   913,   915,   917,   920,   923,
     926,   929,   932,   935,   938,   941,   944,   947,   950,   953,
     956,   959,   962,   965,   968,   971,   974,   977,   980,   983,
     985,   990,   993,   994,   997,  1000,  1003,  1006,  1009,  1012,
    1015,  1018,  1021,  1024,  1028,  1031,  1032,  1034,  1037,  1039,
    1041,  1043,  1048,  1051,  1052,  1054,  1056,  1059,  1062,  1065,
    1070,  1072,  1077,  1080,  1081,  1084,  1087,  1090,  1093,  1096,
    1099,  1101,  1106,  1109,  1110,  1112,  1115,  1118,  1121,  1124,
    1127,  1130,  1133,  1135,  1140,  1143,  1144,  1146,  1148,  1151,
    1154,  1157,  1160,  1163,  1165,  1170,  1173,  1174,  1177,  1179,
    1184,  1187,  1188,  1191,  1194,  1197,  1199,  1204,  1207,  1208,
    1211,  1214,  1217,  1219,  1224,  1227,  1228,  1230,  1235,  1238,
    1241,  1243,  1248,  1251,  1252,  1255,  1258,  1261,  1264,  1267,
    1269,  1274,  1277,  1278,  1281,  1284,  1287,  1290,  1293,  1296,
    1299,  1301,  1306,  1309,  1310,  1313,  1316,  1319,  1322,  1325,
    1328,  1330,  1335,  1338,  1339,  1342,  1345,  1348,  1350,  1355,
    1358,  1359,  1362,  1365,  1368,  1370,  1375,  1378,  1379,  1382,
    1385,  1388,  1390,  1395,  1398,  1399,  1401,  1404,  1407,  1410,
    1414,  1418,  1422,  1426,  1430,  1434,  1438,  1442,  1446,  1450,
    1454,  1458,  1462,  1466,  1470,  1474,  1478,  1482,  1486,  1490,
    1494,  1498,  1502,  1506,  1510,  1514,  1518,  1522,  1526,  1530,
    1534,  1538,  1542,  1546,  1550,  1554,  1559,  1564,  1569,  1574,
    1579,  1584,  1590,  1595,  1600,  1605,  1610,  1612,  1617,  1620,
    1621,  1624,  1627,  1630,  1633,  1636,  1639,  1641,  1646,  1649,
    1650,  1653,  1656,  1659,  1662,  1665,  1668,  1671,  1674,  1677,
    1680,  1683,  1686,  1689,  1691,  1696,  1699,  1700,  1703,  1705,
    1710,  1713,  1714,  1717,  1720,  1723,  1725,  1730,  1733,  1734,
    1737,  1740,  1743,  1746,  1749,  1752,  1755,  1758,  1761,  1764,
    1766,  1771,  1774,  1775,  1777,  1780,  1785,  1788,  1790,  1795,
    1798,  1799,  1801,  1803,  1806,  1809,  1812,  1815,  1818,  1821,
    1823,  1828,  1831,  1832,  1835,  1837,  1842,  1845,  1846,  1849,
    1852,  1855,  1858,  1860,  1865,  1868,  1869,  1872,  1875,  1878,
    1881,  1884,  1886,  1891,  1894,  1895,  1898,  1900,  1905,  1908,
    1909,  1911,  1914,  1917,  1920,  1923,  1926,  1928,  1930,  1932,
    1937,  1940,  1941,  1944,  1947,  1950,  1953,  1956,  1958,  1963,
    1966,  1967,  1970,  1973,  1976,  1978,  1983,  1986,  1987,  1989,
    1992,  1995,  1997
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     228,     0,    -1,   229,    -1,     1,    -1,    25,    -1,   238,
     229,    -1,    -1,   272,    -1,   299,    -1,   310,    -1,   369,
      -1,   391,    -1,   397,    -1,   483,    -1,   509,    -1,   320,
      -1,   331,    -1,   420,    -1,   424,    -1,   445,    -1,   453,
      -1,   339,    -1,   433,    -1,   474,    -1,   449,    -1,   501,
      -1,   505,    -1,   515,    -1,   303,    -1,   324,    -1,   335,
      -1,   348,    -1,   356,    -1,   382,    -1,   386,    -1,   441,
      -1,   470,    -1,   489,    -1,   314,    -1,   327,    -1,   416,
      -1,   493,    -1,   343,    -1,   478,    -1,   437,    -1,   281,
      -1,   235,    -1,   458,    -1,   462,    -1,   466,    -1,   521,
      -1,   295,    -1,   360,    -1,   412,    -1,   513,    -1,   236,
      -1,   237,    -1,   365,    -1,   231,    -1,   232,    -1,   230,
      -1,   234,    -1,   220,    -1,     3,    -1,     3,    -1,     5,
      -1,     4,    -1,     3,    -1,     4,    -1,     3,    -1,   242,
     242,   242,    -1,   242,   242,   242,   242,    -1,   239,   246,
      -1,    -1,   242,   242,    -1,   242,   242,   242,    -1,   244,
      -1,   244,   249,    -1,   224,   249,    -1,    -1,   244,    -1,
     222,   249,   223,    -1,   239,    -1,   239,   251,    -1,   224,
     251,    -1,    -1,   239,    -1,   222,   251,   223,    -1,   242,
      -1,   242,   253,    -1,   224,   253,    -1,    -1,   242,    -1,
     222,   253,   223,    -1,   241,    -1,   241,   255,    -1,   224,
     255,    -1,    -1,   241,    -1,   222,   255,   223,    -1,   247,
      -1,   247,   257,    -1,   224,   257,    -1,    -1,   247,    -1,
     222,   257,   223,    -1,   248,    -1,   248,   259,    -1,   224,
     259,    -1,    -1,   248,    -1,   222,   259,   223,    -1,   245,
      -1,   245,   261,    -1,   224,   261,    -1,    -1,   245,    -1,
     222,   261,   223,    -1,   225,    -1,   226,    -1,   226,   224,
      -1,   270,   265,    -1,    -1,    65,    -1,    66,    -1,    97,
     248,    -1,    96,   248,    -1,   305,    -1,   194,   241,    -1,
     266,   256,    -1,   267,   256,    -1,   268,    -1,   269,    -1,
       7,    -1,   271,   263,   265,   264,    -1,   274,   273,    -1,
      -1,    67,    19,    -1,    67,   401,    -1,    67,   220,    -1,
      69,    19,    -1,    69,   374,    -1,    69,   406,    -1,    69,
     429,    -1,    69,   220,    -1,    68,    19,    -1,    68,   497,
      -1,    68,   220,    -1,     8,    -1,   275,   263,   273,   264,
      -1,   279,   277,    -1,    -1,    66,    -1,   194,   241,    -1,
      70,   240,    -1,   129,   242,    -1,    71,   243,    -1,    72,
     243,    -1,   278,   256,    -1,     9,    -1,   280,   263,   277,
     264,    -1,   293,   282,    -1,    -1,    77,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    73,    -1,
      74,    -1,    83,    -1,    84,    -1,   289,   254,    -1,   290,
     250,    -1,   283,   256,    -1,   284,   256,    -1,   285,   256,
      -1,   286,   256,    -1,   287,   256,    -1,   288,   256,    -1,
     291,   254,    -1,   292,   250,    -1,    10,    -1,   294,   263,
     282,   264,    -1,   297,   296,    -1,    -1,   305,    -1,    85,
     248,    -1,   268,    -1,   269,    -1,    11,    -1,   298,   263,
     296,   264,    -1,   301,   300,    -1,    -1,   174,   248,    -1,
      12,    -1,   302,   263,   300,   264,    -1,   238,   304,    -1,
      -1,    64,   222,   304,   223,    -1,    64,   238,    -1,   308,
     306,    -1,    -1,    88,    -1,   305,    -1,    86,   240,    -1,
     268,    -1,   269,    -1,    88,   220,    -1,    88,    19,    -1,
     307,   238,    -1,    13,    -1,   309,   263,   306,   264,    -1,
     312,   311,    -1,    -1,   172,   250,    -1,    14,    -1,   313,
     263,   311,   264,    -1,   318,   315,    -1,    -1,   123,    -1,
     124,    -1,   316,   254,    -1,   317,   250,    -1,    15,    -1,
     319,   263,   315,   264,    -1,   322,   321,    -1,    -1,    89,
     240,    -1,   128,   240,    -1,   163,   242,    -1,   164,   242,
      -1,    20,    -1,   323,   263,   321,   264,    -1,   165,   260,
      -1,    -1,    16,    -1,   326,   263,   325,   264,    -1,   329,
     328,    -1,    -1,   316,   254,    -1,   317,   260,    -1,    17,
      -1,   330,   263,   328,   264,    -1,   333,   332,    -1,    -1,
      89,   240,    -1,   128,   240,    -1,   162,   240,    -1,   169,
     242,    -1,   164,   242,    -1,    22,    -1,   334,   263,   332,
     264,    -1,   337,   336,    -1,    -1,    90,   240,    -1,    91,
     242,    -1,    92,   240,    -1,    93,   242,    -1,    94,   242,
      -1,    95,   242,    -1,    18,    -1,   338,   263,   336,   264,
      -1,   341,   340,    -1,    -1,   170,   240,    -1,   171,   242,
      -1,   172,   244,    -1,   173,   248,    -1,    99,   242,    -1,
      23,    -1,   342,   263,   340,   264,    -1,   346,   344,    -1,
      -1,   164,    -1,   172,    19,    -1,   172,   314,    -1,   172,
     220,    -1,   100,    19,    -1,   100,   416,    -1,   100,   220,
      -1,   101,    19,    -1,   101,   493,    -1,   101,   220,    -1,
     345,   254,    -1,   102,   240,    -1,   104,   242,    -1,   122,
     240,    -1,   103,   240,    -1,   105,   240,    -1,   106,   239,
      -1,   107,   242,    -1,   108,   239,    -1,   109,   242,    -1,
      27,    -1,   347,   263,   344,   264,    -1,   354,   349,    -1,
      -1,   111,    -1,   188,    -1,   155,    -1,   113,    -1,   110,
     240,    -1,   102,   240,    -1,   127,   240,    -1,   104,   242,
      -1,   122,   240,    -1,   350,   258,    -1,   112,   240,    -1,
     351,   262,    -1,   352,   258,    -1,   353,   260,    -1,    26,
      -1,   355,   263,   349,   264,    -1,   358,   357,    -1,    -1,
     172,   244,    -1,   114,   241,    -1,   115,   242,    -1,    28,
      -1,   359,   263,   357,   264,    -1,   363,   361,    -1,    -1,
     117,    -1,   175,   241,    -1,   116,   240,    -1,   362,   256,
      -1,   118,   241,    -1,   119,   240,    -1,   174,   242,    -1,
     167,   242,    -1,   176,   241,    -1,   120,   240,    -1,    24,
     263,    -1,   364,   361,   264,    -1,   367,   366,    -1,    -1,
     305,    -1,   268,    -1,   269,    -1,    33,    -1,   368,   263,
     366,   264,    -1,   372,   370,    -1,    -1,    66,    -1,   371,
     256,    -1,   125,   240,    -1,   126,   240,    -1,   121,    -1,
     373,   263,   370,   264,    -1,   380,   375,    -1,    -1,   131,
      -1,   132,    -1,   133,    -1,   160,    -1,   172,    19,    -1,
     172,   314,    -1,   172,   220,    -1,   130,    19,    -1,   130,
     327,    -1,   130,   220,    -1,   100,    19,    -1,   100,   416,
      -1,   100,   220,    -1,   101,    19,    -1,   101,   493,    -1,
     101,   220,    -1,   102,   240,    -1,   127,   240,    -1,   122,
     240,    -1,   104,   242,    -1,   376,   252,    -1,   103,   240,
      -1,   377,   252,    -1,   378,   252,    -1,   379,   252,    -1,
     105,   240,    -1,    34,    -1,   381,   263,   375,   264,    -1,
     384,   383,    -1,    -1,   172,    19,    -1,   172,   314,    -1,
     172,   220,    -1,   130,    19,    -1,   130,   327,    -1,   130,
     220,    -1,   103,   240,    -1,   376,   252,    -1,   377,   252,
      -1,    35,   263,    -1,   385,   383,   264,    -1,   389,   387,
      -1,    -1,    66,    -1,   388,   256,    -1,   268,    -1,   269,
      -1,    29,    -1,   390,   263,   387,   264,    -1,   395,   392,
      -1,    -1,   177,    -1,   180,    -1,   393,   254,    -1,   178,
     248,    -1,   394,   238,    -1,   394,   222,   229,   223,    -1,
      37,    -1,   396,   263,   392,   264,    -1,   399,   398,    -1,
      -1,    99,   242,    -1,   181,   244,    -1,   183,   244,    -1,
     184,   242,    -1,   182,   244,    -1,   185,   242,    -1,    38,
      -1,   400,   263,   398,   264,    -1,   404,   402,    -1,    -1,
      66,    -1,    70,   240,    -1,    75,   242,    -1,    71,   243,
      -1,    72,   243,    -1,   403,   256,    -1,   125,   240,    -1,
     126,   240,    -1,    30,    -1,   405,   263,   402,   264,    -1,
     410,   407,    -1,    -1,    76,    -1,   168,    -1,   408,   254,
      -1,   161,   240,    -1,    75,   242,    -1,   409,   256,    -1,
      98,   242,    -1,    31,    -1,   411,   263,   407,   264,    -1,
     414,   413,    -1,    -1,   186,   260,    -1,    39,    -1,   415,
     263,   413,   264,    -1,   418,   417,    -1,    -1,   316,   254,
      -1,   317,   260,    -1,   221,   248,    -1,    57,    -1,   419,
     263,   417,   264,    -1,   422,   421,    -1,    -1,   316,   254,
      -1,   317,   262,    -1,   221,   245,    -1,    58,    -1,   423,
     263,   421,   264,    -1,   427,   425,    -1,    -1,   192,    -1,
     426,   222,   246,   223,    -1,   125,   240,    -1,   126,   240,
      -1,    32,    -1,   428,   263,   425,   264,    -1,   431,   430,
      -1,    -1,    90,   240,    -1,    92,   240,    -1,   134,   247,
      -1,   135,   247,    -1,    95,   248,    -1,    62,    -1,   432,
     263,   430,   264,    -1,   435,   434,    -1,    -1,    99,   242,
      -1,   136,   248,    -1,   172,   244,    -1,   171,   242,    -1,
     189,   248,    -1,   170,   240,    -1,   169,   242,    -1,    59,
      -1,   436,   263,   434,   264,    -1,   439,   438,    -1,    -1,
     172,    19,    -1,   172,   314,    -1,   172,   220,    -1,   130,
      19,    -1,   130,   327,    -1,   130,   220,    -1,    60,    -1,
     440,   263,   438,   264,    -1,   443,   442,    -1,    -1,   316,
     254,    -1,   317,   260,    -1,   221,   248,    -1,    40,    -1,
     444,   263,   442,   264,    -1,   447,   446,    -1,    -1,   178,
     248,    -1,   174,   248,    -1,    92,   240,    -1,    41,    -1,
     448,   263,   446,   264,    -1,   451,   450,    -1,    -1,   316,
     254,    -1,   317,   254,    -1,   221,   247,    -1,    42,    -1,
     452,   263,   450,   264,    -1,   456,   454,    -1,    -1,    66,
      -1,   455,   256,    -1,   139,   240,    -1,   140,   240,    -1,
     218,   195,     6,    -1,   218,   196,     6,    -1,   218,   197,
       6,    -1,   218,   198,     6,    -1,   218,   199,     6,    -1,
     218,   201,     6,    -1,   218,   202,     6,    -1,   218,   203,
       6,    -1,   218,   204,     6,    -1,   218,   205,     6,    -1,
     218,   207,     6,    -1,   218,   208,     6,    -1,   218,   209,
       6,    -1,   218,   210,     6,    -1,   218,   212,     6,    -1,
     218,   214,     6,    -1,   218,   215,     6,    -1,   218,   216,
       6,    -1,   219,   195,     6,    -1,   219,   196,     6,    -1,
     219,   197,     6,    -1,   219,   198,     6,    -1,   219,   199,
       6,    -1,   219,   201,     6,    -1,   219,   202,     6,    -1,
     219,   203,     6,    -1,   219,   204,     6,    -1,   219,   205,
       6,    -1,   219,   207,     6,    -1,   219,   208,     6,    -1,
     219,   209,     6,    -1,   219,   210,     6,    -1,   219,   212,
       6,    -1,   219,   214,     6,    -1,   219,   215,     6,    -1,
     219,   216,     6,    -1,   217,   195,     6,   240,    -1,   217,
     196,     6,   242,    -1,   217,   197,     6,   239,    -1,   217,
     198,     6,   243,    -1,   217,   199,     6,   245,    -1,   217,
     200,     6,    19,    -1,   217,   200,     6,   220,     6,    -1,
     217,   201,     6,   244,    -1,   217,   203,     6,   241,    -1,
     217,   204,     6,   247,    -1,   217,   205,     6,   248,    -1,
      43,    -1,   457,   263,   454,   264,    -1,   460,   459,    -1,
      -1,   137,    19,    -1,   137,   276,    -1,   137,   220,    -1,
     138,    19,    -1,   138,   233,    -1,   138,   220,    -1,    44,
      -1,   461,   263,   459,   264,    -1,   464,   463,    -1,    -1,
     173,   248,    -1,   171,   242,    -1,   189,   248,    -1,   141,
     242,    -1,   143,   242,    -1,   142,   242,    -1,   144,   242,
      -1,   145,   242,    -1,   146,    19,    -1,   146,   281,    -1,
     146,   406,    -1,   146,   220,    -1,   147,   240,    -1,    45,
      -1,   465,   263,   463,   264,    -1,   468,   467,    -1,    -1,
     169,   242,    -1,    61,    -1,   469,   263,   467,   264,    -1,
     472,   471,    -1,    -1,    90,   240,    -1,    92,   240,    -1,
      95,   245,    -1,    47,    -1,   473,   263,   471,   264,    -1,
     476,   475,    -1,    -1,    99,   242,    -1,   136,   248,    -1,
     148,   242,    -1,   172,   244,    -1,   190,   242,    -1,   173,
     248,    -1,   171,   242,    -1,   189,   248,    -1,   170,   240,
      -1,   169,   242,    -1,    46,    -1,   477,   263,   475,   264,
      -1,   481,   479,    -1,    -1,   149,    -1,   480,   238,    -1,
     480,   222,   229,   223,    -1,   150,   239,    -1,    52,    -1,
     482,   263,   479,   264,    -1,   487,   484,    -1,    -1,   166,
      -1,   152,    -1,   485,   256,    -1,   151,    19,    -1,   151,
     365,    -1,   151,   220,    -1,   486,   254,    -1,   153,   242,
      -1,    48,    -1,   488,   263,   484,   264,    -1,   491,   490,
      -1,    -1,   165,   258,    -1,    49,    -1,   492,   263,   490,
     264,    -1,   495,   494,    -1,    -1,   178,   247,    -1,   154,
     242,    -1,   155,   247,    -1,   179,   247,    -1,    50,    -1,
     496,   263,   494,   264,    -1,   499,   498,    -1,    -1,   156,
     243,    -1,    92,   240,    -1,    70,   240,    -1,    71,   243,
      -1,    72,   243,    -1,    51,    -1,   500,   263,   498,   264,
      -1,   503,   502,    -1,    -1,    92,   240,    -1,    53,    -1,
     504,   263,   502,   264,    -1,   507,   506,    -1,    -1,   305,
      -1,   178,   248,    -1,   154,   245,    -1,   155,   248,    -1,
     193,   245,    -1,   179,   248,    -1,   268,    -1,   269,    -1,
      63,    -1,   508,   263,   506,   264,    -1,   511,   510,    -1,
      -1,   157,   242,    -1,   158,   240,    -1,   188,   245,    -1,
     187,   248,    -1,   194,   241,    -1,    54,    -1,   512,   263,
     510,   264,    -1,   515,   514,    -1,    -1,   178,   248,    -1,
      92,   240,    -1,   174,   248,    -1,    55,    -1,   516,   263,
     514,   264,    -1,   519,   517,    -1,    -1,    36,    -1,   518,
     256,    -1,   159,   241,    -1,    56,    -1,   520,   263,   517,
     264,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   105,   105,   106,   107,   111,   112,   116,   117,   118,
     119,   120,   121,   122,   123,   127,   128,   129,   130,   131,
     132,   136,   137,   138,   139,   140,   141,   142,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   159,   160,
     161,   162,   166,   167,   168,   172,   173,   174,   175,   176,
     177,   181,   182,   183,   184,   188,   189,   190,   191,   192,
     193,   194,   195,   199,   206,   210,   217,   221,   229,   230,
     234,   244,   255,   256,   274,   283,   293,   294,   295,   296,
     300,   301,   305,   306,   307,   308,   312,   313,   318,   319,
     320,   321,   325,   326,   330,   331,   332,   333,   337,   338,
     342,   343,   344,   345,   349,   350,   354,   355,   356,   357,
     361,   362,   366,   367,   368,   369,   373,   374,   378,   382,
     383,   393,   394,   398,   405,   412,   419,   426,   427,   432,
     436,   440,   441,   445,   455,   470,   471,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   489,   499,
     514,   515,   519,   526,   530,   534,   538,   542,   546,   553,
     563,   578,   579,   583,   590,   597,   604,   611,   618,   625,
     632,   639,   646,   653,   657,   661,   665,   669,   673,   677,
     681,   685,   689,   696,   706,   721,   722,   726,   727,   731,
     732,   736,   746,   761,   762,   766,   773,   783,   798,   799,
     803,   804,   814,   815,   819,   826,   827,   831,   832,   833,
     834,   835,   842,   852,   867,   868,   872,   876,   886,   901,
     902,   906,   913,   920,   924,   931,   941,   956,   957,   961,
     965,   969,   973,   980,   990,  1005,  1006,  1010,  1020,  1035,
    1036,  1040,  1044,  1051,  1061,  1076,  1077,  1081,  1085,  1089,
    1093,  1097,  1104,  1114,  1129,  1130,  1134,  1138,  1142,  1146,
    1150,  1154,  1162,  1172,  1187,  1188,  1192,  1196,  1200,  1204,
    1208,  1215,  1225,  1240,  1241,  1245,  1253,  1254,  1255,  1256,
    1257,  1258,  1259,  1260,  1261,  1262,  1266,  1270,  1274,  1278,
    1282,  1286,  1290,  1294,  1298,  1305,  1315,  1330,  1331,  1335,
    1342,  1349,  1356,  1363,  1367,  1371,  1375,  1379,  1383,  1387,
    1391,  1395,  1399,  1406,  1416,  1431,  1432,  1436,  1440,  1444,
    1451,  1461,  1476,  1477,  1481,  1488,  1492,  1496,  1500,  1504,
    1508,  1512,  1516,  1520,  1527,  1537,  1552,  1553,  1557,  1558,
    1559,  1563,  1573,  1588,  1589,  1593,  1600,  1604,  1608,  1615,
    1625,  1640,  1641,  1645,  1652,  1659,  1666,  1673,  1674,  1675,
    1676,  1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,  1685,
    1689,  1693,  1697,  1701,  1705,  1709,  1713,  1717,  1721,  1728,
    1738,  1753,  1754,  1758,  1759,  1760,  1761,  1762,  1763,  1764,
    1768,  1772,  1779,  1789,  1804,  1805,  1809,  1816,  1820,  1821,
    1825,  1835,  1850,  1851,  1855,  1863,  1870,  1874,  1878,  1882,
    1889,  1899,  1914,  1915,  1919,  1923,  1927,  1931,  1935,  1939,
    1946,  1956,  1971,  1972,  1976,  1983,  1987,  1991,  1995,  1999,
    2003,  2007,  2014,  2024,  2039,  2040,  2044,  2051,  2058,  2062,
    2066,  2070,  2074,  2081,  2091,  2106,  2107,  2111,  2115,  2125,
    2140,  2141,  2145,  2149,  2153,  2159,  2169,  2184,  2185,  2189,
    2193,  2197,  2203,  2213,  2228,  2229,  2233,  2240,  2244,  2248,
    2255,  2265,  2280,  2281,  2285,  2289,  2293,  2297,  2301,  2308,
    2318,  2334,  2335,  2339,  2343,  2347,  2351,  2355,  2359,  2363,
    2370,  2380,  2395,  2396,  2400,  2401,  2402,  2403,  2404,  2405,
    2410,  2420,  2435,  2436,  2440,  2444,  2448,  2454,  2464,  2479,
    2480,  2484,  2488,  2492,  2499,  2509,  2524,  2525,  2529,  2533,
    2537,  2543,  2553,  2568,  2569,  2573,  2580,  2584,  2588,  2597,
    2603,  2609,  2615,  2621,  2635,  2641,  2647,  2653,  2659,  2670,
    2676,  2682,  2688,  2702,  2708,  2714,  2720,  2731,  2737,  2743,
    2749,  2755,  2769,  2775,  2781,  2787,  2793,  2804,  2810,  2816,
    2822,  2836,  2842,  2848,  2854,  2865,  2871,  2877,  2883,  2889,
    2896,  2903,  2911,  2925,  2931,  2937,  2947,  2957,  2973,  2974,
    2978,  2979,  2980,  2981,  2982,  2983,  2987,  2997,  3012,  3013,
    3017,  3021,  3025,  3029,  3033,  3037,  3041,  3045,  3049,  3050,
    3051,  3052,  3053,  3060,  3070,  3085,  3086,  3090,  3097,  3107,
    3122,  3123,  3127,  3131,  3135,  3142,  3152,  3167,  3168,  3172,
    3176,  3180,  3184,  3188,  3192,  3196,  3200,  3204,  3208,  3215,
    3225,  3240,  3241,  3245,  3252,  3256,  3260,  3268,  3278,  3293,
    3294,  3298,  3305,  3312,  3316,  3317,  3318,  3319,  3323,  3331,
    3341,  3356,  3357,  3361,  3366,  3376,  3391,  3392,  3396,  3400,
    3404,  3408,  3416,  3426,  3441,  3442,  3446,  3450,  3454,  3458,
    3462,  3470,  3480,  3495,  3496,  3500,  3507,  3517,  3532,  3533,
    3537,  3538,  3542,  3546,  3550,  3554,  3558,  3559,  3563,  3573,
    3588,  3589,  3593,  3597,  3601,  3605,  3609,  3616,  3626,  3641,
    3642,  3646,  3650,  3654,  3661,  3671,  3686,  3687,  3691,  3698,
    3702,  3709,  3719
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "FLOAT", "STRING", "NAME", 
  "ANCHOR", "APPEARANCE", "AUDIOCLIP", "BACKGROUND", "BILLBOARD", "BOX", 
  "COLLISION", "COLOR", "COLOR_INTERP", "COORDINATE", "COORDINATE_INTERP", 
  "CYLINDER_SENSOR", "NULL_STRING", "CONE", "CUBE", "CYLINDER", 
  "DIRECTIONALLIGHT", "FONTSTYLE", "ERROR", "EXTRUSION", "ELEVATION_GRID", 
  "FOG", "INLINE", "MOVIE_TEXTURE", "NAVIGATION_INFO", "PIXEL_TEXTURE", 
  "GROUP", "INDEXEDFACESET", "INDEXEDLINESET", "S_INFO", "LOD", 
  "MATERIAL", "NORMAL", "POSITION_INTERP", "PROXIMITY_SENSOR", 
  "SCALAR_INTERP", "SCRIPT", "SHAPE", "SOUND", "SPOTLIGHT", 
  "SPHERE_SENSOR", "TEXT", "TEXTURE_COORDINATE", "TEXTURE_TRANSFORM", 
  "TIME_SENSOR", "SWITCH", "TOUCH_SENSOR", "VIEWPOINT", 
  "VISIBILITY_SENSOR", "WORLD_INFO", "NORMAL_INTERP", 
  "ORIENTATION_INTERP", "POINTLIGHT", "POINTSET", "SPHERE", 
  "PLANE_SENSOR", "TRANSFORM", "S_CHILDREN", "S_PARAMETER", "S_URL", 
  "S_MATERIAL", "S_TEXTURETRANSFORM", "S_TEXTURE", "S_LOOP", 
  "S_STARTTIME", "S_STOPTIME", "S_GROUNDANGLE", "S_GROUNDCOLOR", 
  "S_SPEED", "S_AVATAR_SIZE", "S_BACKURL", "S_BOTTOMURL", "S_FRONTURL", 
  "S_LEFTURL", "S_RIGHTURL", "S_TOPURL", "S_SKYANGLE", "S_SKYCOLOR", 
  "S_AXIS_OF_ROTATION", "S_COLLIDE", "S_COLLIDETIME", "S_PROXY", "S_SIDE", 
  "S_AUTO_OFFSET", "S_DISK_ANGLE", "S_ENABLED", "S_MAX_ANGLE", 
  "S_MIN_ANGLE", "S_OFFSET", "S_BBOXSIZE", "S_BBOXCENTER", 
  "S_VISIBILITY_LIMIT", "S_AMBIENT_INTENSITY", "S_NORMAL", "S_TEXCOORD", 
  "S_CCW", "S_COLOR_PER_VERTEX", "S_CREASE_ANGLE", "S_NORMAL_PER_VERTEX", 
  "S_XDIMENSION", "S_XSPACING", "S_ZDIMENSION", "S_ZSPACING", 
  "S_BEGIN_CAP", "S_CROSS_SECTION", "S_END_CAP", "S_SPINE", "S_FOG_TYPE", 
  "S_VISIBILITY_RANGE", "S_HORIZONTAL", "S_JUSTIFY", "S_LANGUAGE", 
  "S_LEFT2RIGHT", "S_TOP2BOTTOM", "IMAGE_TEXTURE", "S_SOLID", "S_KEY", 
  "S_KEYVALUE", "S_REPEAT_S", "S_REPEAT_T", "S_CONVEX", "S_BOTTOM", 
  "S_PICTH", "S_COORD", "S_COLOR_INDEX", "S_COORD_INDEX", 
  "S_NORMAL_INDEX", "S_MAX_POSITION", "S_MIN_POSITION", "S_ATTENUATION", 
  "S_APPEARANCE", "S_GEOMETRY", "S_DIRECT_OUTPUT", "S_MUST_EVALUATE", 
  "S_MAX_BACK", "S_MIN_BACK", "S_MAX_FRONT", "S_MIN_FRONT", "S_PRIORITY", 
  "S_SOURCE", "S_SPATIALIZE", "S_BERM_WIDTH", "S_CHOICE", "S_WHICHCHOICE", 
  "S_FONTSTYLE", "S_LENGTH", "S_MAX_EXTENT", "S_ROTATION", "S_SCALE", 
  "S_CYCLE_INTERVAL", "S_FIELD_OF_VIEW", "S_JUMP", "S_TITLE", 
  "S_TEXCOORD_INDEX", "S_HEADLIGHT", "S_TOP", "S_BOTTOMRADIUS", 
  "S_HEIGHT", "S_POINT", "S_STRING", "S_SPACING", "S_TYPE", "S_RADIUS", 
  "S_ON", "S_INTENSITY", "S_COLOR", "S_DIRECTION", "S_SIZE", "S_FAMILY", 
  "S_STYLE", "S_RANGE", "S_CENTER", "S_TRANSLATION", "S_LEVEL", 
  "S_DIFFUSECOLOR", "S_SPECULARCOLOR", "S_EMISSIVECOLOR", "S_SHININESS", 
  "S_TRANSPARENCY", "S_VECTOR", "S_POSITION", "S_ORIENTATION", 
  "S_LOCATION", "S_CUTOFFANGLE", "S_WHICHCHILD", "S_IMAGE", 
  "S_SCALEORIENTATION", "S_DESCRIPTION", "SFBOOL", "SFFLOAT", "SFINT32", 
  "SFTIME", "SFROTATION", "SFNODE", "SFCOLOR", "SFIMAGE", "SFSTRING", 
  "SFVEC2F", "SFVEC3F", "MFBOOL", "MFFLOAT", "MFINT32", "MFTIME", 
  "MFROTATION", "MFNODE", "MFCOLOR", "MFIMAGE", "MFSTRING", "MFVEC2F", 
  "MFVEC3F", "FIELD", "EVENTIN", "EVENTOUT", "USE", "S_VALUE_CHANGED", 
  "'['", "']'", "','", "'{'", "'}'", "$accept", "Vrml", "VrmlNodes", 
  "GroupingNode", "InterpolatorNode", "SensorNode", "GeometryNode", 
  "GeometryInfoNode", "LightNode", "CommonNode", "BindableNode", "SFNode", 
  "SFInt32", "SFBool", "SFString", "SFFloat", "SFTime", "SFColor", 
  "SFRotation", "SFImageList", "SFVec2f", "SFVec3f", "SFColorList", 
  "MFColor", "SFInt32List", "MFInt32", "SFFloatList", "MFFloat", 
  "SFStringList", "MFString", "SFVec2fList", "MFVec2f", "SFVec3fList", 
  "MFVec3f", "SFRotationList", "MFRotation", "NodeBegin", "NodeEnd", 
  "AnchorElements", "AnchorElementParameterBegin", 
  "AnchorElementURLBegin", "bboxCenter", "bboxSize", "AnchorElement", 
  "AnchorBegin", "Anchor", "AppearanceNodes", "AppearanceNode", 
  "AppearanceBegin", "Appearance", "AudioClipElements", "AudioClipURL", 
  "AudioClipElement", "AudioClipBegin", "AudioClip", "BackGroundElements", 
  "BackGroundBackURL", "BackGroundBottomURL", "BackGroundFrontURL", 
  "BackGroundLeftURL", "BackGroundRightURL", "BackGroundTopURL", 
  "BackGroundGroundAngle", "BackGroundGroundColor", "BackGroundSkyAngle", 
  "BackGroundSkyColor", "BackGroundElement", "BackgroundBegin", 
  "Background", "BillboardElements", "BillboardElement", "BillboardBegin", 
  "Billboard", "BoxElements", "BoxElement", "BoxBegin", "Box", 
  "childrenElements", "children", "CollisionElements", 
  "CollisionElementProxyBegin", "CollisionElement", "CollisionBegin", 
  "Collision", "ColorElements", "ColorElement", "ColorBegin", "Color", 
  "ColorInterpElements", "InterpolateKey", "InterporlateKeyValue", 
  "ColorInterpElement", "ColorInterpBegin", "ColorInterp", "ConeElements", 
  "ConeElement", "ConeBegin", "Cone", "CoordinateElements", 
  "CoordinateBegin", "Coordinate", "CoordinateInterpElements", 
  "CoordinateInterpElement", "CoordinateInterpBegin", "CoordinateInterp", 
  "CylinderElements", "CylinderElement", "CylinderBegin", "Cylinder", 
  "CylinderSensorElements", "CylinderSensorElement", 
  "CylinderSensorBegin", "CylinderSensor", "DirLightElements", 
  "DirLightElement", "DirLightBegin", "DirLight", "ElevationGridElements", 
  "ElevationGridHeight", "ElevationGridElement", "ElevationGridBegin", 
  "ElevationGrid", "ExtrusionElements", "ExtrusionCrossSection", 
  "ExtrusionOrientation", "ExtrusionScale", "ExtrusionSpine", 
  "ExtrusionElement", "ExtrusionBegin", "Extrusion", "FogElements", 
  "FogElement", "FogBegin", "Fog", "FontStyleElements", 
  "FontStyleJustify", "FontStyleElement", "FontStyleBegin", "FontStyle", 
  "GroupElements", "GroupElement", "GroupBegin", "Group", 
  "ImgTexElements", "ImgTexURL", "ImgTexElement", "ImageTextureBegin", 
  "ImageTexture", "IdxFacesetElements", "ColorIndex", "CoordIndex", 
  "NormalIndex", "TextureIndex", "IdxFacesetElement", "IdxFacesetBegin", 
  "IdxFaceset", "IdxLinesetElements", "IdxLinesetElement", 
  "IdxLinesetBegin", "IdxLineset", "InlineElements", "InlineURL", 
  "InlineElement", "InlineBegin", "Inline", "LodElements", "LodRange", 
  "LodLevel", "LodElement", "LodBegin", "Lod", "MaterialElements", 
  "MaterialElement", "MaterialBegin", "Material", "MovieTextureElements", 
  "MovieTextureURL", "MovieTextureElement", "MovieTextureBegin", 
  "MovieTexture", "NavigationInfoElements", "NavigationInfoAvatarSize", 
  "NavigationInfoType", "NavigationInfoElement", "NavigationInfoBegin", 
  "NavigationInfo", "NormalElements", "NormalElement", "NormalBegin", 
  "Normal", "NormalInterpElements", "NormalInterpElement", 
  "NormalInterpBegin", "NormalInterp", "OrientationInterpElements", 
  "OrientationInterpElement", "OrientationInterpBegin", 
  "OrientationInterp", "PixelTextureElements", "PixelTextureImage", 
  "PixelTextureElement", "PixelTextureBegin", "PixelTexture", 
  "PlaneSensorElements", "PlaneSensorElement", "PlaneSensorBegin", 
  "PlaneSensor", "PointLightNodes", "PointLightNode", "PointLightBegin", 
  "PointLight", "PointsetElements", "PointsetElement", "PointsetBegin", 
  "Pointset", "PositionInterpElements", "PositionInterpElement", 
  "PositionInterpBegin", "PositionInterp", "ProximitySensorElements", 
  "ProximitySensorElement", "ProximitySensorBegin", "ProximitySensor", 
  "ScalarInterpElements", "ScalarInterpElement", "ScalarInterpBegin", 
  "ScalarInterp", "ScriptElements", "ScriptURL", "ScriptElement", 
  "ScriptBegin", "Script", "SharpElements", "SharpElement", "ShapeBegin", 
  "Shape", "SoundElements", "SoundElement", "SoundBegin", "Sound", 
  "SphereElements", "SphereElement", "SphereBegin", "Sphere", 
  "SphereSensorElements", "SphereSensorElement", "SphereSensorBegin", 
  "SphereSensor", "SpotLightElements", "SpotLightElement", 
  "SpotLightBegin", "SpotLight", "SwitchElements", "SwitchChoice", 
  "SwitchElement", "SwitchBegin", "Switch", "TextElements", "TextString", 
  "TextLength", "TextElement", "TextBegin", "Text", "TexCoordElements", 
  "TexCoordElement", "TexCoordBegin", "TexCoordinate", 
  "TextureTransformElements", "TextureTransformElement", 
  "TexTransformBegin", "TexTransform", "TimeSensorElements", 
  "TimeSensorElement", "TimeSensorBegin", "TimeSensor", 
  "TouchSensorElements", "TouchSensorElement", "TouchSensorBegin", 
  "TouchSensor", "TransformElements", "TransformElement", 
  "TransformBegin", "Transform", "ViewpointElements", "ViewpointElement", 
  "ViewpointBegin", "Viewpoint", "VisibilitySensors", "VisibilitySensor", 
  "VisibilitySensorBegine", "WorldInfoElements", "WorldInfoInfo", 
  "WorldInfoElement", "WorldInfoBegin", "WorldInfo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,    91,    93,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   227,   228,   228,   228,   229,   229,   230,   230,   230,
     230,   230,   230,   230,   230,   231,   231,   231,   231,   231,
     231,   232,   232,   232,   232,   232,   232,   232,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   234,
     234,   234,   235,   235,   235,   236,   236,   236,   236,   236,
     236,   237,   237,   237,   237,   238,   238,   238,   238,   238,
     238,   238,   238,   239,   240,   241,   242,   242,   243,   243,
     244,   245,   246,   246,   247,   248,   249,   249,   249,   249,
     250,   250,   251,   251,   251,   251,   252,   252,   253,   253,
     253,   253,   254,   254,   255,   255,   255,   255,   256,   256,
     257,   257,   257,   257,   258,   258,   259,   259,   259,   259,
     260,   260,   261,   261,   261,   261,   262,   262,   263,   264,
     264,   265,   265,   266,   267,   268,   269,   270,   270,   270,
     270,   270,   270,   271,   272,   273,   273,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   275,   276,
     277,   277,   278,   279,   279,   279,   279,   279,   279,   280,
     281,   282,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   294,   295,   296,   296,   297,   297,   297,
     297,   298,   299,   300,   300,   301,   302,   303,   304,   304,
     305,   305,   306,   306,   307,   308,   308,   308,   308,   308,
     308,   308,   309,   310,   311,   311,   312,   313,   314,   315,
     315,   316,   317,   318,   318,   319,   320,   321,   321,   322,
     322,   322,   322,   323,   324,   325,   325,   326,   327,   328,
     328,   329,   329,   330,   331,   332,   332,   333,   333,   333,
     333,   333,   334,   335,   336,   336,   337,   337,   337,   337,
     337,   337,   338,   339,   340,   340,   341,   341,   341,   341,
     341,   342,   343,   344,   344,   345,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   347,   348,   349,   349,   350,
     351,   352,   353,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   355,   356,   357,   357,   358,   358,   358,
     359,   360,   361,   361,   362,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   364,   365,   366,   366,   367,   367,
     367,   368,   369,   370,   370,   371,   372,   372,   372,   373,
     374,   375,   375,   376,   377,   378,   379,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   381,
     382,   383,   383,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   385,   386,   387,   387,   388,   389,   389,   389,
     390,   391,   392,   392,   393,   394,   395,   395,   395,   395,
     396,   397,   398,   398,   399,   399,   399,   399,   399,   399,
     400,   401,   402,   402,   403,   404,   404,   404,   404,   404,
     404,   404,   405,   406,   407,   407,   408,   409,   410,   410,
     410,   410,   410,   411,   412,   413,   413,   414,   415,   416,
     417,   417,   418,   418,   418,   419,   420,   421,   421,   422,
     422,   422,   423,   424,   425,   425,   426,   427,   427,   427,
     428,   429,   430,   430,   431,   431,   431,   431,   431,   432,
     433,   434,   434,   435,   435,   435,   435,   435,   435,   435,
     436,   437,   438,   438,   439,   439,   439,   439,   439,   439,
     440,   441,   442,   442,   443,   443,   443,   444,   445,   446,
     446,   447,   447,   447,   448,   449,   450,   450,   451,   451,
     451,   452,   453,   454,   454,   455,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   457,   458,   459,   459,
     460,   460,   460,   460,   460,   460,   461,   462,   463,   463,
     464,   464,   464,   464,   464,   464,   464,   464,   464,   464,
     464,   464,   464,   465,   466,   467,   467,   468,   469,   470,
     471,   471,   472,   472,   472,   473,   474,   475,   475,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   477,
     478,   479,   479,   480,   481,   481,   481,   482,   483,   484,
     484,   485,   486,   487,   487,   487,   487,   487,   487,   488,
     489,   490,   490,   491,   492,   493,   494,   494,   495,   495,
     495,   495,   496,   497,   498,   498,   499,   499,   499,   499,
     499,   500,   501,   502,   502,   503,   504,   505,   506,   506,
     507,   507,   507,   507,   507,   507,   507,   507,   508,   509,
     510,   510,   511,   511,   511,   511,   511,   512,   513,   514,
     514,   515,   515,   515,   516,   515,   517,   517,   518,   519,
     519,   520,   521
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     2,     0,     2,     3,     1,     2,     2,     0,
       1,     3,     1,     2,     2,     0,     1,     3,     1,     2,
       2,     0,     1,     3,     1,     2,     2,     0,     1,     3,
       1,     2,     2,     0,     1,     3,     1,     2,     2,     0,
       1,     3,     1,     2,     2,     0,     1,     3,     1,     1,
       2,     2,     0,     1,     1,     2,     2,     1,     2,     2,
       2,     1,     1,     1,     4,     2,     0,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       2,     0,     1,     2,     2,     2,     2,     2,     2,     1,
       4,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     4,     2,     0,     1,     2,     1,
       1,     1,     4,     2,     0,     2,     1,     4,     2,     0,
       4,     2,     2,     0,     1,     1,     2,     1,     1,     2,
       2,     2,     1,     4,     2,     0,     2,     1,     4,     2,
       0,     1,     1,     2,     2,     1,     4,     2,     0,     2,
       2,     2,     2,     1,     4,     2,     0,     1,     4,     2,
       0,     2,     2,     1,     4,     2,     0,     2,     2,     2,
       2,     2,     1,     4,     2,     0,     2,     2,     2,     2,
       2,     2,     1,     4,     2,     0,     2,     2,     2,     2,
       2,     1,     4,     2,     0,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     4,     2,     0,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     4,     2,     0,     2,     2,     2,
       1,     4,     2,     0,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     0,     1,     1,
       1,     1,     4,     2,     0,     1,     2,     2,     2,     1,
       4,     2,     0,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       4,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     0,     1,     2,     1,     1,
       1,     4,     2,     0,     1,     1,     2,     2,     2,     4,
       1,     4,     2,     0,     2,     2,     2,     2,     2,     2,
       1,     4,     2,     0,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     4,     2,     0,     1,     1,     2,     2,
       2,     2,     2,     1,     4,     2,     0,     2,     1,     4,
       2,     0,     2,     2,     2,     1,     4,     2,     0,     2,
       2,     2,     1,     4,     2,     0,     1,     4,     2,     2,
       1,     4,     2,     0,     2,     2,     2,     2,     2,     1,
       4,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       1,     4,     2,     0,     2,     2,     2,     2,     2,     2,
       1,     4,     2,     0,     2,     2,     2,     1,     4,     2,
       0,     2,     2,     2,     1,     4,     2,     0,     2,     2,
       2,     1,     4,     2,     0,     1,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     5,     4,     4,     4,     4,     1,     4,     2,     0,
       2,     2,     2,     2,     2,     2,     1,     4,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     4,     2,     0,     2,     1,     4,
       2,     0,     2,     2,     2,     1,     4,     2,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       4,     2,     0,     1,     2,     4,     2,     1,     4,     2,
       0,     1,     1,     2,     2,     2,     2,     2,     2,     1,
       4,     2,     0,     2,     1,     4,     2,     0,     2,     2,
       2,     2,     1,     4,     2,     0,     2,     2,     2,     2,
       2,     1,     4,     2,     0,     2,     1,     4,     2,     0,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     4,
       2,     0,     2,     2,     2,     2,     2,     1,     4,     2,
       0,     2,     2,     2,     1,     4,     2,     0,     1,     2,
       2,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     3,   133,   159,   183,   191,   212,   217,   225,   237,
     243,   262,   271,     0,     4,   320,   400,   443,   341,   410,
     448,   507,   514,   521,   576,   586,   603,   629,   615,   654,
     671,   637,   676,   697,   704,   711,   455,   462,   490,   479,
     688,     0,     0,     0,    62,     0,     2,    60,    58,    59,
      61,    46,    55,    56,     6,     0,     7,     0,    45,     0,
      51,     0,     8,     0,     9,     0,    38,     0,    15,     0,
      39,     0,    16,     0,    21,     0,    42,     0,    52,   323,
      57,     0,    10,     0,    11,     0,    12,     0,    53,     0,
      40,     0,    17,     0,    18,     0,    22,     0,    44,     0,
      19,     0,    24,     0,    20,     0,    47,     0,    48,     0,
      49,     0,    23,     0,    43,     0,    13,     0,    41,     0,
      25,     0,    26,     0,    14,     0,    54,    27,     0,     0,
      50,   118,   334,    64,   702,    67,    66,     0,   703,   701,
       1,     5,   122,   151,   162,   186,   203,   215,   220,   236,
     240,   255,   265,   316,     0,   324,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   337,   395,   403,   435,
     446,   451,   458,   473,   482,   503,   510,   517,   524,   579,
     589,   611,   618,   632,   652,   665,   674,   679,   691,   700,
     707,     0,     0,   123,   124,     0,     0,     0,     0,     0,
       0,   131,   132,   122,   127,   152,     0,     0,     0,     0,
       0,     0,     0,   151,   169,   170,   163,   164,   165,   166,
     167,   168,   171,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,   189,   190,     0,
     186,   187,     0,   204,   207,   208,   205,     0,     0,   203,
       0,     0,   215,   221,   222,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   240,     0,     0,     0,     0,     0,
       0,     0,   255,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,   316,   326,    65,   328,   329,   333,
     331,   330,   325,   332,   119,   335,    97,    98,   327,   322,
     339,   340,   338,     0,   337,   396,   398,   399,     0,     0,
     395,   404,     0,   405,     0,     0,     0,   403,     0,   436,
       0,     0,   437,     0,     0,     0,   435,     0,     0,   446,
       0,     0,     0,     0,   451,     0,     0,     0,     0,   458,
       0,     0,     0,     0,     0,     0,   473,     0,     0,     0,
       0,     0,     0,     0,     0,   482,     0,     0,     0,     0,
     503,     0,     0,     0,     0,   510,     0,     0,     0,     0,
     517,   525,     0,     0,     0,     0,     0,     0,     0,   524,
       0,     0,     0,   579,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   589,     0,     0,     0,     0,
     611,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   618,   633,     0,     0,     0,   632,     0,     0,
     652,     0,     0,     0,     0,     0,     0,   665,     0,     0,
     674,     0,     0,     0,     0,     0,   686,   687,   680,     0,
     679,     0,     0,     0,     0,     0,     0,   691,     0,   700,
     708,     0,     0,     0,   707,    75,   199,   201,   126,   125,
     128,   134,   129,   130,   121,   154,    69,    68,   156,   157,
     155,   153,   160,   158,   150,   184,   175,   176,   177,   178,
     179,   180,    91,    92,   173,    79,     0,    80,   174,   181,
     182,   161,   188,   192,   185,   206,   210,   209,   213,   211,
     202,   216,   218,   214,   226,   223,   224,   219,   109,   110,
     235,   238,   241,   242,   244,   239,   256,   257,   258,   259,
     260,   261,   263,   254,   270,   266,   267,   268,   269,   272,
     264,   318,   319,   317,   321,   315,   120,    97,    94,     0,
     342,   336,   401,   397,   394,   407,   411,   406,     6,   408,
     402,   440,   442,   439,   444,   438,   441,   434,   447,   449,
     445,   454,   452,   453,   456,   450,     0,   461,   459,   115,
     116,   460,   463,   457,   474,   475,   478,     0,   476,   477,
     480,   472,   483,   484,   489,   488,   486,   485,   487,   491,
     481,   506,   504,   505,   508,   502,   513,   512,   511,   515,
     509,   520,   518,   519,   522,   516,   527,   528,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   577,   526,   523,   148,   580,   582,
       0,   581,   196,   583,   233,   252,   313,   295,   379,     0,
     649,   500,   608,   585,   584,     0,    28,     0,    29,     0,
      30,     0,    31,     0,    32,     0,    33,   382,    34,     0,
      35,     0,    36,     0,    37,   587,   578,   593,   595,   594,
     596,   597,   598,   432,   601,   599,     0,   600,   602,   591,
     590,   592,   604,   588,   612,   613,   614,   616,   610,   619,
     620,   621,   628,   627,   625,   622,   624,   626,   623,   630,
     617,    63,   636,   638,     6,   634,   631,   103,   104,   653,
     655,   651,   668,   669,   670,   667,   666,   672,   664,   675,
     677,   673,   682,   683,   681,   685,   684,   689,   678,   692,
     693,   695,   694,   696,   698,   690,   705,   699,   710,   712,
     709,   706,   199,     0,    91,    88,     0,    79,    76,     0,
       0,   109,   106,     0,    96,    95,    99,     0,     0,   115,
     112,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   136,
     392,   194,   228,   246,   274,   298,   352,     0,     0,   353,
     354,     0,     0,     0,     0,   382,   493,   606,   640,   423,
       0,   103,   100,     0,   198,   200,    90,    89,    93,    78,
      77,    81,    70,   108,   107,   111,   409,     0,   114,   113,
     117,   565,   566,   567,   568,   569,   570,     0,   572,   573,
     574,   575,     0,     0,     0,     0,   136,     0,     0,   194,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
       0,     0,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,     0,     0,   274,     0,
       0,     0,   299,     0,   302,     0,     0,   301,   300,     0,
       0,     0,     0,     0,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   355,   356,     0,     0,     0,     0,
       0,     0,   352,   389,   386,   388,   387,   383,   385,   384,
      85,    86,   390,   391,   393,   381,     0,     0,     0,   493,
       0,     0,   606,     0,   642,     0,   641,     0,     0,     0,
     640,   424,     0,     0,     0,     0,     0,     0,     0,     0,
     423,   635,   102,   101,   105,    71,   571,   137,   420,   139,
       0,   138,   145,   662,   147,     0,   146,   140,   470,   349,
     144,     0,   141,   142,     0,   143,   149,   135,   195,   197,
     193,   229,   230,   231,   232,   234,   227,   247,   248,   249,
     251,   250,   253,   245,   279,   281,   280,   282,   284,   283,
     286,   289,   287,   290,   291,   292,   293,   294,   288,   276,
     278,   277,   296,   285,   273,   304,   306,   303,   309,   307,
     305,   314,   308,   310,   311,   312,   297,   363,   365,   364,
     366,   368,   367,   369,   374,   372,   378,   371,   370,   360,
     362,   361,   357,   359,   358,   380,   373,   375,   376,   377,
     351,    85,    82,     0,   497,   499,   498,   494,   496,   495,
     501,   492,   607,   609,   605,   644,   646,   645,   648,   650,
     643,   647,   639,   425,   427,   428,   426,   430,   431,   433,
     429,   422,   413,   657,   344,   465,    84,    83,    87,     0,
       0,     0,     0,     0,     0,     0,   413,     0,     0,     0,
       0,     0,   657,   345,     0,     0,     0,     0,   344,     0,
       0,   466,     0,     0,   465,   414,   415,   418,   416,   417,
     419,   421,   412,   659,   660,   658,   661,   663,   656,   347,
     348,   350,   346,   343,   468,   469,   471,    73,   464,    73,
       0,    72,   467
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    45,    46,    47,    48,    49,   674,    50,    51,    52,
      53,    54,   971,   134,   297,   137,   468,   487,   790,  1190,
     738,   509,   779,   488,  1103,   972,   776,   484,   539,   298,
     863,   739,   783,   510,   791,   571,   132,   295,   198,   199,
     200,   201,   202,   203,    55,    56,   895,   896,   660,   661,
     211,   212,   213,    57,    58,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,    59,    60,   239,
     240,    61,    62,   898,   899,   675,   676,   773,   204,   247,
     248,   249,    63,    64,   251,   252,    65,    66,   255,   256,
     257,   258,    67,    68,   904,   905,   677,   678,   260,    69,
      70,   263,   264,    71,    72,   911,   912,   679,   680,   271,
     272,    73,    74,   278,   279,    75,    76,   926,   927,   928,
     681,   682,   939,   940,   941,   942,   943,   944,   683,   684,
     283,   284,    77,    78,   163,   164,   165,    79,    80,   303,
     304,    81,    82,  1156,  1157,  1158,  1021,  1022,   957,   852,
     853,   960,   961,   962,   685,   686,   854,   855,   687,   688,
     308,   309,   310,    83,    84,   314,   315,   316,   317,    85,
      86,  1145,  1146,  1010,  1011,   998,   999,  1000,   706,   707,
     323,   324,   325,   326,    87,    88,   328,   329,    89,    90,
     333,   334,    91,    92,   338,   339,    93,    94,  1162,  1163,
    1164,  1024,  1025,   345,   346,    95,    96,   354,   355,    97,
      98,   978,   979,   689,   690,   359,   360,    99,   100,   364,
     365,   101,   102,   369,   370,   103,   104,   377,   378,   379,
     105,   106,   382,   383,   107,   108,   394,   395,   109,   110,
     981,   982,   691,   692,   399,   400,   111,   112,   411,   412,
     113,   114,   415,   416,   417,   115,   116,   987,   988,   989,
     990,   693,   694,   419,   420,   117,   118,  1151,  1152,  1015,
    1016,   426,   427,   119,   120,   429,   430,   121,   122,   439,
     440,   123,   124,   446,   447,   125,   126,   448,   127,   128,
     452,   453,   454,   129,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -801
static const short yypact[] =
{
     536,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -179,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,    62,    26,    26,  -801,    75,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  1516,  -179,  -801,  -179,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,  -801,   574,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,  -801,  -179,  -179,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,    26,  -801,  -801,
    -801,  -801,   120,   284,   951,   422,   727,   -93,   229,   -83,
     229,   817,   369,    87,    62,  -801,    98,    62,    62,    26,
      26,    98,    98,  -120,    61,   574,   261,   329,   278,   262,
     -68,    18,    99,   581,   510,   118,   -15,   162,   105,   374,
     806,   241,   198,   413,   -43,   292,    65,   231,   234,   220,
      11,    26,  1230,  -801,  -801,    26,    26,    98,  -120,    61,
      61,  -801,  -801,   120,  -801,  -801,    62,   193,   193,    26,
      98,  -120,    61,   284,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -120,    61,    61,    61,    61,    61,
      61,    10,    41,    10,    41,   951,    26,  -801,  -801,  -120,
     422,  -801,    62,   -12,  -801,  -801,  -801,  -120,  1516,   727,
      41,  -120,   -93,  -801,  -801,  -120,    10,    41,   229,    56,
    -120,    10,    56,  -120,   229,    62,    26,    62,    26,    26,
      26,  -120,   817,    26,    62,    26,    26,    26,  -120,   369,
      98,    26,    26,  -120,    87,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,   -52,  -801,     4,  -801,  -801,  -801,
    -801,  -801,  -801,  -120,   261,  -801,  -801,  -801,  -120,    61,
     329,  -801,    26,  -801,  -120,    10,  1287,   278,    26,  -801,
      26,    62,  -801,  -120,    10,    61,   262,    56,  -120,   -68,
      26,    10,    56,  -120,    18,    26,    10,    58,  -120,    99,
      62,    62,    26,    26,    26,  -120,   581,    26,    26,    26,
      62,    26,    26,    26,  -120,   510,    26,    10,    56,  -120,
     118,    62,    26,    26,  -120,   -15,    26,    10,    10,  -120,
     162,  -801,    62,    62,   759,   991,  1214,  -120,    61,   105,
      68,   709,  -120,   374,    26,    26,    26,    26,    26,    59,
      62,    26,    26,    26,  -120,   806,    62,    62,    26,  -120,
     241,    26,    26,    26,    26,    62,    26,    26,    26,    26,
      26,  -120,   198,  -801,   171,  -120,  1459,   413,    60,  -120,
     -43,    62,   193,   193,    62,   193,  -120,   292,    62,  -120,
      65,    26,    26,    26,    26,    26,  -801,  -801,  -801,  -120,
     231,    26,    62,    26,    26,    98,  -120,   234,  -120,   220,
    -801,    98,  -120,    61,    11,  -801,  1516,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,    14,  -801,  -801,    16,    26,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,    31,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,     4,     4,   -32,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  1516,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,    26,  -801,  -801,    48,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,    26,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   174,   219,
     227,   281,   290,   294,   312,   337,   341,   355,   371,   375,
     393,   397,   400,   408,   421,   428,   430,   432,   436,   440,
     444,   446,   448,   458,   460,   468,   470,   474,   476,   478,
     484,   486,   488,   490,   492,   516,   519,   542,   552,   560,
     566,   578,   580,   590,  -801,  -801,  -801,  -801,  -801,  -801,
    -179,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -179,
    -801,  -801,  -801,  -801,  -801,  -179,  -801,  -179,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -179,  -801,   248,  -801,  -179,
    -801,  -179,  -801,  -179,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -179,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  1516,  -801,  -801,    53,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  1516,    -5,    14,    14,    12,    16,    16,   291,
      26,    31,    31,   378,  -801,  -801,  -801,   382,    26,    48,
      48,   384,  -801,    62,    26,   171,   193,    26,    88,    26,
      98,    26,    26,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   466,
    -801,   298,   212,   485,   992,   508,   734,    62,    17,  -801,
    -801,    36,    24,    24,  -120,   248,    47,   399,   249,   634,
     388,    53,    53,   394,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,    26,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,   618,  -801,  -801,
    -801,  -801,    73,    97,    82,  -120,   466,    26,  -120,   298,
      62,    62,    26,    26,  -120,   212,    62,    62,    62,    26,
      26,  -120,   485,    86,   109,    62,    62,    26,    62,   171,
      26,   171,    26,    62,  -801,    69,  -120,    10,   992,    62,
      26,    62,  -801,    62,  -801,    62,    62,  -801,  -801,  -120,
      60,    58,    60,    56,   508,    96,   115,    62,    62,    26,
      62,    62,    62,    54,  -801,  -801,    71,  -120,    24,    24,
      24,    24,   734,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
       2,  -801,  -801,  -801,  -801,  -801,    83,    79,  -120,    47,
      26,  -120,   399,   124,  -801,    26,  -801,  -120,    61,    10,
     249,  -801,    62,   193,   193,    26,    62,    62,  -120,    61,
     634,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -179,  -801,  -801,  -801,  -801,  -179,  -801,  -801,  -801,  -801,
    -801,  -179,  -801,  -801,  -179,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,     2,     2,   404,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,   345,   377,   247,    29,  -801,  -801,  -801,    26,
      26,    26,    26,    26,    26,  -120,   345,    26,    26,    26,
      26,  -120,   377,  -801,    62,    62,  -120,    61,   247,    62,
      62,  -801,  -120,   407,    29,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,   171,  -801,   171,
     411,  -801,  -801
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -801,  -801,   -48,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -164,  -413,   -31,  -130,  -137,  -165,  -261,  -327,  -553,
    -341,   583,  -207,   155,  -498,  -542,  -159,  -175,    85,  -188,
    -229,  -780,  -126,  -258,  -145,  -302,   376,   803,   439,  -801,
    -801,    22,   357,  -801,  -801,  -801,  -248,  -801,  -801,  -801,
     437,  -801,  -801,  -801,   269,   424,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   425,
    -801,  -801,  -801,  -233,  -801,  -801,  -801,  -104,   -36,   420,
    -801,  -801,  -801,  -801,   423,  -801,  -801,  -672,   416,   338,
     562,  -801,  -801,  -801,  -227,  -801,  -801,  -801,  -801,  -801,
    -800,   419,  -801,  -801,  -801,  -228,  -801,  -801,  -801,   415,
    -801,  -801,  -801,   418,  -801,  -801,  -801,  -226,  -801,  -801,
    -801,  -801,  -249,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
     417,  -801,  -801,  -801,   538,  -801,  -801,  -801,  -276,   409,
    -801,  -801,  -801,  -447,  -801,  -801,  -801,  -801,  -245,  -797,
    -793,  -801,  -801,  -801,  -801,  -801,  -136,  -801,  -801,  -801,
     410,  -801,  -801,  -801,  -801,   401,  -801,  -801,  -801,  -801,
    -801,  -424,  -801,  -801,  -801,  -277,  -801,  -801,  -801,  -168,
     406,  -801,  -801,  -801,  -801,  -801,   398,  -801,  -801,  -740,
     396,  -801,  -801,  -801,   403,  -801,  -801,  -801,  -426,  -801,
    -801,  -801,  -801,   405,  -801,  -801,  -801,   390,  -801,  -801,
    -801,  -232,  -801,  -801,  -801,   386,  -801,  -801,  -801,   389,
    -801,  -801,  -801,   383,  -801,  -801,  -801,   379,  -801,  -801,
    -801,  -801,   372,  -801,  -801,  -801,   366,  -801,  -801,  -801,
    -219,  -801,  -801,  -801,   364,  -801,  -801,  -801,   356,  -801,
    -801,  -801,   350,  -801,  -801,  -801,  -801,  -215,  -801,  -801,
    -801,  -801,  -801,   351,  -801,  -801,  -719,  -375,  -801,  -801,
    -801,   354,  -801,  -801,  -801,   352,  -801,  -801,  -801,   344,
    -801,  -801,  -801,   339,  -801,  -801,  -801,   340,  -173,  -801,
     333,  -801,  -801,  -801,  -801
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const short yytable[] =
{
     191,   732,   578,   579,   513,   731,   141,   496,   567,   286,
     570,   462,   463,   135,   136,   527,   449,   135,   136,   135,
     136,   533,   290,   291,   473,   601,   287,   731,   457,   135,
     136,   292,   293,     9,   135,   136,   964,   476,   477,   478,
     479,   480,   481,   469,   135,   136,   131,   450,   966,   958,
       7,   135,   136,   959,   455,   967,   135,   136,   489,   135,
     136,   135,   136,   135,   136,   133,   286,   460,     3,   558,
       9,   716,   470,  1089,   563,   140,   657,   361,   702,   250,
     471,   505,   259,     7,   499,     7,   512,   658,  1059,   703,
    1092,   587,  1007,     7,   483,   486,   483,   486,  1107,     9,
     593,  1017,  1104,   286,   752,  1044,   294,   886,   756,   241,
     246,  1008,   703,   486,  1018,  1077,  1012,   762,   327,   483,
     486,   543,   418,   285,   483,    20,   288,   289,  1047,   517,
     302,   519,   520,   521,  1080,    20,   524,   556,   526,   486,
     547,   253,   254,  1115,   532,   486,   725,  1013,    13,   555,
     531,   438,   549,  1091,  1159,  1160,   562,   428,    29,   362,
    1072,   568,  1074,   363,    29,   958,   538,   237,   244,   959,
     451,   371,   536,  1046,   731,   465,  1106,   976,   483,   969,
     793,   551,   592,   552,   192,   193,   194,   483,   300,   306,
     655,   786,   602,   603,   483,  1049,   466,   467,   566,   483,
     566,   280,   281,  1019,   241,  1079,   577,   577,   497,   436,
     582,   495,   584,   246,   586,   486,   195,   196,   865,   977,
     483,  1161,   253,   254,   778,   794,  1101,  1082,   537,   577,
     483,   483,   482,   795,   516,   868,   518,   965,   774,   330,
     777,   253,   254,   525,   372,   373,   970,   697,   698,   699,
     700,   701,   735,  1061,   709,   781,   968,   743,   744,   282,
     746,   566,   237,   485,   719,   770,   721,   722,   302,   724,
     486,   244,   789,   728,  1090,    34,   449,   861,   508,   704,
     569,   577,   737,   296,  1094,   253,   254,   796,   659,  1060,
     553,  1093,   772,  1009,   566,   192,   797,   401,   566,  1108,
     798,   900,  1020,  1105,   759,  1109,  1045,   566,   887,   574,
     575,   973,    41,  1153,   197,   763,  1078,  1014,   799,   585,
     335,   768,   374,   375,   376,   192,   300,   195,   196,  1048,
     596,   396,   306,   397,   402,  1081,   398,   318,   319,   356,
     901,   606,   607,   800,  1116,   775,   403,   801,   486,   780,
     205,   847,   253,   254,   206,   207,   208,   195,   196,   708,
     320,   802,   421,   422,   423,   714,   715,   404,   405,   406,
     407,   408,  1154,  1155,   723,   902,   903,   803,   848,   849,
     850,   804,   883,   366,   424,   431,   432,   409,   410,   490,
     742,   441,   442,   745,    42,   305,   862,   749,    43,   805,
     983,   984,   985,   806,   438,   501,   807,   538,   538,   433,
     434,   760,   506,   209,   808,   986,  1096,  1097,  1098,  1099,
     851,   443,   444,   321,   435,   195,   196,   809,   445,   788,
     322,   142,   566,   143,   810,   144,   811,   145,   812,   146,
     792,   147,   813,   148,  1139,   149,   814,   150,   425,   151,
     815,   152,   816,   153,   817,   311,   312,   166,   313,   167,
     890,   168,   436,   169,   818,   170,   819,   171,   273,   172,
     885,   173,   897,   174,   820,   175,   821,   176,   210,   177,
     822,   178,   823,   179,   824,   180,   192,   181,   261,   182,
     825,   183,   826,   184,   827,   185,   828,   186,   829,   187,
     787,   188,   238,   245,   189,   190,  1054,   236,  1056,   331,
     336,   380,   381,   357,   871,   367,   778,   778,   195,   196,
     862,   862,   830,   301,   307,   831,  1140,  1141,  1142,  1143,
    1144,  1147,  1148,   892,   893,   894,    -6,     1,   888,   274,
     275,   276,   277,     2,   437,     3,     4,     5,   832,     6,
       7,     8,     9,    10,    11,  1149,  1150,  1102,   833,    12,
      13,    14,   413,   414,    15,    16,   834,    17,   980,    18,
     869,   870,   835,    19,   906,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   836,    29,   837,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   838,   238,    39,    40,
     577,   875,   261,  1136,  1137,   876,   245,   880,   772,   347,
     929,  1001,   930,   907,   570,   866,   867,  1004,   931,   932,
     933,   934,   784,   785,  1006,   138,   139,  1138,    41,  1187,
     935,   884,  1002,  1003,  1192,   936,  1191,   775,   775,  1073,
     486,   486,   464,   872,   878,   879,   348,   908,  1027,   909,
     474,   877,   566,   566,   910,   873,   874,   882,   705,   491,
     566,   301,   486,   937,   577,   494,  1030,   307,   864,   500,
     889,   340,   331,   341,   507,   503,   342,   336,  1036,   349,
     350,   351,   352,   515,  1043,  1075,   860,   523,  1102,  1102,
     154,   155,   156,   157,   158,  1076,   938,   530,   357,   353,
     991,   535,  1064,   299,   992,   993,   994,  1117,   367,   995,
      42,  1183,   262,   541,    43,   343,   344,  1100,   550,   975,
     544,   662,  1172,  1131,   577,   577,  1023,   560,   663,   664,
     565,   665,   557,   332,   337,   666,   667,   358,  1188,   368,
    1005,   159,   573,   668,   669,   590,   595,  1111,   160,   161,
     162,   581,  1063,   605,   600,   696,    44,   670,   656,   996,
     997,   713,   881,  1114,   718,  1033,  1034,   736,   730,   671,
     672,   741,  1040,  1041,  1189,  1122,  1189,  1178,   458,   459,
    1052,   748,   751,  1055,   758,  1057,   765,   771,     0,   767,
     483,   192,     0,  1066,     0,     0,     0,   437,     0,     0,
    1120,     0,     0,   577,   566,   577,     0,  1174,  1175,  1176,
       0,  1130,  1085,   242,  1121,   243,   963,     0,     0,   492,
       0,     0,     0,   195,   196,     0,   262,     0,  1124,  1125,
       0,     0,     0,     0,   945,   946,   947,   948,   949,   950,
       0,     0,     0,  1112,     0,     0,     0,     0,  1118,     0,
       0,     0,   483,     0,     0,     0,   951,     0,  1126,     0,
     528,   952,     0,     0,   953,   849,   850,   954,     0,  1031,
    1032,     0,     0,     0,     0,  1037,  1038,  1039,     0,  1166,
    1167,  1168,     0,     0,  1050,  1051,     0,  1053,     0,     0,
       0,     0,  1058,     0,   955,   545,   332,     0,  1065,     0,
    1067,   337,  1068,     0,  1069,  1070,   956,   265,   266,   267,
     268,   269,   270,   561,     0,     0,  1083,  1084,     0,  1086,
    1087,  1088,   358,     0,     0,   576,     0,     0,     0,   673,
       0,   583,   368,     0,     0,     0,   588,     0,     0,   591,
       0,     0,     0,     0,     0,   597,   598,   384,   385,   386,
     387,   388,   389,   390,   608,   609,   610,   611,   612,   613,
     614,  1123,   615,   616,   617,  1127,  1128,     0,     0,  1182,
       0,     0,     0,     0,     0,   710,   711,   391,     0,   392,
       0,     0,     0,     0,     0,   720,     0,     0,     0,     0,
       0,   726,   727,     0,     0,   393,     0,     0,     0,     0,
       0,   461,  1165,   486,   486,   486,  1169,  1170,     0,     0,
    1173,   577,   577,   577,   472,   753,   754,   755,     0,     0,
       0,     0,     0,     0,   214,   215,   761,   475,   216,   217,
     218,   219,   220,   221,   222,   223,   839,     0,     0,     0,
       0,     0,   493,     0,     0,   840,     0,     0,     0,     0,
     498,   841,     0,   842,   502,   843,     0,   844,   504,   845,
       0,   846,     0,   511,     0,   856,   514,   857,     0,   858,
       0,     0,     0,     0,   522,     0,     0,     0,     0,     0,
       0,   529,   859,     0,     0,     0,   534,     0,     0,     0,
       0,   782,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,     0,     0,     0,     0,   540,     0,     0,     0,
       0,   542,     0,     0,   923,     0,     0,   546,     0,     0,
       0,     0,     0,  1179,  1180,     0,   554,     0,  1184,  1185,
       0,   559,     0,     0,     0,     0,   564,     0,     0,     0,
       0,   572,     0,     0,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,     0,   924,   589,     0,     0,
       0,     0,   594,     0,   925,     0,     0,   599,     0,     0,
       0,     0,   604,     0,     0,     0,     0,     0,     0,     0,
     654,     0,     0,     0,     0,   695,   618,   619,   620,   621,
     622,     0,   623,   624,   625,   626,   627,   712,   628,   629,
     630,   631,   717,   632,     0,   633,   634,   635,     0,     0,
       0,     0,     0,     0,   729,     0,     0,     0,   733,     0,
       0,     0,   740,     0,     0,     0,     0,     0,     0,   747,
       0,     0,   750,     0,     0,     0,     0,     2,     0,     3,
       4,     5,   757,     6,     7,     8,     9,    10,    11,   764,
       0,   766,     0,    12,    13,   769,     0,     0,    15,    16,
       0,    17,     0,    18,     0,     0,     0,    19,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       0,     0,    39,    40,     2,     0,     3,     4,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    41,     0,    19,     0,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   782,   782,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,   891,  1132,     0,     0,     0,
       0,  1133,     0,     0,     0,     0,     0,  1134,     0,     0,
    1135,     0,     0,     0,    42,     0,     0,     0,    43,   636,
     637,   638,   639,   640,     0,   641,   642,   643,   644,   645,
       0,   646,   647,   648,   649,     0,   650,     0,   651,   652,
     653,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,   456,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,    43,     2,     0,     3,     4,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
    1028,     0,    12,    13,     0,     0,     0,    15,    16,     0,
      17,     0,    18,     0,     0,     0,    19,     0,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    44,    29,   548,
      30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
       0,    39,    40,     2,     0,     3,     4,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,     0,    12,
      13,     0,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    41,     0,    19,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   974,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,   734,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,    43,     0,     0,     0,  1026,     0,
       0,  1029,     0,     0,     0,     0,     0,  1035,     0,     0,
       0,     0,     0,     0,  1042,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1062,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,  1071,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1095,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1110,     0,     0,  1113,     0,     0,     0,     0,     0,
    1119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1171,     0,
       0,     0,     0,     0,  1177,     0,     0,     0,     0,  1181,
       0,     0,     0,     0,     0,  1186
};

static const short yycheck[] =
{
     137,   414,   343,   344,   262,     3,    54,    19,   335,     5,
     337,   199,   200,     3,     4,   276,   189,     3,     4,     3,
       4,   282,   159,   160,   212,   366,   156,     3,   192,     3,
       4,   161,   162,    16,     3,     4,    19,   225,   226,   227,
     228,   229,   230,   208,     3,     4,   225,    36,   848,   846,
      14,     3,     4,   846,   191,    19,     3,     4,   233,     3,
       4,     3,     4,     3,     4,     3,     5,   197,     9,   327,
      16,   398,   209,    19,   332,     0,     8,    92,    19,   172,
     210,   256,   165,    14,   248,    14,   261,    19,    19,    30,
      19,   352,    19,    14,   231,   232,   233,   234,    19,    16,
     358,    19,    19,     5,   431,    19,   226,    19,   435,   145,
     146,    38,    30,   250,    32,    19,    19,   444,   186,   256,
     257,   309,   165,   154,   261,    39,   157,   158,    19,   266,
     166,   268,   269,   270,    19,    39,   273,   325,   275,   276,
     315,   123,   124,    19,   281,   282,   407,    50,    24,   324,
     280,   187,   316,   953,   125,   126,   331,    92,    49,   174,
     940,   336,   942,   178,    49,   962,   296,   145,   146,   962,
     159,    66,   224,   913,     3,   206,   976,   130,   315,   851,
       6,   318,   357,   320,    64,    65,    66,   324,   166,   167,
     378,   223,   367,   368,   331,   914,     3,     4,   335,   336,
     337,   114,   115,   121,   240,   945,   343,   344,   220,   187,
     347,   242,   349,   249,   351,   352,    96,    97,   223,   172,
     357,   192,   123,   124,   485,     6,   224,   946,   224,   366,
     367,   368,   222,     6,   265,   223,   267,   220,   224,   221,
     224,   123,   124,   274,   139,   140,   222,   384,   385,   386,
     387,   388,   416,   925,   391,   224,   220,   422,   423,   172,
     425,   398,   240,   222,   401,   453,   403,   404,   304,   406,
     407,   249,   224,   410,   220,    55,   449,   224,   222,   220,
     222,   418,   222,   222,   956,   123,   124,     6,   220,   220,
     321,   220,   456,   220,   431,    64,     6,    99,   435,   220,
       6,    89,   220,   220,   441,   977,   220,   444,   220,   340,
     341,   853,    92,    66,   194,   445,   220,   220,     6,   350,
     221,   451,   217,   218,   219,    64,   304,    96,    97,   220,
     361,    90,   310,    92,   136,   220,    95,    75,    76,   221,
     128,   372,   373,     6,   220,   482,   148,     6,   485,   486,
      66,   103,   123,   124,    70,    71,    72,    96,    97,   390,
      98,     6,    70,    71,    72,   396,   397,   169,   170,   171,
     172,   173,   125,   126,   405,   163,   164,     6,   130,   131,
     132,     6,   795,   221,    92,   154,   155,   189,   190,   234,
     421,   157,   158,   424,   174,    66,   737,   428,   178,     6,
     151,   152,   153,     6,   440,   250,     6,   537,   538,   178,
     179,   442,   257,   129,     6,   166,   958,   959,   960,   961,
     172,   187,   188,   161,   193,    96,    97,     6,   194,   566,
     168,    55,   569,    57,     6,    59,     6,    61,     6,    63,
     577,    65,     6,    67,    99,    69,     6,    71,   156,    73,
       6,    75,     6,    77,     6,   177,   178,    81,   180,    83,
     801,    85,   440,    87,     6,    89,     6,    91,    99,    93,
     797,    95,   174,    97,     6,    99,     6,   101,   194,   103,
       6,   105,     6,   107,     6,   109,    64,   111,   150,   113,
       6,   115,     6,   117,     6,   119,     6,   121,     6,   123,
     548,   125,   145,   146,   128,   129,   919,    85,   921,   171,
     172,   137,   138,   175,   223,   177,   777,   778,    96,    97,
     861,   862,     6,   166,   167,     6,   181,   182,   183,   184,
     185,   154,   155,    67,    68,    69,     0,     1,   799,   170,
     171,   172,   173,     7,   187,     9,    10,    11,     6,    13,
      14,    15,    16,    17,    18,   178,   179,   970,     6,    23,
      24,    25,   149,   150,    28,    29,     6,    31,   169,    33,
     777,   778,     6,    37,    89,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     6,    49,     6,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     6,   240,    62,    63,
     737,   223,   264,  1101,  1102,   223,   249,   223,   772,    99,
     102,   223,   104,   128,   941,   774,   775,   223,   110,   111,
     112,   113,   537,   538,     6,    42,    43,   223,    92,   222,
     122,   796,   861,   862,   223,   127,  1189,   774,   775,   941,
     777,   778,   203,   780,   789,   790,   136,   162,   896,   164,
     213,   788,   789,   790,   169,   781,   782,   794,   389,   235,
     797,   304,   799,   155,   801,   240,   899,   310,   772,   249,
     800,    90,   334,    92,   258,   252,    95,   339,   905,   169,
     170,   171,   172,   264,   912,   943,   734,   272,  1101,  1102,
     116,   117,   118,   119,   120,   944,   188,   279,   360,   189,
      66,   284,   928,   165,    70,    71,    72,   983,   370,    75,
     174,  1158,   150,   304,   178,   134,   135,   962,   317,   855,
     310,    12,  1146,  1000,   861,   862,   894,   329,    19,    20,
     334,    22,   326,   171,   172,    26,    27,   175,  1164,   177,
     877,   167,   339,    34,    35,   355,   360,   979,   174,   175,
     176,   346,   927,   370,   365,   383,   220,    48,   379,   125,
     126,   395,   793,   982,   400,   902,   903,   417,   412,    60,
      61,   420,   909,   910,  1187,   990,  1189,  1152,   195,   196,
     917,   427,   430,   920,   440,   922,   447,   454,    -1,   449,
     927,    64,    -1,   930,    -1,    -1,    -1,   440,    -1,    -1,
     988,    -1,    -1,   940,   941,   942,    -1,  1148,  1149,  1150,
      -1,   999,   949,    86,   989,    88,   847,    -1,    -1,   236,
      -1,    -1,    -1,    96,    97,    -1,   264,    -1,   993,   994,
      -1,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   980,    -1,    -1,    -1,    -1,   985,    -1,
      -1,    -1,   989,    -1,    -1,    -1,   122,    -1,   995,    -1,
     277,   127,    -1,    -1,   130,   131,   132,   133,    -1,   900,
     901,    -1,    -1,    -1,    -1,   906,   907,   908,    -1,  1140,
    1141,  1142,    -1,    -1,   915,   916,    -1,   918,    -1,    -1,
      -1,    -1,   923,    -1,   160,   312,   334,    -1,   929,    -1,
     931,   339,   933,    -1,   935,   936,   172,    90,    91,    92,
      93,    94,    95,   330,    -1,    -1,   947,   948,    -1,   950,
     951,   952,   360,    -1,    -1,   342,    -1,    -1,    -1,   220,
      -1,   348,   370,    -1,    -1,    -1,   353,    -1,    -1,   356,
      -1,    -1,    -1,    -1,    -1,   362,   363,   141,   142,   143,
     144,   145,   146,   147,   195,   196,   197,   198,   199,   200,
     201,   992,   203,   204,   205,   996,   997,    -1,    -1,  1157,
      -1,    -1,    -1,    -1,    -1,   392,   393,   171,    -1,   173,
      -1,    -1,    -1,    -1,    -1,   402,    -1,    -1,    -1,    -1,
      -1,   408,   409,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,   198,  1139,  1140,  1141,  1142,  1143,  1144,    -1,    -1,
    1147,  1148,  1149,  1150,   211,   432,   433,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,   443,   224,    77,    78,
      79,    80,    81,    82,    83,    84,   660,    -1,    -1,    -1,
      -1,    -1,   239,    -1,    -1,   669,    -1,    -1,    -1,    -1,
     247,   675,    -1,   677,   251,   679,    -1,   681,   255,   683,
      -1,   685,    -1,   260,    -1,   689,   263,   691,    -1,   693,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,   278,   706,    -1,    -1,    -1,   283,    -1,    -1,    -1,
      -1,   508,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,   308,    -1,    -1,   122,    -1,    -1,   314,    -1,    -1,
      -1,    -1,    -1,  1154,  1155,    -1,   323,    -1,  1159,  1160,
      -1,   328,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,   354,    -1,    -1,
      -1,    -1,   359,    -1,   172,    -1,    -1,   364,    -1,    -1,
      -1,    -1,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,    -1,    -1,    -1,    -1,   382,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   394,   207,   208,
     209,   210,   399,   212,    -1,   214,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   411,    -1,    -1,    -1,   415,    -1,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,   426,
      -1,    -1,   429,    -1,    -1,    -1,    -1,     7,    -1,     9,
      10,    11,   439,    13,    14,    15,    16,    17,    18,   446,
      -1,   448,    -1,    23,    24,   452,    -1,    -1,    28,    29,
      -1,    31,    -1,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    62,    63,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    -1,    92,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   781,   782,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,   802,  1010,    -1,    -1,    -1,
      -1,  1015,    -1,    -1,    -1,    -1,    -1,  1021,    -1,    -1,
    1024,    -1,    -1,    -1,   174,    -1,    -1,    -1,   178,   195,
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
      -1,   207,   208,   209,   210,    -1,   212,    -1,   214,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,   178,     7,    -1,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
     897,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   220,    49,   222,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    62,    63,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,
      -1,    92,    -1,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    -1,   178,    -1,    -1,    -1,   895,    -1,
      -1,   898,    -1,    -1,    -1,    -1,    -1,   904,    -1,    -1,
      -1,    -1,    -1,    -1,   911,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   926,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,   939,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     957,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   978,    -1,    -1,   981,    -1,    -1,    -1,    -1,    -1,
     987,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   998,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1145,    -1,
      -1,    -1,    -1,    -1,  1151,    -1,    -1,    -1,    -1,  1156,
      -1,    -1,    -1,    -1,    -1,  1162
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,     1,     7,     9,    10,    11,    13,    14,    15,    16,
      17,    18,    23,    24,    25,    28,    29,    31,    33,    37,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    62,
      63,    92,   174,   178,   220,   228,   229,   230,   231,   232,
     234,   235,   236,   237,   238,   271,   272,   280,   281,   294,
     295,   298,   299,   309,   310,   313,   314,   319,   320,   326,
     327,   330,   331,   338,   339,   342,   343,   359,   360,   364,
     365,   368,   369,   390,   391,   396,   397,   411,   412,   415,
     416,   419,   420,   423,   424,   432,   433,   436,   437,   444,
     445,   448,   449,   452,   453,   457,   458,   461,   462,   465,
     466,   473,   474,   477,   478,   482,   483,   492,   493,   500,
     501,   504,   505,   508,   509,   512,   513,   515,   516,   520,
     521,   225,   263,     3,   240,     3,     4,   242,   248,   248,
       0,   229,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   116,   117,   118,   119,   120,   167,
     174,   175,   176,   361,   362,   363,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   242,    64,    65,    66,    96,    97,   194,   265,   266,
     267,   268,   269,   270,   305,    66,    70,    71,    72,   129,
     194,   277,   278,   279,    73,    74,    77,    78,    79,    80,
      81,    82,    83,    84,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,    85,   268,   269,   296,
     297,   305,    86,    88,   268,   269,   305,   306,   307,   308,
     172,   311,   312,   123,   124,   315,   316,   317,   318,   165,
     325,   316,   317,   328,   329,    90,    91,    92,    93,    94,
      95,   336,   337,    99,   170,   171,   172,   173,   340,   341,
     114,   115,   172,   357,   358,   240,     5,   241,   240,   240,
     242,   242,   241,   241,   226,   264,   222,   241,   256,   361,
     268,   269,   305,   366,   367,    66,   268,   269,   387,   388,
     389,   177,   178,   180,   392,   393,   394,   395,    75,    76,
      98,   161,   168,   407,   408,   409,   410,   186,   413,   414,
     221,   316,   317,   417,   418,   221,   316,   317,   421,   422,
      90,    92,    95,   134,   135,   430,   431,    99,   136,   169,
     170,   171,   172,   189,   434,   435,   221,   316,   317,   442,
     443,    92,   174,   178,   446,   447,   221,   316,   317,   450,
     451,    66,   139,   140,   217,   218,   219,   454,   455,   456,
     137,   138,   459,   460,   141,   142,   143,   144,   145,   146,
     147,   171,   173,   189,   463,   464,    90,    92,    95,   471,
     472,    99,   136,   148,   169,   170,   171,   172,   173,   189,
     190,   475,   476,   149,   150,   479,   480,   481,   165,   490,
     491,    70,    71,    72,    92,   156,   498,   499,    92,   502,
     503,   154,   155,   178,   179,   193,   268,   269,   305,   506,
     507,   157,   158,   187,   188,   194,   510,   511,   514,   515,
      36,   159,   517,   518,   519,   242,   222,   238,   248,   248,
     241,   264,   256,   256,   265,   240,     3,     4,   243,   243,
     242,   241,   264,   256,   277,   264,   256,   256,   256,   256,
     256,   256,   222,   242,   254,   222,   242,   244,   250,   254,
     250,   282,   248,   264,   296,   240,    19,   220,   264,   238,
     306,   250,   264,   311,   264,   254,   250,   315,   222,   248,
     260,   264,   254,   260,   264,   328,   240,   242,   240,   242,
     242,   242,   264,   336,   242,   240,   242,   244,   248,   264,
     340,   241,   242,   244,   264,   357,   224,   224,   241,   255,
     264,   366,   264,   256,   387,   248,   264,   254,   222,   238,
     392,   242,   242,   240,   264,   254,   256,   407,   260,   264,
     413,   248,   254,   260,   264,   417,   242,   245,   254,   222,
     245,   262,   264,   421,   240,   240,   248,   242,   247,   247,
     264,   430,   242,   248,   242,   240,   242,   244,   248,   264,
     434,   248,   254,   260,   264,   442,   240,   248,   248,   264,
     446,   247,   254,   254,   264,   450,   240,   240,   195,   196,
     197,   198,   199,   200,   201,   203,   204,   205,   195,   196,
     197,   198,   199,   201,   202,   203,   204,   205,   207,   208,
     209,   210,   212,   214,   215,   216,   195,   196,   197,   198,
     199,   201,   202,   203,   204,   205,   207,   208,   209,   210,
     212,   214,   215,   216,   264,   256,   454,     8,    19,   220,
     275,   276,    12,    19,    20,    22,    26,    27,    34,    35,
      48,    60,    61,   220,   233,   302,   303,   323,   324,   334,
     335,   347,   348,   355,   356,   381,   382,   385,   386,   440,
     441,   469,   470,   488,   489,   264,   459,   242,   242,   242,
     242,   242,    19,    30,   220,   281,   405,   406,   240,   242,
     248,   248,   264,   463,   240,   240,   245,   264,   471,   242,
     248,   242,   242,   240,   242,   244,   248,   248,   242,   264,
     475,     3,   239,   264,   222,   238,   479,   222,   247,   258,
     264,   490,   240,   243,   243,   240,   243,   264,   498,   240,
     264,   502,   245,   248,   248,   248,   245,   264,   506,   242,
     240,   248,   245,   241,   264,   510,   264,   514,   241,   264,
     256,   517,   238,   304,   224,   242,   253,   224,   244,   249,
     242,   224,   248,   259,   255,   255,   223,   229,   242,   224,
     245,   261,   242,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,   263,
     263,   263,   263,   263,   263,   263,   263,   103,   130,   131,
     132,   172,   376,   377,   383,   384,   263,   263,   263,   263,
     229,   224,   247,   257,   304,   223,   253,   253,   223,   249,
     249,   223,   242,   259,   259,   223,   223,   242,   261,   261,
     223,   240,   242,   239,   243,   245,    19,   220,   244,   241,
     247,   248,    67,    68,    69,   273,   274,   174,   300,   301,
      89,   128,   163,   164,   321,   322,    89,   128,   162,   164,
     169,   332,   333,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   122,   164,   172,   344,   345,   346,   102,
     104,   110,   111,   112,   113,   122,   127,   155,   188,   349,
     350,   351,   352,   353,   354,   100,   101,   102,   103,   104,
     105,   122,   127,   130,   133,   160,   172,   375,   376,   377,
     378,   379,   380,   240,    19,   220,   327,    19,   220,   314,
     222,   239,   252,   252,   264,   383,   130,   172,   438,   439,
     169,   467,   468,   151,   152,   153,   166,   484,   485,   486,
     487,    66,    70,    71,    72,    75,   125,   126,   402,   403,
     404,   223,   257,   257,   223,   242,     6,    19,    38,   220,
     400,   401,    19,    50,   220,   496,   497,    19,    32,   121,
     220,   373,   374,   406,   428,   429,   264,   273,   248,   264,
     300,   240,   240,   242,   242,   264,   321,   240,   240,   240,
     242,   242,   264,   332,    19,   220,   416,    19,   220,   493,
     240,   240,   242,   240,   239,   242,   239,   242,   240,    19,
     220,   314,   264,   254,   344,   240,   242,   240,   240,   240,
     240,   264,   258,   262,   258,   260,   349,    19,   220,   416,
      19,   220,   493,   240,   240,   242,   240,   240,   240,    19,
     220,   327,    19,   220,   314,   264,   252,   252,   252,   252,
     375,   224,   239,   251,    19,   220,   327,    19,   220,   314,
     264,   438,   242,   264,   467,    19,   220,   365,   242,   264,
     256,   254,   484,   240,   243,   243,   242,   240,   240,   264,
     256,   402,   263,   263,   263,   263,   251,   251,   223,    99,
     181,   182,   183,   184,   185,   398,   399,   154,   155,   178,
     179,   494,   495,    66,   125,   126,   370,   371,   372,   125,
     126,   192,   425,   426,   427,   242,   244,   244,   244,   242,
     242,   264,   398,   242,   247,   247,   247,   264,   494,   240,
     240,   264,   256,   370,   240,   240,   264,   222,   425,   239,
     246,   246,   223
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 106 "VRML97.y"
    {YYABORT;}
    break;

  case 4:
#line 107 "VRML97.y"
    {YYABORT;}
    break;

  case 63:
#line 200 "VRML97.y"
    {
			AddSFInt32(yyvsp[0].ival);
		}
    break;

  case 65:
#line 211 "VRML97.y"
    {
			AddSFString(yyvsp[0].sval);
		}
    break;

  case 66:
#line 218 "VRML97.y"
    {
			AddSFFloat(yyvsp[0].fval);
		}
    break;

  case 67:
#line 222 "VRML97.y"
    {
			yyval.fval = (float)yyvsp[0].ival;
			AddSFFloat((float)yyvsp[0].ival);
		}
    break;

  case 69:
#line 230 "VRML97.y"
    {yyval.fval = (float)yyvsp[0].ival;}
    break;

  case 70:
#line 235 "VRML97.y"
    {
			gColor[0] = yyvsp[-2].fval;
			gColor[1] = yyvsp[-1].fval;
			gColor[2] = yyvsp[0].fval;
			AddSFColor(gColor);
	    }
    break;

  case 71:
#line 245 "VRML97.y"
    {
			gRotation[0] = yyvsp[-3].fval;
			gRotation[1] = yyvsp[-2].fval;
			gRotation[2] = yyvsp[-1].fval;
			gRotation[3] = yyvsp[0].fval;
			AddSFRotation(gRotation);
		}
    break;

  case 72:
#line 255 "VRML97.y"
    {}
    break;

  case 74:
#line 275 "VRML97.y"
    {
			gVec2f[0] = yyvsp[-1].fval;
			gVec2f[1] = yyvsp[0].fval;
			AddSFVec2f(gVec2f);
		}
    break;

  case 75:
#line 284 "VRML97.y"
    {
			gVec3f[0] = yyvsp[-2].fval;
			gVec3f[1] = yyvsp[-1].fval;
			gVec3f[2] = yyvsp[0].fval;
			AddSFVec3f(gVec3f);
		}
    break;

  case 82:
#line 305 "VRML97.y"
    {}
    break;

  case 83:
#line 306 "VRML97.y"
    {}
    break;

  case 84:
#line 307 "VRML97.y"
    {}
    break;

  case 86:
#line 312 "VRML97.y"
    {}
    break;

  case 87:
#line 313 "VRML97.y"
    {}
    break;

  case 88:
#line 318 "VRML97.y"
    {}
    break;

  case 89:
#line 319 "VRML97.y"
    {}
    break;

  case 90:
#line 320 "VRML97.y"
    {}
    break;

  case 92:
#line 325 "VRML97.y"
    {}
    break;

  case 93:
#line 326 "VRML97.y"
    {}
    break;

  case 94:
#line 330 "VRML97.y"
    {}
    break;

  case 95:
#line 331 "VRML97.y"
    {}
    break;

  case 96:
#line 332 "VRML97.y"
    {}
    break;

  case 98:
#line 337 "VRML97.y"
    {}
    break;

  case 99:
#line 338 "VRML97.y"
    {}
    break;

  case 123:
#line 399 "VRML97.y"
    {
			ParserPushNode(VRML97_ANCHOR_PARAMETER, ParserGetCurrentNode());
		}
    break;

  case 124:
#line 406 "VRML97.y"
    {
			ParserPushNode(VRML97_ANCHOR_URL, ParserGetCurrentNode());
		}
    break;

  case 125:
#line 413 "VRML97.y"
    {
			((AnchorNode *)ParserGetCurrentNode())->setBoundingBoxCenter(gVec3f);
		}
    break;

  case 126:
#line 420 "VRML97.y"
    {
			((AnchorNode *)ParserGetCurrentNode())->setBoundingBoxSize(gVec3f);
		}
    break;

  case 128:
#line 428 "VRML97.y"
    {
			((AnchorNode *)ParserGetCurrentNode())->setDescription(yyvsp[0].sval);
		}
    break;

  case 129:
#line 433 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 130:
#line 437 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 133:
#line 446 "VRML97.y"
    {   
			AnchorNode	*anchor = new AnchorNode();
			anchor->setName(GetDEFName());
			ParserAddNode(anchor);
			ParserPushNode(VRML97_ANCHOR, anchor);
		}
    break;

  case 134:
#line 456 "VRML97.y"
    {
			AnchorNode *anchor = (AnchorNode *)ParserGetCurrentNode();
			anchor->initialize();
			ParserPopNode();
		}
    break;

  case 148:
#line 490 "VRML97.y"
    {
			AppearanceNode	*appearance = new AppearanceNode();
			appearance->setName(GetDEFName());
			ParserAddNode(appearance);
			ParserPushNode(VRML97_APPEARANCE, appearance);
		}
    break;

  case 149:
#line 500 "VRML97.y"
    {
			AppearanceNode	*appearance = (AppearanceNode *)ParserGetCurrentNode();
			appearance->initialize();
			ParserPopNode();
		}
    break;

  case 152:
#line 520 "VRML97.y"
    {
			ParserPushNode(VRML97_AUDIOCLIP_URL, ParserGetCurrentNode());
		}
    break;

  case 153:
#line 527 "VRML97.y"
    {
			((AudioClipNode *)ParserGetCurrentNode())->setDescription(yyvsp[0].sval);
		}
    break;

  case 154:
#line 531 "VRML97.y"
    {
			((AudioClipNode *)ParserGetCurrentNode())->setLoop(yyvsp[0].ival);
		}
    break;

  case 155:
#line 535 "VRML97.y"
    {
			((AudioClipNode *)ParserGetCurrentNode())->setPitch(yyvsp[0].fval);
		}
    break;

  case 156:
#line 539 "VRML97.y"
    {
			((AudioClipNode *)ParserGetCurrentNode())->setStartTime(yyvsp[0].fval);
		}
    break;

  case 157:
#line 543 "VRML97.y"
    {
			((AudioClipNode *)ParserGetCurrentNode())->setStopTime(yyvsp[0].fval);
		}
    break;

  case 158:
#line 547 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 159:
#line 554 "VRML97.y"
    {
			AudioClipNode	*audioClip = new AudioClipNode();
			audioClip->setName(GetDEFName());
			ParserAddNode(audioClip);
			ParserPushNode(VRML97_AUDIOCLIP, audioClip);
		}
    break;

  case 160:
#line 564 "VRML97.y"
    {
			AudioClipNode *audioClip = (AudioClipNode *)ParserGetCurrentNode();
			audioClip->initialize();
			ParserPopNode();
		}
    break;

  case 163:
#line 584 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_BACKURL, ParserGetCurrentNode());
		}
    break;

  case 164:
#line 591 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_BOTTOMURL, ParserGetCurrentNode());
		}
    break;

  case 165:
#line 598 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_FRONTURL, ParserGetCurrentNode());
		}
    break;

  case 166:
#line 605 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_LEFTURL, ParserGetCurrentNode());
		}
    break;

  case 167:
#line 612 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_RIGHTURL, ParserGetCurrentNode());
		}
    break;

  case 168:
#line 619 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_TOPURL, ParserGetCurrentNode());
		}
    break;

  case 169:
#line 626 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_GROUNDANGLE, ParserGetCurrentNode());
		}
    break;

  case 170:
#line 633 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_GROUNDCOLOR, ParserGetCurrentNode());
		}
    break;

  case 171:
#line 640 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_SKYANGLE, ParserGetCurrentNode());
		}
    break;

  case 172:
#line 647 "VRML97.y"
    {
			ParserPushNode(VRML97_BACKGROUND_SKYCOLOR, ParserGetCurrentNode());
		}
    break;

  case 173:
#line 654 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 174:
#line 658 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 175:
#line 662 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 176:
#line 666 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 177:
#line 670 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 178:
#line 674 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 179:
#line 678 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 180:
#line 682 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 181:
#line 686 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 182:
#line 690 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 183:
#line 697 "VRML97.y"
    {
			BackgroundNode *bg = new BackgroundNode();
			bg->setName(GetDEFName());
			ParserAddNode(bg);
			ParserPushNode(VRML97_BACKGROUND, bg);
		}
    break;

  case 184:
#line 707 "VRML97.y"
    {
			BackgroundNode *bg = (BackgroundNode *)ParserGetCurrentNode();
			bg->initialize();
			ParserPopNode();
		}
    break;

  case 188:
#line 728 "VRML97.y"
    {
			((BillboardNode *)ParserGetCurrentNode())->setAxisOfRotation(gVec3f);
		}
    break;

  case 191:
#line 737 "VRML97.y"
    {   
			BillboardNode *billboard = new BillboardNode();
			billboard->setName(GetDEFName());
			ParserAddNode(billboard);
			ParserPushNode(VRML97_BILLBOARD, billboard);
		}
    break;

  case 192:
#line 747 "VRML97.y"
    {
			BillboardNode *billboard = (BillboardNode *)ParserGetCurrentNode();
			billboard->initialize();
			ParserPopNode();
		}
    break;

  case 195:
#line 767 "VRML97.y"
    {
			((BoxNode *)ParserGetCurrentNode())->setSize(gVec3f);
		}
    break;

  case 196:
#line 774 "VRML97.y"
    {
			BoxNode *box = new BoxNode();
			box->setName(GetDEFName());
			ParserAddNode(box);
			ParserPushNode(VRML97_BOX, box);
		}
    break;

  case 197:
#line 784 "VRML97.y"
    {
			BoxNode *box = (BoxNode *)ParserGetCurrentNode();
			box->initialize();
			ParserPopNode();
		}
    break;

  case 204:
#line 820 "VRML97.y"
    {
			ParserPushNode(VRML97_COLLISION_PROXY, ParserGetCurrentNode());
		}
    break;

  case 206:
#line 828 "VRML97.y"
    {
			((CollisionNode *)ParserGetCurrentNode())->setCollide(yyvsp[0].ival);
		}
    break;

  case 211:
#line 836 "VRML97.y"
    {
			ParserPopNode();							
		}
    break;

  case 212:
#line 843 "VRML97.y"
    {   
			CollisionNode *collision = new CollisionNode();
			collision->setName(GetDEFName());
			ParserAddNode(collision);
			ParserPushNode(VRML97_BOX, collision);
		}
    break;

  case 213:
#line 853 "VRML97.y"
    {
			CollisionNode *collision = (CollisionNode *)ParserGetCurrentNode();
			collision->initialize();
			ParserPopNode();
		}
    break;

  case 217:
#line 877 "VRML97.y"
    {
			ColorNode *color = new ColorNode();
			color->setName(GetDEFName());
			ParserAddNode(color);
			ParserPushNode(VRML97_COLOR, color);
		}
    break;

  case 218:
#line 887 "VRML97.y"
    {
			ColorNode *color = (ColorNode *)ParserGetCurrentNode();
			color->initialize();
			ParserPopNode();
		}
    break;

  case 221:
#line 907 "VRML97.y"
    {
			ParserPushNode(VRML97_INTERPOLATOR_KEY, ParserGetCurrentNode());
		}
    break;

  case 222:
#line 914 "VRML97.y"
    {
			ParserPushNode(VRML97_INTERPOLATOR_KEYVALUE, ParserGetCurrentNode());
		}
    break;

  case 223:
#line 921 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 224:
#line 925 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 225:
#line 932 "VRML97.y"
    {
			ColorInterpolatorNode *colInterp = new ColorInterpolatorNode();
			colInterp->setName(GetDEFName());
			ParserAddNode(colInterp);
			ParserPushNode(VRML97_COLORINTERPOLATOR, colInterp);
		}
    break;

  case 226:
#line 942 "VRML97.y"
    {
			ColorInterpolatorNode *colInterp = (ColorInterpolatorNode *)ParserGetCurrentNode();
			colInterp->initialize();
			ParserPopNode();
		}
    break;

  case 229:
#line 962 "VRML97.y"
    {
			((ConeNode *)ParserGetCurrentNode())->setSide(yyvsp[0].ival);
		}
    break;

  case 230:
#line 966 "VRML97.y"
    {
			((ConeNode *)ParserGetCurrentNode())->setBottom(yyvsp[0].ival);
		}
    break;

  case 231:
#line 970 "VRML97.y"
    {
			((ConeNode *)ParserGetCurrentNode())->setBottomRadius(yyvsp[0].fval);
		}
    break;

  case 232:
#line 974 "VRML97.y"
    {
			((ConeNode *)ParserGetCurrentNode())->setHeight(yyvsp[0].fval);
		}
    break;

  case 233:
#line 981 "VRML97.y"
    {
			ConeNode *cone = new ConeNode();
			cone->setName(GetDEFName());
			ParserAddNode(cone);
			ParserPushNode(VRML97_CONE, cone);
		}
    break;

  case 234:
#line 991 "VRML97.y"
    {
			ConeNode *cone = (ConeNode *)ParserGetCurrentNode();
			cone->initialize();
			ParserPopNode();
		}
    break;

  case 237:
#line 1011 "VRML97.y"
    {
			CoordinateNode *coord = new CoordinateNode();
			coord->setName(GetDEFName());
			ParserAddNode(coord);
			ParserPushNode(VRML97_COORDINATE, coord);
		}
    break;

  case 238:
#line 1021 "VRML97.y"
    {
			CoordinateNode *coord = (CoordinateNode *)ParserGetCurrentNode();
			coord->initialize();
			ParserPopNode();
		}
    break;

  case 241:
#line 1041 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 242:
#line 1045 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 243:
#line 1052 "VRML97.y"
    {
			CoordinateInterpolatorNode *coordInterp = new CoordinateInterpolatorNode();
			coordInterp->setName(GetDEFName());
			ParserAddNode(coordInterp);
			ParserPushNode(VRML97_COORDINATEINTERPOLATOR, coordInterp);
		}
    break;

  case 244:
#line 1062 "VRML97.y"
    {
			CoordinateInterpolatorNode *coordInterp = (CoordinateInterpolatorNode *)ParserGetCurrentNode();
			coordInterp->initialize();
			ParserPopNode();
		}
    break;

  case 247:
#line 1082 "VRML97.y"
    {
			((CylinderNode *)ParserGetCurrentNode())->setSide(yyvsp[0].ival);
		}
    break;

  case 248:
#line 1086 "VRML97.y"
    {
			((CylinderNode *)ParserGetCurrentNode())->setBottom(yyvsp[0].ival);
		}
    break;

  case 249:
#line 1090 "VRML97.y"
    {
			((CylinderNode *)ParserGetCurrentNode())->setTop(yyvsp[0].ival);
		}
    break;

  case 250:
#line 1094 "VRML97.y"
    {
			((CylinderNode *)ParserGetCurrentNode())->setRadius(yyvsp[0].fval);
		}
    break;

  case 251:
#line 1098 "VRML97.y"
    {
			((CylinderNode *)ParserGetCurrentNode())->setHeight(yyvsp[0].fval);
		}
    break;

  case 252:
#line 1105 "VRML97.y"
    {
			CylinderNode *cylinder = new CylinderNode();
			cylinder->setName(GetDEFName());
			ParserAddNode(cylinder);
			ParserPushNode(VRML97_CYLINDER, cylinder);
		}
    break;

  case 253:
#line 1115 "VRML97.y"
    {
			CylinderNode *cylinder = (CylinderNode *)ParserGetCurrentNode();
			cylinder->initialize();
			ParserPopNode();
		}
    break;

  case 256:
#line 1135 "VRML97.y"
    {
			((CylinderSensorNode *)ParserGetCurrentNode())->setAutoOffset(yyvsp[0].ival);
		}
    break;

  case 257:
#line 1139 "VRML97.y"
    {
			((CylinderSensorNode *)ParserGetCurrentNode())->setDiskAngle(yyvsp[0].fval);
		}
    break;

  case 258:
#line 1143 "VRML97.y"
    {
			((CylinderSensorNode *)ParserGetCurrentNode())->setEnabled(yyvsp[0].ival);
		}
    break;

  case 259:
#line 1147 "VRML97.y"
    {
			((CylinderSensorNode *)ParserGetCurrentNode())->setMaxAngle(yyvsp[0].fval);
		}
    break;

  case 260:
#line 1151 "VRML97.y"
    {
			((CylinderSensorNode *)ParserGetCurrentNode())->setMinAngle(yyvsp[0].fval);
		}
    break;

  case 261:
#line 1155 "VRML97.y"
    {
			((CylinderSensorNode *)ParserGetCurrentNode())->setOffset(yyvsp[0].fval);
		}
    break;

  case 262:
#line 1163 "VRML97.y"
    {
			CylinderSensorNode *cysensor = new CylinderSensorNode();
			cysensor->setName(GetDEFName());
			ParserAddNode(cysensor);
			ParserPushNode(VRML97_CYLINDERSENSOR, cysensor);
		}
    break;

  case 263:
#line 1173 "VRML97.y"
    {
			CylinderSensorNode *cysensor = (CylinderSensorNode *)ParserGetCurrentNode();
			cysensor->initialize();
			ParserPopNode();
		}
    break;

  case 266:
#line 1193 "VRML97.y"
    {
			((DirectionalLightNode *)ParserGetCurrentNode())->setOn(yyvsp[0].ival);
		}
    break;

  case 267:
#line 1197 "VRML97.y"
    {
			((DirectionalLightNode *)ParserGetCurrentNode())->setIntensity(yyvsp[0].fval);
		}
    break;

  case 268:
#line 1201 "VRML97.y"
    {
			((DirectionalLightNode *)ParserGetCurrentNode())->setColor(gColor);
		}
    break;

  case 269:
#line 1205 "VRML97.y"
    {
			((DirectionalLightNode *)ParserGetCurrentNode())->setDirection(gVec3f);
		}
    break;

  case 270:
#line 1209 "VRML97.y"
    {
			((DirectionalLightNode *)ParserGetCurrentNode())->setAmbientIntensity(yyvsp[0].fval);
		}
    break;

  case 271:
#line 1216 "VRML97.y"
    {
			DirectionalLightNode *dirLight = new DirectionalLightNode();
			dirLight->setName(GetDEFName());
			ParserAddNode(dirLight);
			ParserPushNode(VRML97_DIRECTIONALLIGHT, dirLight);
		}
    break;

  case 272:
#line 1226 "VRML97.y"
    {
			DirectionalLightNode *dirLight = (DirectionalLightNode *)ParserGetCurrentNode();
			dirLight->initialize();
			ParserPopNode();
		}
    break;

  case 275:
#line 1246 "VRML97.y"
    {
			ParserPushNode(VRML97_ELEVATIONGRID_HEIGHT, ParserGetCurrentNode());
		}
    break;

  case 285:
#line 1263 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 286:
#line 1267 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setCCW(yyvsp[0].ival);
		}
    break;

  case 287:
#line 1271 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setCreaseAngle(yyvsp[0].fval);
		}
    break;

  case 288:
#line 1275 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setSolid(yyvsp[0].ival);
		}
    break;

  case 289:
#line 1279 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setColorPerVertex(yyvsp[0].ival);
		}
    break;

  case 290:
#line 1283 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setNormalPerVertex(yyvsp[0].ival);
		}
    break;

  case 291:
#line 1287 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setXDimension(yyvsp[0].ival);
		}
    break;

  case 292:
#line 1291 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setXSpacing(yyvsp[0].fval);
		}
    break;

  case 293:
#line 1295 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setZDimension(yyvsp[0].ival);
		}
    break;

  case 294:
#line 1299 "VRML97.y"
    {
			((ElevationGridNode *)ParserGetCurrentNode())->setZSpacing(yyvsp[0].fval);
		}
    break;

  case 295:
#line 1306 "VRML97.y"
    {
			ElevationGridNode *elev = new ElevationGridNode();
			elev->setName(GetDEFName());
			ParserAddNode(elev);
			ParserPushNode(VRML97_ELEVATIONGRID, elev);
		}
    break;

  case 296:
#line 1316 "VRML97.y"
    {
			ElevationGridNode *elev = (ElevationGridNode *)ParserGetCurrentNode();
			elev->initialize();
			ParserPopNode();
		}
    break;

  case 299:
#line 1336 "VRML97.y"
    {
			ParserPushNode(VRML97_EXTRUSION_CROSSSECTION, ParserGetCurrentNode());
		}
    break;

  case 300:
#line 1343 "VRML97.y"
    {
			ParserPushNode(VRML97_EXTRUSION_ORIENTATION, ParserGetCurrentNode());
		}
    break;

  case 301:
#line 1350 "VRML97.y"
    {
			ParserPushNode(VRML97_EXTRUSION_SCALE, ParserGetCurrentNode());
		}
    break;

  case 302:
#line 1357 "VRML97.y"
    {
			ParserPushNode(VRML97_EXTRUSION_SPINE, ParserGetCurrentNode());
		}
    break;

  case 303:
#line 1364 "VRML97.y"
    {
			((ExtrusionNode *)ParserGetCurrentNode())->setBeginCap(yyvsp[0].ival);
		}
    break;

  case 304:
#line 1368 "VRML97.y"
    {
			((ExtrusionNode *)ParserGetCurrentNode())->setCCW(yyvsp[0].ival);
		}
    break;

  case 305:
#line 1372 "VRML97.y"
    {
			((ExtrusionNode *)ParserGetCurrentNode())->setConvex(yyvsp[0].ival);
		}
    break;

  case 306:
#line 1376 "VRML97.y"
    {
			((ExtrusionNode *)ParserGetCurrentNode())->setCreaseAngle(yyvsp[0].fval);
		}
    break;

  case 307:
#line 1380 "VRML97.y"
    {
			((ExtrusionNode *)ParserGetCurrentNode())->setSolid(yyvsp[0].ival);
		}
    break;

  case 308:
#line 1384 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 309:
#line 1388 "VRML97.y"
    {
			((ExtrusionNode *)ParserGetCurrentNode())->setEndCap(yyvsp[0].ival);
		}
    break;

  case 310:
#line 1392 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 311:
#line 1396 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 312:
#line 1400 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 313:
#line 1407 "VRML97.y"
    {
			ExtrusionNode *ex = new ExtrusionNode();
			ex->setName(GetDEFName());
			ParserAddNode(ex);
			ParserPushNode(VRML97_EXTRUSION, ex);
		}
    break;

  case 314:
#line 1417 "VRML97.y"
    {
			ExtrusionNode *ex = (ExtrusionNode *)ParserGetCurrentNode();
			ex->initialize();
			ParserPopNode();
		}
    break;

  case 317:
#line 1437 "VRML97.y"
    {
			((FogNode *)ParserGetCurrentNode())->setColor(gColor);
		}
    break;

  case 318:
#line 1441 "VRML97.y"
    {
			((FogNode *)ParserGetCurrentNode())->setFogType(yyvsp[0].sval);
		}
    break;

  case 319:
#line 1445 "VRML97.y"
    {
			((FogNode *)ParserGetCurrentNode())->setVisibilityRange(yyvsp[0].fval);
		}
    break;

  case 320:
#line 1452 "VRML97.y"
    {
			FogNode *fog= new FogNode();
			fog->setName(GetDEFName());
			ParserAddNode(fog);
			ParserPushNode(VRML97_FOG, fog);
		}
    break;

  case 321:
#line 1462 "VRML97.y"
    {
			FogNode *fog= (FogNode *)ParserGetCurrentNode();
			fog->initialize();
			ParserPopNode();
		}
    break;

  case 324:
#line 1482 "VRML97.y"
    {
			ParserPushNode(VRML97_FONTSTYLE_JUSTIFY, ParserGetCurrentNode());
		}
    break;

  case 325:
#line 1489 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setFamily(yyvsp[0].sval);
		}
    break;

  case 326:
#line 1493 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setHorizontal(yyvsp[0].ival);
		}
    break;

  case 327:
#line 1497 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 328:
#line 1501 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setLanguage(yyvsp[0].sval);
		}
    break;

  case 329:
#line 1505 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setLeftToRight(yyvsp[0].ival);
		}
    break;

  case 330:
#line 1509 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setSize(yyvsp[0].fval);
		}
    break;

  case 331:
#line 1513 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setSpacing(yyvsp[0].fval);
		}
    break;

  case 332:
#line 1517 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setStyle(yyvsp[0].sval);
		}
    break;

  case 333:
#line 1521 "VRML97.y"
    {
			((FontStyleNode *)ParserGetCurrentNode())->setTopToBottom(yyvsp[0].ival);
		}
    break;

  case 334:
#line 1528 "VRML97.y"
    {
			FontStyleNode *fs = new FontStyleNode();
			fs->setName(GetDEFName());
			ParserAddNode(fs);
			ParserPushNode(VRML97_FONTSTYLE, fs);
		}
    break;

  case 335:
#line 1538 "VRML97.y"
    {
			FontStyleNode *fs = (FontStyleNode *)ParserGetCurrentNode();
			fs->initialize();
			ParserPopNode();
		}
    break;

  case 341:
#line 1564 "VRML97.y"
    {   
			GroupNode *group = new GroupNode();
			group->setName(GetDEFName());
			ParserAddNode(group);
			ParserPushNode(VRML97_GROUP, group);
		}
    break;

  case 342:
#line 1574 "VRML97.y"
    {
			GroupNode *group = (GroupNode *)ParserGetCurrentNode();
			group->initialize();
			ParserPopNode();
		}
    break;

  case 345:
#line 1594 "VRML97.y"
    {
			ParserPushNode(VRML97_IMAGETEXTURE_URL, ParserGetCurrentNode());
		}
    break;

  case 346:
#line 1601 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 347:
#line 1605 "VRML97.y"
    {
			((ImageTextureNode *)ParserGetCurrentNode())->setRepeatS(yyvsp[0].ival);
		}
    break;

  case 348:
#line 1609 "VRML97.y"
    {
			((ImageTextureNode *)ParserGetCurrentNode())->setRepeatT(yyvsp[0].ival);
		}
    break;

  case 349:
#line 1616 "VRML97.y"
    {
			ImageTextureNode *imgTexture = new ImageTextureNode();
			imgTexture->setName(GetDEFName());
			ParserAddNode(imgTexture);
			ParserPushNode(VRML97_IMAGETEXTURE, imgTexture);
		}
    break;

  case 350:
#line 1626 "VRML97.y"
    {
			ImageTextureNode *imgTexture = (ImageTextureNode *)ParserGetCurrentNode();
			imgTexture->initialize();
			ParserPopNode();
		}
    break;

  case 353:
#line 1646 "VRML97.y"
    {
			ParserPushNode(VRML97_COLOR_INDEX, ParserGetCurrentNode());
		}
    break;

  case 354:
#line 1653 "VRML97.y"
    {
			ParserPushNode(VRML97_COORDINATE_INDEX, ParserGetCurrentNode());
		}
    break;

  case 355:
#line 1660 "VRML97.y"
    {
			ParserPushNode(VRML97_NORMAL_INDEX, ParserGetCurrentNode());
		}
    break;

  case 356:
#line 1667 "VRML97.y"
    {
			ParserPushNode(VRML97_TEXTURECOODINATE_INDEX, ParserGetCurrentNode());
		}
    break;

  case 369:
#line 1686 "VRML97.y"
    {
			((IndexedFaceSetNode *)ParserGetCurrentNode())->setCCW(yyvsp[0].ival);
		}
    break;

  case 370:
#line 1690 "VRML97.y"
    {
			((IndexedFaceSetNode *)ParserGetCurrentNode())->setConvex(yyvsp[0].ival);
		}
    break;

  case 371:
#line 1694 "VRML97.y"
    {
			((IndexedFaceSetNode *)ParserGetCurrentNode())->setSolid(yyvsp[0].ival);
		}
    break;

  case 372:
#line 1698 "VRML97.y"
    {
			((IndexedFaceSetNode *)ParserGetCurrentNode())->setCreaseAngle(yyvsp[0].fval);
		}
    break;

  case 373:
#line 1702 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 374:
#line 1706 "VRML97.y"
    {
			((IndexedFaceSetNode *)ParserGetCurrentNode())->setColorPerVertex(yyvsp[0].ival);
		}
    break;

  case 375:
#line 1710 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 376:
#line 1714 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 377:
#line 1718 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 378:
#line 1722 "VRML97.y"
    {
			((IndexedFaceSetNode *)ParserGetCurrentNode())->setNormalPerVertex(yyvsp[0].ival);
		}
    break;

  case 379:
#line 1729 "VRML97.y"
    {
			IndexedFaceSetNode	*idxFaceset = new IndexedFaceSetNode();
			idxFaceset->setName(GetDEFName());
			ParserAddNode(idxFaceset);
			ParserPushNode(VRML97_INDEXEDFACESET, idxFaceset);
		}
    break;

  case 380:
#line 1739 "VRML97.y"
    {
			IndexedFaceSetNode *idxFaceset = (IndexedFaceSetNode *)ParserGetCurrentNode();
			idxFaceset->initialize();
			ParserPopNode();
		}
    break;

  case 389:
#line 1765 "VRML97.y"
    {
			((IndexedLineSetNode *)ParserGetCurrentNode())->setColorPerVertex(yyvsp[0].ival);
		}
    break;

  case 390:
#line 1769 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 391:
#line 1773 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 392:
#line 1780 "VRML97.y"
    {
			IndexedLineSetNode	*idxLineset = new IndexedLineSetNode();
			idxLineset->setName(GetDEFName());
			ParserAddNode(idxLineset);
			ParserPushNode(VRML97_INDEXEDLINESET, idxLineset);
		}
    break;

  case 393:
#line 1790 "VRML97.y"
    {
			IndexedLineSetNode *idxLineset = (IndexedLineSetNode *)ParserGetCurrentNode();
			idxLineset->initialize();
			ParserPopNode();
		}
    break;

  case 396:
#line 1810 "VRML97.y"
    {
			ParserPushNode(VRML97_INLINE_URL, ParserGetCurrentNode());
		}
    break;

  case 397:
#line 1817 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 400:
#line 1826 "VRML97.y"
    {   
			InlineNode *inlineNode = new InlineNode();
			inlineNode->setName(GetDEFName());
			ParserAddNode(inlineNode);
			ParserPushNode(VRML97_INLINE, inlineNode);
		}
    break;

  case 401:
#line 1836 "VRML97.y"
    {
			InlineNode *inlineNode = (InlineNode *)ParserGetCurrentNode();
			//inlineNode->initialize();
			ParserPopNode();
		}
    break;

  case 404:
#line 1856 "VRML97.y"
    {
			ParserPushNode(VRML97_LOD_RANGE, ParserGetCurrentNode());
		}
    break;

  case 405:
#line 1864 "VRML97.y"
    {
			ParserPushNode(VRML97_LOD_LEVEL, ParserGetCurrentNode());
		}
    break;

  case 406:
#line 1871 "VRML97.y"
    {
			ParserPopNode();							
		}
    break;

  case 407:
#line 1875 "VRML97.y"
    {
			((LODNode *)ParserGetCurrentNode())->setCenter(gVec3f);
		}
    break;

  case 408:
#line 1879 "VRML97.y"
    {
			ParserPopNode();							
		}
    break;

  case 409:
#line 1883 "VRML97.y"
    {
			ParserPopNode();							
		}
    break;

  case 410:
#line 1890 "VRML97.y"
    {   
			LODNode	*lod = new LODNode();
			lod->setName(GetDEFName());
			ParserAddNode(lod);
			ParserPushNode(VRML97_INLINE, lod);
		}
    break;

  case 411:
#line 1900 "VRML97.y"
    {
			LODNode	*lod = (LODNode *)ParserGetCurrentNode();
			lod->initialize();
			ParserPopNode();
		}
    break;

  case 414:
#line 1920 "VRML97.y"
    {
			((MaterialNode *)ParserGetCurrentNode())->setAmbientIntensity(yyvsp[0].fval);
		}
    break;

  case 415:
#line 1924 "VRML97.y"
    {
			((MaterialNode *)ParserGetCurrentNode())->setDiffuseColor(gColor);
		}
    break;

  case 416:
#line 1928 "VRML97.y"
    {
			((MaterialNode *)ParserGetCurrentNode())->setEmissiveColor(gColor);
		}
    break;

  case 417:
#line 1932 "VRML97.y"
    {
			((MaterialNode *)ParserGetCurrentNode())->setShininess(yyvsp[0].fval);
		}
    break;

  case 418:
#line 1936 "VRML97.y"
    {
			((MaterialNode *)ParserGetCurrentNode())->setSpecularColor(gColor);
		}
    break;

  case 419:
#line 1940 "VRML97.y"
    {
			((MaterialNode *)ParserGetCurrentNode())->setTransparency(yyvsp[0].fval);
		}
    break;

  case 420:
#line 1947 "VRML97.y"
    {
			MaterialNode *material = new MaterialNode();
			material->setName(GetDEFName());
			ParserAddNode(material);
			ParserPushNode(VRML97_MATERIAL, material);
		}
    break;

  case 421:
#line 1957 "VRML97.y"
    {
			MaterialNode *material = (MaterialNode *)ParserGetCurrentNode();
			material->initialize();
			ParserPopNode();
		}
    break;

  case 424:
#line 1977 "VRML97.y"
    {
			ParserPushNode(VRML97_MOVIETEXTURE_URL, ParserGetCurrentNode());
		}
    break;

  case 425:
#line 1984 "VRML97.y"
    {
			((MovieTextureNode *)ParserGetCurrentNode())->setLoop(yyvsp[0].ival);
		}
    break;

  case 426:
#line 1988 "VRML97.y"
    {
			((MovieTextureNode *)ParserGetCurrentNode())->setSpeed(yyvsp[0].fval);
		}
    break;

  case 427:
#line 1992 "VRML97.y"
    {
			((MovieTextureNode *)ParserGetCurrentNode())->setStartTime(yyvsp[0].fval);
		}
    break;

  case 428:
#line 1996 "VRML97.y"
    {
			((MovieTextureNode *)ParserGetCurrentNode())->setStopTime(yyvsp[0].fval);
		}
    break;

  case 429:
#line 2000 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 430:
#line 2004 "VRML97.y"
    {
			((MovieTextureNode *)ParserGetCurrentNode())->setRepeatS(yyvsp[0].ival);
		}
    break;

  case 431:
#line 2008 "VRML97.y"
    {
			((MovieTextureNode *)ParserGetCurrentNode())->setRepeatT(yyvsp[0].ival);
		}
    break;

  case 432:
#line 2015 "VRML97.y"
    {
			MovieTextureNode *movieTexture = new MovieTextureNode();
			movieTexture->setName(GetDEFName());
			ParserAddNode(movieTexture);
			ParserPushNode(VRML97_MOVIETEXTURE, movieTexture);
		}
    break;

  case 433:
#line 2025 "VRML97.y"
    {
			MovieTextureNode *movieTexture = (MovieTextureNode *)ParserGetCurrentNode();
			movieTexture->initialize();
			ParserPopNode();
		}
    break;

  case 436:
#line 2045 "VRML97.y"
    {
			ParserPushNode(VRML97_NAVIGATIONINFO_AVATARSIZE, ParserGetCurrentNode());
		}
    break;

  case 437:
#line 2052 "VRML97.y"
    {
			ParserPushNode(VRML97_NAVIGATIONINFO_TYPE, ParserGetCurrentNode());
		}
    break;

  case 438:
#line 2059 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 439:
#line 2063 "VRML97.y"
    {
			((NavigationInfoNode *)ParserGetCurrentNode())->setHeadlight(yyvsp[0].ival);
		}
    break;

  case 440:
#line 2067 "VRML97.y"
    {
			((NavigationInfoNode *)ParserGetCurrentNode())->setSpeed(yyvsp[0].fval);
		}
    break;

  case 441:
#line 2071 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 442:
#line 2075 "VRML97.y"
    {
			((NavigationInfoNode *)ParserGetCurrentNode())->setVisibilityLimit(yyvsp[0].fval);
		}
    break;

  case 443:
#line 2082 "VRML97.y"
    {
			NavigationInfoNode *navInfo = new NavigationInfoNode();
			navInfo->setName(GetDEFName());
			ParserAddNode(navInfo);
			ParserPushNode(VRML97_NAVIGATIONINFO, navInfo);
		}
    break;

  case 444:
#line 2092 "VRML97.y"
    {
			NavigationInfoNode *navInfo = (NavigationInfoNode *)ParserGetCurrentNode();
			navInfo->initialize();
			ParserPopNode();
		}
    break;

  case 448:
#line 2116 "VRML97.y"
    {
			NormalNode *normal = new NormalNode();
			normal->setName(GetDEFName());
			ParserAddNode(normal);
			ParserPushNode(VRML97_NORMAL, normal);
		}
    break;

  case 449:
#line 2126 "VRML97.y"
    {
			NormalNode *normal = (NormalNode *)ParserGetCurrentNode();
			normal->initialize();
			ParserPopNode();
		}
    break;

  case 452:
#line 2146 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 453:
#line 2150 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 454:
#line 2154 "VRML97.y"
    {
		}
    break;

  case 455:
#line 2160 "VRML97.y"
    {
			NormalInterpolatorNode *normInterp = new NormalInterpolatorNode();
			normInterp->setName(GetDEFName());
			ParserAddNode(normInterp);
			ParserPushNode(VRML97_NORMALINTERPOLATOR, normInterp);
		}
    break;

  case 456:
#line 2170 "VRML97.y"
    {
			NormalInterpolatorNode *normInterp = (NormalInterpolatorNode *)ParserGetCurrentNode();
			normInterp->initialize();
			ParserPopNode();
		}
    break;

  case 459:
#line 2190 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 460:
#line 2194 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 461:
#line 2198 "VRML97.y"
    {
		}
    break;

  case 462:
#line 2204 "VRML97.y"
    {
			OrientationInterpolatorNode *oriInterp = new OrientationInterpolatorNode();
			oriInterp->setName(GetDEFName());
			ParserAddNode(oriInterp);
			ParserPushNode(VRML97_ORIENTATIONINTERPOLATOR, oriInterp);
		}
    break;

  case 463:
#line 2214 "VRML97.y"
    {
			OrientationInterpolatorNode *oriInterp = (OrientationInterpolatorNode *)ParserGetCurrentNode();
			oriInterp->initialize();
			ParserPopNode();
		}
    break;

  case 466:
#line 2234 "VRML97.y"
    {
			ParserPushNode(VRML97_PIXELTEXTURE_IMAGE, ParserGetCurrentNode());
		}
    break;

  case 467:
#line 2241 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 468:
#line 2245 "VRML97.y"
    {
			((PixelTextureNode *)ParserGetCurrentNode())->setRepeatS(yyvsp[0].ival);
		}
    break;

  case 469:
#line 2249 "VRML97.y"
    {
			((PixelTextureNode *)ParserGetCurrentNode())->setRepeatT(yyvsp[0].ival);
		}
    break;

  case 470:
#line 2256 "VRML97.y"
    {
			PixelTextureNode *pixTexture = new PixelTextureNode();
			pixTexture->setName(GetDEFName());
			ParserAddNode(pixTexture);
			ParserPushNode(VRML97_PIXELTEXTURE, pixTexture);
		}
    break;

  case 471:
#line 2266 "VRML97.y"
    {
			PixelTextureNode *pixTexture = (PixelTextureNode *)ParserGetCurrentNode();
			pixTexture->initialize();
			ParserPopNode();
		}
    break;

  case 474:
#line 2286 "VRML97.y"
    {
			((PlaneSensorNode *)ParserGetCurrentNode())->setAutoOffset(yyvsp[0].ival);
		}
    break;

  case 475:
#line 2290 "VRML97.y"
    {
			((PlaneSensorNode *)ParserGetCurrentNode())->setEnabled(yyvsp[0].ival);
		}
    break;

  case 476:
#line 2294 "VRML97.y"
    {
			((PlaneSensorNode *)ParserGetCurrentNode())->setMaxPosition(gVec2f);
		}
    break;

  case 477:
#line 2298 "VRML97.y"
    {
			((PlaneSensorNode *)ParserGetCurrentNode())->setMinPosition(gVec2f);
		}
    break;

  case 478:
#line 2302 "VRML97.y"
    {
			((PlaneSensorNode *)ParserGetCurrentNode())->setOffset(gVec3f);
		}
    break;

  case 479:
#line 2309 "VRML97.y"
    {
			PlaneSensorNode *psensor = new PlaneSensorNode();
			psensor->setName(GetDEFName());
			ParserAddNode(psensor);
			ParserPushNode(VRML97_PLANESENSOR, psensor);
		}
    break;

  case 480:
#line 2319 "VRML97.y"
    {
			PlaneSensorNode *psensor = (PlaneSensorNode *)ParserGetCurrentNode();
			psensor->initialize();
			ParserPopNode();
		}
    break;

  case 483:
#line 2340 "VRML97.y"
    {
			((PointLightNode *)ParserGetCurrentNode())->setAmbientIntensity(yyvsp[0].fval);
		}
    break;

  case 484:
#line 2344 "VRML97.y"
    {
			((PointLightNode *)ParserGetCurrentNode())->setAttenuation(gVec3f);
		}
    break;

  case 485:
#line 2348 "VRML97.y"
    {
			((PointLightNode *)ParserGetCurrentNode())->setColor(gColor);
		}
    break;

  case 486:
#line 2352 "VRML97.y"
    {
			((PointLightNode *)ParserGetCurrentNode())->setIntensity(yyvsp[0].fval);
		}
    break;

  case 487:
#line 2356 "VRML97.y"
    {
			((PointLightNode *)ParserGetCurrentNode())->setLocation(gVec3f);
		}
    break;

  case 488:
#line 2360 "VRML97.y"
    {
			((PointLightNode *)ParserGetCurrentNode())->setOn(yyvsp[0].ival);
		}
    break;

  case 489:
#line 2364 "VRML97.y"
    {
			((PointLightNode *)ParserGetCurrentNode())->setRadius(yyvsp[0].fval);
		}
    break;

  case 490:
#line 2371 "VRML97.y"
    {
			PointLightNode *pointLight = new PointLightNode();
			pointLight->setName(GetDEFName());
			ParserAddNode(pointLight);
			ParserPushNode(VRML97_POINTLIGHT, pointLight);
		}
    break;

  case 491:
#line 2381 "VRML97.y"
    {
			PointLightNode *pointLight = (PointLightNode *)ParserGetCurrentNode();
			pointLight->initialize();
			ParserPopNode();
		}
    break;

  case 500:
#line 2411 "VRML97.y"
    {
			PointSetNode *pset = new PointSetNode();
			pset->setName(GetDEFName());
			ParserAddNode(pset);
			ParserPushNode(VRML97_POINTSET, pset);
		}
    break;

  case 501:
#line 2421 "VRML97.y"
    {
			PointSetNode *pset = (PointSetNode *)ParserGetCurrentNode();
			pset->initialize();
			ParserPopNode();
		}
    break;

  case 504:
#line 2441 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 505:
#line 2445 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 506:
#line 2449 "VRML97.y"
    {
		}
    break;

  case 507:
#line 2455 "VRML97.y"
    {
			PositionInterpolatorNode *posInterp = new PositionInterpolatorNode();
			posInterp->setName(GetDEFName());
			ParserAddNode(posInterp);
			ParserPushNode(VRML97_POSITIONINTERPOLATOR, posInterp);
		}
    break;

  case 508:
#line 2465 "VRML97.y"
    {
			PositionInterpolatorNode *posInterp = (PositionInterpolatorNode *)ParserGetCurrentNode();
			posInterp->initialize();
			ParserPopNode();
		}
    break;

  case 511:
#line 2485 "VRML97.y"
    {
			((ProximitySensorNode *)ParserGetCurrentNode())->setCenter(gVec3f);
		}
    break;

  case 512:
#line 2489 "VRML97.y"
    {
			((ProximitySensorNode *)ParserGetCurrentNode())->setSize(gVec3f);
		}
    break;

  case 513:
#line 2493 "VRML97.y"
    {
			((ProximitySensorNode *)ParserGetCurrentNode())->setEnabled(yyvsp[0].ival);
		}
    break;

  case 514:
#line 2500 "VRML97.y"
    {
			ProximitySensorNode *psensor = new ProximitySensorNode();
			psensor->setName(GetDEFName());
			ParserAddNode(psensor);
			ParserPushNode(VRML97_PROXIMITYSENSOR, psensor);
		}
    break;

  case 515:
#line 2510 "VRML97.y"
    {
			ProximitySensorNode *psensor = (ProximitySensorNode *)ParserGetCurrentNode();
			psensor->initialize();
			ParserPopNode();
		}
    break;

  case 518:
#line 2530 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 519:
#line 2534 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 520:
#line 2538 "VRML97.y"
    {
		}
    break;

  case 521:
#line 2544 "VRML97.y"
    {
			ScalarInterpolatorNode *scalarInterp = new ScalarInterpolatorNode();
			scalarInterp->setName(GetDEFName());
			ParserAddNode(scalarInterp);
			ParserPushNode(VRML97_SCALARINTERPOLATOR, scalarInterp);
		}
    break;

  case 522:
#line 2554 "VRML97.y"
    {
			ScalarInterpolatorNode *scalarInterp = (ScalarInterpolatorNode *)ParserGetCurrentNode();
			scalarInterp->initialize();
			ParserPopNode();
		}
    break;

  case 525:
#line 2574 "VRML97.y"
    {
			ParserPushNode(VRML97_SCRIPT_URL, ParserGetCurrentNode());
		}
    break;

  case 526:
#line 2581 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 527:
#line 2585 "VRML97.y"
    {
			((ScriptNode *)ParserGetCurrentNode())->setDirectOutput(yyvsp[0].ival);
		}
    break;

  case 528:
#line 2589 "VRML97.y"
    {
			((ScriptNode *)ParserGetCurrentNode())->setMustEvaluate(yyvsp[0].ival);
		}
    break;

  case 529:
#line 2598 "VRML97.y"
    {
			SFBool *value = new SFBool();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 530:
#line 2604 "VRML97.y"
    {
			SFFloat *value = new SFFloat();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 531:
#line 2610 "VRML97.y"
    {
			SFInt32 *value = new SFInt32();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 532:
#line 2616 "VRML97.y"
    {
			SFTime *value = new SFTime();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 533:
#line 2622 "VRML97.y"
    {
			SFRotation *value = new SFRotation();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 534:
#line 2636 "VRML97.y"
    {
			SFColor *value = new SFColor();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 535:
#line 2642 "VRML97.y"
    {
			SFImage *value = new SFImage();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 536:
#line 2648 "VRML97.y"
    {
			SFString *value = new SFString();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 537:
#line 2654 "VRML97.y"
    {
			SFVec2f *value = new SFVec2f();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 538:
#line 2660 "VRML97.y"
    {
			SFVec3f *value = new SFVec3f();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 539:
#line 2671 "VRML97.y"
    {
			MFFloat *value = new MFFloat();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 540:
#line 2677 "VRML97.y"
    {
			MFInt32 *value = new MFInt32();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 541:
#line 2683 "VRML97.y"
    {
			MFTime *value = new MFTime();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 542:
#line 2689 "VRML97.y"
    {
			MFRotation *value = new MFRotation();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 543:
#line 2703 "VRML97.y"
    {
			MFColor *value = new MFColor();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 544:
#line 2709 "VRML97.y"
    {
			MFString *value = new MFString();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 545:
#line 2715 "VRML97.y"
    {
			MFVec2f *value = new MFVec2f();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 546:
#line 2721 "VRML97.y"
    {
			MFVec3f *value = new MFVec3f();
			((ScriptNode *)ParserGetCurrentNode())->addEventIn(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 547:
#line 2732 "VRML97.y"
    {
			SFBool *value = new SFBool();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 548:
#line 2738 "VRML97.y"
    {
			SFFloat *value = new SFFloat();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 549:
#line 2744 "VRML97.y"
    {
			SFInt32 *value = new SFInt32();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 550:
#line 2750 "VRML97.y"
    {
			SFTime *value = new SFTime();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 551:
#line 2756 "VRML97.y"
    {
			SFRotation *value = new SFRotation();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 552:
#line 2770 "VRML97.y"
    {
			SFColor *value = new SFColor();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 553:
#line 2776 "VRML97.y"
    {
			SFImage *value = new SFImage();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 554:
#line 2782 "VRML97.y"
    {
			SFString *value = new SFString();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 555:
#line 2788 "VRML97.y"
    {
			SFVec2f *value = new SFVec2f();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 556:
#line 2794 "VRML97.y"
    {
			SFVec3f *value = new SFVec3f();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 557:
#line 2805 "VRML97.y"
    {
			MFFloat *value = new MFFloat();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 558:
#line 2811 "VRML97.y"
    {
			MFInt32 *value = new MFInt32();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 559:
#line 2817 "VRML97.y"
    {
			MFTime *value = new MFTime();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 560:
#line 2823 "VRML97.y"
    {
			MFRotation *value = new MFRotation();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 561:
#line 2837 "VRML97.y"
    {
			MFColor *value = new MFColor();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 562:
#line 2843 "VRML97.y"
    {
			MFString *value = new MFString();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 563:
#line 2849 "VRML97.y"
    {
			MFVec2f *value = new MFVec2f();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 564:
#line 2855 "VRML97.y"
    {
			MFVec3f *value = new MFVec3f();
			((ScriptNode *)ParserGetCurrentNode())->addEventOut(yyvsp[0].sval, value);
			delete[] yyvsp[0].sval;
		}
    break;

  case 565:
#line 2866 "VRML97.y"
    {
			SFBool *value = new SFBool(yyvsp[0].ival);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 566:
#line 2872 "VRML97.y"
    {
			SFFloat *value = new SFFloat(yyvsp[0].fval);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 567:
#line 2878 "VRML97.y"
    {
			SFInt32 *value = new SFInt32(yyvsp[0].ival);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 568:
#line 2884 "VRML97.y"
    {
			SFTime *value = new SFTime(yyvsp[0].fval);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 569:
#line 2890 "VRML97.y"
    {
			SFRotation *value = new SFRotation(gRotation);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 570:
#line 2897 "VRML97.y"
    {
			SFNode *value = new SFNode();
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 571:
#line 2904 "VRML97.y"
    {
			Node *node = GetParserObject()->findNode(yyvsp[0].sval);
			SFNode *value = new SFNode(node);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-2].sval, value);
			delete[] yyvsp[-2].sval; delete[] yyvsp[0].sval;
		}
    break;

  case 572:
#line 2912 "VRML97.y"
    {
			SFColor *value = new SFColor(gColor);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 573:
#line 2926 "VRML97.y"
    {
			SFString *value = new SFString(yyvsp[0].sval);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 574:
#line 2932 "VRML97.y"
    {
			SFVec2f *value = new SFVec2f(gVec2f);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 575:
#line 2938 "VRML97.y"
    {
			SFVec3f *value = new SFVec3f(gVec3f);
			((ScriptNode *)ParserGetCurrentNode())->addField(yyvsp[-1].sval, value);
			delete[] yyvsp[-1].sval;
		}
    break;

  case 576:
#line 2948 "VRML97.y"
    {
			ScriptNode *script = new ScriptNode();
			script->setName(GetDEFName());
			ParserAddNode(script);
			ParserPushNode(VRML97_SCRIPT, script);
		}
    break;

  case 577:
#line 2958 "VRML97.y"
    {
			ScriptNode *script = (ScriptNode *)ParserGetCurrentNode();
			script->initialize();
			ParserPopNode();
		}
    break;

  case 586:
#line 2988 "VRML97.y"
    {
			ShapeNode *shape = new ShapeNode();
			shape->setName(GetDEFName());
			ParserAddNode(shape);
			ParserPushNode(VRML97_SHAPE, shape);
		}
    break;

  case 587:
#line 2998 "VRML97.y"
    {
			ShapeNode *shape = (ShapeNode *)ParserGetCurrentNode();
			shape->initialize();
			ParserPopNode();
		}
    break;

  case 590:
#line 3018 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setDirection(gVec3f);
		}
    break;

  case 591:
#line 3022 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setIntensity(yyvsp[0].fval);
		}
    break;

  case 592:
#line 3026 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setLocation(gVec3f);
		}
    break;

  case 593:
#line 3030 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setMinBack(yyvsp[0].fval);
		}
    break;

  case 594:
#line 3034 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setMaxFront(yyvsp[0].fval);
		}
    break;

  case 595:
#line 3038 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setMinBack(yyvsp[0].fval);
		}
    break;

  case 596:
#line 3042 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setMinFront(yyvsp[0].fval);
		}
    break;

  case 597:
#line 3046 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setPriority(yyvsp[0].fval);
		}
    break;

  case 602:
#line 3054 "VRML97.y"
    {
			((SoundNode *)ParserGetCurrentNode())->setSpatialize(yyvsp[0].ival);
		}
    break;

  case 603:
#line 3061 "VRML97.y"
    {
			SoundNode *sound = new SoundNode();
			sound->setName(GetDEFName());
			ParserAddNode(sound);
			ParserPushNode(VRML97_SOUND, sound);
		}
    break;

  case 604:
#line 3071 "VRML97.y"
    {
			SoundNode *sound = (SoundNode *)ParserGetCurrentNode();
			sound->initialize();
			ParserPopNode();
		}
    break;

  case 607:
#line 3091 "VRML97.y"
    {
			((SphereNode *)ParserGetCurrentNode())->setRadius(yyvsp[0].fval);
		}
    break;

  case 608:
#line 3098 "VRML97.y"
    {
			SphereNode *sphere = new SphereNode();
			sphere->setName(GetDEFName());
			ParserAddNode(sphere);
			ParserPushNode(VRML97_SPHERE, sphere);
		}
    break;

  case 609:
#line 3108 "VRML97.y"
    {
			SphereNode *sphere = (SphereNode *)ParserGetCurrentNode();
			sphere->initialize();
			ParserPopNode();
		}
    break;

  case 612:
#line 3128 "VRML97.y"
    {
			((SphereSensorNode *)ParserGetCurrentNode())->setAutoOffset(yyvsp[0].ival);
		}
    break;

  case 613:
#line 3132 "VRML97.y"
    {
			((SphereSensorNode *)ParserGetCurrentNode())->setEnabled(yyvsp[0].ival);
		}
    break;

  case 614:
#line 3136 "VRML97.y"
    {
			((SphereSensorNode *)ParserGetCurrentNode())->setOffset(gRotation);
		}
    break;

  case 615:
#line 3143 "VRML97.y"
    {
			SphereSensorNode *spsensor = new SphereSensorNode();
			spsensor->setName(GetDEFName());
			ParserAddNode(spsensor);
			ParserPushNode(VRML97_SPHERESENSOR, spsensor);
		}
    break;

  case 616:
#line 3153 "VRML97.y"
    {
			SphereSensorNode *spsensor = (SphereSensorNode *)ParserGetCurrentNode();
			spsensor->initialize();
			ParserPopNode();
		}
    break;

  case 619:
#line 3173 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setAmbientIntensity(yyvsp[0].fval);
		}
    break;

  case 620:
#line 3177 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setAttenuation(gVec3f);
		}
    break;

  case 621:
#line 3181 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setBeamWidth(yyvsp[0].fval);
		}
    break;

  case 622:
#line 3185 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setColor(gColor);
		}
    break;

  case 623:
#line 3189 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setCutOffAngle(yyvsp[0].fval);
		}
    break;

  case 624:
#line 3193 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setDirection(gVec3f);
		}
    break;

  case 625:
#line 3197 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setIntensity(yyvsp[0].fval);
		}
    break;

  case 626:
#line 3201 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setLocation(gVec3f);
		}
    break;

  case 627:
#line 3205 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setOn(yyvsp[0].ival);
		}
    break;

  case 628:
#line 3209 "VRML97.y"
    {
			((SpotLightNode *)ParserGetCurrentNode())->setRadius(yyvsp[0].fval);
		}
    break;

  case 629:
#line 3216 "VRML97.y"
    {
			SpotLightNode *spotLight = new SpotLightNode();
			spotLight->setName(GetDEFName());
			ParserAddNode(spotLight);
			ParserPushNode(VRML97_SPOTLIGHT, spotLight);
		}
    break;

  case 630:
#line 3226 "VRML97.y"
    {
			SpotLightNode *spotLight = (SpotLightNode *)ParserGetCurrentNode();
			spotLight->initialize();
			ParserPopNode();
		}
    break;

  case 633:
#line 3246 "VRML97.y"
    {
			ParserPushNode(VRML97_SWITCH_CHOICE, ParserGetCurrentNode());
		}
    break;

  case 634:
#line 3253 "VRML97.y"
    {
			ParserPopNode();							
		}
    break;

  case 635:
#line 3257 "VRML97.y"
    {
			ParserPopNode();							
		}
    break;

  case 636:
#line 3261 "VRML97.y"
    {
			((SwitchNode *)ParserGetCurrentNode())->setWhichChoice(yyvsp[0].ival);
		}
    break;

  case 637:
#line 3269 "VRML97.y"
    {   
			SwitchNode *switchNode = new SwitchNode();
			switchNode->setName(GetDEFName());
			ParserAddNode(switchNode);
			ParserPushNode(VRML97_SWITCH, switchNode);
		}
    break;

  case 638:
#line 3279 "VRML97.y"
    {
			SwitchNode *switchNode = (SwitchNode *)ParserGetCurrentNode();
			switchNode->initialize();
			ParserPopNode();
		}
    break;

  case 641:
#line 3299 "VRML97.y"
    {
			ParserPushNode(VRML97_TEXT_STRING, ParserGetCurrentNode());
		}
    break;

  case 642:
#line 3306 "VRML97.y"
    {
			ParserPushNode(VRML97_TEXT_LENGTH, ParserGetCurrentNode());
		}
    break;

  case 643:
#line 3313 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 647:
#line 3320 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 648:
#line 3324 "VRML97.y"
    {
			((TextNode *)ParserGetCurrentNode())->setMaxExtent(yyvsp[0].fval);
		}
    break;

  case 649:
#line 3332 "VRML97.y"
    {
			TextNode *text = new TextNode();
			text->setName(GetDEFName());
			ParserAddNode(text);
			ParserPushNode(VRML97_TEXT, text);
		}
    break;

  case 650:
#line 3342 "VRML97.y"
    {
			TextNode *text = (TextNode *)ParserGetCurrentNode();
			text->initialize();
			ParserPopNode();
		}
    break;

  case 654:
#line 3367 "VRML97.y"
    {
			TextureCoordinateNode *texCoord = new TextureCoordinateNode();
			texCoord->setName(GetDEFName());
			ParserAddNode(texCoord);
			ParserPushNode(VRML97_TEXTURECOODINATE, texCoord);
		}
    break;

  case 655:
#line 3377 "VRML97.y"
    {
			TextureCoordinateNode *texCoord = (TextureCoordinateNode *)ParserGetCurrentNode();
			texCoord->initialize();
			ParserPopNode();
		}
    break;

  case 658:
#line 3397 "VRML97.y"
    {
			((TextureTransformNode *)ParserGetCurrentNode())->setCenter(gVec2f);
		}
    break;

  case 659:
#line 3401 "VRML97.y"
    {
			((TextureTransformNode *)ParserGetCurrentNode())->setRotation(yyvsp[0].fval);
		}
    break;

  case 660:
#line 3405 "VRML97.y"
    {
			((TextureTransformNode *)ParserGetCurrentNode())->setScale(gVec2f);
		}
    break;

  case 661:
#line 3409 "VRML97.y"
    {
			((TextureTransformNode *)ParserGetCurrentNode())->setTranslation(gVec2f);
		}
    break;

  case 662:
#line 3417 "VRML97.y"
    {
			TextureTransformNode *textureTransform = new TextureTransformNode();
			textureTransform->setName(GetDEFName());
			ParserAddNode(textureTransform);
			ParserPushNode(VRML97_TEXTURETRANSFORM, textureTransform);
		}
    break;

  case 663:
#line 3427 "VRML97.y"
    {
			TextureTransformNode *textureTransform = (TextureTransformNode *)ParserGetCurrentNode();
			textureTransform->initialize();
			ParserPopNode();
		}
    break;

  case 666:
#line 3447 "VRML97.y"
    {
			((TimeSensorNode *)ParserGetCurrentNode())->setCycleInterval(yyvsp[0].fval);
		}
    break;

  case 667:
#line 3451 "VRML97.y"
    {
			((TimeSensorNode *)ParserGetCurrentNode())->setEnabled(yyvsp[0].ival);
		}
    break;

  case 668:
#line 3455 "VRML97.y"
    {
			((TimeSensorNode *)ParserGetCurrentNode())->setLoop(yyvsp[0].ival);
		}
    break;

  case 669:
#line 3459 "VRML97.y"
    {
			((TimeSensorNode *)ParserGetCurrentNode())->setStartTime(yyvsp[0].fval);
		}
    break;

  case 670:
#line 3463 "VRML97.y"
    {
			((TimeSensorNode *)ParserGetCurrentNode())->setStopTime(yyvsp[0].fval);
		}
    break;

  case 671:
#line 3471 "VRML97.y"
    {
			TimeSensorNode *tsensor = new TimeSensorNode();
			tsensor->setName(GetDEFName());
			ParserAddNode(tsensor);
			ParserPushNode(VRML97_TIMESENSOR, tsensor);
		}
    break;

  case 672:
#line 3481 "VRML97.y"
    {
			TimeSensorNode *tsensor = (TimeSensorNode *)ParserGetCurrentNode();
			tsensor->initialize();
			ParserPopNode();
		}
    break;

  case 675:
#line 3501 "VRML97.y"
    {
			((TouchSensorNode *)ParserGetCurrentNode())->setEnabled(yyvsp[0].ival);
		}
    break;

  case 676:
#line 3508 "VRML97.y"
    {
			TouchSensorNode *touchSensor = new TouchSensorNode();
			touchSensor->setName(GetDEFName());
			ParserAddNode(touchSensor);
			ParserPushNode(VRML97_TOUCHSENSOR, touchSensor);
		}
    break;

  case 677:
#line 3518 "VRML97.y"
    {
			TouchSensorNode *touchSensor = (TouchSensorNode *)ParserGetCurrentNode();
			touchSensor->initialize();
			ParserPopNode();
		}
    break;

  case 681:
#line 3539 "VRML97.y"
    {
			((TransformNode *)ParserGetCurrentNode())->setCenter(gVec3f);
		}
    break;

  case 682:
#line 3543 "VRML97.y"
    {
			((TransformNode *)ParserGetCurrentNode())->setRotation(gRotation);
		}
    break;

  case 683:
#line 3547 "VRML97.y"
    {
			((TransformNode *)ParserGetCurrentNode())->setScale(gVec3f);
		}
    break;

  case 684:
#line 3551 "VRML97.y"
    {
			((TransformNode *)ParserGetCurrentNode())->setScaleOrientation(gRotation);
		}
    break;

  case 685:
#line 3555 "VRML97.y"
    {
			((TransformNode *)ParserGetCurrentNode())->setTranslation(gVec3f);
		}
    break;

  case 688:
#line 3564 "VRML97.y"
    {
			TransformNode *transform = new TransformNode();
			transform->setName(GetDEFName());
			ParserAddNode(transform);
			ParserPushNode(VRML97_TRANSFORM, transform);
		}
    break;

  case 689:
#line 3574 "VRML97.y"
    {
			TransformNode *transform = (TransformNode *)ParserGetCurrentNode();
			transform->initialize();
			ParserPopNode();
		}
    break;

  case 692:
#line 3594 "VRML97.y"
    {
			((ViewpointNode *)ParserGetCurrentNode())->setFieldOfView(yyvsp[0].fval);
		}
    break;

  case 693:
#line 3598 "VRML97.y"
    {
			((ViewpointNode *)ParserGetCurrentNode())->setJump(yyvsp[0].ival);
		}
    break;

  case 694:
#line 3602 "VRML97.y"
    {
			((ViewpointNode *)ParserGetCurrentNode())->setOrientation(gRotation);
		}
    break;

  case 695:
#line 3606 "VRML97.y"
    {
			((ViewpointNode *)ParserGetCurrentNode())->setPosition(gVec3f);
		}
    break;

  case 696:
#line 3610 "VRML97.y"
    {
			((ViewpointNode *)ParserGetCurrentNode())->setDescription(yyvsp[0].sval);
		}
    break;

  case 697:
#line 3617 "VRML97.y"
    {
			ViewpointNode *viewpoint = new ViewpointNode();
			viewpoint->setName(GetDEFName());
			ParserAddNode(viewpoint);
			ParserPushNode(VRML97_VIEWPOINT, viewpoint);
		}
    break;

  case 698:
#line 3627 "VRML97.y"
    {
			ViewpointNode *viewpoint = (ViewpointNode *)ParserGetCurrentNode();
			viewpoint->initialize();
			ParserPopNode();
		}
    break;

  case 701:
#line 3647 "VRML97.y"
    {
			((VisibilitySensorNode *)ParserGetCurrentNode())->setCenter(gVec3f);
		}
    break;

  case 702:
#line 3651 "VRML97.y"
    {
			((VisibilitySensorNode *)ParserGetCurrentNode())->setEnabled(yyvsp[0].ival);
		}
    break;

  case 703:
#line 3655 "VRML97.y"
    {
			((VisibilitySensorNode *)ParserGetCurrentNode())->setSize(gVec3f);
		}
    break;

  case 704:
#line 3662 "VRML97.y"
    {
			VisibilitySensorNode *vsensor = new VisibilitySensorNode();
			vsensor->setName(GetDEFName());
			ParserAddNode(vsensor);
			ParserPushNode(VRML97_VISIBILITYSENSOR, vsensor);
		}
    break;

  case 705:
#line 3672 "VRML97.y"
    {
			VisibilitySensorNode *vsensor = (VisibilitySensorNode *)ParserGetCurrentNode();
			vsensor->initialize();
			ParserPopNode();
		}
    break;

  case 708:
#line 3692 "VRML97.y"
    {
			ParserPushNode(VRML97_WORLDINFO_INFO, ParserGetCurrentNode());
		}
    break;

  case 709:
#line 3699 "VRML97.y"
    {
			ParserPopNode();
		}
    break;

  case 710:
#line 3703 "VRML97.y"
    {
			((WorldInfoNode *)ParserGetCurrentNode())->setTitle(yyvsp[0].sval);
		}
    break;

  case 711:
#line 3710 "VRML97.y"
    {
			WorldInfoNode *worldInfo = new WorldInfoNode();
			worldInfo->setName(GetDEFName());
			ParserAddNode(worldInfo);
			ParserPushNode(VRML97_WORLDINFO, worldInfo);
		}
    break;

  case 712:
#line 3720 "VRML97.y"
    {
			WorldInfoNode *worldInfo = (WorldInfoNode *)ParserGetCurrentNode();
			worldInfo->initialize();
			ParserPopNode();
		}
    break;


    }

/* Line 999 of yacc.c.  */
#line 6223 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 3727 "VRML97.y"


