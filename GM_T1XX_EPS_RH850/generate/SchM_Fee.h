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
 *          File:  SchM_Fee.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Header of BSW Scheduler for BSW Module <Fee>
 *********************************************************************************************************************/
#ifndef SCHM_FEE_H
# define SCHM_FEE_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_Fee_Type.h"

# include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */

# define FEE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, FEE_CODE) Fee_MainFunction(void); /* PRQA S 3451 */ /* MD_Rte_3451 */

# define FEE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_0() SuspendOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */

# define SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_0() ResumeOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_FEE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
