/* -----------------------------------------------------------------------------
  Filename:    appdesc.h
  Description: Interface towards the application used by CANdesc.
                
                Manufacturer: General Motors
                EcuDocFile:   C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\tools\GENy\EPS_T1XX_Nxtr_19.0.4_60.cdd
                Variant:      CommonDiagnostics

  Generated by CANdelaGen, Tue Feb 07 17:36:22 2017
 
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2013 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__APPDESC_H__)
#define __APPDESC_H__

/* -----------------------------------------------------------------------------
    &&&~ Configuration switches
 ----------------------------------------------------------------------------- */

#if !defined(__DESC_H__)
# error "Include sequence error! You must include desc.h before appDesc.h."
#endif



/* -----------------------------------------------------------------------------
    &&&~ Preprocessor constants (defines)
 ----------------------------------------------------------------------------- */

/* This magic number provides inter CANdesc generation process consistency check.All CANdesc files must have the same one. */
#define DESC_APPLICATION_INTERFACE_MAGIC_NUMBER                      22066


/* -----------------------------------------------------------------------------
    &&&~ Function prototypes
 ----------------------------------------------------------------------------- */

#if defined (DESC_ENABLE_DEBUG_USER ) || defined (DESC_ENABLE_DEBUG_INTERNAL)
/* Assertion function for better integration support. */
void DESC_API_CALLBACK_TYPE ApplDescFatalError(vuint8 errorCode, vuint16 lineNumber);
#endif

/* If RCR-RP has been forced this confirmation function will notify the application about the transmission result. */
void DESC_API_CALLBACK_TYPE ApplDescRcrRpConfirmation(vuint8 iContext, vuint8 status);
void DESC_API_CALLBACK_TYPE ApplDescOnTransitionSecurity_Access(DescStateGroup newState, DescStateGroup formerState);
void DESC_API_CALLBACK_TYPE ApplDescOnTransitionProgrammingMode(DescStateGroup newState, DescStateGroup formerState);
/* Diagnostic application state management */
void ApplDescOnDiagActive(void);
void ApplDescOnDiagInactive(void);

#if defined (DESC_ENABLE_SERVICE_10_02)
void ApplDescOnDisableAllDtc(void);
#endif
#if defined (DESC_ENABLE_SERVICE_10_03)
void ApplDescOnEnableDtcsDuringDevCntrl(void);
#endif
void ApplDescOnReturnToNormalMode(void);
void ApplDescOnDisableNormalComm(void);
#if defined (DESC_ENABLE_PROGRAMMING_SESSION)
void ApplDescForceEcuReset(void);
#endif
void ApplDescOnEnableNormalComm(void);

void DESC_API_CALLBACK_TYPE ApplDescClearDiagnosticInformation(DescMsgContext* pMsgContext);
/* Request length check can not be performed. Please, implement length check in your Main-Handler!! */
void DESC_API_CALLBACK_TYPE ApplDescReadFailureRecordData(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_02_Calibration_Programmed_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_90_Vehicle_Identification_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_97_System_Name_Or_Engine_Type(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_98_Repair_Shop_Code_Or_Tester_Serial_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_99_Programming_Date(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_9F_Previous_Stored_Repair_Shop_Code_Or_Tester_Serial_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_A0_Manufacturers_Enable_Counter(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_A1_ECU_Configuration_Data(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDid_DID_AB_Compressed_Vehicle_Partitioning_and_Product_Structure_CVPPS(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_B0_ECU_Diagnostic_Address(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_B3_Data_Universal_Numbering_System_Identification_DUNS(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_B4_Manufacturing_Traceability_Characters(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_C0_Boot_Software_Part_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_C1_Software_Module_Identifier_1_Operational_Application_Soft(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_C2_Software_Module_Identifier_2_Performance_Calibration(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_C3_Software_Module_Identifier_3_Feature_Enable_Disable_Calib(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_C4_Software_Module_Identifier_4_Non_Variant_Calibration(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_CB_End_Model_Part_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_CC_Base_Model_Part_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_D0_Boot_Software_Part_Number_Alpha_Code(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_D1_Software_Module_Identifier_1_Alpha_Code(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_D2_Software_Module_Identifier_2_Alpha_Code(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_D3_Software_Module_Identifier_3_Alpha_Code(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_D4_Software_Module_Identifier_4_Alpha_Code(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_DB_End_Model_Part_Number_Alpha_Code(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_DC_Base_Model_Part_Number_Alpha_Code(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_DE_GMLAN_Identification_Data(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_F0_Programmed_State_Indicator_PSI(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_F3_ECU_ID(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_F4_Signature_Bypass_Authorization_Ticket(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidDID_F6_Boot_Info_Block_Subject_Name_and_ECU_Name(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadMemory(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescGetSeedSPS_Seed(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescSendKeySPS_Key(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescGetSeedDevice_Control_Seed(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescSendKeyDevice_Control_Key(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRequestDownload(DescMsgContext* pMsgContext);
/* Request length check can not be performed. Please, implement length check in your Main-Handler!! */
void DESC_API_CALLBACK_TYPE ApplDescTransferDataDownload(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_02_Calibration_Programmed_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_90_Vehicle_Identification_Number(DescMsgContext* pMsgContext);
/* Request length check can not be performed. Please, implement length check in your Main-Handler!! */
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_97_System_Name_Or_Engine_Type(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_98_Repair_Shop_Code_Or_Tester_Serial_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_99_Programming_Date(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_9A_Diagnostic_Data_Identifier(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_A0_Manufacturers_Enable_Counter(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_F4_Signature_Bypass_Authorization_Ticket(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidDID_F5_DVT_Access_KeyTable_Index_Change_KTIC(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReportProgrammedState(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlCancelAll(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlCPID_02_Steering_Assist_Control(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlCPID_03_Steering_Angle_Sensor_Calibration(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlCPID_04_Reset_Adaptive_Data(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlCPID_05_Feature_Control(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlCPID_FD_System_Basic_Functions(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescPreDisableNormalCommunication(vuint8 iContext);
void DESC_API_CALLBACK_TYPE ApplDescPreRequestProgrammingMode(vuint8 iContext);
void DESC_API_CALLBACK_TYPE ApplDescPreControlCPID_02_Steering_Assist_Control(vuint8 iContext);
void DESC_API_CALLBACK_TYPE ApplDescPreControlCPID_03_Steering_Angle_Sensor_Calibration(vuint8 iContext);
void DESC_API_CALLBACK_TYPE ApplDescPreControlCPID_04_Reset_Adaptive_Data(vuint8 iContext);
void DESC_API_CALLBACK_TYPE ApplDescPreControlCPID_05_Feature_Control(vuint8 iContext);
void DESC_API_CALLBACK_TYPE ApplDescPreControlCPID_FD_System_Basic_Functions(vuint8 iContext);
void DESC_API_CALLBACK_TYPE ApplDescPostApplDescGenericPostControlCPID(vuint8 iContext, vuint8 status);
vuint8 DESC_API_CALLBACK_TYPE ApplDescReadDidDATADID_9A_Diagnostic_Data_Identifier(void);
vuint8 DESC_API_CALLBACK_TYPE ApplDescReadDidVersion_CodeDID_9A_Diagnostic_Data_Identifier(void);
#if defined (DESC_ENABLE_PROGRAMMING_SESSION)
# if defined (DESC_ENABLE_FLASHABLE_ECU)
/* ---- $A5 sub function $03 ---- */
void   ApplDescOnEnterProgMode(void);
# endif
#endif

/* $81 */
void ApplDescGetDtcStatusByMask(vuint16 iterPos, vuint8 statusMask);

void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4016_Ignition_Cycle_Counter(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_401B_ECU_Internal_Temperature(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4074_Steering_Wheel_Angle(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_40AC_Steering_Input_Torque(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_40AD_Steering_Motor_Overload_Protection_Incidents(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_40AE_Calculated_System_Temperature(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_40AF_EPS_System_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_40BC_Engine_Speed(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_40BD_Vehicle_Speed_Low_Resolution(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D1_Advanced_Park_Assist_Mode_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D2_Electric_Power_Steering_Driver_Mode_Control_State(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D3_Electric_Power_Steering_Motor_Current_Commanded(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D4_Electric_Power_Steering_Motor_Current_Feedback(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D5_Electric_Power_Steering_Torque_Overlay_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D6_Electric_Power_Steering_Angle_Overlay_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D7_Electric_Power_Steering_Torque_Overlay_Requested(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_41D9_Steering_Ouput_Torque(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4303_Counterclockwise_Handwheel_Angle_Traveled_Maximum(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4304_Clockwise_Handwheel_Angle_Traveled_Maximum(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_43AD_Mechanical_Steering_Stops_Position_Learn_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_43D0_Electric_Power_Steering_Stop_Start_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_446F_Electric_Power_Steering_APA_Angle_Overlay_Requested(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_44EA_Calculated_Rack_Travel(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_464D_Steering_Friction_State_Of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_464E_Smooth_Road_Shake_SRS_Maximum_Compensation_State_of_Hea(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_464F_Controller_Temperature_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4650_Controller_Supply_Voltage_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4651_Digital_Torque_Signal_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4652_EPS_Motor_Duty_Cycle_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4653_End_Of_Travel_Impact_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4654_Analog_Motor_Position_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4655_EPS_Motor_Position_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4656_EPS_Motor_Current_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4657_EPS_Motor_Phase_Voltage_State_of_Health(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_4658_Random_Access_Memory_RAM_Error_Correction_Circuit_ECC_S(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_8002_System_Power_Mode(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_8078_Battery_Voltage_ECU_Monitored(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_819D_Vehicle_Speed_Medium_Resolution(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_82C1_Engine_Running_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_C000_Supplier_Internal_DTC_and_Failure_Type(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_C010_Time_Since_Ignition_On_1(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadPidPID_C050_Time_Since_Ignition_On(DescMsgContext* pMsgContext);
#if defined (DESC_ENABLE_MULTI_CFG_SUPPORT)
/* Additionaly reject a supported PID (multi ECU configuration) */
DescBool ApplDescIsDataIdSupported(vuint16 pid);
#endif



#endif /* __APPDESC_H__ */
