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
 *          File:  TSC_CDD_HwTq2Meas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Read_HwTq2Polarity_Val(sint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_GearIdn1_Val(uint8 data);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_GearIdn1Vld_Logl(boolean data);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_HwTq2_Val(float32 data);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_HwTq2Qlfr_Val(SigQlfr1 data);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Write_HwTq2RollgCntr_Val(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_IoHwAb_SetFctPrphlHwTq2_Oper(void);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg);

/** Service interfaces */
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_HwTq2Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_HwTq2Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);
Std_ReturnType TSC_CDD_HwTq2Meas_Rte_Call_HwTq2Offs_SetRamBlockStatus(boolean RamBlockStatus_Arg);

/** Calibration Component Calibration Parameters */
uint16  TSC_CDD_HwTq2Meas_Rte_Prm_HwTq2MeasHwTq2PrtclFltFailStep_Val(void);
uint16  TSC_CDD_HwTq2Meas_Rte_Prm_HwTq2MeasHwTq2PrtclFltPassStep_Val(void);

/** SW-C local Calibration Parameters */
HwTqOffsRec1 * TSC_CDD_HwTq2Meas_Rte_CData_HwTq2OffsDft(void);

/** Per Instance Memories */
float32 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2MeasPrevHwTq2(void);
uint32 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2MsgMissRxCnt(void);
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_GearIdn1Data(void);
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2ComStsErrCntr(void);
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2IntSnsrErrCntr(void);
uint8 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2MeasPrevRollgCntr(void);
boolean *TSC_CDD_HwTq2Meas_Rte_Pim_GearIdn1Avl(void);
HwTqOffsRec1 *TSC_CDD_HwTq2Meas_Rte_Pim_HwTq2Offs(void);



