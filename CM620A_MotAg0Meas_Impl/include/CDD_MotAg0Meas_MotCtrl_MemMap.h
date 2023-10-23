/**********************************************************************************************************************
* Copyright 2015 Nxtr 
* Nxtr Confidential
*
* Module File Name  : CDD_MotAg0Meas_MotCtrl_MemMap.h
* Module Description: MotAg0Meas component Motor Control MemMap
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       jzk9cc %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/19/15	1   	 Rijvi			initial version							                                    EA4#541
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#ifdef CDD_MotAg0Meas_MotCtrl_START_SEC_CODE
    # undef CDD_MotAg0Meas_MotCtrl_START_SEC_CODE
	#define MotCtrl_START_SEC_CODE
	#include "MemMap.h"	
#endif

#ifdef CDD_MotAg0Meas_MotCtrl_STOP_SEC_CODE
    # undef CDD_MotAg0Meas_MotCtrl_STOP_SEC_CODE
	#define MotCtrl_STOP_SEC_CODE
	#include "MemMap.h"
#endif


