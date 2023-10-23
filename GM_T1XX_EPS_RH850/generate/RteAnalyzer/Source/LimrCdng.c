/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  LimrCdng.c
 *        Config:  EPS.dpa
 *     SW-C Type:  LimrCdng
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <LimrCdng>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */

/* PRQA S 3109 EOF */
/* PRQA S 3112 EOF */
/* PRQA S 3197 EOF */
/* PRQA S 3198 EOF */
/* PRQA S 3199 EOF */
/* PRQA S 3201 EOF */
/* PRQA S 3203 EOF */
/* PRQA S 3205 EOF */
/* PRQA S 3206 EOF */
/* PRQA S 3218 EOF */
/* PRQA S 3229 EOF */
/* PRQA S 2002 EOF */
/* PRQA S 3334 EOF */
/* PRQA S 3417 EOF */
/* PRQA S 3426 EOF */
/* PRQA S 3453 EOF */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * u13p3
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_LimrCdng.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_LimrCdng.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u13p3: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u13p3_2: Array with 2 element(s) of type u13p3
 * Ary1D_u9p7_2: Array with 2 element(s) of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevEotAssiScaCdnd(void)
 *   float32 *Rte_Pim_PrevEotMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevStallMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevSysMotTqCmdScaCdnd(void)
 *   float32 *Rte_Pim_PrevThermMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevVehSpdMotTqLimCdnd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_LimrCdngGainDecSlew_Val(void)
 *   float32 Rte_Prm_LimrCdngTqDecSlew_Val(void)
 *   u9p7 *Rte_Prm_LimrCdngGainIncSlewX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_2
 *   u9p7 *Rte_Prm_LimrCdngGainIncSlewY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_2
 *   u9p7 *Rte_Prm_LimrCdngTqIncSlewX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_2
 *   u13p3 *Rte_Prm_LimrCdngTqIncSlewY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_2
 *
 *********************************************************************************************************************/


#define LimrCdng_START_SEC_CODE
#include "LimrCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LimrCdngPer1
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
 *   Std_ReturnType Rte_Read_EotAssiSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMotTqLim_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EotAssiScaCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_StallMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysMotTqCmdScaCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdMotTqLimCdnd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LimrCdngPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, LimrCdng_CODE) LimrCdngPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: LimrCdngPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_EotAssiSca_Val;
  float32 Read_EotMotTqLim_Val;
  float32 Read_StallMotTqLim_Val;
  float32 Read_SysMotTqCmdSca_Val;
  float32 Read_ThermMotTqLim_Val;
  float32 Read_VehSpd_Val;
  float32 Read_VehSpdMotTqLim_Val;

  float32 PrevEotAssiScaCdnd;
  float32 PrevEotMotTqLimCdnd;
  float32 PrevStallMotTqLimCdnd;
  float32 PrevSysMotTqCmdScaCdnd;
  float32 PrevThermMotTqLimCdnd;
  float32 PrevVehSpdMotTqLimCdnd;

  float32 LimrCdngGainDecSlew_Val_data;
  float32 LimrCdngTqDecSlew_Val_data;
  Ary1D_u9p7_2 LimrCdngGainIncSlewX_Ary1D_data;
  Ary1D_u9p7_2 LimrCdngGainIncSlewY_Ary1D_data;
  Ary1D_u9p7_2 LimrCdngTqIncSlewX_Ary1D_data;
  Ary1D_u13p3_2 LimrCdngTqIncSlewY_Ary1D_data;

  float32 Call_FltInj_f32_Oper_SigPah_Arg = 0.0F;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PrevEotAssiScaCdnd = *TSC_LimrCdng_Rte_Pim_PrevEotAssiScaCdnd();
  *TSC_LimrCdng_Rte_Pim_PrevEotAssiScaCdnd() = PrevEotAssiScaCdnd;
  PrevEotMotTqLimCdnd = *TSC_LimrCdng_Rte_Pim_PrevEotMotTqLimCdnd();
  *TSC_LimrCdng_Rte_Pim_PrevEotMotTqLimCdnd() = PrevEotMotTqLimCdnd;
  PrevStallMotTqLimCdnd = *TSC_LimrCdng_Rte_Pim_PrevStallMotTqLimCdnd();
  *TSC_LimrCdng_Rte_Pim_PrevStallMotTqLimCdnd() = PrevStallMotTqLimCdnd;
  PrevSysMotTqCmdScaCdnd = *TSC_LimrCdng_Rte_Pim_PrevSysMotTqCmdScaCdnd();
  *TSC_LimrCdng_Rte_Pim_PrevSysMotTqCmdScaCdnd() = PrevSysMotTqCmdScaCdnd;
  PrevThermMotTqLimCdnd = *TSC_LimrCdng_Rte_Pim_PrevThermMotTqLimCdnd();
  *TSC_LimrCdng_Rte_Pim_PrevThermMotTqLimCdnd() = PrevThermMotTqLimCdnd;
  PrevVehSpdMotTqLimCdnd = *TSC_LimrCdng_Rte_Pim_PrevVehSpdMotTqLimCdnd();
  *TSC_LimrCdng_Rte_Pim_PrevVehSpdMotTqLimCdnd() = PrevVehSpdMotTqLimCdnd;

  LimrCdngGainDecSlew_Val_data = TSC_LimrCdng_Rte_Prm_LimrCdngGainDecSlew_Val();
  LimrCdngTqDecSlew_Val_data = TSC_LimrCdng_Rte_Prm_LimrCdngTqDecSlew_Val();
  (void)memcpy(LimrCdngGainIncSlewX_Ary1D_data, TSC_LimrCdng_Rte_Prm_LimrCdngGainIncSlewX_Ary1D(), sizeof(Ary1D_u9p7_2));
  (void)memcpy(LimrCdngGainIncSlewY_Ary1D_data, TSC_LimrCdng_Rte_Prm_LimrCdngGainIncSlewY_Ary1D(), sizeof(Ary1D_u9p7_2));
  (void)memcpy(LimrCdngTqIncSlewX_Ary1D_data, TSC_LimrCdng_Rte_Prm_LimrCdngTqIncSlewX_Ary1D(), sizeof(Ary1D_u9p7_2));
  (void)memcpy(LimrCdngTqIncSlewY_Ary1D_data, TSC_LimrCdng_Rte_Prm_LimrCdngTqIncSlewY_Ary1D(), sizeof(Ary1D_u13p3_2));

  fct_status = TSC_LimrCdng_Rte_Read_EotAssiSca_Val(&Read_EotAssiSca_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Read_EotMotTqLim_Val(&Read_EotMotTqLim_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Read_StallMotTqLim_Val(&Read_StallMotTqLim_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Read_SysMotTqCmdSca_Val(&Read_SysMotTqCmdSca_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Read_ThermMotTqLim_Val(&Read_ThermMotTqLim_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Read_VehSpdMotTqLim_Val(&Read_VehSpdMotTqLim_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Write_EotAssiScaCdnd_Val(Rte_InitValue_EotAssiScaCdnd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Write_EotMotTqLimCdnd_Val(Rte_InitValue_EotMotTqLimCdnd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Write_StallMotTqLimCdnd_Val(Rte_InitValue_StallMotTqLimCdnd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Write_SysMotTqCmdScaCdnd_Val(Rte_InitValue_SysMotTqCmdScaCdnd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Write_ThermMotTqLimCdnd_Val(Rte_InitValue_ThermMotTqLimCdnd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Write_VehSpdMotTqLimCdnd_Val(Rte_InitValue_VehSpdMotTqLimCdnd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_LimrCdng_Rte_Call_FltInj_f32_Oper(&Call_FltInj_f32_Oper_SigPah_Arg, 0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define LimrCdng_STOP_SEC_CODE
#include "LimrCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
