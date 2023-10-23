/**********************************************************************************************************************
* Copyright 2015 Nxtr 
* Nxtr Confidential
*
* Module File Name: CDD_ChkPt_Bsw.c
* Module Description: Check Point functions for BSW tasks
* Project           : CBD
* Author            : Lucas Wendling
************************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       czgng4 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 03/05/15  1        LWW       Initial Version                                                                 EA4#247
* 05/08/15  2        LWW       Update for 1a release                                                           EA4#578
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "CDD_ChkPt_Bsw.h"
#include "WdgM.h"
#include "WdgM_PBcfg.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
#define CDD_ChkPtAppl10_START_SEC_CODE
#include "CDD_ChkPtAppl10_MemMap.h"

/**********************************************************************************************************************
  * Name:        ChkPt_10msBswAppl10Start
  * Description: Start checkpoint function for 10ms BSW Application 10 task
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at the start of the 10ms BSW Application 10 task
  ********************************************************************************************************************/
FUNC(void, CDD_ChkPt_CODE) ChkPt_10msBswAppl10Strt(void)
{
	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)WdgM_CheckpointReached(SE_0, CP_0_0);
}

/**********************************************************************************************************************
  * Name:        ChkPt_10msBswAppl10End
  * Description: End checkpoint function for 10ms BSW Application 10 task
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at the end of the 10ms BSW Application 10 task
  ********************************************************************************************************************/
FUNC(void, CDD_ChkPt_CODE) ChkPt_10msBswAppl10End(void)
{
	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
	(void)WdgM_CheckpointReached(SE_0, CP_0_1);
}

#define CDD_ChkPtAppl10_STOP_SEC_CODE
#include "CDD_ChkPtAppl10_MemMap.h"
