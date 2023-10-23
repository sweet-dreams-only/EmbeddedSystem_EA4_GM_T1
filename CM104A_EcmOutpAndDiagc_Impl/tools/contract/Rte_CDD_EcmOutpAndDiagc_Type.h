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
 *          File:  Rte_CDD_EcmOutpAndDiagc_Type.h
 *     SW-C Type:  CDD_EcmOutpAndDiagc
 *  Generated at:  Mon Oct 19 13:59:31 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_ECMOUTPANDDIAGC_TYPE_H
# define _RTE_CDD_ECMOUTPANDDIAGC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef TRIGREG_MST
#  define TRIGREG_MST (85U)
# endif

# ifndef TRIGREG_CHKR
#  define TRIGREG_CHKR (170U)
# endif

# ifndef TRIGREG_MSTANDCHKR
#  define TRIGREG_MSTANDCHKR (255U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1445275646
#    error "The magic number of the generated file <C:/Component/CM104A_EcmOutpAndDiagc_Impl/tools/contract/Rte_CDD_EcmOutpAndDiagc_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1445275646
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_ECMOUTPANDDIAGC_TYPE_H */
