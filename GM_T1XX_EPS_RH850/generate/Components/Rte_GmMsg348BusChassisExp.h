/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_GmMsg348BusChassisExp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg348BusChassisExp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG348BUSCHASSISEXP_H
# define _RTE_GMMSG348BUSCHASSISEXP_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_GmMsg348BusChassisExp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_SerlComInpProxy_LstRxnTiMsg348BusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusChassisExp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_LstRxnTiMsg348BusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelLeDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelLeDrvnRawBusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelLeDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelLeDrvnVldRawBusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelRiDrvnBusChassisExp_Val (0.0F)
#  define Rte_InitValue_WhlGndVelRiDrvnRawBusChassisExp_Val (0U)
#  define Rte_InitValue_WhlGndVelRiDrvnStuckBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnVldBusChassisExp_Logl (FALSE)
#  define Rte_InitValue_WhlGndVelRiDrvnVldRawBusChassisExp_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_LstRxnTiMsg348BusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_LstRxnTiMsg348BusChassisExp_Val
#  define Rte_Read_GmMsg348BusChassisExp_LstRxnTiMsg348BusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_LstRxnTiMsg348BusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnRawBusChassisExp_Val
#  define Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeDrvnRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelLeDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldRawBusChassisExp_Val
#  define Rte_Read_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnRawBusChassisExp_Val
#  define Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiDrvnRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlGndVelRiDrvnVldRawBusChassisExp_Val Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldRawBusChassisExp_Val
#  define Rte_Read_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldRawBusChassisExp_Val(data) (*(data) = Rte_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusChassisExp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_WhlGndVelLeDrvnBusChassisExp_Val Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val
#  define Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val(data) (Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl
#  define Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl(data) (Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnStuckBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelLeDrvnVldBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl
#  define Rte_Write_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl(data) (Rte_GmMsg348BusChassisExp_WhlGndVelLeDrvnVldBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiDrvnBusChassisExp_Val Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val
#  define Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val(data) (Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnBusChassisExp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiDrvnStuckBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl
#  define Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl(data) (Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnStuckBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WhlGndVelRiDrvnVldBusChassisExp_Logl Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl
#  define Rte_Write_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl(data) (Rte_GmMsg348BusChassisExp_WhlGndVelRiDrvnVldBusChassisExp_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL6_APPL_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL6_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts6_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_GmMsg348BusChassisExpInvldTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg348BusChassisExpInvldTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg348BusChassisExpMissTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg348BusChassisExpMissTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GmMsg348BusChassisExpStuckTiOut_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GmMsg348BusChassisExpStuckTiOut_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl6_PIM_GROUP) Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl6_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi() \
  (&Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi() \
  (&Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelLeDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi() \
  (&Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnInvldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi() \
  (&Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpWhlGndVelRiDrvnStuckTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn() \
  (&Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelLeDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn() \
  (&Rte_GmMsg348BusChassisExp_GmMsg348BusChassisExpPrevWhlGndVelRiDrvn) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define GmMsg348BusChassisExp_START_SEC_CODE
# include "GmMsg348BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GmMsg348BusChassisExpPer1 GmMsg348BusChassisExpPer1
# endif

FUNC(void, GmMsg348BusChassisExp_CODE) GmMsg348BusChassisExpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define GmMsg348BusChassisExp_STOP_SEC_CODE
# include "GmMsg348BusChassisExp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_GMMSG348BUSCHASSISEXP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
