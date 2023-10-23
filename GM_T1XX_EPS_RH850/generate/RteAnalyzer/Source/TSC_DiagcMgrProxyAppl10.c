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
 *          File:  TSC_DiagcMgrProxyAppl10.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_DiagcMgrProxyAppl10.h"
#include "TSC_DiagcMgrProxyAppl10.h"















     // Client Server Interfaces:
Std_ReturnType TSC_DiagcMgrProxyAppl10_Rte_Call_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg)
{
  return Rte_Call_DiagcMgrIninCore_Oper(ApplIdx_Arg, NtcInfoArySize_Arg, NtcInfoAry_Arg, DiagcData_Arg, ProxySetNtcData_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables






Std_ReturnType TSC_DiagcMgrProxyAppl10_Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data)
{
  return Rte_Read_ClrDiagcFlgProxy_Val(data);
}








     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_DiagcMgrProxyAppl10_Rte_Call_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
{
  return Rte_Call_GetNtcActvCore_Oper(NtcNr_Arg, NtcActv_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_DiagcMgrProxyAppl10_Rte_Call_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
{
  return Rte_Call_GetNtcQlfrStsCore_Oper(NtcNr_Arg, NtcQlfr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_DiagcMgrProxyAppl10_Rte_Call_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
{
  return Rte_Call_GetNtcStsCore_Oper(NtcNr_Arg, NtcInfoSts_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:
Std_ReturnType TSC_DiagcMgrProxyAppl10_Rte_Call_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec1 *DiagcData_Arg, DiagcDataRec1 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg)
{
  return Rte_Call_SetNtcStsCore_Oper(NtcNr_Arg, NtcStInfo_Arg, NtcSts_Arg, DebStep_Arg, DiagcData_Arg, ProxySetNtcData_Arg, NtcInfo_Arg, NtcInfoDebCntr_Arg);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





Ary1D_u32_512 * TSC_DiagcMgrProxyAppl10_Rte_Prm_DiagcMgrFltResp_Ary1D(void)
{
  return (Ary1D_u32_512 *) Rte_Prm_DiagcMgrFltResp_Ary1D();
}


     /* DiagcMgrProxyAppl10 */
      /* DiagcMgrProxyAppl10 */
void TSC_DiagcMgrProxyAppl10_Rte_Enter_DiagcMgrProxyAppl10(void)
{
  Rte_Enter_DiagcMgrProxyAppl10();
}
void TSC_DiagcMgrProxyAppl10_Rte_Exit_DiagcMgrProxyAppl10(void)
{
  Rte_Exit_DiagcMgrProxyAppl10();
}

/** Per Instance Memories */
uint8 *TSC_DiagcMgrProxyAppl10_Rte_Pim_PrevClrNtcFlg10(void)
{
  return Rte_Pim_PrevClrNtcFlg10();
}
NtcInfoRec4 *TSC_DiagcMgrProxyAppl10_Rte_Pim_DiagcMgrNtcInfo10Ary(void)
{
  return Rte_Pim_DiagcMgrNtcInfo10Ary();
}
sint16 *TSC_DiagcMgrProxyAppl10_Rte_Pim_DiagcMgrNtcInfo10DebCntrAry(void)
{
  return Rte_Pim_DiagcMgrNtcInfo10DebCntrAry();
}
DiagcDataRec1 *TSC_DiagcMgrProxyAppl10_Rte_Pim_DiagcData10(void)
{
  return Rte_Pim_DiagcData10();
}
DiagcDataRec1 *TSC_DiagcMgrProxyAppl10_Rte_Pim_ProxySetNtcData10(void)
{
  return Rte_Pim_ProxySetNtcData10();
}


