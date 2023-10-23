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
 *          File:  TSC_GmMsg17DBusHiSpd.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg17DBusHiSpd.h"
#include "TSC_GmMsg17DBusHiSpd.h"








Std_ReturnType TSC_GmMsg17DBusHiSpd_Rte_Read_LstRxnTiMsg17D_Val(uint32 *data)
{
  return Rte_Read_LstRxnTiMsg17D_Val(data);
}

Std_ReturnType TSC_GmMsg17DBusHiSpd_Rte_Read_VehStabyEnhmtStsRaw_Val(uint8 *data)
{
  return Rte_Read_VehStabyEnhmtStsRaw_Val(data);
}




Std_ReturnType TSC_GmMsg17DBusHiSpd_Rte_Write_InvldMsg17D_Logl(boolean data)
{
  return Rte_Write_InvldMsg17D_Logl(data);
}

Std_ReturnType TSC_GmMsg17DBusHiSpd_Rte_Write_MissMsg17D_Logl(boolean data)
{
  return Rte_Write_MissMsg17D_Logl(data);
}





     // Client Server Interfaces:
Std_ReturnType TSC_GmMsg17DBusHiSpd_Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
{
  return Rte_Call_GetRefTmr100MicroSec32bit_Oper(RefTmr);
}
Std_ReturnType TSC_GmMsg17DBusHiSpd_Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
{
  return Rte_Call_GetTiSpan100MicroSec32bit_Oper(RefTmr, TiSpan);
}
Std_ReturnType TSC_GmMsg17DBusHiSpd_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
{
  return Rte_Call_SetNtcSts_Oper(NtcNr, NtcStInfo, NtcSts, DebStep);
}


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint16  TSC_GmMsg17DBusHiSpd_Rte_Prm_GmMsg17DBusHiSpdInvldTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg17DBusHiSpdInvldTiOut_Val();
}
uint16  TSC_GmMsg17DBusHiSpd_Rte_Prm_GmMsg17DBusHiSpdMissTiOut_Val(void)
{
  return (uint16 ) Rte_Prm_GmMsg17DBusHiSpdMissTiOut_Val();
}


     /* GmMsg17DBusHiSpd */
      /* GmMsg17DBusHiSpd */

/** Per Instance Memories */
uint32 *TSC_GmMsg17DBusHiSpd_Rte_Pim_GmMsg17DBusHiSpdInvldMsgTmr(void)
{
  return Rte_Pim_GmMsg17DBusHiSpdInvldMsgTmr();
}


