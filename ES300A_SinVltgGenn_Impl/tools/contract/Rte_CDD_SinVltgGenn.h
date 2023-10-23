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
 *          File:  Rte_CDD_SinVltgGenn.h
 *     SW-C Type:  CDD_SinVltgGenn
 *  Generated at:  Sun Mar 20 15:47:32 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_SinVltgGenn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_SINVLTGGENN_H
# define _RTE_CDD_SINVLTGGENN_H

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

# include "Rte_CDD_SinVltgGenn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_SinVltgGenn
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil1OutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil2OutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaDptOffsA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaDptOffsB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaDptOffsC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwmPerdRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RndNrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_SinVltgGenn, RTE_CONST, RTE_CONST) Rte_Inst_CDD_SinVltgGenn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_SinVltgGenn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotElecMeclPolarity_Val (1)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_SinVltgGenn_MotElecMeclPolarity_Val(P2VAR(sint8, AUTOMATIC, RTE_CDD_SINVLTGGENN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_SinVltgGenn_SinVltgGennDthrLpFilCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotElecMeclPolarity_Val Rte_Read_CDD_SinVltgGenn_MotElecMeclPolarity_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SinVltgGennDthrLpFilCoeff_Val Rte_Prm_CDD_SinVltgGenn_SinVltgGennDthrLpFilCoeff_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_Fil1OutpPrev() (Rte_Inst_CDD_SinVltgGenn->Pim_Fil1OutpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fil2OutpPrev() (Rte_Inst_CDD_SinVltgGenn->Pim_Fil2OutpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaDptOffsA() (Rte_Inst_CDD_SinVltgGenn->Pim_PhaDptOffsA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaDptOffsB() (Rte_Inst_CDD_SinVltgGenn->Pim_PhaDptOffsB) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaDptOffsC() (Rte_Inst_CDD_SinVltgGenn->Pim_PhaDptOffsC) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RndNrPrev() (Rte_Inst_CDD_SinVltgGenn->Pim_RndNrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiSumAPrev() (Rte_Inst_CDD_SinVltgGenn->Pim_PhaOnTiSumAPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiSumBPrev() (Rte_Inst_CDD_SinVltgGenn->Pim_PhaOnTiSumBPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiSumCPrev() (Rte_Inst_CDD_SinVltgGenn->Pim_PhaOnTiSumCPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwmPerdRng() (Rte_Inst_CDD_SinVltgGenn->Pim_PwmPerdRng) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_Fil1OutpPrev(void)
 *   float32 *Rte_Pim_Fil2OutpPrev(void)
 *   float32 *Rte_Pim_PhaDptOffsA(void)
 *   float32 *Rte_Pim_PhaDptOffsB(void)
 *   float32 *Rte_Pim_PhaDptOffsC(void)
 *   float32 *Rte_Pim_RndNrPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumAPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumBPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumCPrev(void)
 *   uint32 *Rte_Pim_PwmPerdRng(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SinVltgGennDthrLpFilCoeff_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_SinVltgGenn_START_SEC_CODE
# include "CDD_SinVltgGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SinVltgGennInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotElecMeclPolarity_Val(sint8 *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SinVltgGennInit1 SinVltgGennInit1
FUNC(void, CDD_SinVltgGenn_CODE) SinVltgGennInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_SinVltgGenn_STOP_SEC_CODE
# include "CDD_SinVltgGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1458493954
#    error "The magic number of the generated file <C:/Component/ES300A_SinVltgGenn_Impl/tools/contract/Rte_CDD_SinVltgGenn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1458493954
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_SINVLTGGENN_H */
