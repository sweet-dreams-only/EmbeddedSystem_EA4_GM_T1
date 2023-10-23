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
 *          File:  Rte_GmMsg778BusHiSpd_Type.h
 *     SW-C Type:  GmMsg778BusHiSpd
 *  Generated at:  Wed May 25 12:51:47 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG778BUSHISPD_TYPE_H
# define _RTE_GMMSG778BUSHISPD_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef SYSST_DI
#  define SYSST_DI (0U)
# endif

# ifndef SYSST_OFF
#  define SYSST_OFF (1U)
# endif

# ifndef SYSST_ENA
#  define SYSST_ENA (2U)
# endif

# ifndef SYSST_WRMININ
#  define SYSST_WRMININ (3U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1464196799
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Sandbox/MM504A_GmMsg778BusHiSpd_Impl/tools/contract/Rte_GmMsg778BusHiSpd_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1464196799
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG778BUSHISPD_TYPE_H */
