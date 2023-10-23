/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  VehSpdLimr.c
 *        Config:  EPS.dpa
 *     SW-C Type:  VehSpdLimr
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <VehSpdLimr>
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
 * u5p11
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

#include "Rte_VehSpdLimr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_VehSpdLimr.h"


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
 * u5p11: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u5p11_5: Array with 5 element(s) of type u5p11
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dVehSpdLimrBreakPt1(void)
 *   float32 *Rte_Pim_dVehSpdLimrBreakPt2(void)
 *   u5p11 *Rte_Pim_dVehSpdLimrLimTerm(void)
 *   u5p11 *Rte_Pim_dVehSpdLimrZeroVehSpd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_VehSpdLimrPosMaxOffs1_Val(void)
 *   float32 Rte_Prm_VehSpdLimrPosMaxOffs2_Val(void)
 *   u9p7 *Rte_Prm_VehSpdLimrMaxAssiX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_5
 *   u5p11 *Rte_Prm_VehSpdLimrMaxAssiY_Ary1D(void)
 *     Returnvalue: u5p11* is of type Ary1D_u5p11_5
 *
 *********************************************************************************************************************/


#define VehSpdLimr_START_SEC_CODE
#include "VehSpdLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehSpdLimrPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehSpdMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: VehSpdLimrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, VehSpdLimr_CODE) VehSpdLimrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: VehSpdLimrPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_HwAg_Val;
  float32 Read_HwAgAuthy_Val;
  float32 Read_HwAgEotCcw_Val;
  float32 Read_HwAgEotCw_Val;
  float32 Read_VehSpd_Val;

  float32 dVehSpdLimrBreakPt1;
  float32 dVehSpdLimrBreakPt2;
  u5p11 dVehSpdLimrLimTerm;
  u5p11 dVehSpdLimrZeroVehSpd;

  float32 VehSpdLimrPosMaxOffs1_Val_data;
  float32 VehSpdLimrPosMaxOffs2_Val_data;
  Ary1D_u9p7_5 VehSpdLimrMaxAssiX_Ary1D_data;
  Ary1D_u5p11_5 VehSpdLimrMaxAssiY_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dVehSpdLimrBreakPt1 = *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrBreakPt1();
  *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrBreakPt1() = dVehSpdLimrBreakPt1;
  dVehSpdLimrBreakPt2 = *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrBreakPt2();
  *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrBreakPt2() = dVehSpdLimrBreakPt2;
  dVehSpdLimrLimTerm = *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrLimTerm();
  *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrLimTerm() = dVehSpdLimrLimTerm;
  dVehSpdLimrZeroVehSpd = *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrZeroVehSpd();
  *TSC_VehSpdLimr_Rte_Pim_dVehSpdLimrZeroVehSpd() = dVehSpdLimrZeroVehSpd;

  VehSpdLimrPosMaxOffs1_Val_data = TSC_VehSpdLimr_Rte_Prm_VehSpdLimrPosMaxOffs1_Val();
  VehSpdLimrPosMaxOffs2_Val_data = TSC_VehSpdLimr_Rte_Prm_VehSpdLimrPosMaxOffs2_Val();
  (void)memcpy(VehSpdLimrMaxAssiX_Ary1D_data, TSC_VehSpdLimr_Rte_Prm_VehSpdLimrMaxAssiX_Ary1D(), sizeof(Ary1D_u9p7_5));
  (void)memcpy(VehSpdLimrMaxAssiY_Ary1D_data, TSC_VehSpdLimr_Rte_Prm_VehSpdLimrMaxAssiY_Ary1D(), sizeof(Ary1D_u5p11_5));

  fct_status = TSC_VehSpdLimr_Rte_Read_HwAg_Val(&Read_HwAg_Val);
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

  fct_status = TSC_VehSpdLimr_Rte_Read_HwAgAuthy_Val(&Read_HwAgAuthy_Val);
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

  fct_status = TSC_VehSpdLimr_Rte_Read_HwAgEotCcw_Val(&Read_HwAgEotCcw_Val);
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

  fct_status = TSC_VehSpdLimr_Rte_Read_HwAgEotCw_Val(&Read_HwAgEotCw_Val);
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

  fct_status = TSC_VehSpdLimr_Rte_Read_VehSpd_Val(&Read_VehSpd_Val);
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

  fct_status = TSC_VehSpdLimr_Rte_Write_VehSpdMotTqLim_Val(Rte_InitValue_VehSpdMotTqLim_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define VehSpdLimr_STOP_SEC_CODE
#include "VehSpdLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
