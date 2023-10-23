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
 *          File:  Rte_PullCmpActv_Type.h
 *     SW-C Type:  PullCmpActv
 *  Generated at:  Tue Jan 17 10:26:36 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PULLCMPACTV_TYPE_H
# define _RTE_PULLCMPACTV_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef NVM_REQ_OK
#  define NVM_REQ_OK (0U)
# endif

# ifndef NVM_REQ_NOT_OK
#  define NVM_REQ_NOT_OK (1U)
# endif

# ifndef NVM_REQ_PENDING
#  define NVM_REQ_PENDING (2U)
# endif

# ifndef NVM_REQ_INTEGRITY_FAILED
#  define NVM_REQ_INTEGRITY_FAILED (3U)
# endif

# ifndef NVM_REQ_BLOCK_SKIPPED
#  define NVM_REQ_BLOCK_SKIPPED (4U)
# endif

# ifndef NVM_REQ_NV_INVALIDATED
#  define NVM_REQ_NV_INVALIDATED (5U)
# endif

# ifndef NVM_REQ_CANCELED
#  define NVM_REQ_CANCELED (6U)
# endif

# ifndef NVM_REQ_REDUNDANCY_FAILED
#  define NVM_REQ_REDUNDANCY_FAILED (7U)
# endif

# ifndef NVM_REQ_RESTORED_FROM_ROM
#  define NVM_REQ_RESTORED_FROM_ROM (8U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1484668043
#    error "The magic number of the generated file <C:/component/SF013A_PullCmpActv_Impl/tools/contract/Rte_PullCmpActv_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1484668043
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_PULLCMPACTV_TYPE_H */
