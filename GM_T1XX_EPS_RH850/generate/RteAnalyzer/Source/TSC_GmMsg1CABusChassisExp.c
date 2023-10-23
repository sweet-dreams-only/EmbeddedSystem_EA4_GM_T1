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
 *          File:  TSC_GmMsg1CABusChassisExp.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_GmMsg1CABusChassisExp.h"
#include "TSC_GmMsg1CABusChassisExp.h"








Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Read_EscSt_Val(uint8 *data)
{
  return Rte_Read_EscSt_Val(data);
}

Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Read_EscTqDlvd_Val(float32 *data)
{
  return Rte_Read_EscTqDlvd_Val(data);
}

Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Read_HwTq_Val(float32 *data)
{
  return Rte_Read_HwTq_Val(data);
}




Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_ElecPwrSteerTotTqDlvd_Val(uint16 data)
{
  return Rte_Write_ElecPwrSteerTotTqDlvd_Val(data);
}

Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlDeltaTqDlvd_Val(uint16 data)
{
  return Rte_Write_TqOvrlDeltaTqDlvd_Val(data);
}

Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlDlvdChks_Val(uint16 data)
{
  return Rte_Write_TqOvrlDlvdChks_Val(data);
}

Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlDlvdRollgCntr_Val(uint8 data)
{
  return Rte_Write_TqOvrlDlvdRollgCntr_Val(data);
}

Std_ReturnType TSC_GmMsg1CABusChassisExp_Rte_Write_TqOvrlTqDlvdSts_Val(uint8 data)
{
  return Rte_Write_TqOvrlTqDlvdSts_Val(data);
}





     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables













     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





sint8  TSC_GmMsg1CABusChassisExp_Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val(void)
{
  return (sint8 ) Rte_Prm_GmMsg1CaBusChassisExpTqPolarity_Val();
}


     /* GmMsg1CABusChassisExp */
      /* GmMsg1CABusChassisExp */

/** Per Instance Memories */
uint8 *TSC_GmMsg1CABusChassisExp_Rte_Pim_GmMsg1CABusChassisExpRollgCntr(void)
{
  return Rte_Pim_GmMsg1CABusChassisExpRollgCntr();
}


