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
 *     SW-C Type:  PartNr
 *  Generated at:  Thu Sep 29 09:16:53 2016
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

# define Rte_TypeDef_Ary1D_u8_10
typedef uint8 Ary1D_u8_10[10];

# define Rte_TypeDef_Ary1D_u8_14
typedef uint8 Ary1D_u8_14[14];

# define Rte_TypeDef_Ary1D_u8_16
typedef uint8 Ary1D_u8_16[16];

# define Rte_TypeDef_Ary1D_u8_17
typedef uint8 Ary1D_u8_17[17];

# define Rte_TypeDef_Ary1D_u8_2
typedef uint8 Ary1D_u8_2[2];

# define Rte_TypeDef_Ary1D_u8_20
typedef uint8 Ary1D_u8_20[20];

# define Rte_TypeDef_Ary1D_u8_4
typedef uint8 Ary1D_u8_4[4];

# define Rte_TypeDef_Ary1D_u8_5
typedef uint8 Ary1D_u8_5[5];

# define Rte_TypeDef_Ary1D_u8_6
typedef uint8 Ary1D_u8_6[6];

# define Rte_TypeDef_Ary1D_u8_7
typedef uint8 Ary1D_u8_7[7];

# define Rte_TypeDef_Ary1D_u8_822
typedef uint8 Ary1D_u8_822[822];

# define Rte_TypeDef_Ary1D_u8_9
typedef uint8 Ary1D_u8_9[9];

# define Rte_TypeDef_GmSysPwrMod1
typedef uint8 GmSysPwrMod1;

# define Rte_TypeDef_MfgEnaSt1
typedef uint8 MfgEnaSt1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1475165340
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/GM_002A_PartNr_Impl-kzdyfh/GM_002A_PartNr_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1475165340
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
