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
 *          File:  Rte_TmplMonr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TmplMonr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TMPLMONR_H
# define _RTE_TMPLMONR_H

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

# include "Rte_TmplMonr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_TmplMonr_TmplMonrIninTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsIvtr2Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_PwrUpSeq_StrtUpSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
#  define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
#  define Rte_InitValue_StrtUpSt_Val (0U)
#  define Rte_InitValue_TmplMonrIninTestCmpl_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_TmplMonr_DiagcStsIvtr1Inactv_Logl
#  define Rte_Read_TmplMonr_DiagcStsIvtr1Inactv_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsIvtr1Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_TmplMonr_DiagcStsIvtr2Inactv_Logl
#  define Rte_Read_TmplMonr_DiagcStsIvtr2Inactv_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsIvtr2Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_StrtUpSt_Val Rte_Read_TmplMonr_StrtUpSt_Val
#  define Rte_Read_TmplMonr_StrtUpSt_Val(data) (*(data) = Rte_PwrUpSeq_StrtUpSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_TmplMonrIninTestCmpl_Logl Rte_Write_TmplMonr_TmplMonrIninTestCmpl_Logl
#  define Rte_Write_TmplMonr_TmplMonrIninTestCmpl_Logl(data) (Rte_TmplMonr_TmplMonrIninTestCmpl_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_ECMOUTPANDDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_ECMOUTPANDDIAGC_APPL_CODE) CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_ECMOUTPANDDIAGC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CtrlErrOut_Oper(arg1, arg2) (CtrlErrOut_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_GetGpioPwrOutpEnaFb_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper IoHwAb_GetGpioPwrOutpEnaFb_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioSysFlt2A_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper IoHwAb_SetGpioSysFlt2A_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioSysFlt2B_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper IoHwAb_SetGpioSysFlt2B_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioTmplMonrWdg_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper IoHwAb_SetGpioTmplMonrWdg_Oper
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

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrNtc40PrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrWdgRstrtCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninTestCmplFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_TmplMonrIninCntr() \
  (&Rte_TmplMonr_TmplMonrIninCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TmplMonrNtc40PrmByte() \
  (&Rte_TmplMonr_TmplMonrNtc40PrmByte) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TmplMonrWdgRstrtCnt() \
  (&Rte_TmplMonr_TmplMonrWdgRstrtCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TmplMonrIninTestCmplFlg() \
  (&Rte_TmplMonr_TmplMonrIninTestCmplFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TmplMonrSpiReadWrOrderFlg1() \
  (&Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TmplMonrSpiReadWrOrderFlg2() \
  (&Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg2) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define TmplMonr_START_SEC_CODE
# include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_TmplMonrInit1 TmplMonrInit1
#  define RTE_RUNNABLE_TmplMonrPer1 TmplMonrPer1
#  define RTE_RUNNABLE_TmplMonrPer2 TmplMonrPer2
# endif

FUNC(void, TmplMonr_CODE) TmplMonrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TmplMonr_CODE) TmplMonrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TmplMonr_CODE) TmplMonrPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define TmplMonr_STOP_SEC_CODE
# include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetGpio1_E_NOT_OK (1U)

#  define RTE_E_SetGpio1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TMPLMONR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
