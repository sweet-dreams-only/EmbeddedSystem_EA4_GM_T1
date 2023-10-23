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
 *          File:  Rte_CDD_SyncCrc_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_SyncCrc>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_SYNCCRC_TYPE_H
# define _RTE_CDD_SYNCCRC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef CRCHWRESVCFG_32BITCRC32BITWIDTH
#   define CRCHWRESVCFG_32BITCRC32BITWIDTH (0U)
#  endif

#  ifndef CRCHWRESVCFG_32BITCRC16BITWIDTH
#   define CRCHWRESVCFG_32BITCRC16BITWIDTH (1U)
#  endif

#  ifndef CRCHWRESVCFG_32BITCRC8BITWIDTH
#   define CRCHWRESVCFG_32BITCRC8BITWIDTH (2U)
#  endif

#  ifndef CRCHWRESVCFG_16BITCRC16BITWIDTH
#   define CRCHWRESVCFG_16BITCRC16BITWIDTH (3U)
#  endif

#  ifndef CRCHWRESVCFG_16BITCRC8BITWIDTH
#   define CRCHWRESVCFG_16BITCRC8BITWIDTH (4U)
#  endif

#  ifndef CRCHWRESVCFG_8BITCRC
#   define CRCHWRESVCFG_8BITCRC (5U)
#  endif

#  ifndef CRCHWRESVCFG_8BITCRCH2F
#   define CRCHWRESVCFG_8BITCRCH2F (6U)
#  endif

#  ifndef CRCHWRESVMOD_RELS
#   define CRCHWRESVMOD_RELS (0U)
#  endif

#  ifndef CRCHWRESVMOD_RESV
#   define CRCHWRESVMOD_RESV (1U)
#  endif

#  ifndef CRCHWSTS_NOTAVL
#   define CRCHWSTS_NOTAVL (0U)
#  endif

#  ifndef CRCHWSTS_AVL
#   define CRCHWSTS_AVL (1U)
#  endif

#  ifndef CRCHWSTS_BUSY
#   define CRCHWSTS_BUSY (2U)
#  endif

#  ifndef CRCHWSTS_NOTENAD
#   define CRCHWSTS_NOTENAD (3U)
#  endif

#  ifndef CRCHWSTS_RESV
#   define CRCHWSTS_RESV (4U)
#  endif

#  ifndef CRCHWSTS_IDXINVLD
#   define CRCHWSTS_IDXINVLD (255U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_SYNCCRC_TYPE_H */
