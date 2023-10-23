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
 *          File:  TSC_GmMsg182BusChassisExp.h
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
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_LstRxnTiMsg182_Val(uint32 *data);
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_VehDynOverUnderSteerVldRaw_Val(uint8 *data);
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_VehStabyEnhmtLgtALoReslRaw_Val(uint16 *data);
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Read_VehStabyEnhmtLgtALoReslVldRaw_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Write_SerlComVehLgtA_Val(float32 data);

/** Client server interfaces */
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan);
Std_ReturnType TSC_GmMsg182BusChassisExp_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep);

/** Calibration Component Calibration Parameters */
uint16  TSC_GmMsg182BusChassisExp_Rte_Prm_GmMsg182BusChassisExpInvldTiOut_Val(void);
uint16  TSC_GmMsg182BusChassisExp_Rte_Prm_GmMsg182BusChassisExpMissTiOut_Val(void);

/** Per Instance Memories */
float32 *TSC_GmMsg182BusChassisExp_Rte_Pim_GmMsg182BusChassisExpPrevVehLgtA(void);
uint32 *TSC_GmMsg182BusChassisExp_Rte_Pim_GmMsg182BusChassisExpInvldTmr(void);



