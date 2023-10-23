/* -----------------------------------------------------------------------------
  Filename:    xcp_par.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nxtr Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Xcp
               
               Configuration   : C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\tools\GENy\EPS.gny
               
               ECU: 
                       TargetSystem: Hw_Rh850Cpu
                       Compiler:     GreenHills
                       Derivates:    P1M
               
               Channel "HS":
                       Databasefile: GlobalA_HS.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_HS
               Channel "CE":
                       Databasefile: GlobalA_CE.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_CE

 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2014 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__XCP_PAR_H__)
#define __XCP_PAR_H__

#include "v_inc.h"
/*  */
typedef unsigned char XcpCharType;
/*  */
/* Events */
V_MEMROM0 extern  V_MEMROM1 XcpCharType V_MEMROM2 V_MEMROM3* V_MEMROM1 V_MEMROM2 kXcpEventName[];
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 kXcpEventNameLength[];
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 kXcpEventCycle[];
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 kXcpEventUnit[];
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 kXcpEventDirection[];
#define XcpEventChannel_2ms_DAQ_2            0u
/*  */
/* Online calibration */
/*  */
/* Flash programming */
/*  */
/* DAQ */
/*  */
/* Checksum */
/*  */
/* Transport Layer */
#define XcpGetCanTransmitHandle()            CanTxXcp_Slave_Msg
#define XcpGetCanTransmitDataPtr()           (Xcp_Slave_Msg._c)
#define ApplXcpInterruptDisable()            CanInterruptDisable()
#define ApplXcpInterruptEnable()             CanInterruptRestore()
#define XcpTransmit()                        CanTransmit(XcpGetCanTransmitHandle())

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\xcp_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __XCP_PAR_H__ */
