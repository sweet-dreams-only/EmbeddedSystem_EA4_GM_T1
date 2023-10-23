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
 *          File:  Rte_HwAgArbn_Type.h
 *     SW-C Type:  HwAgArbn
 *  Generated at:  Thu Aug 13 12:42:09 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGARBN_TYPE_H
# define _RTE_HWAGARBN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef SIGQLFR_NORES
#  define SIGQLFR_NORES (0U)
# endif

# ifndef SIGQLFR_PASSD
#  define SIGQLFR_PASSD (1U)
# endif

# ifndef SIGQLFR_FAILD
#  define SIGQLFR_FAILD (2U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1439489281
#    error "The magic number of the generated file <C:/Component/ES238A_HwAgArbn_Impl/tools/contract/Rte_HwAgArbn_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1439489281
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAGARBN_TYPE_H */
