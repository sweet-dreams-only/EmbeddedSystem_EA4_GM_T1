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
 *          File:  Rte_GmMsg1F1BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1F1BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1F1BUSHISPD_H
# define _RTE_GMMSG1F1BUSHISPD_H

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

# include "Rte_GmMsg1F1BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(GmSysPwrMod1, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg1F1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysBackUpPwrModEnaRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysBackUpPwrModRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_SysPwrModRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EngRunActv_Logl (FALSE)
#  define Rte_InitValue_LstRxnTiMsg1F1_Val (0U)
#  define Rte_InitValue_MissMsg1F1_Logl (FALSE)
#  define Rte_InitValue_SysBackUpPwrModEnaRaw_Val (0U)
#  define Rte_InitValue_SysBackUpPwrModRaw_Val (0U)
#  define Rte_InitValue_SysPwrMod_Val (0U)
#  define Rte_InitValue_SysPwrModRaw_Val (0U)
#  define Rte_InitValue_SysPwrModRun_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EngRunActv_Logl Rte_Read_GmMsg1F1BusHiSpd_EngRunActv_Logl
#  define Rte_Read_GmMsg1F1BusHiSpd_EngRunActv_Logl(data) (*(data) = Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LstRxnTiMsg1F1_Val Rte_Read_GmMsg1F1BusHiSpd_LstRxnTiMsg1F1_Val
#  define Rte_Read_GmMsg1F1BusHiSpd_LstRxnTiMsg1F1_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg1F1_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysBackUpPwrModEnaRaw_Val Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModEnaRaw_Val
#  define Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModEnaRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SysBackUpPwrModEnaRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysBackUpPwrModRaw_Val Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModRaw_Val
#  define Rte_Read_GmMsg1F1BusHiSpd_SysBackUpPwrModRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SysBackUpPwrModRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysPwrModRaw_Val Rte_Read_GmMsg1F1BusHiSpd_SysPwrModRaw_Val
#  define Rte_Read_GmMsg1F1BusHiSpd_SysPwrModRaw_Val(data) (*(data) = Rte_SerlComInpProxy_SysPwrModRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MissMsg1F1_Logl Rte_Write_GmMsg1F1BusHiSpd_MissMsg1F1_Logl
#  define Rte_Write_GmMsg1F1BusHiSpd_MissMsg1F1_Logl(data) (Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysPwrMod_Val Rte_Write_GmMsg1F1BusHiSpd_SysPwrMod_Val
#  define Rte_Write_GmMsg1F1BusHiSpd_SysPwrMod_Val(data) (Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysPwrModRun_Logl Rte_Write_GmMsg1F1BusHiSpd_SysPwrModRun_Logl
#  define Rte_Write_GmMsg1F1BusHiSpd_SysPwrModRun_Logl(data) (Rte_GmMsg1F1BusHiSpd_SysPwrModRun_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts6_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmMsg1F1BusHiSpdMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg1F1BusHiSpdMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg1F1BusHiSpd_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun() \
  (&Rte_GmMsg1F1BusHiSpd_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg1F1BusHiSpd_START_SEC_CODE
# include "GmMsg1F1BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg1F1BusHiSpdPer1 GmMsg1F1BusHiSpdPer1
# endif

FUNC(void, GmMsg1F1BusHiSpd_CODE) GmMsg1F1BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg1F1BusHiSpd_STOP_SEC_CODE
# include "GmMsg1F1BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG1F1BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
