/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_GmMsg182BusChassisExp.h
 *     SW-C Type:  GmMsg182BusChassisExp
 *  Generated at:  Thu Feb  4 11:05:17 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg182BusChassisExp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG182BUSCHASSISEXP_H
# define _RTE_GMMSG182BUSCHASSISEXP_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_GmMsg182BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg182BusChassisExp
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg182BusChassisExpInvldTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg182BusChassisExpPrevVehLgtA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg182BusChassisExp, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg182BusChassisExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg182BusChassisExp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LstRxnTiMsg182_Val (0U)
# define Rte_InitValue_SerlComVehLgtA_Val (0.0F)
# define Rte_InitValue_VehStabyEnhmtLgtALoReslRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtLgtALoReslVldRaw_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg182BusChassisExp_LstRxnTiMsg182_Val(P2VAR(uint32, AUTOMATIC, RTE_GMMSG182BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg182BusChassisExp_VehStabyEnhmtLgtALoReslRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_GMMSG182BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg182BusChassisExp_VehStabyEnhmtLgtALoReslVldRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_GMMSG182BUSCHASSISEXP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg182BusChassisExp_SerlComVehLgtA_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg182BusChassisExp_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_GMMSG182BUSCHASSISEXP_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg182BusChassisExp_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_GMMSG182BUSCHASSISEXP_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GmMsg182BusChassisExp_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg182BusChassisExp_GmMsg182BusChassisExpInvldTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_GmMsg182BusChassisExp_GmMsg182BusChassisExpMissTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_LstRxnTiMsg182_Val Rte_Read_GmMsg182BusChassisExp_LstRxnTiMsg182_Val
# define Rte_Read_VehStabyEnhmtLgtALoReslRaw_Val Rte_Read_GmMsg182BusChassisExp_VehStabyEnhmtLgtALoReslRaw_Val
# define Rte_Read_VehStabyEnhmtLgtALoReslVldRaw_Val Rte_Read_GmMsg182BusChassisExp_VehStabyEnhmtLgtALoReslVldRaw_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_SerlComVehLgtA_Val Rte_Write_GmMsg182BusChassisExp_SerlComVehLgtA_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_GmMsg182BusChassisExp_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_GmMsg182BusChassisExp_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_GmMsg182BusChassisExp_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_GmMsg182BusChassisExpInvldTiOut_Val Rte_Prm_GmMsg182BusChassisExp_GmMsg182BusChassisExpInvldTiOut_Val

# define Rte_Prm_GmMsg182BusChassisExpMissTiOut_Val Rte_Prm_GmMsg182BusChassisExp_GmMsg182BusChassisExpMissTiOut_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg182BusChassisExpPrevVehLgtA() (Rte_Inst_GmMsg182BusChassisExp->Pim_GmMsg182BusChassisExpPrevVehLgtA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GmMsg182BusChassisExpInvldTmr() (Rte_Inst_GmMsg182BusChassisExp->Pim_GmMsg182BusChassisExpInvldTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_GmMsg182BusChassisExpPrevVehLgtA(void)
 *   uint32 *Rte_Pim_GmMsg182BusChassisExpInvldTmr(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_GmMsg182BusChassisExpInvldTiOut_Val(void)
 *   uint16 Rte_Prm_GmMsg182BusChassisExpMissTiOut_Val(void)
 *
 *********************************************************************************************************************/


# define GmMsg182BusChassisExp_START_SEC_CODE
# include "GmMsg182BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg182BusChassisExpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg182BusChassisExpInit1 GmMsg182BusChassisExpInit1
FUNC(void, GmMsg182BusChassisExp_CODE) GmMsg182BusChassisExpInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg182BusChassisExpPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_LstRxnTiMsg182_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtLgtALoReslRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_VehStabyEnhmtLgtALoReslVldRaw_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SerlComVehLgtA_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg182BusChassisExpPer1 GmMsg182BusChassisExpPer1
FUNC(void, GmMsg182BusChassisExp_CODE) GmMsg182BusChassisExpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg182BusChassisExp_STOP_SEC_CODE
# include "GmMsg182BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1454599860
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Working/MM018A_GmMsg182BusChassisExp_Impl/tools/contract/Rte_GmMsg182BusChassisExp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1454599860
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG182BUSCHASSISEXP_H */
