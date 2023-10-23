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
 *          File:  Rte_CDD_TSG31CfgAndUse_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_TSG31CfgAndUse>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_TSG31CFGANDUSE_TYPE_H
# define _RTE_CDD_TSG31CFGANDUSE_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Cnt8_LowerLimit (0U)
#  define Cnt8_UpperLimit (1800U)

#  define Ti1_LowerLimit (0U)
#  define Ti1_UpperLimit (25000U)

#  define Ti2_LowerLimit (1U)
#  define Ti2_UpperLimit (1000U)

#  define Ti3_LowerLimit (0U)
#  define Ti3_UpperLimit (71429U)

#  define Ti4_LowerLimit (55555U)
#  define Ti4_UpperLimit (71429U)

#  ifndef MCECS_OFFSCMDSTRT
#   define MCECS_OFFSCMDSTRT (0U)
#  endif

#  ifndef MCECS_OFFSCMDHI
#   define MCECS_OFFSCMDHI (1U)
#  endif

#  ifndef MCECS_OFFSCMDLO
#   define MCECS_OFFSCMDLO (2U)
#  endif

#  ifndef MCECS_OFFSCMDZERO
#   define MCECS_OFFSCMDZERO (3U)
#  endif

#  ifndef MCECS_OFFSCMDEND
#   define MCECS_OFFSCMDEND (4U)
#  endif

#  ifndef MCECS_GAINCMDAD
#   define MCECS_GAINCMDAD (5U)
#  endif

#  ifndef MCECS_GAINCMDBE
#   define MCECS_GAINCMDBE (6U)
#  endif

#  ifndef MCECS_GAINCMDCF
#   define MCECS_GAINCMDCF (7U)
#  endif

#  ifndef MCECS_CMDSAFEST
#   define MCECS_CMDSAFEST (8U)
#  endif

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

#endif /* _RTE_CDD_TSG31CFGANDUSE_TYPE_H */
