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
 *          File:  Rte_GmMsg1E5BusHiSpd.h
 *     SW-C Type:  GmMsg1E5BusHiSpd
 *  Generated at:  Mon Jan  9 22:18:47 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application header file for SW-C <GmMsg1E5BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMMSG1E5BUSHISPD_H
# define _RTE_GMMSG1E5BUSHISPD_H

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

# include "Rte_GmMsg1E5BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_GmMsg1E5BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GmMsg1E5BusHiSpdRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_GmMsg1E5BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_GmMsg1E5BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_GmMsg1E5BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgTrimPrfmd_Logl (FALSE)
# define Rte_InitValue_HwAgVldToSerlCom_Logl (FALSE)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_SteerWhlAgAlvRollgCntBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtMaskBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgGrdtVldBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgMaskBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrCalStsBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrChksBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgSnsrTypBusHiSpd_Val (0U)
# define Rte_InitValue_SteerWhlAgVldBusHiSpd_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusHiSpd_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG1E5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusHiSpd_HwAgTrimPrfmd_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG1E5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusHiSpd_HwAgVldToSerlCom_Logl(P2VAR(boolean, AUTOMATIC, RTE_GMMSG1E5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GmMsg1E5BusHiSpd_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_GMMSG1E5BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgAlvRollgCntBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgBusHiSpd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgGrdtBusHiSpd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgGrdtMaskBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgGrdtVldBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgMaskBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgSnsrCalStsBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgSnsrChksBusHiSpd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgSnsrTypBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgVldBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_GmMsg1E5BusHiSpd_HwAg_Val
# define Rte_Read_HwAgTrimPrfmd_Logl Rte_Read_GmMsg1E5BusHiSpd_HwAgTrimPrfmd_Logl
# define Rte_Read_HwAgVldToSerlCom_Logl Rte_Read_GmMsg1E5BusHiSpd_HwAgVldToSerlCom_Logl
# define Rte_Read_HwVel_Val Rte_Read_GmMsg1E5BusHiSpd_HwVel_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_SteerWhlAgAlvRollgCntBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgAlvRollgCntBusHiSpd_Val
# define Rte_Write_SteerWhlAgBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgBusHiSpd_Val
# define Rte_Write_SteerWhlAgGrdtBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgGrdtBusHiSpd_Val
# define Rte_Write_SteerWhlAgGrdtMaskBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgGrdtMaskBusHiSpd_Val
# define Rte_Write_SteerWhlAgGrdtVldBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgGrdtVldBusHiSpd_Val
# define Rte_Write_SteerWhlAgMaskBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgMaskBusHiSpd_Val
# define Rte_Write_SteerWhlAgSnsrCalStsBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgSnsrCalStsBusHiSpd_Val
# define Rte_Write_SteerWhlAgSnsrChksBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgSnsrChksBusHiSpd_Val
# define Rte_Write_SteerWhlAgSnsrTypBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgSnsrTypBusHiSpd_Val
# define Rte_Write_SteerWhlAgVldBusHiSpd_Val Rte_Write_GmMsg1E5BusHiSpd_SteerWhlAgVldBusHiSpd_Val


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_GmMsg1E5BusHiSpdRollgCntr() (Rte_Inst_GmMsg1E5BusHiSpd->Pim_GmMsg1E5BusHiSpdRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_GmMsg1E5BusHiSpdRollgCntr(void)
 *
 *********************************************************************************************************************/


# define GmMsg1E5BusHiSpd_START_SEC_CODE
# include "GmMsg1E5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmMsg1E5BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrimPrfmd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgVldToSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SteerWhlAgAlvRollgCntBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtMaskBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgGrdtVldBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgMaskBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrCalStsBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrChksBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgSnsrTypBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgVldBusHiSpd_Val(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GmMsg1E5BusHiSpdPer1 GmMsg1E5BusHiSpdPer1
FUNC(void, GmMsg1E5BusHiSpd_CODE) GmMsg1E5BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Msg1E5HiSpdCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Msg1E5HiSpdCallBack>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Msg1E5HiSpdCallBack_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Msg1E5HiSpdCallBack_Oper Msg1E5HiSpdCallBack_Oper
FUNC(void, GmMsg1E5BusHiSpd_CODE) Msg1E5HiSpdCallBack_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define GmMsg1E5BusHiSpd_STOP_SEC_CODE
# include "GmMsg1E5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1484020636
#    error "The magic number of the generated file <C:/Hari/Work/SynergyProjects/EA4/MM503A_GmMsg1E5BusHiSpd_Impl/tools/contract/Rte_GmMsg1E5BusHiSpd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1484020636
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMMSG1E5BUSHISPD_H */
