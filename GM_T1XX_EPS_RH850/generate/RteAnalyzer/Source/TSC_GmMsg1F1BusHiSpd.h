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
 *          File:  TSC_GmMsg1F1BusHiSpd.h
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
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_EngRunActv_Logl(boolean *data);
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_LstRxnTiMsg1F1_Val(uint32 *data);
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_SysBackUpPwrModEnaRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_SysBackUpPwrModRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Read_SysPwrModRaw_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Write_MissMsg1F1_Logl(boolean data);
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Write_SysPwrMod_Val(GmSysPwrMod1 data);
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Write_SysPwrModRun_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg1F1BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg1F1BusHiSpd_Rte_Prm_GmMsg1F1BusHiSpdMissTiOut_Val(void);

/** Per Instance Memories */
boolean *TSC_GmMsg1F1BusHiSpd_Rte_Pim_GmMsg1F1BusHiSpdPrevPrevSysPwrModRun(void);



