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
 *          File:  Rte_DiagcMgrStub.h
 *     SW-C Type:  DiagcMgrStub
 *  Generated at:  Tue Jun 28 11:40:40 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DiagcMgrStub> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DIAGCMGRSTUB_H
# define _RTE_DIAGCMGRSTUB_H

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

# include "Rte_DiagcMgrStub_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DiagcMgrStub
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DiagcMgrStub, RTE_CONST, RTE_CONST) Rte_Inst_DiagcMgrStub; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DiagcMgrStub, TYPEDEF, RTE_CONST) Rte_Instance;


# define DiagcMgrStub_START_SEC_CODE
# include "DiagcMgrStub_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrStubInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DiagcMgrStubInit1 DiagcMgrStubInit1
FUNC(void, DiagcMgrStub_CODE) DiagcMgrStubInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDiagcDataStub_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetDiagcDataStub>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetDiagcDataStub_Oper(DiagcDataRec1 *DiagcData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetDiagcDataStub_Oper GetDiagcDataStub_Oper
FUNC(void, DiagcMgrStub_CODE) GetDiagcDataStub_Oper(P2VAR(DiagcDataRec1, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcDebCntrStub_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcDebCntrStub>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcDebCntrStub_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcDebCntrStub_Oper GetNtcDebCntrStub_Oper
FUNC(void, DiagcMgrStub_CODE) GetNtcDebCntrStub_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcInfoStub_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcInfoStub>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcInfoStub_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetNtcInfoStub_Oper GetNtcInfoStub_Oper
FUNC(void, DiagcMgrStub_CODE) GetNtcInfoStub_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DiagcMgrStub_STOP_SEC_CODE
# include "DiagcMgrStub_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467134643
#    error "The magic number of the generated file <C:/Component/ES101A_DiagcMgr_Impl/tools/contract/generate/RteGen/DiagcMgrStub/Rte_DiagcMgrStub.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467134643
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_DIAGCMGRSTUB_H */
