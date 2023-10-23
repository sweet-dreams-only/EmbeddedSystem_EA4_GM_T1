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
 *          File:  Rte_CDD_XcpIf_Type.h
 *     SW-C Type:  CDD_XcpIf
 *  Generated at:  Sat Apr 23 20:09:41 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_XCPIF_TYPE_H
# define _RTE_CDD_XCPIF_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef ADRMPGREQTYP_READ
#  define ADRMPGREQTYP_READ (0U)
# endif

# ifndef ADRMPGREQTYP_WR
#  define ADRMPGREQTYP_WR (1U)
# endif

# ifndef CALCOPYSTS_NOTRDY
#  define CALCOPYSTS_NOTRDY (0U)
# endif

# ifndef CALCOPYSTS_COPYPNDING
#  define CALCOPYSTS_COPYPNDING (1U)
# endif

# ifndef CALCOPYSTS_COPYCMPL
#  define CALCOPYSTS_COPYCMPL (2U)
# endif

# ifndef CALCOPYSTS_PROCERR
#  define CALCOPYSTS_PROCERR (3U)
# endif

# ifndef GETSEGMOD_ADRINFO
#  define GETSEGMOD_ADRINFO (0U)
# endif

# ifndef GETSEGMOD_STDINFO
#  define GETSEGMOD_STDINFO (1U)
# endif

# ifndef GETSEGMOD_ADRMPG
#  define GETSEGMOD_ADRMPG (2U)
# endif

# ifndef MFGENAST_PRDNMOD
#  define MFGENAST_PRDNMOD (0U)
# endif

# ifndef MFGENAST_MFGMOD
#  define MFGENAST_MFGMOD (1U)
# endif

# ifndef MFGENAST_TESTMOD
#  define MFGENAST_TESTMOD (2U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1461458433
#    error "The magic number of the generated file <C:/Component/ES104A_XcpIf_Impl/tools/contract/Rte_CDD_XcpIf_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1461458433
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_XCPIF_TYPE_H */
