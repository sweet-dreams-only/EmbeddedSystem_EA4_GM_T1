/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Type.h
 *     SW-C Type:  CmnMfgSrv
 *  Generated at:  Tue Dec 20 16:36:37 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_Ary1D_f32_26
typedef float32 Ary1D_f32_26[26];

# define Rte_TypeDef_Ary1D_f32_4
typedef float32 Ary1D_f32_4[4];

# define Rte_TypeDef_Ary1D_u16_3
typedef uint16 Ary1D_u16_3[3];

# define Rte_TypeDef_Ary1D_u32_2
typedef uint32 Ary1D_u32_2[2];

# define Rte_TypeDef_Ary1D_u8_10
typedef uint8 Ary1D_u8_10[10];

# define Rte_TypeDef_Ary1D_u8_16
typedef uint8 Ary1D_u8_16[16];

# define Rte_TypeDef_Ary1D_u8_20
typedef uint8 Ary1D_u8_20[20];

# define Rte_TypeDef_Ary1D_u8_48
typedef uint8 Ary1D_u8_48[48];

# define Rte_TypeDef_Ary1D_u8_6
typedef uint8 Ary1D_u8_6[6];

# define Rte_TypeDef_Ary1D_u8_8
typedef uint8 Ary1D_u8_8[8];

# define Rte_TypeDef_MotAgMeasEolPrmRec1
typedef struct
{
  float32 SinOffs;
  float32 CosOffs;
  float32 SinAmpRecpr;
  float32 CosAmpRecpr;
  float32 SinDelta;
} MotAgMeasEolPrmRec1;

# define Rte_TypeDef_Ary2D_f32_8_4
typedef Ary1D_f32_4 Ary2D_f32_8_4[8];

# define Rte_TypeDef_Ary2D_u16_8_3
typedef Ary1D_u16_3 Ary2D_u16_8_3[8];

# define Rte_TypeDef_MfgEnaSt1
typedef uint8 MfgEnaSt1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcNrWithResd1
typedef uint16 NtcNrWithResd1;

# define Rte_TypeDef_ReadFltInfoRec1
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} ReadFltInfoRec1;

# define Rte_TypeDef_SysFricLrngOperMod1
typedef uint8 SysFricLrngOperMod1;

# define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

# define Rte_TypeDef_s1p14
typedef sint16 s1p14;

# define Rte_TypeDef_s5p10
typedef sint16 s5p10;

# define Rte_TypeDef_s8p7
typedef sint16 s8p7;

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u6p10
typedef uint16 u6p10;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_ReadFltInfoRec1_20
typedef ReadFltInfoRec1 Ary1D_ReadFltInfoRec1_20[20];

# define Rte_TypeDef_Ary1D_s1p14_128
typedef s1p14 Ary1D_s1p14_128[128];

# define Rte_TypeDef_SnpshtDataRec1
typedef struct
{
  uint32 MicroDiagcData;
  s5p10 HwTq;
  s5p10 MotTq;
  uint32 IgnCntr;
  u6p10 BrdgVltg;
  s8p7 EcuT;
  uint16 NtcNr;
  uint8 NtcStInfo;
  SysSt1 SysSt;
  u9p7 VehSpd;
} SnpshtDataRec1;

# define Rte_TypeDef_Ary1D_SnpshtDataRec1_8
typedef SnpshtDataRec1 Ary1D_SnpshtDataRec1_8[8];


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Ary1D_f32_8
typedef float32 Ary1D_f32_8[8];

#  define Rte_TypeDef_Ary1D_s16_22
typedef sint16 Ary1D_s16_22[22];

#  define Rte_TypeDef_Ary1D_u16_257
typedef uint16 Ary1D_u16_257[257];

#  define Rte_TypeDef_Ary1D_u32_8
typedef uint32 Ary1D_u32_8[8];

#  define Rte_TypeDef_Ary1D_u8_22
typedef uint8 Ary1D_u8_22[22];

#  define Rte_TypeDef_HwAgOffsRec1
typedef struct
{
  float32 OffsTrim;
  boolean OffsTrimPrfmdSts;
} HwAgOffsRec1;

#  define Rte_TypeDef_MotPrmNomEolRec2
typedef struct
{
  float32 MotKeNom;
  float32 MotRNom;
} MotPrmNomEolRec2;

#  define Rte_TypeDef_MotPrmNomEolRec3
typedef struct
{
  float32 MotBackEmfConNom;
  float32 MotRNom;
} MotPrmNomEolRec3;

#  define Rte_TypeDef_Ary1D_s8p7_14
typedef s8p7 Ary1D_s8p7_14[14];

#  define Rte_TypeDef_Ary1D_u0p16_8
typedef u0p16 Ary1D_u0p16_8[8];

#  define Rte_TypeDef_Ary1D_u9p7_12
typedef u9p7 Ary1D_u9p7_12[12];

#  define Rte_TypeDef_Ary1D_u9p7_16
typedef u9p7 Ary1D_u9p7_16[16];

#  define Rte_TypeDef_Ary1D_u9p7_4
typedef u9p7 Ary1D_u9p7_4[4];

#  define Rte_TypeDef_Ary1D_u9p7_6
typedef u9p7 Ary1D_u9p7_6[6];

#  define Rte_TypeDef_Ary1D_u9p7_7
typedef u9p7 Ary1D_u9p7_7[7];

#  define Rte_TypeDef_Ary1D_u9p7_9
typedef u9p7 Ary1D_u9p7_9[9];

#  define Rte_TypeDef_s11p4
typedef sint16 s11p4;

#  define Rte_TypeDef_s15p16
typedef sint32 s15p16;

#  define Rte_TypeDef_s18p13
typedef sint32 s18p13;

#  define Rte_TypeDef_s2p13
typedef sint16 s2p13;

#  define Rte_TypeDef_s4p11
typedef sint16 s4p11;

#  define Rte_TypeDef_u10p6
typedef uint16 u10p6;

#  define Rte_TypeDef_u11p5
typedef uint16 u11p5;

#  define Rte_TypeDef_u12p4
typedef uint16 u12p4;

#  define Rte_TypeDef_u16p0
typedef uint16 u16p0;

#  define Rte_TypeDef_u1p15
typedef uint16 u1p15;

#  define Rte_TypeDef_u2p14
typedef uint16 u2p14;

#  define Rte_TypeDef_u3p13
typedef uint16 u3p13;

#  define Rte_TypeDef_u4p12
typedef uint16 u4p12;

#  define Rte_TypeDef_u5p11
typedef uint16 u5p11;

#  define Rte_TypeDef_u7p9
typedef uint16 u7p9;

#  define Rte_TypeDef_u8p8
typedef uint16 u8p8;

#  define Rte_TypeDef_Ary1D_s11p4_14
typedef s11p4 Ary1D_s11p4_14[14];

#  define Rte_TypeDef_Ary1D_s2p13_1024
typedef s2p13 Ary1D_s2p13_1024[1024];

#  define Rte_TypeDef_Ary1D_s2p13_1025
typedef s2p13 Ary1D_s2p13_1025[1025];

#  define Rte_TypeDef_Ary1D_s4p11_20
typedef s4p11 Ary1D_s4p11_20[20];

#  define Rte_TypeDef_Ary1D_u10p6_4
typedef u10p6 Ary1D_u10p6_4[4];

#  define Rte_TypeDef_Ary1D_u11p5_10
typedef u11p5 Ary1D_u11p5_10[10];

#  define Rte_TypeDef_Ary1D_u11p5_11
typedef u11p5 Ary1D_u11p5_11[11];

#  define Rte_TypeDef_Ary1D_u11p5_4
typedef u11p5 Ary1D_u11p5_4[4];

#  define Rte_TypeDef_Ary1D_u12p4_13
typedef u12p4 Ary1D_u12p4_13[13];

#  define Rte_TypeDef_Ary1D_u12p4_16
typedef u12p4 Ary1D_u12p4_16[16];

#  define Rte_TypeDef_Ary1D_u16p0_2
typedef u16p0 Ary1D_u16p0_2[2];

#  define Rte_TypeDef_Ary1D_u1p15_11
typedef u1p15 Ary1D_u1p15_11[11];

#  define Rte_TypeDef_Ary1D_u1p15_2
typedef u1p15 Ary1D_u1p15_2[2];

#  define Rte_TypeDef_Ary1D_u2p14_16
typedef u2p14 Ary1D_u2p14_16[16];

#  define Rte_TypeDef_Ary1D_u2p14_2
typedef u2p14 Ary1D_u2p14_2[2];

#  define Rte_TypeDef_Ary1D_u2p14_5
typedef u2p14 Ary1D_u2p14_5[5];

#  define Rte_TypeDef_Ary1D_u2p14_6
typedef u2p14 Ary1D_u2p14_6[6];

#  define Rte_TypeDef_Ary1D_u3p13_10
typedef u3p13 Ary1D_u3p13_10[10];

#  define Rte_TypeDef_Ary1D_u4p12_11
typedef u4p12 Ary1D_u4p12_11[11];

#  define Rte_TypeDef_Ary1D_u4p12_12
typedef u4p12 Ary1D_u4p12_12[12];

#  define Rte_TypeDef_Ary1D_u4p12_14
typedef u4p12 Ary1D_u4p12_14[14];

#  define Rte_TypeDef_Ary1D_u5p11_13
typedef u5p11 Ary1D_u5p11_13[13];

#  define Rte_TypeDef_Ary1D_u5p11_16
typedef u5p11 Ary1D_u5p11_16[16];

#  define Rte_TypeDef_Ary1D_u5p11_5
typedef u5p11 Ary1D_u5p11_5[5];

#  define Rte_TypeDef_Ary1D_u7p9_4
typedef u7p9 Ary1D_u7p9_4[4];

#  define Rte_TypeDef_Ary1D_u8p8_14
typedef u8p8 Ary1D_u8p8_14[14];

#  define Rte_TypeDef_Ary1D_u8p8_2
typedef u8p8 Ary1D_u8p8_2[2];

#  define Rte_TypeDef_Ary1D_u8p8_20
typedef u8p8 Ary1D_u8p8_20[20];

#  define Rte_TypeDef_Ary1D_u8p8_4
typedef u8p8 Ary1D_u8p8_4[4];

#  define Rte_TypeDef_Ary1D_u8p8_8
typedef u8p8 Ary1D_u8p8_8[8];

#  define Rte_TypeDef_Ary2D_s4p11_12_20
typedef Ary1D_s4p11_20 Ary2D_s4p11_12_20[12];

#  define Rte_TypeDef_Ary2D_u12p4_12_13
typedef Ary1D_u12p4_13 Ary2D_u12p4_12_13[12];

#  define Rte_TypeDef_Ary2D_u12p4_9_16
typedef Ary1D_u12p4_16 Ary2D_u12p4_9_16[9];

#  define Rte_TypeDef_Ary2D_u2p14_12_5
typedef Ary1D_u2p14_5 Ary2D_u2p14_12_5[12];

#  define Rte_TypeDef_Ary2D_u2p14_7_6
typedef Ary1D_u2p14_6 Ary2D_u2p14_7_6[7];

#  define Rte_TypeDef_Ary2D_u5p11_12_13
typedef Ary1D_u5p11_13 Ary2D_u5p11_12_13[12];

#  define Rte_TypeDef_Ary2D_u5p11_12_5
typedef Ary1D_u5p11_5 Ary2D_u5p11_12_5[12];

#  define Rte_TypeDef_Ary2D_u5p11_9_16
typedef Ary1D_u5p11_16 Ary2D_u5p11_9_16[9];

#  define Rte_TypeDef_Ary2D_u7p9_8_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_8_4[8];

#  define Rte_TypeDef_Ary2D_u7p9_9_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_9_4[9];

#  define Rte_TypeDef_Ary2D_u8p8_12_20
typedef Ary1D_u8p8_20 Ary2D_u8p8_12_20[12];

#  define Rte_TypeDef_Ary2D_u8p8_9_4
typedef Ary1D_u8p8_4 Ary2D_u8p8_9_4[9];

#  define Rte_TypeDef_Ary2D_u8p8_9_8
typedef Ary1D_u8p8_8 Ary2D_u8p8_9_8[9];

# endif


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1482268968
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/NM001A_CmnMfgSrv_Impl-kzdyfh/NM001A_CmnMfgSrv_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1482268968
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
