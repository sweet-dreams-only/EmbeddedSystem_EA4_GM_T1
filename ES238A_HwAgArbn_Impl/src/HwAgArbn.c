/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgArbn.c
 *     SW-C Type:  HwAgArbn
 *  Generated at:  Thu Aug 13 12:42:09 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nxtr 
* Nxtr Confidential
*
* Module File Name: HwAgArbn.c
* Module Description: Implementation of HwAgArbn FDD ES238A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           3 %
* %derived_by:        mzjphh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/30/15  1        SB       Initial Version                                                                   EA4#1130
* 08/13/15  2        SB       Corrected the name of periodic					    							EA4#1130
* 10/15/15  3        NS       Added stall count rollover protection and output limiting                         EA4#2009
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_HwAgArbn.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
 
 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define CORRLNSTSMASKSIGA_CNT_U08		0x01u
#define CORRLNSTSMASKSIGB_CNT_U08		0x02u
#define HWAGLIM_HWDEG_F32               900.0F

 static FUNC(boolean, HwTqArbn_CODE) CorrlnSigAvlChkRev(uint8 SigRollgCnt_Cnt_T_u08, 
												  SigQlfr1 SigQlfr_Cnt_T_enum,
												  P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) LstRollgCnt_Cnt_T_u08,
												  P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) StallCnt_Cnt_T_u08);													  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgPrev(void)
 *   uint8 *Rte_Pim_HwAgARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwAgAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwAgBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwAgBStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwAgArbnAgAAvl(void)
 *   boolean *Rte_Pim_dHwAgArbnAgBAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_HwAgArbnHwAgMaxStall_Val(void)
 *
 *********************************************************************************************************************/


#define HwAgArbn_START_SEC_CODE
#include "HwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgArbnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAgA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwAgARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwAgBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgCorrlnSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAg_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, HwAgArbn_CODE) HwAgArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgArbnPer1
 *********************************************************************************************************************/
	 VAR(float32,  AUTOMATIC)  HwAgA_HwDeg_T_f32;
	 VAR(float32,  AUTOMATIC)  HwAgB_HwDeg_T_f32;
	 VAR(uint8,    AUTOMATIC)  HwAgCorrlnSts_Cnt_T_u08;
	 VAR(uint8,    AUTOMATIC)  HwAgARollgCntr_Cnt_T_u08;
	 VAR(uint8,    AUTOMATIC)  HwAgBRollgCntr_Cnt_T_u08;	
	 VAR(SigQlfr1, AUTOMATIC)  HwAgAQlfr_Cnt_T_enum; 
	 VAR(SigQlfr1, AUTOMATIC)  HwAgBQlfr_Cnt_T_enum;
	 VAR(float32,  AUTOMATIC)  HwAg_HwDeg_T_f32;
	 VAR(boolean,  AUTOMATIC)  SigAAvl_Cnt_T_lgc;
	 VAR(boolean,  AUTOMATIC)  SigBAvl_Cnt_T_lgc;
	 VAR(boolean,  AUTOMATIC)  HwAgAAvl_Cnt_T_lgc;
	 VAR(boolean,  AUTOMATIC)  HwAgBAvl_Cnt_T_lgc;
	
	 /* Read Inputs */	
	 (void) Rte_Read_HwAgA_Val( &HwAgA_HwDeg_T_f32 );
	 (void) Rte_Read_HwAgB_Val( &HwAgB_HwDeg_T_f32 );
	 (void) Rte_Read_HwAgCorrlnSt_Val( &HwAgCorrlnSts_Cnt_T_u08 );     
     (void) Rte_Read_HwAgARollgCntr_Val( &HwAgARollgCntr_Cnt_T_u08 );
	 (void) Rte_Read_HwAgBRollgCntr_Val( &HwAgBRollgCntr_Cnt_T_u08 );
	 (void) Rte_Read_HwAgAQlfr_Val( &HwAgAQlfr_Cnt_T_enum );	
     (void) Rte_Read_HwAgBQlfr_Val( &HwAgBQlfr_Cnt_T_enum );	

	 /** HwAgAAvlChk **/	
	 SigAAvl_Cnt_T_lgc = CorrlnSigAvlChkRev( HwAgARollgCntr_Cnt_T_u08, 
											 HwAgAQlfr_Cnt_T_enum,
											 Rte_Pim_HwAgARollgCntrPrev(),
											 Rte_Pim_HwAgAStallCntrPrev() );  									/* REQ: ES238A #35 I */									  
	 /** HwAgAAvlChk1 **/	
	 SigBAvl_Cnt_T_lgc = CorrlnSigAvlChkRev( HwAgBRollgCntr_Cnt_T_u08, 
											 HwAgBQlfr_Cnt_T_enum,
											 Rte_Pim_HwAgBRollgCntrPrev(),
											 Rte_Pim_HwAgBStallCntrPrev() );     								/* REQ: ES238A #69 I */	
	 /* Determine HwAgArbnAgAAvl */									  
	 if(((HwAgCorrlnSts_Cnt_T_u08 & CORRLNSTSMASKSIGA_CNT_U08) == 1u ) && (SigAAvl_Cnt_T_lgc == TRUE)) 			/* REQ: ES238A #35 I */
	 {
		 HwAgAAvl_Cnt_T_lgc = TRUE;				 
	 }	
	 else
	 {
		 HwAgAAvl_Cnt_T_lgc = FALSE;		
	 }
	 /* Update Display Variable */
	 *Rte_Pim_dHwAgArbnAgAAvl() = HwAgAAvl_Cnt_T_lgc;
	 
	 /* Determine HwAgArbnAgBAvl */
	 if(((HwAgCorrlnSts_Cnt_T_u08 & CORRLNSTSMASKSIGB_CNT_U08) == 2u ) && (SigBAvl_Cnt_T_lgc == TRUE)) 			/* REQ: ES238A #69 I */
	 {
		 HwAgBAvl_Cnt_T_lgc = TRUE;			 		
	 }	
	 else
	 {
		 HwAgBAvl_Cnt_T_lgc = FALSE;		
	 }
	 /* Update Display Variable */
	 *Rte_Pim_dHwAgArbnAgBAvl() = HwAgBAvl_Cnt_T_lgc;
		 
	 /** Arbitration **/
	 /* REQ: ES238A #84 I */ /* REQ: ES238A #100 I */  /* REQ: ES238A #106 I */ /* REQ: ES238A #108 I */
	 if((HwAgAAvl_Cnt_T_lgc == TRUE) && (HwAgBAvl_Cnt_T_lgc == TRUE))
	 {
		 HwAg_HwDeg_T_f32 = (HwAgA_HwDeg_T_f32 + HwAgB_HwDeg_T_f32) / 2.0f; 
	 }
	 else if(HwAgAAvl_Cnt_T_lgc == TRUE)
	 {
		 HwAg_HwDeg_T_f32 = HwAgA_HwDeg_T_f32; 
	 }
	 else if(HwAgBAvl_Cnt_T_lgc == TRUE)
	 {
		 HwAg_HwDeg_T_f32 = HwAgB_HwDeg_T_f32; 
	 }
	 else
	 {
		 HwAg_HwDeg_T_f32 = *Rte_Pim_HwAgPrev(); 
	 }
	 *Rte_Pim_HwAgPrev() = HwAg_HwDeg_T_f32;

     /* Output limiting */
     HwAg_HwDeg_T_f32 = Lim_f32(HwAg_HwDeg_T_f32, -HWAGLIM_HWDEG_F32, HWAGLIM_HWDEG_F32);

	 /* Write Output */
	 (void) Rte_Write_HwAg_Val(HwAg_HwDeg_T_f32);	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgArbn_STOP_SEC_CODE
#include "HwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
* Name:        		CorrlnSigAvlChkRev
* Description: 		Check availability of the signal based on 'RollingCounter', 'StallCounter' and 'SignalQualifier'.
* Inputs:      		SigCorrChk_Cnt_T_u08,  SigRollgCnt_Cnt_T_u08, SigQlfr_Cnt_T_enum          		
* Inputs/Outputs:	*LstRollgCnt_Cnt_T_u08, *StallCnt_Cnt_T_u08
* Outputs:          SigAvl_Cnt_T_lgc 
* Usage Notes: 		None
**********************************************************************************************************************/
 static FUNC(boolean, HwTqArbn_CODE) CorrlnSigAvlChkRev(uint8 SigRollgCnt_Cnt_T_u08, 
														SigQlfr1 SigQlfr_Cnt_T_enum,
														P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) LstRollgCnt_Cnt_T_u08,
														P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) StallCnt_Cnt_T_u08)								  
{
    VAR(boolean,  AUTOMATIC)  SigAvl_Cnt_T_lgc;	 
    if( SigRollgCnt_Cnt_T_u08 == (*LstRollgCnt_Cnt_T_u08))
    {
        /* Rollover protection */
        if(*StallCnt_Cnt_T_u08 == Rte_Prm_HwAgArbnHwAgMaxStall_Val())
        {
            *StallCnt_Cnt_T_u08 = Rte_Prm_HwAgArbnHwAgMaxStall_Val();
        }
        else
        {
            (*StallCnt_Cnt_T_u08) = (*StallCnt_Cnt_T_u08) + 1U; 
        }	 
    }
    else
    {
        (*StallCnt_Cnt_T_u08) = 0U;
    }	
    (*LstRollgCnt_Cnt_T_u08) = SigRollgCnt_Cnt_T_u08;	
    if((*StallCnt_Cnt_T_u08) >= Rte_Prm_HwAgArbnHwAgMaxStall_Val())
    {
        SigAvl_Cnt_T_lgc = FALSE;
    }
    else
    {
        if(SigQlfr_Cnt_T_enum < SIGQLFR_FAILD)
        {
         SigAvl_Cnt_T_lgc = TRUE;
        }
        else
        {
         SigAvl_Cnt_T_lgc = FALSE;
        }
    }
    return SigAvl_Cnt_T_lgc;												  
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
