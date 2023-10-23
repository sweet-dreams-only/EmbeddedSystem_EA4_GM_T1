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
 *          File:  TSC_GmMsg1F5BusHiSpd.h
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
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Read_LstRxnTiMsg1F5_Val(uint32 *data);
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Read_ShiftLvrPosnRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Read_ShiftLvrPosnVldRaw_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Write_InvldMsg1F5_Logl(boolean data);
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Write_ShiftLvrInRvs_Logl(boolean data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg1F5BusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg1F5BusHiSpd_Rte_Prm_GmMsg1F5BusHiSpdInvldTiOut_Val(void);
uint16  TSC_GmMsg1F5BusHiSpd_Rte_Prm_GmMsg1F5BusHiSpdMissTiOut_Val(void);

/** Per Instance Memories */
uint32 *TSC_GmMsg1F5BusHiSpd_Rte_Pim_GmMsg1F5BusHiSpdInvldTmr(void);
boolean *TSC_GmMsg1F5BusHiSpd_Rte_Pim_GmMsg1F5BusHiSpdPrevShiftLvrInRvs(void);



