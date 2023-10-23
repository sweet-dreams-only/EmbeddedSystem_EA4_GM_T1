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
 *     SW-C Type:  AssiHiFrq
 *  Generated at:  Wed Feb  8 11:00:41 2017
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

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u3p13
typedef uint16 u3p13;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_u5p11
typedef uint16 u5p11;

# define Rte_TypeDef_u7p9
typedef uint16 u7p9;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_u1p15_5
typedef u1p15 Ary1D_u1p15_5[5];

# define Rte_TypeDef_Ary1D_u3p13_13
typedef u3p13 Ary1D_u3p13_13[13];

# define Rte_TypeDef_Ary1D_u4p12_5
typedef u4p12 Ary1D_u4p12_5[5];

# define Rte_TypeDef_Ary1D_u5p11_13
typedef u5p11 Ary1D_u5p11_13[13];

# define Rte_TypeDef_Ary1D_u7p9_12
typedef u7p9 Ary1D_u7p9_12[12];

# define Rte_TypeDef_Ary1D_u9p7_12
typedef u9p7 Ary1D_u9p7_12[12];

# define Rte_TypeDef_Ary2D_u1p15_12_5
typedef Ary1D_u1p15_5 Ary2D_u1p15_12_5[12];

# define Rte_TypeDef_Ary2D_u3p13_12_13
typedef Ary1D_u3p13_13 Ary2D_u3p13_12_13[12];

# define Rte_TypeDef_Ary2D_u4p12_12_5
typedef Ary1D_u4p12_5 Ary2D_u4p12_12_5[12];

# define Rte_TypeDef_Ary2D_u5p11_12_13
typedef Ary1D_u5p11_13 Ary2D_u5p11_12_13[12];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1486575108
#    error "The magic number of the generated file <C:/component/SF028A_AssiHiFrq_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1486575108
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
