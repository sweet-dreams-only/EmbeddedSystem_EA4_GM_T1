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
 *     SW-C Type:  InertiaCmpVel
 *  Generated at:  Thu Aug 11 10:27:08 2016
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

# define Rte_TypeDef_FilNotchGainRec1
typedef struct
{
  float32 FilGainB0;
  float32 FilGainB1;
  float32 FilGainB2;
  float32 FilGainA1;
  float32 FilGainA2;
} FilNotchGainRec1;

# define Rte_TypeDef_FilNotchStRec1
typedef struct
{
  float32 FilSt1;
  float32 FilSt2;
} FilNotchStRec1;

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u11p5
typedef uint16 u11p5;

# define Rte_TypeDef_u12p4
typedef uint16 u12p4;

# define Rte_TypeDef_u13p3
typedef uint16 u13p3;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u2p14
typedef uint16 u2p14;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_u7p9
typedef uint16 u7p9;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_u0p16_10
typedef u0p16 Ary1D_u0p16_10[10];

# define Rte_TypeDef_Ary1D_u11p5_6
typedef u11p5 Ary1D_u11p5_6[6];

# define Rte_TypeDef_Ary1D_u12p4_2
typedef u12p4 Ary1D_u12p4_2[2];

# define Rte_TypeDef_Ary1D_u13p3_6
typedef u13p3 Ary1D_u13p3_6[6];

# define Rte_TypeDef_Ary1D_u1p15_12
typedef u1p15 Ary1D_u1p15_12[12];

# define Rte_TypeDef_Ary1D_u1p15_2
typedef u1p15 Ary1D_u1p15_2[2];

# define Rte_TypeDef_Ary1D_u1p15_5
typedef u1p15 Ary1D_u1p15_5[5];

# define Rte_TypeDef_Ary1D_u2p14_12
typedef u2p14 Ary1D_u2p14_12[12];

# define Rte_TypeDef_Ary1D_u4p12_10
typedef u4p12 Ary1D_u4p12_10[10];

# define Rte_TypeDef_Ary1D_u4p12_5
typedef u4p12 Ary1D_u4p12_5[5];

# define Rte_TypeDef_Ary1D_u7p9_12
typedef u7p9 Ary1D_u7p9_12[12];

# define Rte_TypeDef_Ary1D_u9p7_12
typedef u9p7 Ary1D_u9p7_12[12];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1470927355
#    error "The magic number of the generated file <C:/Component/SF014A_InertiaCmpVel_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1470927355
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
