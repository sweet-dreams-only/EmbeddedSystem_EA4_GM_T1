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
 *     SW-C Type:  MotTqTranlDampg
 *  Generated at:  Fri Aug 14 14:43:27 2015
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

# define Rte_TypeDef_LoaSt1
typedef uint8 LoaSt1;

# define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

# define Rte_TypeDef_u16p0
typedef uint16 u16p0;

# define Rte_TypeDef_u2p14
typedef uint16 u2p14;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_u16p0_2
typedef u16p0 Ary1D_u16p0_2[2];

# define Rte_TypeDef_Ary1D_u2p14_2
typedef u2p14 Ary1D_u2p14_2[2];

# define Rte_TypeDef_Ary1D_u2p14_4
typedef u2p14 Ary1D_u2p14_4[4];

# define Rte_TypeDef_Ary1D_u9p7_4
typedef u9p7 Ary1D_u9p7_4[4];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1439577490
#    error "The magic number of the generated file <C:/Component/SF050A_MotTqTranlDampg_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1439577490
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
