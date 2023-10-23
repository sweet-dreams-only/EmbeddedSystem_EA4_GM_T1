/***********************************************************************************************************************
* Copyright 2016 Nxtr
* Nxtr Confidential
*
* Module File Name:   CDD_DataAndAdrParNonRte.c
* Module Description: Microcontroller Data and Address Parity Complex Driver
* Project           : CBD
* Author            : Avinash James
************************************************************************************************************************
* Version Control:
* %version:         2 %
* %derived_by:      nzt9hv %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 03/15/16  1        AJM       Initial Version                                                              EA4#2763
* 04/04/16  2        Selva     Remove SYCM() to match 01.01.00                                              EA4#5096
***********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include <v800_ghs.h> /* for SYNCM intrinsic */  
#include "CDD_DataAndAdrPar.h"
#include "CDD_ExcpnHndlg.h"
#include "CDD_NxtrTi.h"
#include "NxtrMcuSuprtLib.h"
#include "ecm_regs.h"
#include "seg_regs.h"
#include "dparity_regs.h"
#include "csig_regs.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define  VCIFERRSETBFRTEST_CNT_U32				((uint32)1U<<0U)
#define  ECMERRSETBFRTEST_CNT_U32				((uint32)1U<<1U)
#define  READOPERECMERR_CNT_U32					((uint32)1U<<2U)
#define  WROPERECMERR_CNT_U32					((uint32)1U<<3U)
#define  WROPERADRPARERR_CNT_U32				((uint32)1U<<4U)
#define  CLRERRSTSFLGFAIL_CNT_U32				((uint32)1U<<5U)
#define  TESTMODCTRLREGWRFAIL_CNT_U32			((uint32)1U<<6U)
#define  TOUT_MICROSEC_U32						2U

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/
static FUNC(boolean, CDD_DataAndAdrPar_CODE) ChkForEcmBit28 (void);
static FUNC(void, CDD_DataAndAdrPar_CODE) WrTestModCtrlReg (uint32 Val, uint32* ErrFlg_Cnt_T_u32);
/*********************************************** Function Definitions ************************************************/
#define CDD_DataAndAdrPar_START_SEC_CODE
#include "CDD_DataAndAdrPar_MemMap.h"

/**********************************************************************************************************************
  * Name:        DataAndAdrParInit1
  * Description: Non-RTE Init Function for start up test
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called from EcuM_Callout_Stubs.c file
  ********************************************************************************************************************/
FUNC(void, CDD_DataAndAdrPar_CODE) DataAndAdrParInit1(void)
{
	VAR(uint32,AUTOMATIC) ErrorOutPinMaskSave_Cnt_T_u32 = ECMEMK0;
	VAR(uint16,AUTOMATIC) SaveSegCont_Cnt_T_u16 = SEGCONT;
	VAR(boolean,AUTOMATIC) ExecStrtUpTest_Cnt_T_logl; 
	VAR(uint8,AUTOMATIC) ReadVal_Cnt_T_u08; 
	VAR(uint32, AUTOMATIC) ECMESSTC0_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ErrFlg_Cnt_T_u32 = 0U;
	
	ChkForStrtUpTest_Oper(&ExecStrtUpTest_Cnt_T_logl); 
	
	if( 0U != SEGVCIF)
	{
		ErrFlg_Cnt_T_u32 = VCIFERRSETBFRTEST_CNT_U32;
	}
	if(0U != (ECMMESSTR0 & ((uint32)1U<<28U) ))
	{
		ErrFlg_Cnt_T_u32 |= ECMERRSETBFRTEST_CNT_U32;		
	}
	
   if ((ExecStrtUpTest_Cnt_T_logl == TRUE) && (0U == ErrFlg_Cnt_T_u32))
   { 
		/* Set BIT28 to prevent (mask off) test induced PBG error from getting to the ERROROUT  pin */
		WrProtdRegEcm_u32 ( ErrorOutPinMaskSave_Cnt_T_u32 | ((uint32)1U << 28U), &ECMEMK0);
		

		/* Turn off syserr response to several VCIE things */		
		SEGVCIE = 0U;  
		
		
		/* Enable key and error all four byte lanes */
		WrTestModCtrlReg(0x0000400FU,&ErrFlg_Cnt_T_u32);

		if(0U == ErrFlg_Cnt_T_u32 )
		{
			/* A read from a reg in the module should inject error	*/
			ReadVal_Cnt_T_u08 = CSIG0BCTL0;
			
			if(TRUE == ChkForEcmBit28())
			{
				/* Read Test Passed Move on to the write test after clearing the error flags */
				ECMESSTC0_Cnt_T_u32 = ECMESSTC0 | (0x10000000U);
				WrProtdRegEcm_u32 (ECMESSTC0_Cnt_T_u32, &ECMESSTC0);  
                

                WrTestModCtrlReg(0x0000400FU,&ErrFlg_Cnt_T_u32);
				
				if(0U == ErrFlg_Cnt_T_u32 )
				{
					/* A write to the register a reg in the module should inject error	*/
					CSIG0BCTL0 = ReadVal_Cnt_T_u08;
					
					if(TRUE != ChkForEcmBit28())
					{
						/* Write operation failed with and ECM Error not getting set */
						ErrFlg_Cnt_T_u32 = WROPERECMERR_CNT_U32;
					}
					if(0U == APDPERRST_CHBB0 )
					{
						/* Write operation failed with data parity error not getting set */
						ErrFlg_Cnt_T_u32 |= WROPERADRPARERR_CNT_U32;
					}
					/* Clear the ECM Error Bit */
					ECMESSTC0_Cnt_T_u32 = ECMESSTC0 | (0x10000000U);
					WrProtdRegEcm_u32 (ECMESSTC0_Cnt_T_u32, &ECMESSTC0); 
					
					
					/* clear the error status near the source */
					APDPERRSTC_CHBB0 = 1U;       
					__SYNCM();
					/* See if the error status bit cleared */
                    if ( 1U == APDPERRST_CHBB0)  
					{
						/* Write operation failed with data parity error not getting set */
						ErrFlg_Cnt_T_u32 |= CLRERRSTSFLGFAIL_CNT_U32;						
					}

				}

			}
			else
			{
				/* Read operation failed with and ECM Error not getting set */
				ErrFlg_Cnt_T_u32 = READOPERECMERR_CNT_U32;				
			}

		}
				/* Turn Off test mode */
		WrTestModCtrlReg(0x00004000U,&ErrFlg_Cnt_T_u32);
		
		SEGVCIF = 0U;  		 
		
		SEGCONT = SaveSegCont_Cnt_T_u16;		
	
		WrProtdRegEcm_u32 (ErrorOutPinMaskSave_Cnt_T_u32, &ECMEMK0);  
		
		if (0U != ErrFlg_Cnt_T_u32)
		{
			SetMcuDiagcIdnData( MCUDIAGC_PRPHLBUSDATAPARSTRTUPFLT, ErrFlg_Cnt_T_u32); 	
		}
	}
   else if(ExecStrtUpTest_Cnt_T_logl == TRUE)
   {
		SetMcuDiagcIdnData ( MCUDIAGC_PRPHLBUSDATAPARSTRTUPFLT, ErrFlg_Cnt_T_u32); 
   }
   else
   {
		/* Empty Else Case */
   }
}
/******************************************************************************
 * Name:        ChkForEcmBit28
 * Description: Static function to check whether ECM bit was set or not within
			    a timeout interval
 * Inputs:  	None        
 * Outputs: 	None      
 * Usage Notes: To be called from DataAndAdrParInit1 function
 ****************************************************************************/
static FUNC(boolean, CDD_DataAndAdrPar_CODE) ChkForEcmBit28(void)
{
	VAR(boolean, AUTOMATIC) RetVal_Cnt_T_logl;
	VAR(uint32, AUTOMATIC) TimeOutChkStrt_uS_T_u32;
	VAR(uint32, AUTOMATIC) ElpdTime_uS_T_u32;

	/* This starts the timer */
	GetRefTmr1MicroSec32bit_Oper(&TimeOutChkStrt_uS_T_u32);

	do
	{
		/* Checks for elapsed time */
		GetTiSpan1MicroSec32bit_Oper(TimeOutChkStrt_uS_T_u32 , &ElpdTime_uS_T_u32);
	}while((ElpdTime_uS_T_u32 < TOUT_MICROSEC_U32) && (0x0U == (ECMMESSTR0 & 0x10000000U)));

	/* Timeout */
	if (TOUT_MICROSEC_U32 == ElpdTime_uS_T_u32) 
	{
	  RetVal_Cnt_T_logl = FALSE;   
	}
	else
	{ 
	  RetVal_Cnt_T_logl = TRUE;   
	}
	return RetVal_Cnt_T_logl;

}

/******************************************************************************
 * Name:        WrTestModeCtrlReg
 * Description: Static function to write to the Test Mode Control register and
			    verify the write was successful
 * Inputs:  	Val,ErrFlg_Cnt_T_u32        
 * Outputs: 	None      
 * Usage Notes: To be called from DataAndAdrParInit1 function
 ****************************************************************************/
static FUNC(void, CDD_DataAndAdrPar_CODE) WrTestModCtrlReg(uint32 Val,uint32* ErrFlg_Cnt_T_u32)
{
    APDPTMC_CHBB0 = Val;                  

    if ( (Val & 0x0000000FU) != APDPTMC_CHBB0)
	{
		* ErrFlg_Cnt_T_u32 |= TESTMODCTRLREGWRFAIL_CNT_U32;		
	}
}

#define CDD_DataAndAdrPar_STOP_SEC_CODE
#include "CDD_DataAndAdrPar_MemMap.h"

