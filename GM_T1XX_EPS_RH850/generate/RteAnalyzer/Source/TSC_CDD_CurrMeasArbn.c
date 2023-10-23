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
 *          File:  TSC_CDD_CurrMeasArbn.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_CurrMeasArbn.h"
#include "TSC_CDD_CurrMeasArbn.h"















     // Client Server Interfaces:


     // Service calls


     // Mode Interfaces




     // Inter-Runnable variables





uint8  TSC_CDD_CurrMeasArbn_Rte_Prm_CurrMeasArbnMaxStallCntr_Val(void)
{
  return (uint8 ) Rte_Prm_CurrMeasArbnMaxStallCntr_Val();
}


     /* CDD_CurrMeasArbn */
      /* CDD_CurrMeasArbn */

/** Per Instance Memories */
uint8 *TSC_CDD_CurrMeasArbn_Rte_Pim_CurrMeasArbnSens0RollgCntPrev(void)
{
  return Rte_Pim_CurrMeasArbnSens0RollgCntPrev();
}
uint8 *TSC_CDD_CurrMeasArbn_Rte_Pim_CurrMeasArbnSens0StallCntPrev(void)
{
  return Rte_Pim_CurrMeasArbnSens0StallCntPrev();
}
uint8 *TSC_CDD_CurrMeasArbn_Rte_Pim_CurrMeasArbnSens1RollgCntPrev(void)
{
  return Rte_Pim_CurrMeasArbnSens1RollgCntPrev();
}
uint8 *TSC_CDD_CurrMeasArbn_Rte_Pim_CurrMeasArbnSens1StallCntPrev(void)
{
  return Rte_Pim_CurrMeasArbnSens1StallCntPrev();
}


