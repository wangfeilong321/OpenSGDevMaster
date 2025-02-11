/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2003 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGGLEXT_H_
#define _OSGGLEXT_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"

#define osgMaxTexImages 16
#define osgMaxTexCoords 8

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#include "OSGGL.h"
#endif


// Defines needed to support some OpenGL extensions
// There's no way to get these from OpenGL. 
// The system just has to make sure they 
// are only used when the extensions are supported.

// All these are taken verbatim from the nVidia Linux glext.h

typedef char GLchar;

/*---------------------------------------------------------------------*/
/*! \name OpenGL defines needed so things compile with ES              */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_MODELVIEW_MATRIX
#  define GL_MODELVIEW_MATRIX       0x0BA6
#endif
#ifndef GL_MODELVIEW
#  define GL_MODELVIEW              0x1700
#endif
#ifndef GL_MODELVIEW_STACK_DEPTH
#  define GL_MODELVIEW_STACK_DEPTH  0x0BA3
#endif
#ifndef GL_INTENSITY
#  define GL_INTENSITY              0x8049
#endif
#ifndef GL_DIFFUSE
#  define GL_DIFFUSE                0x1201
#endif
#ifndef GL_FILL
#  define GL_FILL                   0x1B02
#endif
#ifndef GL_COPY
#  define GL_COPY                   0x1503
#endif
#ifndef GL_EXP
#  define GL_EXP                    0x0800
#endif
#ifndef GL_MODULATE
#  define GL_MODULATE               0x2100
#endif
#ifndef GL_SMOOTH
#  define GL_SMOOTH                 0x1D01
#endif
#ifndef GL_DECAL
#  define GL_DECAL                  0x2101
#endif
#ifndef GL_2_BYTES
# define GL_2_BYTES                 0x1407
#endif
#ifndef GL_3_BYTES
# define GL_3_BYTES                 0x1408
# endif
# ifndef GL_4_BYTES
# define GL_4_BYTES                 0x1409
#endif
#ifndef GL_LUMINANCE
#define GL_LUMINANCE                0x1909
#endif
#ifndef GL_LUMINANCE_ALPHA
#define GL_LUMINANCE_ALPHA          0x190A
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_secondary_color                                       */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_secondary_color
#define GL_EXT_secondary_color               1
#define GL_COLOR_SUM_EXT                     0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT       0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT    0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT    0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT  0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT         0x845E
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_multitexture                                          */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_multitexture
#define GL_ARB_multitexture               1
#define GL_TEXTURE0_ARB                   0x84C0
#define GL_TEXTURE1_ARB                   0x84C1
#define GL_TEXTURE2_ARB                   0x84C2
#define GL_TEXTURE3_ARB                   0x84C3
#define GL_TEXTURE4_ARB                   0x84C4
#define GL_TEXTURE5_ARB                   0x84C5
#define GL_TEXTURE6_ARB                   0x84C6
#define GL_TEXTURE7_ARB                   0x84C7
#define GL_TEXTURE8_ARB                   0x84C8
#define GL_TEXTURE9_ARB                   0x84C9
#define GL_TEXTURE10_ARB                  0x84CA
#define GL_TEXTURE11_ARB                  0x84CB
#define GL_TEXTURE12_ARB                  0x84CC
#define GL_TEXTURE13_ARB                  0x84CD
#define GL_TEXTURE14_ARB                  0x84CE
#define GL_TEXTURE15_ARB                  0x84CF
#define GL_TEXTURE16_ARB                  0x84D0
#define GL_TEXTURE17_ARB                  0x84D1
#define GL_TEXTURE18_ARB                  0x84D2
#define GL_TEXTURE19_ARB                  0x84D3
#define GL_TEXTURE20_ARB                  0x84D4
#define GL_TEXTURE21_ARB                  0x84D5
#define GL_TEXTURE22_ARB                  0x84D6
#define GL_TEXTURE23_ARB                  0x84D7
#define GL_TEXTURE24_ARB                  0x84D8
#define GL_TEXTURE25_ARB                  0x84D9
#define GL_TEXTURE26_ARB                  0x84DA
#define GL_TEXTURE27_ARB                  0x84DB
#define GL_TEXTURE28_ARB                  0x84DC
#define GL_TEXTURE29_ARB                  0x84DD
#define GL_TEXTURE30_ARB                  0x84DE
#define GL_TEXTURE31_ARB                  0x84DF
#define GL_ACTIVE_TEXTURE_ARB             0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB      0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB          0x84E2
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_texture_cube_map                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_texture_cube_map
#define GL_ARB_texture_cube_map            1
#define GL_NORMAL_MAP_ARB                  0x8511
#define GL_REFLECTION_MAP_ARB              0x8512
#define GL_TEXTURE_CUBE_MAP_ARB            0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB    0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB      0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB   0x851C
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_texture_compression                                   */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

// This one is not really checked by the system, as it has no functions
#ifndef GL_ARB_texture_compression
#define GL_ARB_texture_compression            1
#define GL_COMPRESSED_ALPHA_ARB               0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB           0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB     0x84EB
#define GL_COMPRESSED_INTENSITY_ARB           0x84EC
#define GL_COMPRESSED_RGB_ARB                 0x84ED
#define GL_COMPRESSED_RGBA_ARB                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB  0x86A0
#define GL_TEXTURE_COMPRESSED_ARB             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB     0x86A3
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture3D                                             */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture3D
#define GL_EXT_texture3D                  1
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_SKIP_IMAGES_EXT           0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_PACK_IMAGE_HEIGHT_EXT          0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_SKIP_IMAGES_EXT         0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_UNPACK_IMAGE_HEIGHT_EXT        0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_TEXTURE_3D_EXT                 0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_PROXY_TEXTURE_3D_EXT           0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_DEPTH_EXT              0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_TEXTURE_WRAP_R_EXT             0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_MAX_3D_TEXTURE_SIZE_EXT        0x8073
#else
#if defined(GL_EXT_texture3D) && ! defined(GL_TEXTURE_3D)
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_3D                     0x806F
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#endif
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture
#define GL_EXT_texture                    1
#define GL_ALPHA4_EXT                     0x803B
#define GL_ALPHA8_EXT                     0x803C
#define GL_ALPHA12_EXT                    0x803D
#define GL_ALPHA16_EXT                    0x803E
#define GL_LUMINANCE4_EXT                 0x803F
#define GL_LUMINANCE8_EXT                 0x8040
#define GL_LUMINANCE12_EXT                0x8041
#define GL_LUMINANCE16_EXT                0x8042
#define GL_LUMINANCE4_ALPHA4_EXT          0x8043
#define GL_LUMINANCE6_ALPHA2_EXT          0x8044
#define GL_LUMINANCE8_ALPHA8_EXT          0x8045
#define GL_LUMINANCE12_ALPHA4_EXT         0x8046
#define GL_LUMINANCE12_ALPHA12_EXT        0x8047
#define GL_LUMINANCE16_ALPHA16_EXT        0x8048
#define GL_INTENSITY_EXT                  0x8049
#define GL_INTENSITY4_EXT                 0x804A
#define GL_INTENSITY8_EXT                 0x804B
#define GL_INTENSITY12_EXT                0x804C
#define GL_INTENSITY16_EXT                0x804D
#define GL_RGB2_EXT                       0x804E
#define GL_RGB4_EXT                       0x804F
#define GL_RGB5_EXT                       0x8050
#define GL_RGB8_EXT                       0x8051
#define GL_RGB10_EXT                      0x8052
#define GL_RGB12_EXT                      0x8053
#define GL_RGB16_EXT                      0x8054
#define GL_RGBA2_EXT                      0x8055
#define GL_RGBA4_EXT                      0x8056
#define GL_RGB5_A1_EXT                    0x8057
#define GL_RGBA8_EXT                      0x8058
#define GL_RGB10_A2_EXT                   0x8059
#define GL_RGBA12_EXT                     0x805A
#define GL_RGBA16_EXT                     0x805B
#define GL_TEXTURE_RED_SIZE_EXT           0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT         0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT          0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT         0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT     0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT     0x8061
#define GL_REPLACE_EXT                    0x8062
#define GL_PROXY_TEXTURE_1D_EXT           0x8063
#define GL_PROXY_TEXTURE_2D_EXT           0x8064
#define GL_TEXTURE_TOO_LARGE_EXT          0x8065
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_integer                                       */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture_integer
#define GL_EXT_texture_integer            1
#define GL_RGBA32UI_EXT                   0x8D70
#define GL_RGB32UI_EXT                    0x8D71
#define GL_ALPHA32UI_EXT                  0x8D72
#define GL_INTENSITY32UI_EXT              0x8D73
#define GL_LUMINANCE32UI_EXT              0x8D74
#define GL_LUMINANCE_ALPHA32UI_EXT        0x8D75
#define GL_RGBA16UI_EXT                   0x8D76
#define GL_RGB16UI_EXT                    0x8D77
#define GL_ALPHA16UI_EXT                  0x8D78
#define GL_INTENSITY16UI_EXT              0x8D79
#define GL_LUMINANCE16UI_EXT              0x8D7A
#define GL_LUMINANCE_ALPHA16UI_EXT        0x8D7B
#define GL_RGBA8UI_EXT                    0x8D7C
#define GL_RGB8UI_EXT                     0x8D7D
#define GL_ALPHA8UI_EXT                   0x8D7E
#define GL_INTENSITY8UI_EXT               0x8D7F
#define GL_LUMINANCE8UI_EXT               0x8D80
#define GL_LUMINANCE_ALPHA8UI_EXT         0x8D81
#define GL_RGBA32I_EXT                    0x8D82
#define GL_RGB32I_EXT                     0x8D83
#define GL_ALPHA32I_EXT                   0x8D84
#define GL_INTENSITY32I_EXT               0x8D85
#define GL_LUMINANCE32I_EXT               0x8D86
#define GL_LUMINANCE_ALPHA32I_EXT         0x8D87
#define GL_RGBA16I_EXT                    0x8D88
#define GL_RGB16I_EXT                     0x8D89
#define GL_ALPHA16I_EXT                   0x8D8A
#define GL_INTENSITY16I_EXT               0x8D8B
#define GL_LUMINANCE16I_EXT               0x8D8C
#define GL_LUMINANCE_ALPHA16I_EXT         0x8D8D
#define GL_RGBA8I_EXT                     0x8D8E
#define GL_RGB8I_EXT                      0x8D8F
#define GL_ALPHA8I_EXT                    0x8D90
#define GL_INTENSITY8I_EXT                0x8D91
#define GL_LUMINANCE8I_EXT                0x8D92
#define GL_LUMINANCE_ALPHA8I_EXT          0x8D93
#define GL_RED_INTEGER_EXT                0x8D94
#define GL_GREEN_INTEGER_EXT              0x8D95
#define GL_BLUE_INTEGER_EXT               0x8D96
#define GL_ALPHA_INTEGER_EXT              0x8D97
#define GL_RGB_INTEGER_EXT                0x8D98
#define GL_RGBA_INTEGER_EXT               0x8D99
#define GL_BGR_INTEGER_EXT                0x8D9A
#define GL_BGRA_INTEGER_EXT               0x8D9B
#define GL_LUMINANCE_INTEGER_EXT          0x8D9C
#define GL_LUMINANCE_ALPHA_INTEGER_EXT    0x8D9D
#define GL_RGBA_INTEGER_MODE_EXT          0x8D9E
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_register_combiners                                     */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_register_combiners
#define GL_NV_register_combiners          1
#define GL_REGISTER_COMBINERS_NV          0x8522
#define GL_VARIABLE_A_NV                  0x8523
#define GL_VARIABLE_B_NV                  0x8524
#define GL_VARIABLE_C_NV                  0x8525
#define GL_VARIABLE_D_NV                  0x8526
#define GL_VARIABLE_E_NV                  0x8527
#define GL_VARIABLE_F_NV                  0x8528
#define GL_VARIABLE_G_NV                  0x8529
#define GL_CONSTANT_COLOR0_NV             0x852A
#define GL_CONSTANT_COLOR1_NV             0x852B
#define GL_PRIMARY_COLOR_NV               0x852C
#define GL_SECONDARY_COLOR_NV             0x852D
#define GL_SPARE0_NV                      0x852E
#define GL_SPARE1_NV                      0x852F
#define GL_DISCARD_NV                     0x8530
#define GL_E_TIMES_F_NV                   0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV 0x8532
#define GL_UNSIGNED_IDENTITY_NV           0x8536
#define GL_UNSIGNED_INVERT_NV             0x8537
#define GL_EXPAND_NORMAL_NV               0x8538
#define GL_EXPAND_NEGATE_NV               0x8539
#define GL_HALF_BIAS_NORMAL_NV            0x853A
#define GL_HALF_BIAS_NEGATE_NV            0x853B
#define GL_SIGNED_IDENTITY_NV             0x853C
#define GL_SIGNED_NEGATE_NV               0x853D
#define GL_SCALE_BY_TWO_NV                0x853E
#define GL_SCALE_BY_FOUR_NV               0x853F
#define GL_SCALE_BY_ONE_HALF_NV           0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV   0x8541
#define GL_COMBINER_INPUT_NV              0x8542
#define GL_COMBINER_MAPPING_NV            0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV    0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV     0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV     0x8546
#define GL_COMBINER_MUX_SUM_NV            0x8547
#define GL_COMBINER_SCALE_NV              0x8548
#define GL_COMBINER_BIAS_NV               0x8549
#define GL_COMBINER_AB_OUTPUT_NV          0x854A
#define GL_COMBINER_CD_OUTPUT_NV          0x854B
#define GL_COMBINER_SUM_OUTPUT_NV         0x854C
#define GL_MAX_GENERAL_COMBINERS_NV       0x854D
#define GL_NUM_GENERAL_COMBINERS_NV       0x854E
#define GL_COLOR_SUM_CLAMP_NV             0x854F
#define GL_COMBINER0_NV                   0x8550
#define GL_COMBINER1_NV                   0x8551
#define GL_COMBINER2_NV                   0x8552
#define GL_COMBINER3_NV                   0x8553
#define GL_COMBINER4_NV                   0x8554
#define GL_COMBINER5_NV                   0x8555
#define GL_COMBINER6_NV                   0x8556
#define GL_COMBINER7_NV                   0x8557
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_register_combiners2                                    */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_register_combiners2
#define GL_NV_register_combiners2        1
#define GL_PER_STAGE_CONSTANTS_NV        0x8535
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_multitexture                                          */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_paletted_texture
#define GL_EXT_paletted_texture 1

#if !defined(GL_TABLE_TOO_LARGE_EXT)
# define GL_TABLE_TOO_LARGE_EXT                  0x8031
#endif

#define GL_COLOR_TABLE_FORMAT_EXT               0x80D8
#define GL_COLOR_TABLE_WIDTH_EXT                0x80D9
#define GL_COLOR_TABLE_RED_SIZE_EXT             0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_EXT           0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_EXT            0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_EXT           0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_EXT       0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_EXT       0x80DF
#define GL_TEXTURE_INDEX_SIZE_EXT               0x80ED
#define GL_COLOR_INDEX1_EXT                     0x80E2
#define GL_COLOR_INDEX2_EXT                     0x80E3
#define GL_COLOR_INDEX4_EXT                     0x80E4
#define GL_COLOR_INDEX8_EXT                     0x80E5
#define GL_COLOR_INDEX12_EXT                    0x80E6
#define GL_COLOR_INDEX16_EXT                    0x80E7

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_multitexture                                          */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_shared_texture_palette
#define GL_EXT_shared_texture_palette           1
#define GL_SHARED_TEXTURE_PALETTE_EXT           0x81FB
#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name blend equation legacy handling                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

// Some legacy extension handling

// blend equation
// map the _EXT defines to the ARB_imaging defines, if necessary.
// Thus Apps can always use the ARB defines. 

#if defined(GL_FUNC_ADD_EXT) && ! defined(GL_FUNC_ADD)
#define GL_FUNC_ADD GL_FUNC_ADD_EXT
#else
#define GL_FUNC_ADD 0x8006
#endif

#if defined(GL_FUNC_SUBTRACT_EXT) && ! defined(GL_FUNC_SUBTRACT)
#define GL_FUNC_SUBTRACT GL_FUNC_SUBTRACT_EXT
#else
#define GL_FUNC_SUBTRACT 0x800A
#endif

#if   defined(GL_FUNC_REVERSE_SUBTRACT_EXT) && \
    ! defined(GL_FUNC_REVERSE_SUBTRACT)
#define GL_FUNC_REVERSE_SUBTRACT GL_FUNC_REVERSE_SUBTRACT_EXT
#else
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#endif

#if defined(GL_FUNC_MIN_EXT) && ! defined(GL_FUNC_MIN)
#define GL_FUNC_MIN GL_FUNC_MIN_EXT
#else
#define GL_FUNC_MIN 0x8007
#endif

#if defined(GL_FUNC_MAX_EXT) && ! defined(GL_FUNC_MAX)
#define GL_FUNC_MAX GL_FUNC_MAX_EXT
#else
#define GL_FUNC_MAX 0x8008
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_env_combine                                   */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture_env_combine 
#define GL_EXT_texture_env_combine          1
#define GL_COMBINE_EXT                      0x8570
#define GL_COMBINE_RGB_EXT                  0x8571
#define GL_COMBINE_ALPHA_EXT                0x8572
#define GL_RGB_SCALE_EXT                    0x8573
#define GL_ADD_SIGNED_EXT                   0x8574
#define GL_INTERPOLATE_EXT                  0x8575
#define GL_CONSTANT_EXT                     0x8576
#define GL_PRIMARY_COLOR_EXT                0x8577
#define GL_PREVIOUS_EXT                     0x8578
#define GL_SOURCE0_RGB_EXT                  0x8580
#define GL_SOURCE1_RGB_EXT                  0x8581
#define GL_SOURCE2_RGB_EXT                  0x8582
#define GL_SOURCE0_ALPHA_EXT                0x8588
#define GL_SOURCE1_ALPHA_EXT                0x8589
#define GL_SOURCE2_ALPHA_EXT                0x858A
#define GL_OPERAND0_RGB_EXT                 0x8590
#define GL_OPERAND1_RGB_EXT                 0x8591
#define GL_OPERAND2_RGB_EXT                 0x8592
#define GL_OPERAND0_ALPHA_EXT               0x8598
#define GL_OPERAND1_ALPHA_EXT               0x8599
#define GL_OPERAND2_ALPHA_EXT               0x859A
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_point_parameters                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_point_parameters
#define GL_ARB_point_parameters 1

#define GL_POINT_SIZE_MIN_ARB               0x8126
#define GL_POINT_SIZE_MAX_ARB               0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB    0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB   0x8129

#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_point_sprite                                          */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_point_sprite
#define GL_ARB_point_sprite 1

#define GL_POINT_SPRITE_ARB                 0x8861
#define GL_COORD_REPLACE_ARB                0x8862

#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_point_sprite                                           */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_point_sprite
#define GL_NV_point_sprite 1

#define GL_POINT_SPRITE_NV                     0x8861
#define GL_COORD_REPLACE_NV                    0x8862
#define GL_POINT_SPRITE_R_MODE_NV              0x8863

#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_vertex_program                                        */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_vertex_program
#define GL_ARB_vertex_program 1

#define GL_VERTEX_PROGRAM_ARB                              0x8620
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB                   0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB                     0x8643
#define GL_COLOR_SUM_ARB                                   0x8458
#define GL_PROGRAM_FORMAT_ASCII_ARB                        0x8875
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB                 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB                    0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB                  0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB                    0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB              0x886A
#define GL_CURRENT_VERTEX_ATTRIB_ARB                       0x8626
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB                 0x8645
#define GL_PROGRAM_LENGTH_ARB                              0x8627
#define GL_PROGRAM_FORMAT_ARB                              0x8876
#define GL_PROGRAM_BINDING_ARB                             0x8677
#define GL_PROGRAM_INSTRUCTIONS_ARB                        0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB                    0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB                 0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB             0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB                         0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB                     0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB                  0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB              0x88A7
#define GL_PROGRAM_PARAMETERS_ARB                          0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB                      0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB                   0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB               0x88AB
#define GL_PROGRAM_ATTRIBS_ARB                             0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB                         0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB                      0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB                  0x88AF
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB                   0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB               0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB            0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB        0x88B3
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB                0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB                  0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB                 0x88B6
#define GL_PROGRAM_STRING_ARB                              0x8628
#define GL_PROGRAM_ERROR_POSITION_ARB                      0x864B
#define GL_CURRENT_MATRIX_ARB                              0x8641
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB                    0x88B7
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB                  0x8640
#define GL_MAX_VERTEX_ATTRIBS_ARB                          0x8869
#define GL_MAX_PROGRAM_MATRICES_ARB                        0x862F
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB              0x862E
#define GL_PROGRAM_ERROR_STRING_ARB                        0x8874
#define GL_MATRIX0_ARB                                     0x88C0
#define GL_MATRIX1_ARB                                     0x88C1
#define GL_MATRIX2_ARB                                     0x88C2
#define GL_MATRIX3_ARB                                     0x88C3
#define GL_MATRIX4_ARB                                     0x88C4
#define GL_MATRIX5_ARB                                     0x88C5
#define GL_MATRIX6_ARB                                     0x88C6
#define GL_MATRIX7_ARB                                     0x88C7
#define GL_MATRIX8_ARB                                     0x88C8
#define GL_MATRIX9_ARB                                     0x88C9
#define GL_MATRIX10_ARB                                    0x88CA
#define GL_MATRIX11_ARB                                    0x88CB
#define GL_MATRIX12_ARB                                    0x88CC
#define GL_MATRIX13_ARB                                    0x88CD
#define GL_MATRIX14_ARB                                    0x88CE
#define GL_MATRIX15_ARB                                    0x88CF
#define GL_MATRIX16_ARB                                    0x88D0
#define GL_MATRIX17_ARB                                    0x88D1
#define GL_MATRIX18_ARB                                    0x88D2
#define GL_MATRIX19_ARB                                    0x88D3
#define GL_MATRIX20_ARB                                    0x88D4
#define GL_MATRIX21_ARB                                    0x88D5
#define GL_MATRIX22_ARB                                    0x88D6
#define GL_MATRIX23_ARB                                    0x88D7
#define GL_MATRIX24_ARB                                    0x88D8
#define GL_MATRIX25_ARB                                    0x88D9
#define GL_MATRIX26_ARB                                    0x88DA
#define GL_MATRIX27_ARB                                    0x88DB
#define GL_MATRIX28_ARB                                    0x88DC
#define GL_MATRIX29_ARB                                    0x88DD
#define GL_MATRIX30_ARB                                    0x88DE
#define GL_MATRIX31_ARB                                    0x88DF
#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_fragment_program                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_fragment_program
#define GL_ARB_fragment_program 1

#define GL_FRAGMENT_PROGRAM_ARB                            0x8804
#define GL_PROGRAM_FORMAT_ASCII_ARB                        0x8875
#define GL_PROGRAM_LENGTH_ARB                              0x8627
#define GL_PROGRAM_FORMAT_ARB                              0x8876
#define GL_PROGRAM_BINDING_ARB                             0x8677
#define GL_PROGRAM_INSTRUCTIONS_ARB                        0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB                    0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB                 0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB             0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB                         0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB                     0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB                  0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB              0x88A7
#define GL_PROGRAM_PARAMETERS_ARB                          0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB                      0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB                   0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB               0x88AB
#define GL_PROGRAM_ATTRIBS_ARB                             0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB                         0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB                      0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB                  0x88AF
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB                0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB                  0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB                 0x88B6
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB                    0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB                    0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB                    0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB             0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB             0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB             0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB                0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB                0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB                0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB         0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB         0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB         0x8810
#define GL_PROGRAM_STRING_ARB                              0x8628
#define GL_PROGRAM_ERROR_POSITION_ARB                      0x864B
#define GL_CURRENT_MATRIX_ARB                              0x8641
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB                    0x88B7
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB                  0x8640
#define GL_MAX_PROGRAM_MATRICES_ARB                        0x862F
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB              0x862E
#define GL_MAX_TEXTURE_COORDS_ARB                          0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB                     0x8872
#define GL_PROGRAM_ERROR_STRING_ARB                        0x8874
#define GL_MATRIX0_ARB                                     0x88C0
#define GL_MATRIX1_ARB                                     0x88C1
#define GL_MATRIX2_ARB                                     0x88C2
#define GL_MATRIX3_ARB                                     0x88C3
#define GL_MATRIX4_ARB                                     0x88C4
#define GL_MATRIX5_ARB                                     0x88C5
#define GL_MATRIX6_ARB                                     0x88C6
#define GL_MATRIX7_ARB                                     0x88C7
#define GL_MATRIX8_ARB                                     0x88C8
#define GL_MATRIX9_ARB                                     0x88C9
#define GL_MATRIX10_ARB                                    0x88CA
#define GL_MATRIX11_ARB                                    0x88CB
#define GL_MATRIX12_ARB                                    0x88CC
#define GL_MATRIX13_ARB                                    0x88CD
#define GL_MATRIX14_ARB                                    0x88CE
#define GL_MATRIX15_ARB                                    0x88CF
#define GL_MATRIX16_ARB                                    0x88D0
#define GL_MATRIX17_ARB                                    0x88D1
#define GL_MATRIX18_ARB                                    0x88D2
#define GL_MATRIX19_ARB                                    0x88D3
#define GL_MATRIX20_ARB                                    0x88D4
#define GL_MATRIX21_ARB                                    0x88D5
#define GL_MATRIX22_ARB                                    0x88D6
#define GL_MATRIX23_ARB                                    0x88D7
#define GL_MATRIX24_ARB                                    0x88D8
#define GL_MATRIX25_ARB                                    0x88D9
#define GL_MATRIX26_ARB                                    0x88DA
#define GL_MATRIX27_ARB                                    0x88DB
#define GL_MATRIX28_ARB                                    0x88DC
#define GL_MATRIX29_ARB                                    0x88DD
#define GL_MATRIX30_ARB                                    0x88DE
#define GL_MATRIX31_ARB                                    0x88DF

#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_texture_shader                                         */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_texture_shader
#define GL_NV_texture_shader 1

#define GL_OFFSET_TEXTURE_RECTANGLE_NV                      0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV                0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV                 0x864E
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV             0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV                        0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV                    0x86DB
#define GL_DSDT_MAG_INTENSITY_NV                            0x86DC
#define GL_SHADER_CONSISTENT_NV                             0x86DD
#define GL_TEXTURE_SHADER_NV                                0x86DE
#define GL_SHADER_OPERATION_NV                              0x86DF
#define GL_CULL_MODES_NV                                    0x86E0
#define GL_OFFSET_TEXTURE_MATRIX_NV                         0x86E1
#define GL_OFFSET_TEXTURE_SCALE_NV                          0x86E2
#define GL_OFFSET_TEXTURE_BIAS_NV                           0x86E3
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV    GL_OFFSET_TEXTURE_MATRIX_NV
#define GL_OFFSET_TEXTURE_2D_SCALE_NV     GL_OFFSET_TEXTURE_SCALE_NV
#define GL_OFFSET_TEXTURE_2D_BIAS_NV      GL_OFFSET_TEXTURE_BIAS_NV
#define GL_PREVIOUS_TEXTURE_INPUT_NV                        0x86E4
#define GL_CONST_EYE_NV                                     0x86E5
#define GL_PASS_THROUGH_NV                                  0x86E6
#define GL_CULL_FRAGMENT_NV                                 0x86E7
#define GL_OFFSET_TEXTURE_2D_NV                             0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV                       0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV                       0x86EA
#define GL_DOT_PRODUCT_NV                                   0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV                     0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV                        0x86EE
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV                  0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV                  0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV                  0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV        0x86F3
#define GL_HILO_NV                                          0x86F4
#define GL_DSDT_NV                                          0x86F5
#define GL_DSDT_MAG_NV                                      0x86F6
#define GL_DSDT_MAG_VIB_NV                                  0x86F7
#define GL_HILO16_NV                                        0x86F8
#define GL_SIGNED_HILO_NV                                   0x86F9
#define GL_SIGNED_HILO16_NV                                 0x86FA
#define GL_SIGNED_RGBA_NV                                   0x86FB
#define GL_SIGNED_RGBA8_NV                                  0x86FC
#define GL_SIGNED_RGB_NV                                    0x86FE
#define GL_SIGNED_RGB8_NV                                   0x86FF
#define GL_SIGNED_LUMINANCE_NV                              0x8701
#define GL_SIGNED_LUMINANCE8_NV                             0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV                        0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV                      0x8704
#define GL_SIGNED_ALPHA_NV                                  0x8705
#define GL_SIGNED_ALPHA8_NV                                 0x8706
#define GL_SIGNED_INTENSITY_NV                              0x8707
#define GL_SIGNED_INTENSITY8_NV                             0x8708
#define GL_DSDT8_NV                                         0x8709
#define GL_DSDT8_MAG8_NV                                    0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV                         0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV                     0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV                   0x870D
#define GL_HI_SCALE_NV                                      0x870E
#define GL_LO_SCALE_NV                                      0x870F
#define GL_DS_SCALE_NV                                      0x8710
#define GL_DT_SCALE_NV                                      0x8711
#define GL_MAGNITUDE_SCALE_NV                               0x8712
#define GL_VIBRANCE_SCALE_NV                                0x8713
#define GL_HI_BIAS_NV                                       0x8714
#define GL_LO_BIAS_NV                                       0x8715
#define GL_DS_BIAS_NV                                       0x8716
#define GL_DT_BIAS_NV                                       0x8717
#define GL_MAGNITUDE_BIAS_NV                                0x8718
#define GL_VIBRANCE_BIAS_NV                                 0x8719
#define GL_TEXTURE_BORDER_VALUES_NV                         0x871A
#define GL_TEXTURE_HI_SIZE_NV                               0x871B
#define GL_TEXTURE_LO_SIZE_NV                               0x871C
#define GL_TEXTURE_DS_SIZE_NV                               0x871D
#define GL_TEXTURE_DT_SIZE_NV                               0x871E
#define GL_TEXTURE_MAG_SIZE_NV                              0x871F
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_texture_shader2                                        */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_texture_shader2
#define GL_NV_texture_shader2 1

#define DOT_PRODUCT_TEXTURE_3D_NV                           0x86EF
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_texture_shader3                                        */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_texture_shader3
#define GL_NV_texture_shader3 1

#define OFFSET_PROJECTIVE_TEXTURE_2D_NV                     0x8850
#define OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV               0x8851
#define OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV              0x8852
#define OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV        0x8853
#define OFFSET_HILO_TEXTURE_2D_NV                           0x8854
#define OFFSET_HILO_TEXTURE_RECTANGLE_NV                    0x8855
#define OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV                0x8856
#define OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV         0x8857
#define DEPENDENT_HILO_TEXTURE_2D_NV                        0x8858
#define DEPENDENT_RGB_TEXTURE_3D_NV                         0x8859
#define DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV                   0x885A
#define DOT_PRODUCT_PASS_THROUGH_NV                         0x885B
#define DOT_PRODUCT_TEXTURE_1D_NV                           0x885C
#define DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV                 0x885D
#define FORCE_BLUE_TO_ONE_NV                                0x8860

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_SGIS_generate_mipmap                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_SGIS_generate_mipmap
#define GL_SGIS_generate_mipmap 1

#define GL_GENERATE_MIPMAP_SGIS                             0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS                        0x8192

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_lod_bias                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture_lod_bias
#define GL_EXT_texture_lod_bias 1

#define GL_TEXTURE_FILTER_CONTROL_EXT                       0x8500
#define GL_TEXTURE_LOD_BIAS_EXT                             0x8501
#define GL_MAX_TEXTURE_LOD_BIAS_EXT                         0x84FD

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_texture_rectangle                                     */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_texture_rectangle
#define GL_ARB_texture_rectangle            1

#define GL_TEXTURE_RECTANGLE_ARB                            0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_ARB                    0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_ARB                      0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB                   0x84F8
#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_rectangle                                     */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture_rectangle
#define GL_EXT_texture_rectangle            1

#define GL_TEXTURE_RECTANGLE_EXT                            0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_EXT                    0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_EXT                      0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_EXT                   0x84F8
#endif 

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_texture_float                                         */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_texture_float
#define GL_ARB_texture_float 1

#define GL_TEXTURE_RED_TYPE_ARB           0x8C10
#define GL_TEXTURE_GREEN_TYPE_ARB         0x8C11
#define GL_TEXTURE_BLUE_TYPE_ARB          0x8C12
#define GL_TEXTURE_ALPHA_TYPE_ARB         0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE_ARB     0x8C14
#define GL_TEXTURE_INTENSITY_TYPE_ARB     0x8C15
#define GL_TEXTURE_DEPTH_TYPE_ARB         0x8C16
#define GL_UNSIGNED_NORMALIZED_ARB        0x8C17
#define GL_RGBA32F_ARB                    0x8814
#define GL_RGB32F_ARB                     0x8815
#define GL_ALPHA32F_ARB                   0x8816
#define GL_INTENSITY32F_ARB               0x8817
#define GL_LUMINANCE32F_ARB               0x8818
#define GL_LUMINANCE_ALPHA32F_ARB         0x8819
#define GL_RGBA16F_ARB                    0x881A
#define GL_RGB16F_ARB                     0x881B
#define GL_ALPHA16F_ARB                   0x881C
#define GL_INTENSITY16F_ARB               0x881D
#define GL_LUMINANCE16F_ARB               0x881E
#define GL_LUMINANCE_ALPHA16F_ARB         0x881F
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_shader_objects                                        */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_shader_objects
#define GL_ARB_shader_objects 1

#define GL_PROGRAM_OBJECT_ARB                               0x8B40
#define GL_SHADER_OBJECT_ARB                                0x8B48
#define GL_OBJECT_TYPE_ARB                                  0x8B4E
#define GL_OBJECT_SUBTYPE_ARB                               0x8B4F
#define GL_FLOAT_VEC2_ARB                                   0x8B50
#define GL_FLOAT_VEC3_ARB                                   0x8B51
#define GL_FLOAT_VEC4_ARB                                   0x8B52
#define GL_INT_VEC2_ARB                                     0x8B53
#define GL_INT_VEC3_ARB                                     0x8B54
#define GL_INT_VEC4_ARB                                     0x8B55
#define GL_BOOL_ARB                                         0x8B56
#define GL_BOOL_VEC2_ARB                                    0x8B57
#define GL_BOOL_VEC3_ARB                                    0x8B58
#define GL_BOOL_VEC4_ARB                                    0x8B59
#define GL_FLOAT_MAT2_ARB                                   0x8B5A
#define GL_FLOAT_MAT3_ARB                                   0x8B5B
#define GL_FLOAT_MAT4_ARB                                   0x8B5C
#define GL_OBJECT_DELETE_STATUS_ARB                         0x8B80
#define GL_OBJECT_COMPILE_STATUS_ARB                        0x8B81
#define GL_OBJECT_LINK_STATUS_ARB                           0x8B82
#define GL_OBJECT_VALIDATE_STATUS_ARB                       0x8B83
#define GL_OBJECT_INFO_LOG_LENGTH_ARB                       0x8B84
#define GL_OBJECT_ATTACHED_OBJECTS_ARB                      0x8B85
#define GL_OBJECT_ACTIVE_UNIFORMS_ARB                       0x8B86
#define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB             0x8B87
#define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB                  0x8B88

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_geometry_shader4                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_geometry_shader4
#define GL_EXT_geometry_shader4 1

#define GL_GEOMETRY_SHADER_EXT                      0x8DD9
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT      0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT        0x8DDE
#define GL_MAX_VARYING_COMPONENTS_EXT               0x8B4B
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT      0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT         0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#define GL_GEOMETRY_VERTICES_OUT_EXT                0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_EXT                  0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_EXT                 0x8DDC
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT     0x8C29
#define GL_LINES_ADJACENCY_EXT                      0xA
#define GL_LINE_STRIP_ADJACENCY_EXT                 0xB
#define GL_TRIANGLES_ADJACENCY_EXT                  0xC
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT             0xD
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT       0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT   0x8DA9
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT 0x8CD4
#define GL_PROGRAM_POINT_SIZE_EXT                   0x8642
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_vertex_shader                                         */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_vertex_shader
#define GL_ARB_vertex_shader 1

#define GL_VERTEX_SHADER_ARB                                0x8B31
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB                0x8B4A
#define GL_MAX_VARYING_FLOATS_ARB                           0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB               0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB             0x8B4D
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB                     0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB           0x8B8A

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_fragment_shader                                       */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_fragment_shader
#define GL_ARB_fragment_shader 1

#define GL_FRAGMENT_SHADER_ARB                              0x8B30
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB              0x8B49

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_shading_language_100                                  */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_shading_language_100
#define GL_ARB_shading_language_100 1
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_vertex_buffer_object                                  */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_vertex_buffer_object
#define GL_ARB_vertex_buffer_object 1

typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptrARB;

#define GL_ARRAY_BUFFER_ARB               0x8892
#define GL_ELEMENT_ARRAY_BUFFER_ARB       0x8893
#define GL_ARRAY_BUFFER_BINDING_ARB       0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB 0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING_ARB 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING_ARB 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB 0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB 0x889F
#define GL_STREAM_DRAW_ARB                0x88E0
#define GL_STREAM_READ_ARB                0x88E1
#define GL_STREAM_COPY_ARB                0x88E2
#define GL_STATIC_DRAW_ARB                0x88E4
#define GL_STATIC_READ_ARB                0x88E5
#define GL_STATIC_COPY_ARB                0x88E6
#define GL_DYNAMIC_DRAW_ARB               0x88E8
#define GL_DYNAMIC_READ_ARB               0x88E9
#define GL_DYNAMIC_COPY_ARB               0x88EA
#define GL_READ_ONLY_ARB                  0x88B8
#define GL_WRITE_ONLY_ARB                 0x88B9
#define GL_READ_WRITE_ARB                 0x88BA
#define GL_BUFFER_SIZE_ARB                0x8764
#define GL_BUFFER_USAGE_ARB               0x8765
#define GL_BUFFER_ACCESS_ARB              0x88BB
#define GL_BUFFER_MAPPED_ARB              0x88BC
#define GL_BUFFER_MAP_POINTER_ARB         0x88BD

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_Cg_shader                                             */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_Cg_shader
#define GL_EXT_Cg_shader 1

#define GL_CG_VERTEX_SHADER_EXT           0x890E
#define GL_CG_FRAGMENT_SHADER_EXT         0x890F

#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_occlusion_query                                        */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_occlusion_query
#define GL_NV_occlusion_query 1
#define GL_PIXEL_COUNTER_BITS_NV          0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV  0x8865
#define GL_PIXEL_COUNT_NV                 0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV       0x8867
#endif

#ifndef GL_ARB_occlusion_query
#define GL_ARB_occlusion_query 1
#define GL_QUERY_COUNTER_BITS_ARB           0x8864
#define GL_CURRENT_QUERY_ARB                0x8865
#define GL_QUERY_RESULT_ARB                 0x8866
#define GL_QUERY_RESULT_AVAILABLE_ARB       0x8867
#define GL_SAMPLES_PASSED_ARB               0x8914
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_HP_occlusion_test                                         */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_HP_occlusion_test
#define GL_HP_occlusion_test 1
#define GL_OCCLUSION_TEST_HP              0x8165
#define GL_OCCLUSION_TEST_RESULT_HP       0x8166
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_compression_s3tc                              */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture_compression_s3tc
#define GL_EXT_texture_compression_s3tc 1
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_filter_anisotropic                            */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic 1
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_filter_anisotropic                            */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */
/*! \}                                                                 */
/*---------------------------------------------------------------------*/
#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic 1
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif

/*---------------------------------------------------------------------*/
/*! \name GL_NV_half_float                                             */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_half_float
#define GL_HALF_FLOAT_NV                  0x140B
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_blend_func_separate                                   */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_blend_func_separate
#define GL_BLEND_DST_RGB_EXT              0x80C8
#define GL_BLEND_SRC_RGB_EXT              0x80C9
#define GL_BLEND_DST_ALPHA_EXT            0x80CA
#define GL_BLEND_SRC_ALPHA_EXT            0x80CB
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_blend_func_separate                                   */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_blend_color
#define GL_CONSTANT_COLOR_EXT             0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT   0x8002
#define GL_CONSTANT_ALPHA_EXT             0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT   0x8004
#define GL_BLEND_COLOR_EXT                0x8005
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_blend_minmax                                          */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_blend_minmax
#define GL_FUNC_ADD_EXT                   0x8006
#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008
#define GL_BLEND_EQUATION_EXT             0x8009
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_blend_substract                                       */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_blend_subtract
#define GL_FUNC_SUBTRACT_EXT              0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT      0x800B
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_blend_equation_separate                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_blend_equation_separate
#define GL_BLEND_EQUATION_RGB_EXT         GL_BLEND_EQUATION
#define GL_BLEND_EQUATION_ALPHA_EXT       0x883D
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_UNSIGNED_SHORT_5_6_5                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_UNSIGNED_SHORT_5_6_5
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/

/*---------------------------------------------------------------------*/
/*! \name GL_ARB_imaging                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_imaging
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_BLEND_COLOR                    0x8005
#define GL_FUNC_ADD                       0x8006
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
#define GL_BLEND_EQUATION                 0x8009
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#define GL_CONVOLUTION_1D                 0x8010
#define GL_CONVOLUTION_2D                 0x8011
#define GL_SEPARABLE_2D                   0x8012
#define GL_CONVOLUTION_BORDER_MODE        0x8013
#define GL_CONVOLUTION_FILTER_SCALE       0x8014
#define GL_CONVOLUTION_FILTER_BIAS        0x8015
#define GL_REDUCE                         0x8016
#define GL_CONVOLUTION_FORMAT             0x8017
#define GL_CONVOLUTION_WIDTH              0x8018
#define GL_CONVOLUTION_HEIGHT             0x8019
#define GL_MAX_CONVOLUTION_WIDTH          0x801A
#define GL_MAX_CONVOLUTION_HEIGHT         0x801B
#define GL_POST_CONVOLUTION_RED_SCALE     0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE   0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE    0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE   0x801F
#define GL_POST_CONVOLUTION_RED_BIAS      0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS    0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS     0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS    0x8023
#define GL_HISTOGRAM                      0x8024
#define GL_PROXY_HISTOGRAM                0x8025
#define GL_HISTOGRAM_WIDTH                0x8026
#define GL_HISTOGRAM_FORMAT               0x8027
#define GL_HISTOGRAM_RED_SIZE             0x8028
#define GL_HISTOGRAM_GREEN_SIZE           0x8029
#define GL_HISTOGRAM_BLUE_SIZE            0x802A
#define GL_HISTOGRAM_ALPHA_SIZE           0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE       0x802C
#define GL_HISTOGRAM_SINK                 0x802D
#define GL_MINMAX                         0x802E
#define GL_MINMAX_FORMAT                  0x802F
#define GL_MINMAX_SINK                    0x8030
#define GL_TABLE_TOO_LARGE                0x8031
#define GL_COLOR_MATRIX                   0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH       0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH   0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE    0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE  0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE   0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE  0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS     0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS   0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS    0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS   0x80BB
#define GL_COLOR_TABLE                    0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE   0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE  0x80D2
#define GL_PROXY_COLOR_TABLE              0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#define GL_COLOR_TABLE_SCALE              0x80D6
#define GL_COLOR_TABLE_BIAS               0x80D7
#define GL_COLOR_TABLE_FORMAT             0x80D8
#define GL_COLOR_TABLE_WIDTH              0x80D9
#define GL_COLOR_TABLE_RED_SIZE           0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE         0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE          0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE         0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE     0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE     0x80DF
#define GL_CONSTANT_BORDER                0x8151
#define GL_REPLICATE_BORDER               0x8153
#define GL_CONVOLUTION_BORDER_COLOR       0x8154
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_VERSION_1_2                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_VERSION_1_2
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_RESCALE_NORMAL                 0x803A
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_LIGHT_MODEL_COLOR_CONTROL      0x81F8
#define GL_SINGLE_COLOR                   0x81F9
#define GL_SEPARATE_SPECULAR_COLOR        0x81FA
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_ALIASED_POINT_SIZE_RANGE       0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
#endif

#ifndef GL_SINGLE_COLOR
#define GL_SINGLE_COLOR                   0x81F9
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_VERSION_1_3                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_VERSION_1_3
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE          0x84E1
#define GL_MAX_TEXTURE_UNITS              0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX     0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX    0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX       0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX         0x84E6
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_MULTISAMPLE_BIT                0x20000000
#define GL_NORMAL_MAP                     0x8511
#define GL_REFLECTION_MAP                 0x8512
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMPRESSED_ALPHA               0x84E9
#define GL_COMPRESSED_LUMINANCE           0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA     0x84EB
#define GL_COMPRESSED_INTENSITY           0x84EC
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_CLAMP_TO_BORDER                0x812D
#define GL_COMBINE                        0x8570
#define GL_COMBINE_RGB                    0x8571
#define GL_COMBINE_ALPHA                  0x8572
#define GL_SOURCE0_RGB                    0x8580
#define GL_SOURCE1_RGB                    0x8581
#define GL_SOURCE2_RGB                    0x8582
#define GL_SOURCE0_ALPHA                  0x8588
#define GL_SOURCE1_ALPHA                  0x8589
#define GL_SOURCE2_ALPHA                  0x858A
#define GL_OPERAND0_RGB                   0x8590
#define GL_OPERAND1_RGB                   0x8591
#define GL_OPERAND2_RGB                   0x8592
#define GL_OPERAND0_ALPHA                 0x8598
#define GL_OPERAND1_ALPHA                 0x8599
#define GL_OPERAND2_ALPHA                 0x859A
#define GL_RGB_SCALE                      0x8573
#define GL_ADD_SIGNED                     0x8574
#define GL_INTERPOLATE                    0x8575
#define GL_SUBTRACT                       0x84E7
#define GL_CONSTANT                       0x8576
#define GL_PRIMARY_COLOR                  0x8577
#define GL_PREVIOUS                       0x8578
#define GL_DOT3_RGB                       0x86AE
#define GL_DOT3_RGBA                      0x86AF
#endif

// Missing defines if we work with the core profile headers
#ifndef GL_SOURCE0_RGB
#define GL_SOURCE0_RGB                    0x8580
#define GL_SOURCE1_RGB                    0x8581
#define GL_SOURCE2_RGB                    0x8582
#define GL_SOURCE0_ALPHA                  0x8588
#define GL_SOURCE1_ALPHA                  0x8589
#define GL_SOURCE2_ALPHA                  0x858A

#define GL_REFLECTION_MAP                 0x8512
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_VERSION_1_4                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_VERSION_1_4
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_POINT_SIZE_MIN                 0x8126
#define GL_POINT_SIZE_MAX                 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_POINT_DISTANCE_ATTENUATION     0x8129
#define GL_GENERATE_MIPMAP                0x8191
#define GL_GENERATE_MIPMAP_HINT           0x8192
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_DEPTH_COMPONENT24              0x81A6
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_MIRRORED_REPEAT                0x8370
#define GL_FOG_COORDINATE_SOURCE          0x8450
#define GL_FOG_COORDINATE                 0x8451
#define GL_FRAGMENT_DEPTH                 0x8452
#define GL_CURRENT_FOG_COORDINATE         0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE      0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE    0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER   0x8456
#define GL_FOG_COORDINATE_ARRAY           0x8457
#define GL_COLOR_SUM                      0x8458
#define GL_CURRENT_SECONDARY_COLOR        0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE     0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE     0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE   0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER  0x845D
#define GL_SECONDARY_COLOR_ARRAY          0x845E
#define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
#define GL_TEXTURE_FILTER_CONTROL         0x8500
#define GL_TEXTURE_LOD_BIAS               0x8501
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508
#define GL_TEXTURE_DEPTH_SIZE             0x884A
#define GL_DEPTH_TEXTURE_MODE             0x884B
#define GL_TEXTURE_COMPARE_MODE           0x884C
#define GL_TEXTURE_COMPARE_FUNC           0x884D
#define GL_COMPARE_R_TO_TEXTURE           0x884E
#endif

// Missing defines if we work with the core profile headers
#ifndef GL_CURRENT_FOG_COORDINATE
#define GL_FOG_COORDINATE_SOURCE          0x8450
#define GL_FOG_COORDINATE                 0x8451
#define GL_CURRENT_FOG_COORDINATE         0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE      0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE    0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER   0x8456
#define GL_FOG_COORDINATE_ARRAY           0x8457

#define GL_DEPTH_TEXTURE_MODE             0x884B
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_VERSION_1_5                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_VERSION_1_5
#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765
#define GL_QUERY_COUNTER_BITS             0x8864
#define GL_CURRENT_QUERY                  0x8865
#define GL_QUERY_RESULT                   0x8866
#define GL_QUERY_RESULT_AVAILABLE         0x8867
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING    0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING    0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING     0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING     0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING    0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY                      0x88B8
#define GL_WRITE_ONLY                     0x88B9
#define GL_READ_WRITE                     0x88BA
#define GL_BUFFER_ACCESS                  0x88BB
#define GL_BUFFER_MAPPED                  0x88BC
#define GL_BUFFER_MAP_POINTER             0x88BD
#define GL_STREAM_DRAW                    0x88E0
#define GL_STREAM_READ                    0x88E1
#define GL_STREAM_COPY                    0x88E2
#define GL_STATIC_DRAW                    0x88E4
#define GL_STATIC_READ                    0x88E5
#define GL_STATIC_COPY                    0x88E6
#define GL_DYNAMIC_DRAW                   0x88E8
#define GL_DYNAMIC_READ                   0x88E9
#define GL_DYNAMIC_COPY                   0x88EA
#define GL_SAMPLES_PASSED                 0x8914
#define GL_FOG_COORD_SRC                  GL_FOG_COORDINATE_SOURCE
#define GL_FOG_COORD                      GL_FOG_COORDINATE
#define GL_CURRENT_FOG_COORD              GL_CURRENT_FOG_COORDINATE
#define GL_FOG_COORD_ARRAY_TYPE           GL_FOG_COORDINATE_ARRAY_TYPE
#define GL_FOG_COORD_ARRAY_STRIDE         GL_FOG_COORDINATE_ARRAY_STRIDE
#define GL_FOG_COORD_ARRAY_POINTER        GL_FOG_COORDINATE_ARRAY_POINTER
#define GL_FOG_COORD_ARRAY                GL_FOG_COORDINATE_ARRAY
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
#define GL_SRC0_RGB                       GL_SOURCE0_RGB
#define GL_SRC1_RGB                       GL_SOURCE1_RGB
#define GL_SRC2_RGB                       GL_SOURCE2_RGB
#define GL_SRC0_ALPHA                     GL_SOURCE0_ALPHA
#define GL_SRC1_ALPHA                     GL_SOURCE1_ALPHA
#define GL_SRC2_ALPHA                     GL_SOURCE2_ALPHA
#endif

// Missing defines if we work with the core profile headers
#ifndef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_VERSION_2_0                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_VERSION_2_0
#if !defined(GL_BLEND_EQUATION_RGB) && !defined(OSG_GLES2_POINTERDEF)
#  define GL_BLEND_EQUATION_RGB             GL_BLEND_EQUATION
#endif
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
#define GL_CURRENT_VERTEX_ATTRIB          0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE        0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_MAX_DRAW_BUFFERS               0x8824
#define GL_DRAW_BUFFER0                   0x8825
#define GL_DRAW_BUFFER1                   0x8826
#define GL_DRAW_BUFFER2                   0x8827
#define GL_DRAW_BUFFER3                   0x8828
#define GL_DRAW_BUFFER4                   0x8829
#define GL_DRAW_BUFFER5                   0x882A
#define GL_DRAW_BUFFER6                   0x882B
#define GL_DRAW_BUFFER7                   0x882C
#define GL_DRAW_BUFFER8                   0x882D
#define GL_DRAW_BUFFER9                   0x882E
#define GL_DRAW_BUFFER10                  0x882F
#define GL_DRAW_BUFFER11                  0x8830
#define GL_DRAW_BUFFER12                  0x8831
#define GL_DRAW_BUFFER13                  0x8832
#define GL_DRAW_BUFFER14                  0x8833
#define GL_DRAW_BUFFER15                  0x8834
#define GL_BLEND_EQUATION_ALPHA           0x883D
#define GL_POINT_SPRITE                   0x8861
#define GL_COORD_REPLACE                  0x8862
#define GL_MAX_VERTEX_ATTRIBS             0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_COORDS             0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_FRAGMENT_SHADER                0x8B30
#define GL_VERTEX_SHADER                  0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
#define GL_MAX_VARYING_FLOATS             0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE                    0x8B4F
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_1D                     0x8B5D
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_3D                     0x8B5F
#define GL_SAMPLER_CUBE                   0x8B60
#define GL_SAMPLER_1D_SHADOW              0x8B61
#define GL_SAMPLER_2D_SHADOW              0x8B62
#define GL_DELETE_STATUS                  0x8B80
#define GL_COMPILE_STATUS                 0x8B81
#define GL_LINK_STATUS                    0x8B82
#define GL_VALIDATE_STATUS                0x8B83
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_ATTACHED_SHADERS               0x8B85
#define GL_ACTIVE_UNIFORMS                0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_ACTIVE_ATTRIBUTES              0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION       0x8B8C
#define GL_CURRENT_PROGRAM                0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
#define GL_LOWER_LEFT                     0x8CA1
#define GL_UPPER_LEFT                     0x8CA2
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_VERSION_2_1                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_VERSION_2_1
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_SLUMINANCE_ALPHA               0x8C44
#define GL_SLUMINANCE8_ALPHA8             0x8C45
#define GL_SLUMINANCE                     0x8C46
#define GL_SLUMINANCE8                    0x8C47
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49
#define GL_COMPRESSED_SLUMINANCE          0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA    0x8C4B
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_VERSION_3_0                                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_VERSION_3_0
#define GL_COMPARE_REF_TO_TEXTURE             GL_COMPARE_R_TO_TEXTURE_ARB
#define GL_CLIP_DISTANCE0                                GL_CLIP_PLANE0
#define GL_CLIP_DISTANCE1                                GL_CLIP_PLANE1
#define GL_CLIP_DISTANCE2                                GL_CLIP_PLANE2
#define GL_CLIP_DISTANCE3                                GL_CLIP_PLANE3
#define GL_CLIP_DISTANCE4                                GL_CLIP_PLANE4
#define GL_CLIP_DISTANCE5                                GL_CLIP_PLANE5
#define GL_MAX_CLIP_DISTANCES                            GL_MAX_CLIP_PLANES
#define GL_MAJOR_VERSION                                 0x821B
#define GL_MINOR_VERSION                                 0x821C
#define GL_NUM_EXTENSIONS                                0x821D
#define GL_CONTEXT_FLAGS                                 0x821E
#define GL_DEPTH_BUFFER                                  0x8223
#define GL_STENCIL_BUFFER                                0x8224
#define GL_COMPRESSED_RED                                0x8225
#define GL_COMPRESSED_RG                                 0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT           0x0001
#define GL_RGBA32F                                       0x8814
#define GL_RGB32F                                        0x8815
#define GL_RGBA16F                                       0x881A
#define GL_RGB16F                                        0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER                   0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS                      0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET                      0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET                      0x8905
#define GL_CLAMP_VERTEX_COLOR                            0x891A
#define GL_CLAMP_FRAGMENT_COLOR                          0x891B
#define GL_CLAMP_READ_COLOR                              0x891C
#define GL_FIXED_ONLY                                    0x891D
#define GL_MAX_VARYING_COMPONENTS                        GL_MAX_VARYING_FLOATS
#define GL_TEXTURE_RED_TYPE                              0x8C10
#define GL_TEXTURE_GREEN_TYPE                            0x8C11
#define GL_TEXTURE_BLUE_TYPE                             0x8C12
#define GL_TEXTURE_ALPHA_TYPE                            0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE                        0x8C14
#define GL_TEXTURE_INTENSITY_TYPE                        0x8C15
#define GL_TEXTURE_DEPTH_TYPE                            0x8C16
#define GL_UNSIGNED_NORMALIZED                           0x8C17
#define GL_TEXTURE_1D_ARRAY                              0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY                        0x8C19
#define GL_TEXTURE_2D_ARRAY                              0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY                        0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY                      0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY                      0x8C1D
#define GL_R11F_G11F_B10F                                0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV                  0x8C3B
#define GL_RGB9_E5                                       0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV                      0x8C3E
#define GL_TEXTURE_SHARED_SIZE                           0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH         0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE                0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS    0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS                   0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START               0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE                0x8C85
#define GL_PRIMITIVES_GENERATED                          0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN         0x8C88
#define GL_RASTERIZER_DISCARD                            0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS       0x8C8B
#define GL_INTERLEAVED_ATTRIBS                           0x8C8C
#define GL_SEPARATE_ATTRIBS                              0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER                     0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING             0x8C8F
#define GL_RGBA32UI                                      0x8D70
#define GL_RGB32UI                                       0x8D71
#define GL_RGBA16UI                                      0x8D76
#define GL_RGB16UI                                       0x8D77
#define GL_RGBA8UI                                       0x8D7C
#define GL_RGB8UI                                        0x8D7D
#define GL_RGBA32I                                       0x8D82
#define GL_RGB32I                                        0x8D83
#define GL_RGBA16I                                       0x8D88
#define GL_RGB16I                                        0x8D89
#define GL_RGBA8I                                        0x8D8E
#define GL_RGB8I                                         0x8D8F
#define GL_RED_INTEGER                                   0x8D94
#define GL_GREEN_INTEGER                                 0x8D95
#define GL_BLUE_INTEGER                                  0x8D96
#define GL_ALPHA_INTEGER                                 0x8D97
#define GL_RGB_INTEGER                                   0x8D98
#define GL_RGBA_INTEGER                                  0x8D99
#define GL_BGR_INTEGER                                   0x8D9A
#define GL_BGRA_INTEGER                                  0x8D9B
#define GL_SAMPLER_1D_ARRAY                              0x8DC0
#define GL_SAMPLER_2D_ARRAY                              0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW                       0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW                       0x8DC4
#define GL_SAMPLER_CUBE_SHADOW                           0x8DC5
#define GL_UNSIGNED_INT_VEC2                             0x8DC6
#define GL_UNSIGNED_INT_VEC3                             0x8DC7
#define GL_UNSIGNED_INT_VEC4                             0x8DC8
#define GL_INT_SAMPLER_1D                                0x8DC9
#define GL_INT_SAMPLER_2D                                0x8DCA
#define GL_INT_SAMPLER_3D                                0x8DCB
#define GL_INT_SAMPLER_CUBE                              0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY                          0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY                          0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D                       0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D                       0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D                       0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE                     0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY                 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY                 0x8DD7
#define GL_QUERY_WAIT                                    0x8E13
#define GL_QUERY_NO_WAIT                                 0x8E14
#define GL_QUERY_BY_REGION_WAIT                          0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT                       0x8E16
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_framebuffer_object                                    */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_framebuffer_object
#define GL_INVALID_FRAMEBUFFER_OPERATION                 0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING         0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE         0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE               0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE             0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE              0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE             0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE             0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE           0x8217
#define GL_FRAMEBUFFER_DEFAULT                           0x8218
#define GL_FRAMEBUFFER_UNDEFINED                         0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT                      0x821A
#define GL_INDEX                                         0x8222
#define GL_MAX_RENDERBUFFER_SIZE                         0x84E8
#define GL_DEPTH_STENCIL                                 0x84F9
#define GL_UNSIGNED_INT_24_8                             0x84FA
#define GL_DEPTH24_STENCIL8                              0x88F0
#define GL_TEXTURE_STENCIL_SIZE                          0x88F1
#define GL_FRAMEBUFFER_BINDING                           0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING                      0x8CA6
#define GL_RENDERBUFFER_BINDING                          0x8CA7
#define GL_READ_FRAMEBUFFER                              0x8CA8
#define GL_DRAW_FRAMEBUFFER                              0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING                      0x8CAA
#define GL_RENDERBUFFER_SAMPLES                          0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE            0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME            0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL          0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE  0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER          0x8CD4
#define GL_FRAMEBUFFER_COMPLETE                          0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT             0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT     0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER            0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER            0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED                       0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS                         0x8CDF
#define GL_COLOR_ATTACHMENT0                             0x8CE0
#define GL_COLOR_ATTACHMENT1                             0x8CE1
#define GL_COLOR_ATTACHMENT2                             0x8CE2
#define GL_COLOR_ATTACHMENT3                             0x8CE3
#define GL_COLOR_ATTACHMENT4                             0x8CE4
#define GL_COLOR_ATTACHMENT5                             0x8CE5
#define GL_COLOR_ATTACHMENT6                             0x8CE6
#define GL_COLOR_ATTACHMENT7                             0x8CE7
#define GL_COLOR_ATTACHMENT8                             0x8CE8
#define GL_COLOR_ATTACHMENT9                             0x8CE9
#define GL_COLOR_ATTACHMENT10                            0x8CEA
#define GL_COLOR_ATTACHMENT11                            0x8CEB
#define GL_COLOR_ATTACHMENT12                            0x8CEC
#define GL_COLOR_ATTACHMENT13                            0x8CED
#define GL_COLOR_ATTACHMENT14                            0x8CEE
#define GL_COLOR_ATTACHMENT15                            0x8CEF
#define GL_DEPTH_ATTACHMENT                              0x8D00
#define GL_STENCIL_ATTACHMENT                            0x8D20
#define GL_FRAMEBUFFER                                   0x8D40
#define GL_RENDERBUFFER                                  0x8D41
#define GL_RENDERBUFFER_WIDTH                            0x8D42
#define GL_RENDERBUFFER_HEIGHT                           0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT                  0x8D44
#define GL_STENCIL_INDEX1                                0x8D46
#define GL_STENCIL_INDEX4                                0x8D47
#define GL_STENCIL_INDEX8                                0x8D48
#define GL_STENCIL_INDEX16                               0x8D49
#define GL_RENDERBUFFER_RED_SIZE                         0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE                       0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE                        0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE                       0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE                       0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE                     0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE            0x8D56
#define GL_MAX_SAMPLES                                   0x8D57
#endif


/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_framebuffer_object                                    */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_framebuffer_object
#define GL_INVALID_FRAMEBUFFER_OPERATION_EXT                0x0506
#define GL_MAX_RENDERBUFFER_SIZE_EXT                        0x84E8
#define GL_FRAMEBUFFER_BINDING_EXT                          0x8CA6
#define GL_RENDERBUFFER_BINDING_EXT                         0x8CA7
#define GL_READ_FRAMEBUFFER                                 0x8CA8
#define GL_DRAW_FRAMEBUFFER                                 0x8CA9
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT           0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT           0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT         0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT    0x8CD4
#define GL_FRAMEBUFFER_COMPLETE_EXT                         0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT            0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT    0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_EXT  0x8CD8
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT            0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT               0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT           0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT           0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED_EXT                      0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS_EXT                        0x8CDF
#define GL_COLOR_ATTACHMENT0_EXT                            0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT                            0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT                            0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT                            0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT                            0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT                            0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT                            0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT                            0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT                            0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT                            0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT                           0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT                           0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT                           0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT                           0x8CED
#define GL_COLOR_ATTACHMENT14_EXT                           0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT                           0x8CEF
#define GL_DEPTH_ATTACHMENT_EXT                             0x8D00
#define GL_STENCIL_ATTACHMENT_EXT                           0x8D20
#define GL_FRAMEBUFFER_EXT                                  0x8D40
#define GL_RENDERBUFFER_EXT                                 0x8D41
#define GL_RENDERBUFFER_WIDTH_EXT                           0x8D42
#define GL_RENDERBUFFER_HEIGHT_EXT                          0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT                 0x8D44
#define GL_STENCIL_INDEX_EXT                                0x8D45
#define GL_STENCIL_INDEX1_EXT                               0x8D46
#define GL_STENCIL_INDEX4_EXT                               0x8D47
#define GL_STENCIL_INDEX8_EXT                               0x8D48
#define GL_STENCIL_INDEX16_EXT                              0x8D49
#define GL_RENDERBUFFER_RED_SIZE_EXT                        0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_EXT                      0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_EXT                       0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_EXT                      0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_EXT                      0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_EXT                    0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE               0x8D56
#endif

// Hack for SGI Prisms...
 
#ifndef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENTS_EXT
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT 0x8CD6
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_framebuffer_blit                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_framebuffer_blit
#define GL_READ_FRAMEBUFFER_EXT                0x8CA8
#define GL_DRAW_FRAMEBUFFER_EXT                0x8CA9
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_framebuffer_multisample                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#if !defined(GL_EXT_framebuffer_multisample) || \
    !defined(GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT)
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_depth_texture                                         */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_depth_texture
#define GL_DEPTH_COMPONENT16_ARB  0x81A5
#define GL_DEPTH_COMPONENT24_ARB  0x81A6
#define GL_DEPTH_COMPONENT32_ARB  0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB 0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB 0x884B
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name glxFBConfig                                                  */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GLX_ARB_create_context
#define GLX_CONTEXT_DEBUG_BIT_ARB              0x00000001
#define GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define GLX_CONTEXT_MAJOR_VERSION_ARB          0x2091
#define GLX_CONTEXT_MINOR_VERSION_ARB          0x2092
#define GLX_CONTEXT_FLAGS_ARB                  0x2094
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_multisample                                           */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_ARB_multisample
#define GL_MULTISAMPLE_ARB                0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB   0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB        0x809F
#define GL_SAMPLE_COVERAGE_ARB            0x80A0
#define GL_SAMPLE_BUFFERS_ARB             0x80A8
#define GL_SAMPLES_ARB                    0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB      0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB     0x80AB
#define GL_MULTISAMPLE_BIT_ARB            0x20000000
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_multisample_filter_hint                                */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_multisample_filter_hint
#define GL_MULTISAMPLE_FILTER_HINT_NV     0x8534
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_EXT_packed_depth_stencil                                  */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_EXT_packed_depth_stencil
#define GL_DEPTH_STENCIL_EXT              0x84F9
#define GL_UNSIGNED_INT_24_8_EXT          0x84FA
#define GL_DEPTH24_STENCIL8_EXT           0x88F0
#define GL_TEXTURE_STENCIL_SIZE_EXT       0x88F1
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_NV_packed_depth_stencil                                   */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*! \{                                                                 */

#ifndef GL_NV_packed_depth_stencil
#define GL_DEPTH_STENCIL_NV               0x84F9
#define GL_UNSIGNED_INT_24_8_NV           0x84FA
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/

#else

/*---------------------------------------------------------------------*/
/*! \name GL_EXT_texture_env_combine                                   */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */

#ifndef GL_EXT_texture_env_combine 
#define GL_EXT_texture_env_combine          1
#define GL_PREVIOUS_EXT                     0x8578
#define GL_CONSTANT_EXT                     0x8576
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_multitexture                                          */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */

#ifndef GL_ARB_multitexture
#define GL_ARB_multitexture               1
#define GL_MAX_TEXTURE_UNITS_ARB          0x84E2
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_fragment_program                                      */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */

#ifndef GL_ARB_fragment_program
#define GL_ARB_fragment_program 1
#define GL_MAX_TEXTURE_COORDS_ARB                          0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB                     0x8872
#endif 

#define GL_QUADS      0x0007
#define GL_QUAD_STRIP 0x0008
#define GL_POLYGON    0x0009

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_tessellation_shader                                   */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */

#ifndef GL_ARB_tessellation_shader
#define GL_ARB_tessellation_shader                             1
#define GL_PATCHES                                             0x000E
#define GL_PATCH_VERTICES                                      0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL                           0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL                           0x8E74

#define GL_TESS_CONTROL_OUTPUT_VERTICES                        0x8E75
#define GL_TESS_GEN_MODE                                       0x8E76
#define GL_TESS_GEN_SPACING                                    0x8E77
#define GL_TESS_GEN_VERTEX_ORDER                               0x8E78
#define GL_TESS_GEN_POINT_MODE                                 0x8E79

#define GL_ISOLINES                                            0x8E7A

#define GL_FRACTIONAL_ODD                                      0x8E7B
#define GL_FRACTIONAL_EVEN                                     0x8E7C

#define GL_MAX_PATCH_VERTICES                                  0x8E7D
#define GL_MAX_TESS_GEN_LEVEL                                  0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS                 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS              0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS                0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS             0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS                  0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS                           0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS            0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS               0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS                     0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS                  0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS                   0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS                0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS        0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS     0x8E1F

#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER     0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER  0x84F1

#define GL_TESS_EVALUATION_SHADER                              0x8E87
#define GL_TESS_CONTROL_SHADER                                 0x8E88
#endif

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_compute_shader                                        */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */

#ifndef GL_ARB_compute_shader
#define GL_ARB_compute_shader 1

#define GL_COMPUTE_SHADER                                     0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS                         0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS                    0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS                         0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE                     0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS                     0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS                 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS                        0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS            0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS                 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT                       0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE                        0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE                            0x8267
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER         0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER                           0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING                   0x90EF
#define GL_COMPUTE_SHADER_BIT                                 0x00000020

#endif /* GL_ARB_compute_shader */

/*! \}                                                                 */
/*---------------------------------------------------------------------*/
/*! \name GL_ARB_shader_image_load_store                               */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */

#ifndef GL_ARB_shader_image_load_store
#define GL_ARB_shader_image_load_store 1

#define GL_MAX_IMAGE_UNITS                               0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_BINDING_NAME                            0x8F3A
#define GL_IMAGE_BINDING_LEVEL                           0x8F3B
#define GL_IMAGE_BINDING_LAYERED                         0x8F3C
#define GL_IMAGE_BINDING_LAYER                           0x8F3D
#define GL_IMAGE_BINDING_ACCESS                          0x8F3E
#define GL_IMAGE_1D                                      0x904C
#define GL_IMAGE_2D                                      0x904D
#define GL_IMAGE_3D                                      0x904E
#define GL_IMAGE_2D_RECT                                 0x904F
#define GL_IMAGE_CUBE                                    0x9050
#define GL_IMAGE_BUFFER                                  0x9051
#define GL_IMAGE_1D_ARRAY                                0x9052
#define GL_IMAGE_2D_ARRAY                                0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY                          0x9054
#define GL_IMAGE_2D_MULTISAMPLE                          0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY                    0x9056
#define GL_INT_IMAGE_1D                                  0x9057
#define GL_INT_IMAGE_2D                                  0x9058
#define GL_INT_IMAGE_3D                                  0x9059
#define GL_INT_IMAGE_2D_RECT                             0x905A
#define GL_INT_IMAGE_CUBE                                0x905B
#define GL_INT_IMAGE_BUFFER                              0x905C
#define GL_INT_IMAGE_1D_ARRAY                            0x905D
#define GL_INT_IMAGE_2D_ARRAY                            0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY                      0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE                      0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY                0x9061
#define GL_UNSIGNED_INT_IMAGE_1D                         0x9062
#define GL_UNSIGNED_INT_IMAGE_2D                         0x9063
#define GL_UNSIGNED_INT_IMAGE_3D                         0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT                    0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE                       0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER                     0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY                   0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY                   0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY             0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE             0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY       0x906C
#define GL_MAX_IMAGE_SAMPLES                             0x906D
#define GL_IMAGE_BINDING_FORMAT                          0x906E

#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT               0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT                     0x00000002
#define GL_UNIFORM_BARRIER_BIT                           0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT                     0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT               0x00000020
#define GL_COMMAND_BARRIER_BIT                           0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT                      0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT                    0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT                     0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT                       0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT                0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT                    0x00001000
#define GL_ALL_BARRIER_BITS                              0xFFFFFFFF

#endif /* GL_ARB_shader_image_load_store */

/*! \}                                                                 */

/*---------------------------------------------------------------------*/
/*! \name GL_ARB_uniform_buffer_object                                 */
/*! \ingroup GrpBaseBaseGLConstants                                    */
/*  \{                                                                 */
#ifndef GL_ARB_uniform_buffer_object
#define GL_ARB_uniform_buffer_object 1
#define GL_UNIFORM_BUFFER                               0x8A11
#define GL_UNIFORM_BUFFER_BINDING                       0x8A28
#define GL_UNIFORM_BUFFER_START                         0x8A29
#define GL_UNIFORM_BUFFER_SIZE                          0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS                    0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS                  0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS                  0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS                  0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS                  0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE                       0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS       0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS     0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS     0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT              0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH         0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS                        0x8A36
#define GL_UNIFORM_TYPE                                 0x8A37
#define GL_UNIFORM_SIZE                                 0x8A38
#define GL_UNIFORM_NAME_LENGTH                          0x8A39
#define GL_UNIFORM_BLOCK_INDEX                          0x8A3A
#define GL_UNIFORM_OFFSET                               0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE                         0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE                        0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR                         0x8A3E
#define GL_UNIFORM_BLOCK_BINDING                        0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE                      0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH                    0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS                0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES         0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER    0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER  0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER  0x8A46
#define GL_INVALID_INDEX                                0xFFFFFFFFu

#endif /* GL_ARB_uniform_buffer_object */

// keep these outside the ifndef GL_ARB_uniform_buffer_object block for systems
// with GL headers that define the extension
#define osgMaxUniformBlockSize                          16384
#define osgMaxVertexUniformBlocks                          12
#define osgMaxFragmentUniformBlocks                        12
#define osgMaxGeometryUniformBlocks                        12
#define osgMaxCombinedUniformBlocks                        36
#define osgMaxUniformBufferBindings                        36

/*! \}                                                                 */
#endif /* _OSGGL_H_ */
