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
 *          File:  Rte_CDD_FlsMem.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FlsMem>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FLSMEM_H
# define _RTE_CDD_FLSMEM_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_FlsMem_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CodFlsCrcChkCmpl_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_CodFlsCrcChkCmpl_Logl Rte_Write_CDD_FlsMem_CodFlsCrcChkCmpl_Logl
#  define Rte_Write_CDD_FlsMem_CodFlsCrcChkCmpl_Logl(data) (Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_SYNCCRC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CDD_SYNCCRC_APPL_CODE) ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwInRegAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) ResvKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_SYNCCRC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ResvCrcHwUnit_Oper ResvCrcHwUnit_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsCrcChkStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcHwIdxKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsSngBitErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_PwrOnRstCrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CodFlsCrcChkStrtTi() \
  (&Rte_CDD_FlsMem_CodFlsCrcChkStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CrcHwIdxKey() \
  (&Rte_CDD_FlsMem_CrcHwIdxKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CodFlsSngBitErr() \
  (&Rte_CDD_FlsMem_CodFlsSngBitErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CrcChkCmpl() \
  (&Rte_CDD_FlsMem_CrcChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrOnRstCrcChkCmpl() \
  (&Rte_CDD_FlsMem_PwrOnRstCrcChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_FlsMem_START_SEC_CODE
# include "CDD_FlsMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FlsMemInit1 FlsMemInit1
#  define RTE_RUNNABLE_FlsMemPer2 FlsMemPer2
# endif

FUNC(void, CDD_FlsMem_CODE) FlsMemInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_FlsMem_CODE) FlsMemPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_FlsMem_STOP_SEC_CODE
# include "CDD_FlsMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_ResvCrcHwUnit_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FLSMEM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
