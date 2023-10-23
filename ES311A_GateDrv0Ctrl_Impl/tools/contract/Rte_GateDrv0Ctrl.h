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
 *          File:  Rte_GateDrv0Ctrl.h
 *     SW-C Type:  GateDrv0Ctrl
 *  Generated at:  Tue Jul 12 14:57:43 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GateDrv0Ctrl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GATEDRV0CTRL_H
# define _RTE_GATEDRV0CTRL_H

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

# include "Rte_GateDrv0Ctrl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GateDrv0Ctrl
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0CfgCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0CfgSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0OffStChkIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0OffStChkSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0OffStCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0St; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ivtr0BootstrpSplyFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ivtr0GenericFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ivtr0OffStChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv0CtrlGateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv0CtrlGateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv0CtrlGateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv0CtrlGateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GateDrv0Ctrl, RTE_CONST, RTE_CONST) Rte_Inst_GateDrv0Ctrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GateDrv0Ctrl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_MotDrvr0IninTestCmpl_Logl (FALSE)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_GATEDRV0CTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GateDrv0Ctrl_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_GATEDRV0CTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GateDrv0Ctrl_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_GATEDRV0CTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_IoHwAb_GetGpioMotDrvr0Diag_Oper(P2VAR(boolean, AUTOMATIC, RTE_GATEDRV0CTRL_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_IoHwAb_SetGpioGateDrv0Rst_Oper(boolean PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x050FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x050PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x051FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x051PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x055FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x055PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg2WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg3WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg4WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg7WrVal_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_GateDrv0Ctrl_GateDrv0CtrlPer1_GateDrv0Ena(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_GateDrv0Ctrl_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_GateDrv0Ctrl_GateDrv0CtrlPer2_GateDrv0Ena(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_GateDrv0Ctrl_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl
# define Rte_Read_StrtUpSt_Val Rte_Read_GateDrv0Ctrl_StrtUpSt_Val
# define Rte_Read_SysSt_Val Rte_Read_GateDrv0Ctrl_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotDrvr0IninTestCmpl_Logl Rte_Write_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper Rte_Call_GateDrv0Ctrl_IoHwAb_GetGpioMotDrvr0Diag_Oper
# define Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper Rte_Call_GateDrv0Ctrl_IoHwAb_SetGpioGateDrv0Rst_Oper
# define Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper Rte_Call_GateDrv0Ctrl_IoHwAb_SetGpioSysFlt2A_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GateDrv0Ctrl_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena(data) \
  Rte_IrvWrite_GateDrv0Ctrl_GateDrv0CtrlPer1_GateDrv0Ena(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv(data) \
  Rte_IrvWrite_GateDrv0Ctrl_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena() \
  Rte_IrvRead_GateDrv0Ctrl_GateDrv0CtrlPer2_GateDrv0Ena()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv() \
  Rte_IrvRead_GateDrv0Ctrl_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x050FailStep_Val

# define Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x050PassStep_Val

# define Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x051FailStep_Val

# define Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x051PassStep_Val

# define Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x055FailStep_Val

# define Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlNtcNr0x055PassStep_Val

# define Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg2WrVal_Val

# define Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg3WrVal_Val

# define Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg4WrVal_Val

# define Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val Rte_Prm_GateDrv0Ctrl_GateDrv0CtrlUnit0Cfg7WrVal_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GateDrv0Diag0Val() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0Diag0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0Diag1Val() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0Diag1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0Diag2Val() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0Diag2Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0StsVal() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0StsVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0VrfyRes0Val() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0VrfyRes0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0VrfyRes1Val() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0VrfyRes1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val() (Rte_Inst_GateDrv0Ctrl->Pim_dGateDrv0CtrlGateDrv0Diag0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val() (Rte_Inst_GateDrv0Ctrl->Pim_dGateDrv0CtrlGateDrv0Diag1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val() (Rte_Inst_GateDrv0Ctrl->Pim_dGateDrv0CtrlGateDrv0Diag2Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv0CtrlGateDrv0StsVal() (Rte_Inst_GateDrv0Ctrl->Pim_dGateDrv0CtrlGateDrv0StsVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val() (Rte_Inst_GateDrv0Ctrl->Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val() (Rte_Inst_GateDrv0Ctrl->Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0CfgCnt() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0CfgCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0OffStChkIdx() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0OffStChkIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0OffStCnt() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0OffStCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0St() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0St) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() (Rte_Inst_GateDrv0Ctrl->Pim_Ivtr0BootstrpSplyFltPrmVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ivtr0GenericFltPrmVal() (Rte_Inst_GateDrv0Ctrl->Pim_Ivtr0GenericFltPrmVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx() (Rte_Inst_GateDrv0Ctrl->Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0CfgSecAtmpt() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0CfgSecAtmpt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GateDrv0OffStChkSecAtmpt() (Rte_Inst_GateDrv0Ctrl->Pim_GateDrv0OffStChkSecAtmpt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ivtr0OffStChkCmpl() (Rte_Inst_GateDrv0Ctrl->Pim_Ivtr0OffStChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_GateDrv0Diag0Val(void)
 *   uint16 *Rte_Pim_GateDrv0Diag1Val(void)
 *   uint16 *Rte_Pim_GateDrv0Diag2Val(void)
 *   uint16 *Rte_Pim_GateDrv0StsVal(void)
 *   uint16 *Rte_Pim_GateDrv0VrfyRes0Val(void)
 *   uint16 *Rte_Pim_GateDrv0VrfyRes1Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0StsVal(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val(void)
 *   uint8 *Rte_Pim_GateDrv0CfgCnt(void)
 *   uint8 *Rte_Pim_GateDrv0OffStChkIdx(void)
 *   uint8 *Rte_Pim_GateDrv0OffStCnt(void)
 *   uint8 *Rte_Pim_GateDrv0St(void)
 *   uint8 *Rte_Pim_Ivtr0BootstrpSplyFltPrmVal(void)
 *   uint8 *Rte_Pim_Ivtr0GenericFltPrmVal(void)
 *   uint8 *Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx(void)
 *   boolean *Rte_Pim_GateDrv0CfgSecAtmpt(void)
 *   boolean *Rte_Pim_GateDrv0OffStChkSecAtmpt(void)
 *   boolean *Rte_Pim_Ivtr0OffStChkCmpl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val(void)
 *
 *********************************************************************************************************************/


# define GateDrv0Ctrl_START_SEC_CODE
# include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv0CtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GateDrv0CtrlInit1 GateDrv0CtrlInit1
FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv0CtrlPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena(boolean data)
 *   void Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GateDrv0CtrlPer1 GateDrv0CtrlPer1
FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv0CtrlPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotDrvr0IninTestCmpl_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena(void)
 *   boolean Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GateDrv0CtrlPer2 GateDrv0CtrlPer2
FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GateDrv0Ctrl_STOP_SEC_CODE
# include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetGpio1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1468346426
#    error "The magic number of the generated file <C:/component/ES311A_GateDrv0Ctrl_Impl/tools/contract/Rte_GateDrv0Ctrl.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1468346426
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GATEDRV0CTRL_H */
