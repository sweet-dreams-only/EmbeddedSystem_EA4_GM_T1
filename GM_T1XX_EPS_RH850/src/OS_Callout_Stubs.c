/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                 Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vctr Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nxtr Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Callout_Stubs.c
 *   Generation Time: 2016-12-14 11:09:27
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


# define OS_CALLOUT_STUBS_SOURCE


/**********************************************************************************************************************
*  INCLUDES
*********************************************************************************************************************/

#include "Std_Types.h"
#include "osek.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_Include>
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
* Module File Name  : OS_Callout_Stubs.c
* Module Description: OS Callout Stubs file based on generated template
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/25/16  1        LWW       Initial version from new vector BSW delivery based on template                  EA4#3191
* 12/15/16  2        HM        Integrated Vector SIP CBD1400351_D04                                            EA4#8935
**********************************************************************************************************************/ 
 
#include "EcuM.h"
#include "NxtrOsErrHndlg.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/


/**********************************************************************
 * GLOBAL FUNCTIONS
 **********************************************************************/

/* OS Error Hook */
osqFunc1 void osqFunc2 ErrorHook(StatusType Error)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ErrorHook>
 *********************************************************************************************************************/
	NxtrOsErrHndlg(Error);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

/* OS Post Task Hook */
#if osdPostTaskHook
osqFunc1 void osqFunc2 PostTaskHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PostTaskHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}
#endif

/* OS Pre Task Hook */
#if osdPreTaskHook
osqFunc1 void osqFunc2 PreTaskHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PreTaskHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}
#endif

/* OS Protection Hook */
#if ((osdSC == SC2) || (osdSC == SC3) || (osdSC == SC4))
ProtectionReturnType ProtectionHook(StatusType Fatalerror)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ProtectionHook>
 *********************************************************************************************************************/
	NxtrOsErrHndlg(Fatalerror);

	return(PRO_SHUTDOWN);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}
#endif

/* OS Shutdown Hook */
osqFunc1 void osqFunc2 ShutdownHook(StatusType Error)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ShutdownHook>
 *********************************************************************************************************************/
  EcuM_Shutdown();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

/* OS Startup Hook */
osqFunc1 void osqFunc2 StartupHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_StartupHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}


/* Unrecognized User Blocks */

#if 0
#endif

/**********************************************************************************************************************
*  END OF FILE: OS_Callout_Stubs.c
*********************************************************************************************************************/


