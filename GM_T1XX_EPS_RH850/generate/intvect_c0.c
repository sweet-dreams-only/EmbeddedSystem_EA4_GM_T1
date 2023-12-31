/* file: C:/Hari/Work/SynergyProjects/T1xx_Synergy/BuildPrep/07.01.05_Work/Z_Work_1_8917_ShortTerm/GM_T1XX_EPS_RH850/generate/intvect_c0.c */
/* automatically generated by genRH850.exe, Version: 1.06 */
/* Configuration file: C:/Users/nz2654/AppData/Local/Temp/DaVinci/Cfg-1345187/Generation/Cfg_Gen-1484071352018-0/OsProxyFiles-1484072167553-0/Os_ActiveEcuC.arxml */
/* Generation time: Tue Jan 10 13:16:12 2017 */
/* Unlimited license CBD1400351 for Nxtr Automotive, Project License, EPS */
/* Implementation: RH850_P1M */
/* Version of general code: 9.01.06 */
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif

#define osdVrmGenMajRelNum 1
#define osdVrmGenMinRelNum 6
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif

#if defined USE_QUOTE_INCLUDES
 #include "Os.h"
#else
 #include <Os.h>
#endif

#if defined USE_QUOTE_INCLUDES
 #include "osekext.h"
#else
 #include <osekext.h>
#endif

#ifndef osdNOASM

#pragma asm

   .section ".osExceptionVectorTable_c0", "ax"
   .align 512

   .globl _osExceptionVectorTable_c0   /* start of the core exception vector table */
_osExceptionVectorTable_c0:

   .offset 0x0000
   .globl _osCoreException_c0_0x0000
_osCoreException_c0_0x0000:
   jr _osUnhandledCoreException

   .offset 0x0010
   .globl _osCoreException_c0_0x0010
_osCoreException_c0_0x0010:
   jr _Patched_SysErrIrq

   .offset 0x0020
   .globl _osCoreException_c0_0x0020
_osCoreException_c0_0x0020:
   jr _osUnhandledCoreException

   .offset 0x0030
   .globl _osCoreException_c0_0x0030
_osCoreException_c0_0x0030:
   jr _osUnhandledCoreException

   .offset 0x0040
   .globl _osCoreException_c0_0x0040
_osCoreException_c0_0x0040:
   jr _osUnhandledCoreException

   .offset 0x0050
   .globl _osCoreException_c0_0x0050
_osCoreException_c0_0x0050:
   jr _osUnhandledCoreException

   .offset 0x0060
   .globl _osCoreException_c0_0x0060
_osCoreException_c0_0x0060:
   jr _ResdOperIrq

   .offset 0x0070
   .globl _osCoreException_c0_0x0070
_osCoreException_c0_0x0070:
   jr _Patched_FpuErrIrq

   .offset 0x0080
   .globl _osCoreException_c0_0x0080
_osCoreException_c0_0x0080:
   jr _osUnhandledCoreException

   .offset 0x0090
   .globl _osCoreException_c0_0x0090
_osCoreException_c0_0x0090:
   jr _osMemoryProtectionViolation

   .offset 0x00a0
   .globl _osCoreException_c0_0x00a0
_osCoreException_c0_0x00a0:
   jr _osPrivilegedInstructionException

   .offset 0x00b0
   .globl _osCoreException_c0_0x00b0
_osCoreException_c0_0x00b0:
   jr _osUnhandledCoreException

   .offset 0x00c0
   .globl _osCoreException_c0_0x00c0
_osCoreException_c0_0x00c0:
   jr _AlgnErrIrq

   .offset 0x00d0
   .globl _osCoreException_c0_0x00d0
_osCoreException_c0_0x00d0:
   jr _osUnhandledCoreException

   .offset 0x00e0
   .globl _osCoreException_c0_0x00e0
_osCoreException_c0_0x00e0:
   jr _Patched_MCU_FEINT_ISR

   .offset 0x00f0
   .globl _osCoreException_c0_0x00f0
_osCoreException_c0_0x00f0:
   jr _osUnhandledCoreException

   .offset 0x0100
   .globl _osCoreException_c0_0x0100
_osCoreException_c0_0x0100:
   jr _osUnhandledDirectBranchException

   .offset 0x0110
   .globl _osCoreException_c0_0x0110
_osCoreException_c0_0x0110:
   jr _osUnhandledDirectBranchException

   .offset 0x0120
   .globl _osCoreException_c0_0x0120
_osCoreException_c0_0x0120:
   jr _osUnhandledDirectBranchException

   .offset 0x0130
   .globl _osCoreException_c0_0x0130
_osCoreException_c0_0x0130:
   jr _osUnhandledDirectBranchException

   .offset 0x0140
   .globl _osCoreException_c0_0x0140
_osCoreException_c0_0x0140:
   jr _osUnhandledDirectBranchException

   .offset 0x0150
   .globl _osCoreException_c0_0x0150
_osCoreException_c0_0x0150:
   jr _osUnhandledDirectBranchException

   .offset 0x0160
   .globl _osCoreException_c0_0x0160
_osCoreException_c0_0x0160:
   jr _osUnhandledDirectBranchException

   .offset 0x0170
   .globl _osCoreException_c0_0x0170
_osCoreException_c0_0x0170:
   jr _osUnhandledDirectBranchException

   .offset 0x0180
   .globl _osCoreException_c0_0x0180
_osCoreException_c0_0x0180:
   jr _osUnhandledDirectBranchException

   .offset 0x0190
   .globl _osCoreException_c0_0x0190
_osCoreException_c0_0x0190:
   jr _osUnhandledDirectBranchException

   .offset 0x01a0
   .globl _osCoreException_c0_0x01a0
_osCoreException_c0_0x01a0:
   jr _osUnhandledDirectBranchException

   .offset 0x01b0
   .globl _osCoreException_c0_0x01b0
_osCoreException_c0_0x01b0:
   jr _osUnhandledDirectBranchException

   .offset 0x01c0
   .globl _osCoreException_c0_0x01c0
_osCoreException_c0_0x01c0:
   jr _osUnhandledDirectBranchException

   .offset 0x01d0
   .globl _osCoreException_c0_0x01d0
_osCoreException_c0_0x01d0:
   jr _osUnhandledDirectBranchException

   .offset 0x01e0
   .globl _osCoreException_c0_0x01e0
_osCoreException_c0_0x01e0:
   jr _osUnhandledDirectBranchException

   .offset 0x01f0
   .globl _osCoreException_c0_0x01f0
_osCoreException_c0_0x01f0:
   jr _osUnhandledDirectBranchException

   .globl _osExceptionVectorTableEnd_c0
_osExceptionVectorTableEnd_c0:   /* end of the core exception vector table */

#pragma endasm


#pragma asm

   .section ".osEIINTVectorTable_c0", "ax"
   .align 512

   .globl _osEIINTVectorTable_c0   /* start of the EIINT exception vector table */
_osEIINTVectorTable_c0:
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _MCU_ECM_EIC_CAT2_ISR_CAT2   /* interrupt index = 8 */
   .word _WDG_59_DRIVERA_TRIGGERFUNCTION_ISR   /* interrupt index =  9 */
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _MotCtrlMgrIrq   /* interrupt index =  16 */
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osOstmInterrupt_c0_CAT2   /* interrupt index = 74 */
   .word _SnsrMeasStrtIrq_CAT2   /* interrupt index = 75 */
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _SPI_CSIH0_TIRE_CAT2_ISR_CAT2   /* interrupt index = 82 */
   .word _SPI_CSIH0_TIR_CAT2_ISR_CAT2   /* interrupt index = 83 */
   .word _SPI_CSIH0_TIC_CAT2_ISR_CAT2   /* interrupt index = 84 */
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _SPI_CSIH2_TIRE_CAT2_ISR_CAT2   /* interrupt index = 98 */
   .word _SPI_CSIH2_TIR_CAT2_ISR_CAT2   /* interrupt index = 99 */
   .word _SPI_CSIH2_TIC_CAT2_ISR_CAT2   /* interrupt index = 100 */
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _SPI_CSIG0_TIRE_CAT2_ISR_CAT2   /* interrupt index = 174 */
   .word _SPI_CSIG0_TIC_CAT2_ISR_CAT2   /* interrupt index = 175 */
   .word _SPI_CSIG0_TIR_CAT2_ISR_CAT2   /* interrupt index = 176 */
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _CanIsrStatus_0_CAT2   /* interrupt index = 183 */
   .word _osUnhandledEIINTException
   .word _CanIsrTx_0_CAT2   /* interrupt index = 185 */
   .word _CanIsrStatus_1_CAT2   /* interrupt index = 186 */
   .word _osUnhandledEIINTException
   .word _CanIsrTx_1_CAT2   /* interrupt index = 188 */
   .word _CanIsrGlobalStatus_CAT2   /* interrupt index = 189 */
   .word _CanIsrRxFifo_CAT2   /* interrupt index = 190 */
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .word _osUnhandledEIINTException
   .globl _osEIINTVectorTableEnd_c0
_osEIINTVectorTableEnd_c0:   /* end of the EIINT exception vector table */

#pragma endasm

#pragma asm

   .section ".os_text", "ax"

   /* MISRA RULE 14.1 not violated: MCU_ECM_EIC_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(MCU_ECM_EIC_CAT2_ISR, 3) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: osOstmInterrupt_c0 is branched via EIINT vector table. */
   osCAT2ISRC0(osOstmInterrupt_c0, 3) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SnsrMeasStrtIrq is branched via EIINT vector table. */
   osCAT2ISRC0(SnsrMeasStrtIrq, 13) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIH0_TIRE_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIH0_TIRE_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIH0_TIR_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIH0_TIR_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIH0_TIC_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIH0_TIC_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIH2_TIRE_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIH2_TIRE_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIH2_TIR_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIH2_TIR_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIH2_TIC_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIH2_TIC_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIG0_TIRE_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIG0_TIRE_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIG0_TIC_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIG0_TIC_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: SPI_CSIG0_TIR_CAT2_ISR is branched via EIINT vector table. */
   osCAT2ISRC0(SPI_CSIG0_TIR_CAT2_ISR, 14) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: CanIsrStatus_0 is branched via EIINT vector table. */
   osCAT2ISRC0(CanIsrStatus_0, 15) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: CanIsrTx_0 is branched via EIINT vector table. */
   osCAT2ISRC0(CanIsrTx_0, 15) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: CanIsrStatus_1 is branched via EIINT vector table. */
   osCAT2ISRC0(CanIsrStatus_1, 15) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: CanIsrTx_1 is branched via EIINT vector table. */
   osCAT2ISRC0(CanIsrTx_1, 15) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: CanIsrGlobalStatus is branched via EIINT vector table. */
   osCAT2ISRC0(CanIsrGlobalStatus, 15) /* PRQA S 1503 */

   /* MISRA RULE 14.1 not violated: CanIsrRxFifo is branched via EIINT vector table. */
   osCAT2ISRC0(CanIsrRxFifo, 15) /* PRQA S 1503 */

#pragma endasm

#endif /* ifndef osdNOASM */

