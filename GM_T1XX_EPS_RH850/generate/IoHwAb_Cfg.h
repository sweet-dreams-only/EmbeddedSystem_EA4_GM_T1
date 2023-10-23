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
 *            Module: IoHwAb
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nxtr Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: IoHwAb_Cfg.h
 *   Generation Time: 2016-12-14 11:09:27
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


#if (!defined IOHWAB_CFG_H)
#define IOHWAB_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 **********************************************************************************************************************/

/* ===== MODULE INCLUDES ================================================== */
#include "Dio.h"
#include "Port.h"

/* ===== SCHM INCLUDE ===================================================== */ 
#include "SchM_IoHwAb.h"



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/* ===== VERSION IDENTIFICATION =========================================== */
#define IOHWAB_CFG_MAJOR_VERSION  (6u) 
#define IOHWAB_CFG_MINOR_VERSION  (00u) 
#define IOHWAB_CFG_PATCH_VERSION  (00u) 



/* ====== API CONFIGURATION =============================================== */

#define IOHWAB_VERSION_INFO_API                 (STD_OFF)
#define IOHWAB_USE_INIT_FUNCTION                (STD_OFF)

/* ====== CONFIGURATION FOR DEVELOPMENT MODE ============================== */

#define IOHWAB_DEV_ERROR_DETECT                 (STD_ON)



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


#define IoHwAb_GlobalSuspend() SchM_Enter_IoHwAb_IOHWAB_EXCLUSIVE_AREA_0()
#define IoHwAb_GlobalRestore() SchM_Exit_IoHwAb_IOHWAB_EXCLUSIVE_AREA_0()



/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

/* Prototypes of Sender/Receiver functions can be found in Rte_IoHwAb.h */

/* Prototypes of Client/Server functions can be found in Rte_IoHwAb.h */

/* Prototypes of Handler functions can be found in Rte_IoHwAb.h */



#endif /* (!defined IOHWAB_CFG_H) */
/**********************************************************************************************************************
 *  END OF FILE: IoHwAb_Cfg.h
 **********************************************************************************************************************/
