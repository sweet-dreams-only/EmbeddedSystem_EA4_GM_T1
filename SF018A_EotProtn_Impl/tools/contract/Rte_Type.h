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
 *     SW-C Type:  EotProtn
 *  Generated at:  Wed Jul  6 15:21:07 2016
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

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u12p4
typedef uint16 u12p4;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_u0p16_2
typedef u0p16 Ary1D_u0p16_2[2];

# define Rte_TypeDef_Ary1D_u12p4_2
typedef u12p4 Ary1D_u12p4_2[2];

# define Rte_TypeDef_Ary1D_u12p4_4
typedef u12p4 Ary1D_u12p4_4[4];

# define Rte_TypeDef_Ary1D_u1p15_4
typedef u1p15 Ary1D_u1p15_4[4];

# define Rte_TypeDef_Ary1D_u4p12_2
typedef u4p12 Ary1D_u4p12_2[2];

# define Rte_TypeDef_Ary1D_u9p7_4
typedef u9p7 Ary1D_u9p7_4[4];

# define Rte_TypeDef_Ary1D_u9p7_5
typedef u9p7 Ary1D_u9p7_5[5];

# define Rte_TypeDef_Ary2D_u0p16_4_2
typedef Ary1D_u0p16_2 Ary2D_u0p16_4_2[4];

# define Rte_TypeDef_Ary2D_u12p4_4_2
typedef Ary1D_u12p4_2 Ary2D_u12p4_4_2[4];

# define Rte_TypeDef_Ary2D_u12p4_5_4
typedef Ary1D_u12p4_4 Ary2D_u12p4_5_4[5];

# define Rte_TypeDef_Ary2D_u1p15_5_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_5_4[5];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467830946
#    error "The magic number of the generated file <C:/Component/SF018A_EotProtn_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467830946
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
