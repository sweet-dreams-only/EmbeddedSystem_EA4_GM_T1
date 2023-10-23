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
 *          File:  Rte_HiLoadStallLimr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HiLoadStallLimr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HILOADSTALLLIMR_H
# define _RTE_HILOADSTALLLIMR_H

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

# include "Rte_HiLoadStallLimr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_StallMotTqLimDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_Appl6_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HiLoadStallLimr_StallMotTqLim_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimdPreStall_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_MotTqCmdLimdPreStall_Val (0.0F)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_StallMotTqLim_Val (8.8F)
#  define Rte_InitValue_StallMotTqLimDi_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_MotTqCmdLimdPreStall_Val Rte_Read_HiLoadStallLimr_MotTqCmdLimdPreStall_Val
#  define Rte_Read_HiLoadStallLimr_MotTqCmdLimdPreStall_Val(data) (*(data) = Rte_AssiSumLim_MotTqCmdLimdPreStall_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelCrf_Val Rte_Read_HiLoadStallLimr_MotVelCrf_Val
#  define Rte_Read_HiLoadStallLimr_MotVelCrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelCrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_StallMotTqLimDi_Logl Rte_Read_HiLoadStallLimr_StallMotTqLimDi_Logl
#  define Rte_Read_HiLoadStallLimr_StallMotTqLimDi_Logl(data) (*(data) = Rte_CmnMfgSrv_StallMotTqLimDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_StallMotTqLim_Val Rte_Write_HiLoadStallLimr_StallMotTqLim_Val
#  define Rte_Write_HiLoadStallLimr_StallMotTqLim_Val(data) (Rte_HiLoadStallLimr_StallMotTqLim_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HiLoadStallLimrMotTqCmdFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HiLoadStallLimrMotVelMgnThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HiLoadStallLimrMotVelMgnThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HiLoadStallLimrStallMotTqLimSlewRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HiLoadStallLimrStallMotTqCmdLimX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HiLoadStallLimrStallMotTqCmdLimX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HiLoadStallLimrStallMotTqCmdLimY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HiLoadStallLimrStallMotTqCmdLimY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqCmdFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_StallMotTqLimPrev() \
  (&Rte_HiLoadStallLimr_StallMotTqLimPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHiLoadStallLimrStallMotTqCmd() \
  (&Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild() \
  (&Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmdFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHiLoadStallLimrStallMotTqLim() \
  (&Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_StallMotTqCmdFil() \
  (&Rte_HiLoadStallLimr_StallMotTqCmdFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HiLoadStallLimr_START_SEC_CODE
# include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HiLoadStallLimrInit1 HiLoadStallLimrInit1
#  define RTE_RUNNABLE_HiLoadStallLimrPer1 HiLoadStallLimrPer1
# endif

FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HiLoadStallLimr_STOP_SEC_CODE
# include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HILOADSTALLLIMR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
