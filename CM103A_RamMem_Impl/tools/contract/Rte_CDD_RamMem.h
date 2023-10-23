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
 *          File:  Rte_CDD_RamMem.h
 *     SW-C Type:  CDD_RamMem
 *  Generated at:  Sat Aug 20 13:33:28 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_RamMem> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_RAMMEM_H
# define _RTE_CDD_RAMMEM_H

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

# include "Rte_CDD_RamMem_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_RamMem
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LclRamEccSngBitCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LclRamEccSngBitSoftFailr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LclRamFailrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LclRamWordLineRead; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemCanRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemCanRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemDtsRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemFrRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemFrRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemFrRamTmpBufADblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemSpi0RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemSpi1RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemSpi2RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemSpi3RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRamMemSpiRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_RamMem, RTE_CONST, RTE_CONST) Rte_Inst_CDD_RamMem; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_RamMem, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LclRamEccSngBitCntrOutp_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_RamMem_LclRamEccSngBitCntrOutp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RamMem_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_LclRamEccSngBitCntrOutp_Val Rte_Write_CDD_RamMem_LclRamEccSngBitCntrOutp_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_RamMem_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_LclRamFailrAdr() (Rte_Inst_CDD_RamMem->Pim_LclRamFailrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LclRamWordLineRead() (Rte_Inst_CDD_RamMem->Pim_LclRamWordLineRead) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemCanRamDblBitEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemCanRamDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemCanRamSngBitEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemCanRamSngBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemDtsRamEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemDtsRamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemFrRamDblBitEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemFrRamDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemFrRamSngBitEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemFrRamSngBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemFrRamTmpBufADblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemSpi0RamEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemSpi0RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemSpi1RamEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemSpi1RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemSpi2RamEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemSpi2RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemSpi3RamEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemSpi3RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRamMemSpiRamEccErrAdr() (Rte_Inst_CDD_RamMem->Pim_dRamMemSpiRamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LclRamEccSngBitCntr() (Rte_Inst_CDD_RamMem->Pim_LclRamEccSngBitCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LclRamEccSngBitSoftFailr() (Rte_Inst_CDD_RamMem->Pim_LclRamEccSngBitSoftFailr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_LclRamFailrAdr(void)
 *   uint32 *Rte_Pim_LclRamWordLineRead(void)
 *   uint32 *Rte_Pim_dRamMemCanRamDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemCanRamSngBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemDtsRamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamSngBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi0RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi1RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi2RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi3RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpiRamEccErrAdr(void)
 *   uint8 *Rte_Pim_LclRamEccSngBitCntr(void)
 *   boolean *Rte_Pim_LclRamEccSngBitSoftFailr(void)
 *
 *********************************************************************************************************************/


# define CDD_RamMem_START_SEC_CODE
# include "CDD_RamMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RamMemInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RamMemInit1 RamMemInit1
FUNC(void, CDD_RamMem_CODE) RamMemInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RamMemPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_LclRamEccSngBitCntrOutp_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RamMemPer1 RamMemPer1
FUNC(void, CDD_RamMem_CODE) RamMemPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_RamMem_STOP_SEC_CODE
# include "CDD_RamMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1471724403
#    error "The magic number of the generated file <C:/Component/CM103A_RamMem_Impl/tools/contract/Rte_CDD_RamMem.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1471724403
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_RAMMEM_H */
