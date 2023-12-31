/* file: C:/Hari/Work/SynergyProjects/T1xx_Synergy/BuildPrep/07.01.05_Work/Z_Work_1_8917_ShortTerm/GM_T1XX_EPS_RH850/generate/nontrustfct.h */
/* automatically generated by genRH850.exe, Version: 1.06 */
/* Configuration file: C:/Users/nz2654/AppData/Local/Temp/DaVinci/Cfg-1345187/Generation/Cfg_Gen-1484071352018-0/OsProxyFiles-1484072167553-0/Os_ActiveEcuC.arxml */
/* Generation time: Tue Jan 10 13:16:12 2017 */
/* Unlimited license CBD1400351 for Nxtr Automotive, Project License, EPS */
/* Implementation: RH850_P1M */
/* Version of general code: 9.01.06 */
/* MISRA RULE 19.15 not violated: The QAC-Tool states a violation of rule 19.15 with message 0883,
 * but there is a double include prevention and therefore the message is considered to be wrong. */
#if ! defined __NONTRUSTFCT_H__   /* PRQA S 0883 EOF */ 
#define __NONTRUSTFCT_H__
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

#define NtWrapS_BswM_RequestMode   0
#define NtWrapS_CanStop   1
#define NtWrapS_CmnMfgSrv_CallSvc10   2
#define NtWrapS_CmnMfgSrv_Init   3
#define NtWrapS_CustDiagc_ClrAllDiagc   4
#define NtWrapS_CustDiagc_ClrHwAgTrimVal   5
#define NtWrapS_CustDiagc_DemDcmDisableDTCSetting   6
#define NtWrapS_CustDiagc_DemDcmEnableDTCSetting   7
#define NtWrapS_CustDiagc_DiDtcRecUpd   8
#define NtWrapS_CustDiagc_EnaDtcRecUpd   9
#define NtWrapS_CustDiagc_GmFctDiReq   10
#define NtWrapS_CustDiagc_UpdHwAgTrimVal   11
#define NtWrapS_GMLANInit   12
#define NtWrapS_GmMsg778BusHiSpd_DtcStsChgd   13
#define NtWrapS_NvM_EraseNvBlock   14
#define NtWrapS_NvM_GetDataIndex   15
#define NtWrapS_NvM_GetErrorStatus   16
#define NtWrapS_NvM_InvalidateNvBlock   17
#define NtWrapS_NvM_ReadBlock   18
#define NtWrapS_NvM_SetBlockProtection   19
#define NtWrapS_NvM_SetDataIndex   20
#define NtWrapS_NvM_SetRamBlockStatus   21
#define NtWrapS_NvM_WriteBlock   22
#define NtWrapS_Rte_Call_CopyCalPageReq_Oper   23
#define NtWrapS_Rte_Call_SetCalPageReq_Oper   24
#define NtWrapS_StHlthSigStc_ClrDataSample   25
#define NtWrapS_StHlthSigStc_UpdDataSample   26
#define NtWrapS_StHlthSigStc_UpdNvmPim   27
#define NtWrapS_SyncCrc_GetAvlCrcHwUnit   28
#define NtWrapS_SyncCrc_RelsCrcHwUnit   29

void NONTRUSTED_NtWrapS_BswM_RequestMode(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CanStop(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CmnMfgSrv_Init(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_ClrAllDiagc(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_ClrHwAgTrimVal(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_DemDcmDisableDTCSetting(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_DemDcmEnableDTCSetting(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_DiDtcRecUpd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_EnaDtcRecUpd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_GmFctDiReq(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_CustDiagc_UpdHwAgTrimVal(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_GMLANInit(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_GmMsg778BusHiSpd_DtcStsChgd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_EraseNvBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_GetDataIndex(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_GetErrorStatus(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_InvalidateNvBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_ReadBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_SetBlockProtection(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_SetDataIndex(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_SetRamBlockStatus(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_WriteBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_Rte_Call_CopyCalPageReq_Oper(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_Rte_Call_SetCalPageReq_Oper(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_StHlthSigStc_ClrDataSample(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_StHlthSigStc_UpdDataSample(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_StHlthSigStc_UpdNvmPim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);

#endif /* ! defined __NONTRUSTFCT_H__ */
