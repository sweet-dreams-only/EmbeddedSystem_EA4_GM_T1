typedef uint16 NonTrustedFunctionIndexType;
typedef void* NonTrustedFunctionParameterRefType;

#define NtWrapS_CustDiagc_EnaDtcRecUpd 1U

extern FUNC(void, AUTOMATIC) CallNonTrustedFunction(uint16, void*);

extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_ClrHwAgTrimVal(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_UpdHwAgTrimVal(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_ClrAllDiagc(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_DemDcmDisableDTCSetting(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_DemDcmEnableDTCSetting(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_GmFctDiReq(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_EnaDtcRecUpd(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CustDiagc_DiDtcRecUpd(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType FunctionParams);
