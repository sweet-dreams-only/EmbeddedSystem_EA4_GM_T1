/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotCurrPeakEstimn.c
 *        Config:  EPS.dpa
 *     SW-C Type:  MotCurrPeakEstimn
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotCurrPeakEstimn>
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

#include "Rte_MotCurrPeakEstimn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_MotCurrPeakEstimn.h"


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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil(void)
 *   float32 *Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrDaxFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrPeakEstimdFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrQaxFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val(void)
 *
 *********************************************************************************************************************/


#define MotCurrPeakEstimn_START_SEC_CODE
#include "MotCurrPeakEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnInit1
 *********************************************************************************************************************/

  float32 dMotCurrPeakEstimnMotCurrDaxFil;
  float32 dMotCurrPeakEstimnMotCurrQaxFil;
  FilLpRec1 MotCurrDaxFil;
  FilLpRec1 MotCurrPeakEstimdFil;
  FilLpRec1 MotCurrQaxFil;

  float32 MotCurrPeakEstimnCurrFilFrq_Val_data;
  float32 MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCurrPeakEstimnMotCurrDaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil() = dMotCurrPeakEstimnMotCurrDaxFil;
  dMotCurrPeakEstimnMotCurrQaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil() = dMotCurrPeakEstimnMotCurrQaxFil;
  MotCurrDaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrDaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrDaxFil() = MotCurrDaxFil;
  MotCurrPeakEstimdFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrPeakEstimdFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrPeakEstimdFil() = MotCurrPeakEstimdFil;
  MotCurrQaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrQaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrQaxFil() = MotCurrQaxFil;

  MotCurrPeakEstimnCurrFilFrq_Val_data = TSC_MotCurrPeakEstimn_Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val();
  MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val_data = TSC_MotCurrPeakEstimn_Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnPer1
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
 *   Std_ReturnType Rte_Read_CurrMeasLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrPeakEstimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  boolean Read_CurrMeasLoaMtgtnEna_Logl;
  float32 Read_MotCurrDax_Val;
  float32 Read_MotCurrDaxCmd_Val;
  float32 Read_MotCurrQax_Val;
  float32 Read_MotCurrQaxCmd_Val;

  float32 dMotCurrPeakEstimnMotCurrDaxFil;
  float32 dMotCurrPeakEstimnMotCurrQaxFil;
  FilLpRec1 MotCurrDaxFil;
  FilLpRec1 MotCurrPeakEstimdFil;
  FilLpRec1 MotCurrQaxFil;

  float32 MotCurrPeakEstimnCurrFilFrq_Val_data;
  float32 MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCurrPeakEstimnMotCurrDaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil() = dMotCurrPeakEstimnMotCurrDaxFil;
  dMotCurrPeakEstimnMotCurrQaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil() = dMotCurrPeakEstimnMotCurrQaxFil;
  MotCurrDaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrDaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrDaxFil() = MotCurrDaxFil;
  MotCurrPeakEstimdFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrPeakEstimdFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrPeakEstimdFil() = MotCurrPeakEstimdFil;
  MotCurrQaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrQaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrQaxFil() = MotCurrQaxFil;

  MotCurrPeakEstimnCurrFilFrq_Val_data = TSC_MotCurrPeakEstimn_Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val();
  MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val_data = TSC_MotCurrPeakEstimn_Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val();

  fct_status = TSC_MotCurrPeakEstimn_Rte_Read_CurrMeasLoaMtgtnEna_Logl(&Read_CurrMeasLoaMtgtnEna_Logl);
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

  fct_status = TSC_MotCurrPeakEstimn_Rte_Read_MotCurrDax_Val(&Read_MotCurrDax_Val);
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

  fct_status = TSC_MotCurrPeakEstimn_Rte_Read_MotCurrDaxCmd_Val(&Read_MotCurrDaxCmd_Val);
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

  fct_status = TSC_MotCurrPeakEstimn_Rte_Read_MotCurrQax_Val(&Read_MotCurrQax_Val);
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

  fct_status = TSC_MotCurrPeakEstimn_Rte_Read_MotCurrQaxCmd_Val(&Read_MotCurrQaxCmd_Val);
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

  fct_status = TSC_MotCurrPeakEstimn_Rte_Write_MotCurrPeakEstimd_Val(Rte_InitValue_MotCurrPeakEstimd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  TSC_MotCurrPeakEstimn_Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd(0.0F);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrPeakEstimdFild_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer2
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 dMotCurrPeakEstimnMotCurrDaxFil;
  float32 dMotCurrPeakEstimnMotCurrQaxFil;
  FilLpRec1 MotCurrDaxFil;
  FilLpRec1 MotCurrPeakEstimdFil;
  FilLpRec1 MotCurrQaxFil;

  float32 MotCurrPeakEstimnCurrFilFrq_Val_data;
  float32 MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val_data;

  float32 MotCurrPeakEstimnPer2_MotCurrEstimd;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  dMotCurrPeakEstimnMotCurrDaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil() = dMotCurrPeakEstimnMotCurrDaxFil;
  dMotCurrPeakEstimnMotCurrQaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil() = dMotCurrPeakEstimnMotCurrQaxFil;
  MotCurrDaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrDaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrDaxFil() = MotCurrDaxFil;
  MotCurrPeakEstimdFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrPeakEstimdFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrPeakEstimdFil() = MotCurrPeakEstimdFil;
  MotCurrQaxFil = *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrQaxFil();
  *TSC_MotCurrPeakEstimn_Rte_Pim_MotCurrQaxFil() = MotCurrQaxFil;

  MotCurrPeakEstimnCurrFilFrq_Val_data = TSC_MotCurrPeakEstimn_Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val();
  MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val_data = TSC_MotCurrPeakEstimn_Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val();

  fct_status = TSC_MotCurrPeakEstimn_Rte_Write_MotCurrPeakEstimdFild_Val(Rte_InitValue_MotCurrPeakEstimdFild_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  MotCurrPeakEstimnPer2_MotCurrEstimd = TSC_MotCurrPeakEstimn_Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotCurrPeakEstimn_STOP_SEC_CODE
#include "MotCurrPeakEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
