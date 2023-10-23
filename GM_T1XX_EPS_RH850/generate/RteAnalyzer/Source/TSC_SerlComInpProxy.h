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
 *          File:  TSC_SerlComInpProxy.h
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
Std_ReturnType TSC_SerlComInpProxy_Rte_Read_SerlComDi_Logl(boolean *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_AbsActvProtdProtnValRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_AbsActvProtdRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_AbsActvProtdRollgCntrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_AbsActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_AbsFaildRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_BackUpPwrModMstVirtDevAuthyRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_BusOffChassisExp_Logl(boolean data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_BusOffHiSpd_Logl(boolean data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_EngOilTRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_EngOilVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_EngRunActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_EngSpdRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_EngSpdStsRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LeWhlDstPlsCntrRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LeWhlDstTiStampRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LeWhlDstVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LeWhlRotlStsRstRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LeWhlSeqNrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LkaCmdProtnValRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LkaCmdRollgCntrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LkaCmdTqReqActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LkaCmdTqValRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg0C5_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg0C9_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg17D_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg180BusChassisExp_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg180BusHiSpd_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg182_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg1E9_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg1F1_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg1F5_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg214_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg232_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg337BusChassisExp_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg348BusChassisExp_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg348BusHiSpd_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg34ABusChassisExp_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg34ABusHiSpd_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg3F1_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg4D1_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_LstRxnTiMsg500BusHiSpd_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_OutdAirTCorrdValMaskRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_OutdAirTCorrdValRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_OutdAirTCorrdValVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_PtCrkActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_RdntVehStabyEnhmtSysActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_RiWhlDstPlsCntrRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_RiWhlDstTiStampRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_RiWhlDstVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_RiWhlRotlStsRstRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_RiWhlSeqNrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_ShiftLvrPosnRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_ShiftLvrPosnVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerSysPrfmncModReqRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqActvVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqProtnValRaw_Val(uint32 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqRollgCntrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlAgReqTarAgRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlFbReqActvProtnValRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlFbReqActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SteerWhlFbReqActvRollgCntrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SysBackUpPwrModEnaRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SysBackUpPwrModRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_SysPwrModRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_TqOvrlAlvRollgCntrRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_TqOvrlCmdChksRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_TqOvrlDeltaTqCmdActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_TqOvrlDeltaTqCmdValRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_TracCtrlSysActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_TracCtrlSysEnaRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehDynCtrlSysStRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehDynOverUnderSteerVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehDynYawRateRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehDynYawRateVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtActvRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLatARaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLatAVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLgtALoReslRaw_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtLgtALoReslVldRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_VehStabyEnhmtStsRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnRawBusChassisExp_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnRawBusHiSpd_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnVldRawBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeDrvnVldRawBusHiSpd_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnRawBusChassisExp_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnRawBusHiSpd_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnRawBusChassisExp_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnRawBusHiSpd_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnVldRawBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiDrvnVldRawBusHiSpd_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnRawBusChassisExp_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnRawBusHiSpd_Val(uint16 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlPlsPerRevRaw_Val(uint8 data);
Std_ReturnType TSC_SerlComInpProxy_Rte_Write_WhlRotlStsTiStampReslRaw_Val(uint16 data);

/** Client server interfaces */
Std_ReturnType TSC_SerlComInpProxy_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr);




