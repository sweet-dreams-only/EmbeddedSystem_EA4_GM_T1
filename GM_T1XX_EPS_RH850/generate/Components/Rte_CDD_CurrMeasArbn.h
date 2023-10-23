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
 *          File:  Rte_CDD_CurrMeasArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_CurrMeasArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_CURRMEASARBN_H
# define _RTE_CDD_CURRMEASARBN_H

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

# include "Rte_CDD_CurrMeasArbn_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_CurrMeasArbnMaxStallCntr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasArbnMaxStallCntr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CurrMeasArbnSens0RollgCntPrev() \
  (&Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0RollgCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CurrMeasArbnSens0StallCntPrev() \
  (&Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0StallCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CurrMeasArbnSens1RollgCntPrev() \
  (&Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1RollgCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CurrMeasArbnSens1StallCntPrev() \
  (&Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1StallCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_CurrMeasArbn_START_SEC_CODE
# include "CDD_CurrMeasArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CurrMeasArbnInit1 CurrMeasArbnInit1
# endif

FUNC(void, CDD_CurrMeasArbn_CODE) CurrMeasArbnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_CurrMeasArbn_STOP_SEC_CODE
# include "CDD_CurrMeasArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_CURRMEASARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
