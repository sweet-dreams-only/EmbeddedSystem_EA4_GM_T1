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
 *          File:  Rte_HwAgCorrln.h
 *     SW-C Type:  HwAgCorrln
 *  Generated at:  Tue Dec 15 11:10:47 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgCorrln> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGCORRLN_H
# define _RTE_HWAGCORRLN_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_HwAgCorrln_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAgCorrln
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgARollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgAStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgBRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgBStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgCorrlnAgAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgCorrlnAgBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAgCorrln, RTE_CONST, RTE_CONST) Rte_Inst_HwAgCorrln; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAgCorrln, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAgA_Val (0.0F)
# define Rte_InitValue_HwAgAQlfr_Val (0U)
# define Rte_InitValue_HwAgARollgCntr_Val (0U)
# define Rte_InitValue_HwAgB_Val (0.0F)
# define Rte_InitValue_HwAgBARollgCntr_Val (0U)
# define Rte_InitValue_HwAgBQlfr_Val (0U)
# define Rte_InitValue_HwAgCorrlnSt_Val (3U)
# define Rte_InitValue_HwAgIdptSig_Val (2U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgCorrln_HwAgA_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgCorrln_HwAgAQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgCorrln_HwAgARollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgCorrln_HwAgB_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgCorrln_HwAgBARollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgCorrln_HwAgBQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgCorrln_HwAgCorrlnSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgCorrln_HwAgIdptSig_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgCorrln_FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgCorrln_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWAGCORRLN_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgCorrln_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgCorrln_HwAgCorrlnHwAgAbsltDif_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAgCorrln_HwAgCorrlnNtc0x092FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAgCorrln_HwAgCorrlnNtc0x092PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgCorrln_HwAgCorrlnHwAgMaxStall_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAgA_Val Rte_Read_HwAgCorrln_HwAgA_Val
# define Rte_Read_HwAgAQlfr_Val Rte_Read_HwAgCorrln_HwAgAQlfr_Val
# define Rte_Read_HwAgARollgCntr_Val Rte_Read_HwAgCorrln_HwAgARollgCntr_Val
# define Rte_Read_HwAgB_Val Rte_Read_HwAgCorrln_HwAgB_Val
# define Rte_Read_HwAgBARollgCntr_Val Rte_Read_HwAgCorrln_HwAgBARollgCntr_Val
# define Rte_Read_HwAgBQlfr_Val Rte_Read_HwAgCorrln_HwAgBQlfr_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgCorrlnSt_Val Rte_Write_HwAgCorrln_HwAgCorrlnSt_Val
# define Rte_Write_HwAgIdptSig_Val Rte_Write_HwAgCorrln_HwAgIdptSig_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_u08_Oper Rte_Call_HwAgCorrln_FltInj_u08_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwAgCorrln_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwAgCorrln_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAgCorrlnHwAgAbsltDif_Val Rte_Prm_HwAgCorrln_HwAgCorrlnHwAgAbsltDif_Val

# define Rte_Prm_HwAgCorrlnNtc0x092FailStep_Val Rte_Prm_HwAgCorrln_HwAgCorrlnNtc0x092FailStep_Val

# define Rte_Prm_HwAgCorrlnNtc0x092PassStep_Val Rte_Prm_HwAgCorrln_HwAgCorrlnNtc0x092PassStep_Val

# define Rte_Prm_HwAgCorrlnHwAgMaxStall_Val Rte_Prm_HwAgCorrln_HwAgCorrlnHwAgMaxStall_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAgARollgCntPrev() (Rte_Inst_HwAgCorrln->Pim_HwAgARollgCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgAStallCntPrev() (Rte_Inst_HwAgCorrln->Pim_HwAgAStallCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgBRollgCntPrev() (Rte_Inst_HwAgCorrln->Pim_HwAgBRollgCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgBStallCntPrev() (Rte_Inst_HwAgCorrln->Pim_HwAgBStallCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgCorrlnAgAAvl() (Rte_Inst_HwAgCorrln->Pim_dHwAgCorrlnAgAAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgCorrlnAgBAvl() (Rte_Inst_HwAgCorrln->Pim_dHwAgCorrlnAgBAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_HwAgARollgCntPrev(void)
 *   uint8 *Rte_Pim_HwAgAStallCntPrev(void)
 *   uint8 *Rte_Pim_HwAgBRollgCntPrev(void)
 *   uint8 *Rte_Pim_HwAgBStallCntPrev(void)
 *   boolean *Rte_Pim_dHwAgCorrlnAgAAvl(void)
 *   boolean *Rte_Pim_dHwAgCorrlnAgBAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgCorrlnHwAgAbsltDif_Val(void)
 *   uint16 Rte_Prm_HwAgCorrlnNtc0x092FailStep_Val(void)
 *   uint16 Rte_Prm_HwAgCorrlnNtc0x092PassStep_Val(void)
 *   uint8 Rte_Prm_HwAgCorrlnHwAgMaxStall_Val(void)
 *
 *********************************************************************************************************************/


# define HwAgCorrln_START_SEC_CODE
# include "HwAgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgCorrlnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAgA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwAgARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgBARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgBQlfr_Val(SigQlfr1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCorrlnSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwAgIdptSig_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgCorrlnPer1 HwAgCorrlnPer1
FUNC(void, HwAgCorrln_CODE) HwAgCorrlnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgCorrln_STOP_SEC_CODE
# include "HwAgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1450188346
#    error "The magic number of the generated file <C:/Component/ES239A_HwAgCorrln_Impl/tools/contract/Rte_HwAgCorrln.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1450188346
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAGCORRLN_H */
