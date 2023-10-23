/**********************************************************************************************************************
* Copyright 2015 Nxtr
* Nxtr Confidential
*
* Module File Name:   TunSelnMngt_private.c
* Module Description: Private source file for TunSelnMngt
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       cz7lt6 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 10/08/15  1       KJS     Initial version of this source file                                             EA4#1840
* 03/31/16  2       KJS     Updated to version 1 of ES400A                                                  EA4#5092
**********************************************************************************************************************/

#include "TunSelnMngt_Cfg_private.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 18.4 [NXTRDEV 18.4.1]: Structures of varying sizes share a common RAM buffer and are combined with a union for online calibration operations */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************* Module Specific Data Types **********************************************/

/******************************************** Module Specific Variables **********************************************/

#define TunSelnMngt_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "TunSelnMngt_MemMap.h"

/* The following variables were required to be declared globally for the TunSelnMngt.c module and the TunSelnMngt_Cfg.c
 * module. The data types TunSelnRamTblTypRec and OnlinecalTblTyp are made of elements that are generated by the RTE, 
 * and cannot be created in the Rte_UserTypes.h because of their dynamic nature and the fact that the RTE is the owner
 * of those data types. These variables shall not be accessed by any module outside of the two for TunSelnMngt*/
VAR(TunSelnRamTblRec1, AUTOMATIC) MngtRamTbl_C[2];
VAR(OnlineCalTblRec1, AUTOMATIC) OnlineRamCalTbl_C;

#define TunSelnMngt_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "TunSelnMngt_MemMap.h"

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
