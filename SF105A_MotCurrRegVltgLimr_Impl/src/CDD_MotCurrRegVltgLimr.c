/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotCurrRegVltgLimr.c
 *     SW-C Type:  CDD_MotCurrRegVltgLimr
 *  Generated at:  Wed Jan  4 13:42:56 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotCurrRegVltgLimr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nxtr 
* Nxtr Confidential
*
* Module File Name  : CDD_MotCurrRegVltgLimr.c
* Module Description: Implementation of Motor Current Regulator and Voltage limiter
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/01/15  1        Selva       Initial Version                                                                EA4#299
* 04/12/16  2        NS          Updated for FDD v1.4.0                                                         EA4#4494
* 11/14/16  3		 ML			 Updated Header to Match Synergy Version									    N/A
* 11/14/16	4		 ML          Updated for FDD v2.1.0    												        EA4#7548
* 01/04/17  5        ML			 Updated to fix Anomaly EA4#9045												EA4#9082
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_MotCurrRegVltgLimr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrFil.h"
#include "ElecGlbPrm.h"

#define BRDGVLTDFT_VOLT_F32     12.0F

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AntiWdupCmdScaDax(void)
 *   float32 *Rte_Pim_AntiWdupCmdScaQax(void)
 *   float32 *Rte_Pim_CurrLoaScarPrev(void)
 *   float32 *Rte_Pim_DualEcuLoaScarPrev(void)
 *   float32 *Rte_Pim_IvtrLoaScarPrev(void)
 *   float32 *Rte_Pim_MotCtrlMotVltgDaxPrev(void)
 *   float32 *Rte_Pim_MotCtrlMotVltgQaxPrev(void)
 *   float32 *Rte_Pim_MotVltgIntglCmdDaxPrev(void)
 *   float32 *Rte_Pim_MotVltgIntglCmdQaxPrev(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErr(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly(void)
 *   FilLpRec1 *Rte_Pim_MotVltgBrdgLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotVltgQaxFfLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val(void)
 *   float32 Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void)
 *   boolean Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *
 *********************************************************************************************************************/


#define CDD_MotCurrRegVltgLimr_START_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegVltgLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, CDD_MotCurrRegVltgLimr_CODE) MotCurrRegVltgLimrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegVltgLimrInit1
 *********************************************************************************************************************/
    
    
    *Rte_Pim_AntiWdupCmdScaDax() = 1.0F;  /* REQ: SF105A #141 I */
    *Rte_Pim_AntiWdupCmdScaQax() = 1.0F;  /* REQ: SF105A #141 I */
    *Rte_Pim_CurrLoaScarPrev()  = 1.0F;   /* REQ: SF105A #155 I */
    *Rte_Pim_IvtrLoaScarPrev()  = 1.0F;  /* REQ: SF105A #155 I */ /* REQ: SF105A #136 I */ /* REQ: SF105A #134 I */
    *Rte_Pim_DualEcuLoaScarPrev() = 1.0F;
	
    FilLpInit(BRDGVLTDFT_VOLT_F32, Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val(), ELECGLBPRM_PWMPERDNOMX2_SEC_F32, Rte_Pim_MotVltgBrdgLpFil());
    FilLpInit(0.0F, Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val(), ELECGLBPRM_PWMPERDNOMX2_SEC_F32, Rte_Pim_MotVltgQaxFfLpFil());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotCurrRegVltgLimr_STOP_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
