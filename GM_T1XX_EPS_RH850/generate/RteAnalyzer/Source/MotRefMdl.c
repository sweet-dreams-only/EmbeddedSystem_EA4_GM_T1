/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotRefMdl.c
 *        Config:  EPS.dpa
 *     SW-C Type:  MotRefMdl
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotRefMdl>
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
 * MotQuad1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u11p5
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u1p15
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u3p13
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u4p12
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_MotRefMdl.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_MotRefMdl.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"
#include "float.h"

static void MotRefMdl_TestDefines(void);


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
 * u11p5: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MotQuad1: Enumeration of integer in interval [0...255] with enumerators
 *   MOTQUAD_QUAD1 (1U)
 *   MOTQUAD_QUAD2 (2U)
 *   MOTQUAD_QUAD3 (3U)
 *   MOTQUAD_QUAD4 (4U)
 *
 * Array Types:
 * ============
 * Ary1D_f32_8: Array with 8 element(s) of type float32
 * Ary1D_float32_8: Array with 8 element(s) of type float32
 * Ary1D_u11p5_10: Array with 10 element(s) of type u11p5
 * Ary1D_u1p15_11: Array with 11 element(s) of type u1p15
 * Ary1D_u3p13_10: Array with 10 element(s) of type u3p13
 * Ary1D_u4p12_11: Array with 11 element(s) of type u4p12
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
 *   float32 *Rte_Pim_MotCurrDaxCmdPrev(void)
 *   float32 *Rte_Pim_MotCurrQaxCmdPrev(void)
 *   float32 *Rte_Pim_VltgDaxFfTermPrev(void)
 *   float32 *Rte_Pim_VltgQaxFfTermPrev(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrDaxAtPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrDaxMin(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrQaxMin(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrSqdMin(void)
 *   float32 *Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax(void)
 *   float32 *Rte_Pim_dMotRefMdlMotCurrDaxBoost(void)
 *   float32 *Rte_Pim_dMotRefMdlMotTqCmdLimd(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVelFildFf(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfDyn(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfStat(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfDyn(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfStat(void)
 *   float32 *Rte_Pim_dMotRefMdlPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlPhaAdvAtPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlReacncDaxOverR(void)
 *   float32 *Rte_Pim_dMotRefMdlReacncQaxOverR(void)
 *   float32 *Rte_Pim_dMotRefMdlRelncTqCoeff(void)
 *   uint8 *Rte_Pim_dMotRefMdlMinCurrNrItrn(void)
 *   uint8 *Rte_Pim_dMotRefMdlPeakTqNrItrn(void)
 *   float32 *Rte_Pim_CosDelta(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   float32 *Rte_Pim_SinDelta(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   FilLpRec1 *Rte_Pim_MotVelLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotRefMdlCurrDaxBoostGain_Val(void)
 *   float32 Rte_Prm_MotRefMdlCurrItrnTolr_Val(void)
 *   float32 Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val(void)
 *   float32 Rte_Prm_MotRefMdlTqItrnTolr_Val(void)
 *   float32 Rte_Prm_MotRefMdlVltgOverRThdSca_Val(void)
 *   uint8 Rte_Prm_MotRefMdlMinCurrItrnLim_Val(void)
 *   uint8 Rte_Prm_MotRefMdlRefLocnItrnLim_Val(void)
 *   uint8 Rte_Prm_MotRefMdlTqItrnLim_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *   boolean Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl(void)
 *   u4p12 *Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_11
 *   u1p15 *Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_11
 *   float32 *Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   u11p5 *Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u3p13 *Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_10
 *   u11p5 *Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u3p13 *Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_10
 *
 *********************************************************************************************************************/


#define MotRefMdl_START_SEC_CODE
#include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRefMdlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRefMdl_CODE) MotRefMdlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlInit1
 *********************************************************************************************************************/

  float32 MotCurrDaxCmdPrev;
  float32 MotCurrQaxCmdPrev;
  float32 VltgDaxFfTermPrev;
  float32 VltgQaxFfTermPrev;
  float32 dMotRefMdlCurrDaxAtPeakTq;
  float32 dMotRefMdlCurrDaxMin;
  float32 dMotRefMdlCurrQaxMin;
  float32 dMotRefMdlCurrSqdMin;
  float32 dMotRefMdlInterCalcnCurrDaxMax;
  float32 dMotRefMdlMotCurrDaxBoost;
  float32 dMotRefMdlMotTqCmdLimd;
  float32 dMotRefMdlMotVelFildFf;
  float32 dMotRefMdlMotVltgDaxFfDyn;
  float32 dMotRefMdlMotVltgDaxFfDynTerm;
  float32 dMotRefMdlMotVltgDaxFfStat;
  float32 dMotRefMdlMotVltgQaxFfDyn;
  float32 dMotRefMdlMotVltgQaxFfDynTerm;
  float32 dMotRefMdlMotVltgQaxFfStat;
  float32 dMotRefMdlPeakTq;
  float32 dMotRefMdlPhaAdvAtPeakTq;
  float32 dMotRefMdlReacncDaxOverR;
  float32 dMotRefMdlReacncQaxOverR;
  float32 dMotRefMdlRelncTqCoeff;
  uint8 dMotRefMdlMinCurrNrItrn;
  uint8 dMotRefMdlPeakTqNrItrn;
  Ary1D_f32_8 CosDelta;
  Ary1D_f32_8 SinDelta;
  FilLpRec1 MotVelLpFil;

  float32 MotRefMdlCurrDaxBoostGain_Val_data;
  float32 MotRefMdlCurrItrnTolr_Val_data;
  float32 MotRefMdlIvtrDeadTiBrdgVltgSca_Val_data;
  float32 MotRefMdlMotCurrDaxMaxSca_Val_data;
  float32 MotRefMdlMotVelLpFilFrq_Val_data;
  float32 MotRefMdlMotVltgDerivtvTiCon_Val_data;
  float32 MotRefMdlTqItrnTolr_Val_data;
  float32 MotRefMdlVltgOverRThdSca_Val_data;
  uint8 MotRefMdlMinCurrItrnLim_Val_data;
  uint8 MotRefMdlRefLocnItrnLim_Val_data;
  uint8 MotRefMdlTqItrnLim_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  boolean MotRefMdlFbCtrlDi_Logl_data;
  boolean MotRefMdlVltgModDynCmpEna_Logl_data;
  Ary1D_u4p12_11 MotRefMdlCurrDaxBoostTqScaX_Ary1D_data;
  Ary1D_u1p15_11 MotRefMdlCurrDaxBoostTqScaY_Ary1D_data;
  Ary1D_f32_8 MotRefMdlCurrDaxQaxRefDelta_Ary1D_data;
  Ary1D_u11p5_10 MotRefMdlQuad13VltgSdlX_Ary1D_data;
  Ary1D_u3p13_10 MotRefMdlQuad13VltgSdlY_Ary1D_data;
  Ary1D_u11p5_10 MotRefMdlQuad24VltgSdlX_Ary1D_data;
  Ary1D_u3p13_10 MotRefMdlQuad24VltgSdlY_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  MotCurrDaxCmdPrev = *TSC_MotRefMdl_Rte_Pim_MotCurrDaxCmdPrev();
  *TSC_MotRefMdl_Rte_Pim_MotCurrDaxCmdPrev() = MotCurrDaxCmdPrev;
  MotCurrQaxCmdPrev = *TSC_MotRefMdl_Rte_Pim_MotCurrQaxCmdPrev();
  *TSC_MotRefMdl_Rte_Pim_MotCurrQaxCmdPrev() = MotCurrQaxCmdPrev;
  VltgDaxFfTermPrev = *TSC_MotRefMdl_Rte_Pim_VltgDaxFfTermPrev();
  *TSC_MotRefMdl_Rte_Pim_VltgDaxFfTermPrev() = VltgDaxFfTermPrev;
  VltgQaxFfTermPrev = *TSC_MotRefMdl_Rte_Pim_VltgQaxFfTermPrev();
  *TSC_MotRefMdl_Rte_Pim_VltgQaxFfTermPrev() = VltgQaxFfTermPrev;
  dMotRefMdlCurrDaxAtPeakTq = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxAtPeakTq();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxAtPeakTq() = dMotRefMdlCurrDaxAtPeakTq;
  dMotRefMdlCurrDaxMin = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxMin();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxMin() = dMotRefMdlCurrDaxMin;
  dMotRefMdlCurrQaxMin = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrQaxMin();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrQaxMin() = dMotRefMdlCurrQaxMin;
  dMotRefMdlCurrSqdMin = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrSqdMin();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrSqdMin() = dMotRefMdlCurrSqdMin;
  dMotRefMdlInterCalcnCurrDaxMax = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax() = dMotRefMdlInterCalcnCurrDaxMax;
  dMotRefMdlMotCurrDaxBoost = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotCurrDaxBoost();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotCurrDaxBoost() = dMotRefMdlMotCurrDaxBoost;
  dMotRefMdlMotTqCmdLimd = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotTqCmdLimd();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotTqCmdLimd() = dMotRefMdlMotTqCmdLimd;
  dMotRefMdlMotVelFildFf = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVelFildFf();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVelFildFf() = dMotRefMdlMotVelFildFf;
  dMotRefMdlMotVltgDaxFfDyn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDyn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDyn() = dMotRefMdlMotVltgDaxFfDyn;
  dMotRefMdlMotVltgDaxFfDynTerm = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm() = dMotRefMdlMotVltgDaxFfDynTerm;
  dMotRefMdlMotVltgDaxFfStat = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfStat();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfStat() = dMotRefMdlMotVltgDaxFfStat;
  dMotRefMdlMotVltgQaxFfDyn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDyn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDyn() = dMotRefMdlMotVltgQaxFfDyn;
  dMotRefMdlMotVltgQaxFfDynTerm = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm() = dMotRefMdlMotVltgQaxFfDynTerm;
  dMotRefMdlMotVltgQaxFfStat = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfStat();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfStat() = dMotRefMdlMotVltgQaxFfStat;
  dMotRefMdlPeakTq = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTq();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTq() = dMotRefMdlPeakTq;
  dMotRefMdlPhaAdvAtPeakTq = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPhaAdvAtPeakTq();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPhaAdvAtPeakTq() = dMotRefMdlPhaAdvAtPeakTq;
  dMotRefMdlReacncDaxOverR = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncDaxOverR();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncDaxOverR() = dMotRefMdlReacncDaxOverR;
  dMotRefMdlReacncQaxOverR = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncQaxOverR();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncQaxOverR() = dMotRefMdlReacncQaxOverR;
  dMotRefMdlRelncTqCoeff = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlRelncTqCoeff();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlRelncTqCoeff() = dMotRefMdlRelncTqCoeff;
  dMotRefMdlMinCurrNrItrn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMinCurrNrItrn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMinCurrNrItrn() = dMotRefMdlMinCurrNrItrn;
  dMotRefMdlPeakTqNrItrn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTqNrItrn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTqNrItrn() = dMotRefMdlPeakTqNrItrn;

  (void)memcpy(CosDelta, TSC_MotRefMdl_Rte_Pim_CosDelta(), sizeof(Ary1D_f32_8));
  (void)memcpy(TSC_MotRefMdl_Rte_Pim_CosDelta(), CosDelta, sizeof(Ary1D_f32_8));


  (void)memcpy(SinDelta, TSC_MotRefMdl_Rte_Pim_SinDelta(), sizeof(Ary1D_f32_8));
  (void)memcpy(TSC_MotRefMdl_Rte_Pim_SinDelta(), SinDelta, sizeof(Ary1D_f32_8));

  MotVelLpFil = *TSC_MotRefMdl_Rte_Pim_MotVelLpFil();
  *TSC_MotRefMdl_Rte_Pim_MotVelLpFil() = MotVelLpFil;

  MotRefMdlCurrDaxBoostGain_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostGain_Val();
  MotRefMdlCurrItrnTolr_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrItrnTolr_Val();
  MotRefMdlIvtrDeadTiBrdgVltgSca_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val();
  MotRefMdlMotCurrDaxMaxSca_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val();
  MotRefMdlMotVelLpFilFrq_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMotVelLpFilFrq_Val();
  MotRefMdlMotVltgDerivtvTiCon_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val();
  MotRefMdlTqItrnTolr_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlTqItrnTolr_Val();
  MotRefMdlVltgOverRThdSca_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlVltgOverRThdSca_Val();
  MotRefMdlMinCurrItrnLim_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMinCurrItrnLim_Val();
  MotRefMdlRefLocnItrnLim_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlRefLocnItrnLim_Val();
  MotRefMdlTqItrnLim_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlTqItrnLim_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotRefMdl_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  MotRefMdlFbCtrlDi_Logl_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlFbCtrlDi_Logl();
  MotRefMdlVltgModDynCmpEna_Logl_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl();
  (void)memcpy(MotRefMdlCurrDaxBoostTqScaX_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D(), sizeof(Ary1D_u4p12_11));
  (void)memcpy(MotRefMdlCurrDaxBoostTqScaY_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D(), sizeof(Ary1D_u1p15_11));
  (void)memcpy(MotRefMdlCurrDaxQaxRefDelta_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D(), sizeof(Ary1D_f32_8));
  (void)memcpy(MotRefMdlQuad13VltgSdlX_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D(), sizeof(Ary1D_u11p5_10));
  (void)memcpy(MotRefMdlQuad13VltgSdlY_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D(), sizeof(Ary1D_u3p13_10));
  (void)memcpy(MotRefMdlQuad24VltgSdlX_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D(), sizeof(Ary1D_u11p5_10));
  (void)memcpy(MotRefMdlQuad24VltgSdlY_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D(), sizeof(Ary1D_u3p13_10));

  MotRefMdl_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRefMdlPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CurrMeasLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_IvtrLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotQuad_Val(MotQuad1 *data)
 *   Std_ReturnType Rte_Read_MotREstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrAg_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrDaxCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrDaxMax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrQaxCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotReacncDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotReacncQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgDaxFf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgDaxFfStat_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgQaxFf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgQaxFfStat_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRefMdl_CODE) MotRefMdlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlPer1
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  float32 Read_BrdgVltg_Val;
  boolean Read_CurrMeasLoaMtgtnEna_Logl;
  boolean Read_IvtrLoaMtgtnEna_Logl;
  float32 Read_MotBackEmfConEstimd_Val;
  float32 Read_MotInduDaxEstimd_Val;
  float32 Read_MotInduQaxEstimd_Val;
  MotQuad1 Read_MotQuad_Val;
  float32 Read_MotREstimd_Val;
  float32 Read_MotTqCmdMrfScad_Val;
  float32 Read_MotVelMrf_Val;

  float32 MotCurrDaxCmdPrev;
  float32 MotCurrQaxCmdPrev;
  float32 VltgDaxFfTermPrev;
  float32 VltgQaxFfTermPrev;
  float32 dMotRefMdlCurrDaxAtPeakTq;
  float32 dMotRefMdlCurrDaxMin;
  float32 dMotRefMdlCurrQaxMin;
  float32 dMotRefMdlCurrSqdMin;
  float32 dMotRefMdlInterCalcnCurrDaxMax;
  float32 dMotRefMdlMotCurrDaxBoost;
  float32 dMotRefMdlMotTqCmdLimd;
  float32 dMotRefMdlMotVelFildFf;
  float32 dMotRefMdlMotVltgDaxFfDyn;
  float32 dMotRefMdlMotVltgDaxFfDynTerm;
  float32 dMotRefMdlMotVltgDaxFfStat;
  float32 dMotRefMdlMotVltgQaxFfDyn;
  float32 dMotRefMdlMotVltgQaxFfDynTerm;
  float32 dMotRefMdlMotVltgQaxFfStat;
  float32 dMotRefMdlPeakTq;
  float32 dMotRefMdlPhaAdvAtPeakTq;
  float32 dMotRefMdlReacncDaxOverR;
  float32 dMotRefMdlReacncQaxOverR;
  float32 dMotRefMdlRelncTqCoeff;
  uint8 dMotRefMdlMinCurrNrItrn;
  uint8 dMotRefMdlPeakTqNrItrn;
  Ary1D_f32_8 CosDelta;
  Ary1D_f32_8 SinDelta;
  FilLpRec1 MotVelLpFil;

  float32 MotRefMdlCurrDaxBoostGain_Val_data;
  float32 MotRefMdlCurrItrnTolr_Val_data;
  float32 MotRefMdlIvtrDeadTiBrdgVltgSca_Val_data;
  float32 MotRefMdlMotCurrDaxMaxSca_Val_data;
  float32 MotRefMdlMotVelLpFilFrq_Val_data;
  float32 MotRefMdlMotVltgDerivtvTiCon_Val_data;
  float32 MotRefMdlTqItrnTolr_Val_data;
  float32 MotRefMdlVltgOverRThdSca_Val_data;
  uint8 MotRefMdlMinCurrItrnLim_Val_data;
  uint8 MotRefMdlRefLocnItrnLim_Val_data;
  uint8 MotRefMdlTqItrnLim_Val_data;
  uint8 SysGlbPrmMotPoleCnt_Val_data;
  boolean MotRefMdlFbCtrlDi_Logl_data;
  boolean MotRefMdlVltgModDynCmpEna_Logl_data;
  Ary1D_u4p12_11 MotRefMdlCurrDaxBoostTqScaX_Ary1D_data;
  Ary1D_u1p15_11 MotRefMdlCurrDaxBoostTqScaY_Ary1D_data;
  Ary1D_f32_8 MotRefMdlCurrDaxQaxRefDelta_Ary1D_data;
  Ary1D_u11p5_10 MotRefMdlQuad13VltgSdlX_Ary1D_data;
  Ary1D_u3p13_10 MotRefMdlQuad13VltgSdlY_Ary1D_data;
  Ary1D_u11p5_10 MotRefMdlQuad24VltgSdlX_Ary1D_data;
  Ary1D_u3p13_10 MotRefMdlQuad24VltgSdlY_Ary1D_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  MotCurrDaxCmdPrev = *TSC_MotRefMdl_Rte_Pim_MotCurrDaxCmdPrev();
  *TSC_MotRefMdl_Rte_Pim_MotCurrDaxCmdPrev() = MotCurrDaxCmdPrev;
  MotCurrQaxCmdPrev = *TSC_MotRefMdl_Rte_Pim_MotCurrQaxCmdPrev();
  *TSC_MotRefMdl_Rte_Pim_MotCurrQaxCmdPrev() = MotCurrQaxCmdPrev;
  VltgDaxFfTermPrev = *TSC_MotRefMdl_Rte_Pim_VltgDaxFfTermPrev();
  *TSC_MotRefMdl_Rte_Pim_VltgDaxFfTermPrev() = VltgDaxFfTermPrev;
  VltgQaxFfTermPrev = *TSC_MotRefMdl_Rte_Pim_VltgQaxFfTermPrev();
  *TSC_MotRefMdl_Rte_Pim_VltgQaxFfTermPrev() = VltgQaxFfTermPrev;
  dMotRefMdlCurrDaxAtPeakTq = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxAtPeakTq();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxAtPeakTq() = dMotRefMdlCurrDaxAtPeakTq;
  dMotRefMdlCurrDaxMin = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxMin();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrDaxMin() = dMotRefMdlCurrDaxMin;
  dMotRefMdlCurrQaxMin = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrQaxMin();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrQaxMin() = dMotRefMdlCurrQaxMin;
  dMotRefMdlCurrSqdMin = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrSqdMin();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlCurrSqdMin() = dMotRefMdlCurrSqdMin;
  dMotRefMdlInterCalcnCurrDaxMax = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax() = dMotRefMdlInterCalcnCurrDaxMax;
  dMotRefMdlMotCurrDaxBoost = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotCurrDaxBoost();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotCurrDaxBoost() = dMotRefMdlMotCurrDaxBoost;
  dMotRefMdlMotTqCmdLimd = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotTqCmdLimd();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotTqCmdLimd() = dMotRefMdlMotTqCmdLimd;
  dMotRefMdlMotVelFildFf = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVelFildFf();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVelFildFf() = dMotRefMdlMotVelFildFf;
  dMotRefMdlMotVltgDaxFfDyn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDyn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDyn() = dMotRefMdlMotVltgDaxFfDyn;
  dMotRefMdlMotVltgDaxFfDynTerm = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm() = dMotRefMdlMotVltgDaxFfDynTerm;
  dMotRefMdlMotVltgDaxFfStat = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfStat();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgDaxFfStat() = dMotRefMdlMotVltgDaxFfStat;
  dMotRefMdlMotVltgQaxFfDyn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDyn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDyn() = dMotRefMdlMotVltgQaxFfDyn;
  dMotRefMdlMotVltgQaxFfDynTerm = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm() = dMotRefMdlMotVltgQaxFfDynTerm;
  dMotRefMdlMotVltgQaxFfStat = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfStat();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMotVltgQaxFfStat() = dMotRefMdlMotVltgQaxFfStat;
  dMotRefMdlPeakTq = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTq();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTq() = dMotRefMdlPeakTq;
  dMotRefMdlPhaAdvAtPeakTq = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPhaAdvAtPeakTq();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPhaAdvAtPeakTq() = dMotRefMdlPhaAdvAtPeakTq;
  dMotRefMdlReacncDaxOverR = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncDaxOverR();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncDaxOverR() = dMotRefMdlReacncDaxOverR;
  dMotRefMdlReacncQaxOverR = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncQaxOverR();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlReacncQaxOverR() = dMotRefMdlReacncQaxOverR;
  dMotRefMdlRelncTqCoeff = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlRelncTqCoeff();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlRelncTqCoeff() = dMotRefMdlRelncTqCoeff;
  dMotRefMdlMinCurrNrItrn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMinCurrNrItrn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlMinCurrNrItrn() = dMotRefMdlMinCurrNrItrn;
  dMotRefMdlPeakTqNrItrn = *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTqNrItrn();
  *TSC_MotRefMdl_Rte_Pim_dMotRefMdlPeakTqNrItrn() = dMotRefMdlPeakTqNrItrn;

  (void)memcpy(CosDelta, TSC_MotRefMdl_Rte_Pim_CosDelta(), sizeof(Ary1D_f32_8));
  (void)memcpy(TSC_MotRefMdl_Rte_Pim_CosDelta(), CosDelta, sizeof(Ary1D_f32_8));


  (void)memcpy(SinDelta, TSC_MotRefMdl_Rte_Pim_SinDelta(), sizeof(Ary1D_f32_8));
  (void)memcpy(TSC_MotRefMdl_Rte_Pim_SinDelta(), SinDelta, sizeof(Ary1D_f32_8));

  MotVelLpFil = *TSC_MotRefMdl_Rte_Pim_MotVelLpFil();
  *TSC_MotRefMdl_Rte_Pim_MotVelLpFil() = MotVelLpFil;

  MotRefMdlCurrDaxBoostGain_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostGain_Val();
  MotRefMdlCurrItrnTolr_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrItrnTolr_Val();
  MotRefMdlIvtrDeadTiBrdgVltgSca_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val();
  MotRefMdlMotCurrDaxMaxSca_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val();
  MotRefMdlMotVelLpFilFrq_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMotVelLpFilFrq_Val();
  MotRefMdlMotVltgDerivtvTiCon_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val();
  MotRefMdlTqItrnTolr_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlTqItrnTolr_Val();
  MotRefMdlVltgOverRThdSca_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlVltgOverRThdSca_Val();
  MotRefMdlMinCurrItrnLim_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlMinCurrItrnLim_Val();
  MotRefMdlRefLocnItrnLim_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlRefLocnItrnLim_Val();
  MotRefMdlTqItrnLim_Val_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlTqItrnLim_Val();
  SysGlbPrmMotPoleCnt_Val_data = TSC_MotRefMdl_Rte_Prm_SysGlbPrmMotPoleCnt_Val();
  MotRefMdlFbCtrlDi_Logl_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlFbCtrlDi_Logl();
  MotRefMdlVltgModDynCmpEna_Logl_data = TSC_MotRefMdl_Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl();
  (void)memcpy(MotRefMdlCurrDaxBoostTqScaX_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D(), sizeof(Ary1D_u4p12_11));
  (void)memcpy(MotRefMdlCurrDaxBoostTqScaY_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D(), sizeof(Ary1D_u1p15_11));
  (void)memcpy(MotRefMdlCurrDaxQaxRefDelta_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D(), sizeof(Ary1D_f32_8));
  (void)memcpy(MotRefMdlQuad13VltgSdlX_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D(), sizeof(Ary1D_u11p5_10));
  (void)memcpy(MotRefMdlQuad13VltgSdlY_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D(), sizeof(Ary1D_u3p13_10));
  (void)memcpy(MotRefMdlQuad24VltgSdlX_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D(), sizeof(Ary1D_u11p5_10));
  (void)memcpy(MotRefMdlQuad24VltgSdlY_Ary1D_data, TSC_MotRefMdl_Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D(), sizeof(Ary1D_u3p13_10));

  fct_status = TSC_MotRefMdl_Rte_Read_BrdgVltg_Val(&Read_BrdgVltg_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Read_CurrMeasLoaMtgtnEna_Logl(&Read_CurrMeasLoaMtgtnEna_Logl);
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

  fct_status = TSC_MotRefMdl_Rte_Read_IvtrLoaMtgtnEna_Logl(&Read_IvtrLoaMtgtnEna_Logl);
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

  fct_status = TSC_MotRefMdl_Rte_Read_MotBackEmfConEstimd_Val(&Read_MotBackEmfConEstimd_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Read_MotInduDaxEstimd_Val(&Read_MotInduDaxEstimd_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Read_MotInduQaxEstimd_Val(&Read_MotInduQaxEstimd_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Read_MotQuad_Val(&Read_MotQuad_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Read_MotREstimd_Val(&Read_MotREstimd_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Read_MotTqCmdMrfScad_Val(&Read_MotTqCmdMrfScad_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Read_MotVelMrf_Val(&Read_MotVelMrf_Val);
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

  fct_status = TSC_MotRefMdl_Rte_Write_MotCurrAg_Val(Rte_InitValue_MotCurrAg_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotCurrDaxCmd_Val(Rte_InitValue_MotCurrDaxCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotCurrDaxMax_Val(Rte_InitValue_MotCurrDaxMax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotCurrQaxCmd_Val(Rte_InitValue_MotCurrQaxCmd_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotReacncDax_Val(Rte_InitValue_MotReacncDax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotReacncQax_Val(Rte_InitValue_MotReacncQax_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotVltgDaxFf_Val(Rte_InitValue_MotVltgDaxFf_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotVltgDaxFfStat_Val(Rte_InitValue_MotVltgDaxFfStat_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotVltgQaxFf_Val(Rte_InitValue_MotVltgQaxFf_Val);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_MotRefMdl_Rte_Write_MotVltgQaxFfStat_Val(Rte_InitValue_MotVltgQaxFfStat_Val);
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


#define MotRefMdl_STOP_SEC_CODE
#include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void MotRefMdl_TestDefines(void)
{
  /* Primitive Types */

  float32 Test_float32_LL_1 = Ag10_LowerLimit;
  float32 Test_float32_UL_1 = Ag10_UpperLimit;
  float32 Test_float32_LL_2 = Ag13_LowerLimit;
  float32 Test_float32_UL_2 = Ag13_UpperLimit;
  float32 Test_float32_LL_3 = Ag14_LowerLimit;
  float32 Test_float32_UL_3 = Ag14_UpperLimit;
  float32 Test_float32_LL_4 = Curr6_LowerLimit;
  float32 Test_float32_UL_4 = Curr6_UpperLimit;
  float32 Test_float32_LL_5 = Curr7_LowerLimit;
  float32 Test_float32_UL_5 = Curr7_UpperLimit;
  float32 Test_float32_LL_6 = Curr9_LowerLimit;
  float32 Test_float32_UL_6 = Curr9_UpperLimit;
  float32 Test_float32_LL_7 = CurrSqd1_LowerLimit;
  float32 Test_float32_UL_7 = CurrSqd1_UpperLimit;
  float32 Test_float32_LL_8 = Frq2_LowerLimit;
  float32 Test_float32_UL_8 = Frq2_UpperLimit;
  float32 Test_float32_LL_9 = Indu1_LowerLimit;
  float32 Test_float32_UL_9 = Indu1_UpperLimit;
  float32 Test_float32_LL_10 = Indu2_LowerLimit;
  float32 Test_float32_UL_10 = Indu2_UpperLimit;
  float32 Test_float32_LL_11 = MotCon1_LowerLimit;
  float32 Test_float32_UL_11 = MotCon1_UpperLimit;
  float32 Test_float32_LL_12 = R5_LowerLimit;
  float32 Test_float32_UL_12 = R5_UpperLimit;
  float32 Test_float32_LL_13 = R7_LowerLimit;
  float32 Test_float32_UL_13 = R7_UpperLimit;
  float32 Test_float32_LL_14 = Ti12_LowerLimit;
  float32 Test_float32_UL_14 = Ti12_UpperLimit;
  float32 Test_float32_LL_15 = Tq1_LowerLimit;
  float32 Test_float32_UL_15 = Tq1_UpperLimit;
  float32 Test_float32_LL_16 = Uls12_LowerLimit;
  float32 Test_float32_UL_16 = Uls12_UpperLimit;
  float32 Test_float32_LL_17 = Uls13_LowerLimit;
  float32 Test_float32_UL_17 = Uls13_UpperLimit;
  float32 Test_float32_LL_18 = Uls14_LowerLimit;
  float32 Test_float32_UL_18 = Uls14_UpperLimit;
  float32 Test_float32_LL_19 = Uls2_LowerLimit;
  float32 Test_float32_UL_19 = Uls2_UpperLimit;
  float32 Test_float32_LL_20 = Uls9_LowerLimit;
  float32 Test_float32_UL_20 = Uls9_UpperLimit;
  float32 Test_float32_LL_21 = Vel1_LowerLimit;
  float32 Test_float32_UL_21 = Vel1_UpperLimit;
  float32 Test_float32_LL_22 = Volt1_LowerLimit;
  float32 Test_float32_UL_22 = Volt1_UpperLimit;
  float32 Test_float32_LL_23 = Volt17_LowerLimit;
  float32 Test_float32_UL_23 = Volt17_UpperLimit;

  u11p5 Test_u11p5_LL_1 = Vel4_LowerLimit;
  u11p5 Test_u11p5_UL_1 = Vel4_UpperLimit;

  u1p15 Test_u1p15_LL_1 = Uls15_LowerLimit;
  u1p15 Test_u1p15_UL_1 = Uls15_UpperLimit;

  u3p13 Test_u3p13_LL_1 = Volt18_LowerLimit;
  u3p13 Test_u3p13_UL_1 = Volt18_UpperLimit;

  u4p12 Test_u4p12_LL_1 = Tq13_LowerLimit;
  u4p12 Test_u4p12_UL_1 = Tq13_UpperLimit;

  uint8 Test_uint8_LL_1 = Cnt14_LowerLimit;
  uint8 Test_uint8_UL_1 = Cnt14_UpperLimit;
  uint8 Test_uint8_LL_2 = Cnt19_LowerLimit;
  uint8 Test_uint8_UL_2 = Cnt19_UpperLimit;
  uint8 Test_uint8_LL_3 = Cnt28_LowerLimit;
  uint8 Test_uint8_UL_3 = Cnt28_UpperLimit;
  uint8 Test_uint8_LL_4 = Cnt29_LowerLimit;
  uint8 Test_uint8_UL_4 = Cnt29_UpperLimit;

  /* Enumeration Data Types */

  MotQuad1 Test_MotQuad1_V_1 = MOTQUAD_QUAD1;
  MotQuad1 Test_MotQuad1_V_2 = MOTQUAD_QUAD2;
  MotQuad1 Test_MotQuad1_V_3 = MOTQUAD_QUAD3;
  MotQuad1 Test_MotQuad1_V_4 = MOTQUAD_QUAD4;
}

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
