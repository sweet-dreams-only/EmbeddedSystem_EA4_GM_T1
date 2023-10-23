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
 *          File:  Rte_MotTqTranlDampg_Type.h
 *     SW-C Type:  MotTqTranlDampg
 *  Generated at:  Fri Aug 14 14:43:27 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTTQTRANLDAMPG_TYPE_H
# define _RTE_MOTTQTRANLDAMPG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef LOAST_NORM
#  define LOAST_NORM (0U)
# endif

# ifndef LOAST_LIMD
#  define LOAST_LIMD (1U)
# endif

# ifndef LOAST_SWBASDMTGTN
#  define LOAST_SWBASDMTGTN (2U)
# endif

# ifndef LOAST_FADEOUT
#  define LOAST_FADEOUT (3U)
# endif

# ifndef LOAST_CTRLDSHTDWNREQD
#  define LOAST_CTRLDSHTDWNREQD (4U)
# endif

# ifndef LOAST_IMDTSHTDWNREQD
#  define LOAST_IMDTSHTDWNREQD (5U)
# endif

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
#   if RTE_MAGIC_NUMBER != 1439577490
#    error "The magic number of the generated file <C:/Component/SF050A_MotTqTranlDampg_Impl/tools/contract/Rte_MotTqTranlDampg_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1439577490
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTTQTRANLDAMPG_TYPE_H */
