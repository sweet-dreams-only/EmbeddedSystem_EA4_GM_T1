/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_SysStMod_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <SysStMod>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SYSSTMOD_TYPE_H
# define _RTE_SYSSTMOD_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Cnt4_LowerLimit (0U)
#  define Cnt4_UpperLimit (31U)

#  ifndef SYSST_DI
#   define SYSST_DI (0U)
#  endif

#  ifndef SYSST_OFF
#   define SYSST_OFF (1U)
#  endif

#  ifndef SYSST_ENA
#   define SYSST_ENA (2U)
#  endif

#  ifndef SYSST_WRMININ
#   define SYSST_WRMININ (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_SYSSTMOD_TYPE_H */
