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
 *          File:  Rte_HwTqCorrln.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTqCorrln>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQCORRLN_H
# define _RTE_HWTQCORRLN_H

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

# include "Rte_HwTqCorrln_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqChACorrlnTraErr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqChBCorrlnTraErr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqCorrlnSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq0Meas_HwTq0RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq2Meas_HwTq2RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTqChA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTqChB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq3Meas_HwTq3RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwTqA_Val (0.0F)
#  define Rte_InitValue_HwTqAQlfr_Val (0U)
#  define Rte_InitValue_HwTqARollgCntr_Val (0U)
#  define Rte_InitValue_HwTqB_Val (0.0F)
#  define Rte_InitValue_HwTqBQlfr_Val (0U)
#  define Rte_InitValue_HwTqBRollgCntr_Val (0U)
#  define Rte_InitValue_HwTqC_Val (0.0F)
#  define Rte_InitValue_HwTqCQlfr_Val (0U)
#  define Rte_InitValue_HwTqCRollgCntr_Val (0U)
#  define Rte_InitValue_HwTqChA_Val (0.0F)
#  define Rte_InitValue_HwTqChACorrlnTraErr_Val (0.0F)
#  define Rte_InitValue_HwTqChB_Val (0.0F)
#  define Rte_InitValue_HwTqChBCorrlnTraErr_Val (0.0F)
#  define Rte_InitValue_HwTqCorrlnSts_Val (15U)
#  define Rte_InitValue_HwTqD_Val (0.0F)
#  define Rte_InitValue_HwTqDQlfr_Val (0U)
#  define Rte_InitValue_HwTqDRollgCntr_Val (0U)
#  define Rte_InitValue_HwTqIdptSig_Val (4U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChATqSumLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwTqCorrln_HwTqChBTqSumLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTqA_Val Rte_Read_HwTqCorrln_HwTqA_Val
#  define Rte_Read_HwTqCorrln_HwTqA_Val(data) (*(data) = Rte_CDD_HwTq0Meas_HwTq0_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqAQlfr_Val Rte_Read_HwTqCorrln_HwTqAQlfr_Val
#  define Rte_Read_HwTqCorrln_HwTqAQlfr_Val(data) (*(data) = Rte_CDD_HwTq0Meas_HwTq0Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqARollgCntr_Val Rte_Read_HwTqCorrln_HwTqARollgCntr_Val
#  define Rte_Read_HwTqCorrln_HwTqARollgCntr_Val(data) (*(data) = Rte_CDD_HwTq0Meas_HwTq0RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqB_Val Rte_Read_HwTqCorrln_HwTqB_Val
#  define Rte_Read_HwTqCorrln_HwTqB_Val(data) (*(data) = Rte_CDD_HwTq1Meas_HwTq1_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqBQlfr_Val Rte_Read_HwTqCorrln_HwTqBQlfr_Val
#  define Rte_Read_HwTqCorrln_HwTqBQlfr_Val(data) (*(data) = Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqBRollgCntr_Val Rte_Read_HwTqCorrln_HwTqBRollgCntr_Val
#  define Rte_Read_HwTqCorrln_HwTqBRollgCntr_Val(data) (*(data) = Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqC_Val Rte_Read_HwTqCorrln_HwTqC_Val
#  define Rte_Read_HwTqCorrln_HwTqC_Val(data) (*(data) = Rte_CDD_HwTq2Meas_HwTq2_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqCQlfr_Val Rte_Read_HwTqCorrln_HwTqCQlfr_Val
#  define Rte_Read_HwTqCorrln_HwTqCQlfr_Val(data) (*(data) = Rte_CDD_HwTq2Meas_HwTq2Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqCRollgCntr_Val Rte_Read_HwTqCorrln_HwTqCRollgCntr_Val
#  define Rte_Read_HwTqCorrln_HwTqCRollgCntr_Val(data) (*(data) = Rte_CDD_HwTq2Meas_HwTq2RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqChA_Val Rte_Read_HwTqCorrln_HwTqChA_Val
#  define Rte_Read_HwTqCorrln_HwTqChA_Val(data) (*(data) = Rte_HwTqArbn_HwTqChA_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqChB_Val Rte_Read_HwTqCorrln_HwTqChB_Val
#  define Rte_Read_HwTqCorrln_HwTqChB_Val(data) (*(data) = Rte_HwTqArbn_HwTqChB_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqD_Val Rte_Read_HwTqCorrln_HwTqD_Val
#  define Rte_Read_HwTqCorrln_HwTqD_Val(data) (*(data) = Rte_CDD_HwTq3Meas_HwTq3_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqDQlfr_Val Rte_Read_HwTqCorrln_HwTqDQlfr_Val
#  define Rte_Read_HwTqCorrln_HwTqDQlfr_Val(data) (*(data) = Rte_CDD_HwTq3Meas_HwTq3Qlfr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqDRollgCntr_Val Rte_Read_HwTqCorrln_HwTqDRollgCntr_Val
#  define Rte_Read_HwTqCorrln_HwTqDRollgCntr_Val(data) (*(data) = Rte_CDD_HwTq3Meas_HwTq3RollgCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwTqChACorrlnTraErr_Val Rte_Write_HwTqCorrln_HwTqChACorrlnTraErr_Val
#  define Rte_Write_HwTqCorrln_HwTqChACorrlnTraErr_Val(data) (Rte_HwTqCorrln_HwTqChACorrlnTraErr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqChBCorrlnTraErr_Val Rte_Write_HwTqCorrln_HwTqChBCorrlnTraErr_Val
#  define Rte_Write_HwTqCorrln_HwTqChBCorrlnTraErr_Val(data) (Rte_HwTqCorrln_HwTqChBCorrlnTraErr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqCorrlnSts_Val Rte_Write_HwTqCorrln_HwTqCorrlnSts_Val
#  define Rte_Write_HwTqCorrln_HwTqCorrlnSts_Val(data) (Rte_HwTqCorrln_HwTqCorrlnSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqIdptSig_Val Rte_Write_HwTqCorrln_HwTqIdptSig_Val
#  define Rte_Write_HwTqCorrln_HwTqIdptSig_Val(data) (Rte_HwTqCorrln_HwTqIdptSig_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_FLTINJ_APPL_CODE) FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FltInj_u08_Oper(arg1, arg2) (FltInj_u08_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTqChACmnModCmpLpFilSt_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)106, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)107, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwTqCorrlnPer1_HwTqChAAvl(data) \
  (Rte_Irv_HwTqCorrln_HwTqChAAvl = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwTqCorrlnPer1_HwTqChBAvl(data) \
  (Rte_Irv_HwTqCorrln_HwTqChBAvl = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwTqCorrlnPer2_HwTqChAAvl() \
  Rte_Irv_HwTqCorrln_HwTqChAAvl
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwTqCorrlnPer2_HwTqChBAvl() \
  Rte_Irv_HwTqCorrln_HwTqChBAvl
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwTqCorrlnPer2_HwTqChATqSumLim(data) \
  (Rte_Irv_HwTqCorrln_HwTqChATqSumLim = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_HwTqCorrlnPer2_HwTqChBTqSumLim(data) \
  (Rte_Irv_HwTqCorrln_HwTqChBTqSumLim = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwTqCorrlnPer3_HwTqChATqSumLim() \
  Rte_Irv_HwTqCorrln_HwTqChATqSumLim
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_HwTqCorrlnPer3_HwTqChBTqSumLim() \
  Rte_Irv_HwTqCorrln_HwTqChBTqSumLim
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_HwTqChACmnModCmpLpFilStDft() (((P2CONST(Rte_Calprm_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP])->HwTqChACmnModCmpLpFilStDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_HwTqChBCmnModCmpLpFilStDft() (((P2CONST(Rte_Calprm_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP])->HwTqChBCmnModCmpLpFilStDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwTqCorrlnChACmnModCmpLpFilActvnThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChACmnModCmpLpFilActvnThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChACmnModCmpLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChACmnModCmpLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChACmnModCmpLpFilOutpLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChACmnModCmpLpFilOutpLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChAImdtCorrlnChkFailThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChAImdtCorrlnChkFailThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChAImdtCorrlnChkPassThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChAImdtCorrlnChkPassThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChAStabStClrFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChAStabStClrFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChAStabStLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChAStabStLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChAStabStSetFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChAStabStSetFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChATqSumMaxLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATqSumMaxLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChATraSumClrFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATraSumClrFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChATraSumSetFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATraSumSetFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBCmnModCmpLpFilActvnThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBCmnModCmpLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBCmnModCmpLpFilOutpLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBImdtCorrlnChkFailThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBImdtCorrlnChkFailThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBImdtCorrlnChkPassThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBImdtCorrlnChkPassThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBStabStClrFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBStabStClrFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBStabStLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBStabStLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBStabStSetFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBStabStSetFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBTqSumMaxLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTqSumMaxLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBTraSumClrFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTraSumClrFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnChBTraSumSetFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTraSumSetFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnMaxStallTqA_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnMaxStallTqA_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnMaxStallTqB_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnMaxStallTqB_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnMaxStallTqC_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnMaxStallTqC_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTqCorrlnMaxStallTqD_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnMaxStallTqD_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwTqCorrlnChATraLpFilX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATraLpFilX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwTqCorrlnChATraLpFilX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATraLpFilX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwTqCorrlnChATraLpFilY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATraLpFilY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwTqCorrlnChATraLpFilY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChATraLpFilY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwTqCorrlnChBTraLpFilX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTraLpFilX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwTqCorrlnChBTraLpFilX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTraLpFilX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HwTqCorrlnChBTraLpFilY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTraLpFilY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HwTqCorrlnChBTraLpFilY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->HwTqCorrlnChBTraLpFilY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChACmnModCmpLpFilSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBCmnModCmpLpFilSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChAImdtCorrlnChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBImdtCorrlnChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChACmnModCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChAStabStLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChATraLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBCmnModCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBStabStLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqChBTraLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwTqChACmnModCmpLpFilSt() \
  (&Rte_HwTqCorrln_HwTqChACmnModCmpLpFilSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChBCmnModCmpLpFilSt() \
  (&Rte_HwTqCorrln_HwTqChBCmnModCmpLpFilSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqARollgCntrPrev() \
  (&Rte_HwTqCorrln_HwTqARollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqAStallCntrPrev() \
  (&Rte_HwTqCorrln_HwTqAStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqBRollgCntrPrev() \
  (&Rte_HwTqCorrln_HwTqBRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqBStallCntrPrev() \
  (&Rte_HwTqCorrln_HwTqBStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqCRollgCntrPrev() \
  (&Rte_HwTqCorrln_HwTqCRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqCStallCntrPrev() \
  (&Rte_HwTqCorrln_HwTqCStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqDRollgCntrPrev() \
  (&Rte_HwTqCorrln_HwTqDRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqDStallCntrPrev() \
  (&Rte_HwTqCorrln_HwTqDStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChAImdtCorrlnChk() \
  (&Rte_HwTqCorrln_HwTqChAImdtCorrlnChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChBImdtCorrlnChk() \
  (&Rte_HwTqCorrln_HwTqChBImdtCorrlnChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChACmnModCmpLpFil() \
  (&Rte_HwTqCorrln_HwTqChACmnModCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChAStabStLpFil() \
  (&Rte_HwTqCorrln_HwTqChAStabStLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChATraLpFil() \
  (&Rte_HwTqCorrln_HwTqChATraLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChBCmnModCmpLpFil() \
  (&Rte_HwTqCorrln_HwTqChBCmnModCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChBStabStLpFil() \
  (&Rte_HwTqCorrln_HwTqChBStabStLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqChBTraLpFil() \
  (&Rte_HwTqCorrln_HwTqChBTraLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HwTqCorrln_START_SEC_CODE
# include "HwTqCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwTqCorrlnInit1 HwTqCorrlnInit1
#  define RTE_RUNNABLE_HwTqCorrlnPer1 HwTqCorrlnPer1
#  define RTE_RUNNABLE_HwTqCorrlnPer2 HwTqCorrlnPer2
#  define RTE_RUNNABLE_HwTqCorrlnPer3 HwTqCorrlnPer3
# endif

FUNC(void, HwTqCorrln_CODE) HwTqCorrlnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwTqCorrln_CODE) HwTqCorrlnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwTqCorrln_CODE) HwTqCorrlnPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwTqCorrln_CODE) HwTqCorrlnPer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HwTqCorrln_STOP_SEC_CODE
# include "HwTqCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWTQCORRLN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
