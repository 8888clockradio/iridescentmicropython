/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_GLSLANG_TAB_AUTOGEN_H_INCLUDED
#define YY_YY_GLSLANG_TAB_AUTOGEN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
#    define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */

#define YYLTYPE TSourceLoc
#define YYLTYPE_IS_DECLARED 1
#define YYLTYPE_IS_TRIVIAL 1

/* Token type.  */
#ifndef YYTOKENTYPE
#    define YYTOKENTYPE
enum yytokentype
{
    INVARIANT                 = 258,
    PRECISE                   = 259,
    HIGH_PRECISION            = 260,
    MEDIUM_PRECISION          = 261,
    LOW_PRECISION             = 262,
    PRECISION                 = 263,
    ATTRIBUTE                 = 264,
    CONST_QUAL                = 265,
    BOOL_TYPE                 = 266,
    FLOAT_TYPE                = 267,
    INT_TYPE                  = 268,
    UINT_TYPE                 = 269,
    BREAK                     = 270,
    CONTINUE                  = 271,
    DO                        = 272,
    ELSE                      = 273,
    FOR                       = 274,
    IF                        = 275,
    DISCARD                   = 276,
    RETURN                    = 277,
    SWITCH                    = 278,
    CASE                      = 279,
    DEFAULT                   = 280,
    BVEC2                     = 281,
    BVEC3                     = 282,
    BVEC4                     = 283,
    IVEC2                     = 284,
    IVEC3                     = 285,
    IVEC4                     = 286,
    VEC2                      = 287,
    VEC3                      = 288,
    VEC4                      = 289,
    UVEC2                     = 290,
    UVEC3                     = 291,
    UVEC4                     = 292,
    MATRIX2                   = 293,
    MATRIX3                   = 294,
    MATRIX4                   = 295,
    IN_QUAL                   = 296,
    OUT_QUAL                  = 297,
    INOUT_QUAL                = 298,
    UNIFORM                   = 299,
    BUFFER                    = 300,
    VARYING                   = 301,
    MATRIX2x3                 = 302,
    MATRIX3x2                 = 303,
    MATRIX2x4                 = 304,
    MATRIX4x2                 = 305,
    MATRIX3x4                 = 306,
    MATRIX4x3                 = 307,
    SAMPLE                    = 308,
    CENTROID                  = 309,
    FLAT                      = 310,
    SMOOTH                    = 311,
    NOPERSPECTIVE             = 312,
    PATCH                     = 313,
    READONLY                  = 314,
    WRITEONLY                 = 315,
    COHERENT                  = 316,
    RESTRICT                  = 317,
    VOLATILE                  = 318,
    SHARED                    = 319,
    STRUCT                    = 320,
    VOID_TYPE                 = 321,
    WHILE                     = 322,
    SAMPLER2D                 = 323,
    SAMPLERCUBE               = 324,
    SAMPLER_EXTERNAL_OES      = 325,
    SAMPLER2DRECT             = 326,
    SAMPLER2DARRAY            = 327,
    ISAMPLER2D                = 328,
    ISAMPLER3D                = 329,
    ISAMPLERCUBE              = 330,
    ISAMPLER2DARRAY           = 331,
    USAMPLER2D                = 332,
    USAMPLER3D                = 333,
    USAMPLERCUBE              = 334,
    USAMPLER2DARRAY           = 335,
    SAMPLER2DMS               = 336,
    ISAMPLER2DMS              = 337,
    USAMPLER2DMS              = 338,
    SAMPLER2DMSARRAY          = 339,
    ISAMPLER2DMSARRAY         = 340,
    USAMPLER2DMSARRAY         = 341,
    SAMPLER3D                 = 342,
    SAMPLER3DRECT             = 343,
    SAMPLER2DSHADOW           = 344,
    SAMPLERCUBESHADOW         = 345,
    SAMPLER2DARRAYSHADOW      = 346,
    SAMPLERVIDEOWEBGL         = 347,
    SAMPLERCUBEARRAYOES       = 348,
    SAMPLERCUBEARRAYSHADOWOES = 349,
    ISAMPLERCUBEARRAYOES      = 350,
    USAMPLERCUBEARRAYOES      = 351,
    SAMPLERCUBEARRAYEXT       = 352,
    SAMPLERCUBEARRAYSHADOWEXT = 353,
    ISAMPLERCUBEARRAYEXT      = 354,
    USAMPLERCUBEARRAYEXT      = 355,
    SAMPLERBUFFER             = 356,
    ISAMPLERBUFFER            = 357,
    USAMPLERBUFFER            = 358,
    SAMPLEREXTERNAL2DY2YEXT   = 359,
    IMAGE2D                   = 360,
    IIMAGE2D                  = 361,
    UIMAGE2D                  = 362,
    IMAGE3D                   = 363,
    IIMAGE3D                  = 364,
    UIMAGE3D                  = 365,
    IMAGE2DARRAY              = 366,
    IIMAGE2DARRAY             = 367,
    UIMAGE2DARRAY             = 368,
    IMAGECUBE                 = 369,
    IIMAGECUBE                = 370,
    UIMAGECUBE                = 371,
    IMAGECUBEARRAYOES         = 372,
    IIMAGECUBEARRAYOES        = 373,
    UIMAGECUBEARRAYOES        = 374,
    IMAGECUBEARRAYEXT         = 375,
    IIMAGECUBEARRAYEXT        = 376,
    UIMAGECUBEARRAYEXT        = 377,
    IMAGEBUFFER               = 378,
    IIMAGEBUFFER              = 379,
    UIMAGEBUFFER              = 380,
    ATOMICUINT                = 381,
    PIXELLOCALANGLE           = 382,
    IPIXELLOCALANGLE          = 383,
    UPIXELLOCALANGLE          = 384,
    LAYOUT                    = 385,
    YUVCSCSTANDARDEXT         = 386,
    YUVCSCSTANDARDEXTCONSTANT = 387,
    IDENTIFIER                = 388,
    TYPE_NAME                 = 389,
    FLOATCONSTANT             = 390,
    INTCONSTANT               = 391,
    UINTCONSTANT              = 392,
    BOOLCONSTANT              = 393,
    FIELD_SELECTION           = 394,
    LEFT_OP                   = 395,
    RIGHT_OP                  = 396,
    INC_OP                    = 397,
    DEC_OP                    = 398,
    LE_OP                     = 399,
    GE_OP                     = 400,
    EQ_OP                     = 401,
    NE_OP                     = 402,
    AND_OP                    = 403,
    OR_OP                     = 404,
    XOR_OP                    = 405,
    MUL_ASSIGN                = 406,
    DIV_ASSIGN                = 407,
    ADD_ASSIGN                = 408,
    MOD_ASSIGN                = 409,
    LEFT_ASSIGN               = 410,
    RIGHT_ASSIGN              = 411,
    AND_ASSIGN                = 412,
    XOR_ASSIGN                = 413,
    OR_ASSIGN                 = 414,
    SUB_ASSIGN                = 415,
    LEFT_PAREN                = 416,
    RIGHT_PAREN               = 417,
    LEFT_BRACKET              = 418,
    RIGHT_BRACKET             = 419,
    LEFT_BRACE                = 420,
    RIGHT_BRACE               = 421,
    DOT                       = 422,
    COMMA                     = 423,
    COLON                     = 424,
    EQUAL                     = 425,
    SEMICOLON                 = 426,
    BANG                      = 427,
    DASH                      = 428,
    TILDE                     = 429,
    PLUS                      = 430,
    STAR                      = 431,
    SLASH                     = 432,
    PERCENT                   = 433,
    LEFT_ANGLE                = 434,
    RIGHT_ANGLE               = 435,
    VERTICAL_BAR              = 436,
    CARET                     = 437,
    AMPERSAND                 = 438,
    QUESTION                  = 439
};
#endif

/* Value type.  */
#if !defined YYSTYPE && !defined YYSTYPE_IS_DECLARED

union YYSTYPE
{

    struct
    {
        union
        {
            const char *string;  // pool allocated.
            float f;
            int i;
            unsigned int u;
            bool b;
        };
        const TSymbol *symbol;
    } lex;
    struct
    {
        TOperator op;
        union
        {
            TIntermNode *intermNode;
            TIntermNodePair nodePair;
            TIntermTyped *intermTypedNode;
            TIntermAggregate *intermAggregate;
            TIntermBlock *intermBlock;
            TIntermDeclaration *intermDeclaration;
            TIntermFunctionPrototype *intermFunctionPrototype;
            TIntermSwitch *intermSwitch;
            TIntermCase *intermCase;
        };
        union
        {
            TVector<unsigned int> *arraySizes;
            TTypeSpecifierNonArray typeSpecifierNonArray;
            TPublicType type;
            TPrecision precision;
            TLayoutQualifier layoutQualifier;
            TQualifier qualifier;
            TFunction *function;
            TFunctionLookup *functionLookup;
            TParameter param;
            TDeclarator *declarator;
            TDeclaratorList *declaratorList;
            TFieldList *fieldList;
            TQualifierWrapperBase *qualifierWrapper;
            TTypeQualifierBuilder *typeQualifierBuilder;
        };
    } interm;
};

typedef union YYSTYPE YYSTYPE;
#    define YYSTYPE_IS_TRIVIAL 1
#    define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if !defined YYLTYPE && !defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
    int first_line;
    int first_column;
    int last_line;
    int last_column;
};
#    define YYLTYPE_IS_DECLARED 1
#    define YYLTYPE_IS_TRIVIAL 1
#endif

int yyparse(TParseContext *context, void *scanner);

#endif /* !YY_YY_GLSLANG_TAB_AUTOGEN_H_INCLUDED  */
