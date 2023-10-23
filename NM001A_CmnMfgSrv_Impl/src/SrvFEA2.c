/***********************************************************************************************************************
* Copyright 2015 Nxtr
* Nxtr Confidential
*
* Module File Name: SrvFEA2.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/24/16  1        JWJ       Initial file creation                                                        EA4#2585
* 04/29/16  2        JWJ       Updated client calls to match version 4.0.0 of ES200A                        EA4#5582
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFEA2Rd
 * Description:  0xFEA2: Handwheel Angle Vehicle Center Trim Read
 *          ID:  0xFEA2
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FEA2ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFEA2Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) TrimVal_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) HwAgTrimPrfmd_Cnt_T_logl;

	(void)Rte_Call_GetHwAgTrimVal_Oper(&TrimVal_HwDeg_T_f32, &HwAgTrimPrfmd_Cnt_T_logl);

	CmnMfgSrvFct_DecomposeFloat(TrimVal_HwDeg_T_f32, &DataBuf_Uls_T_u08[0U]);
	DataBuf_Uls_T_u08[4U] = (uint8)HwAgTrimPrfmd_Cnt_T_logl;

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFEA2Wr
 * Description:  0xFEA2: Handwheel Angle Vehicle Center Trim Write
 *          ID:  0xFEA2
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  4 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FEA2ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFEA2Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) HwAgTrimPrfmd_Cnt_T_u08;
	VAR(float32, AUTOMATIC) TrimVal_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) HwAgTrimPrfmd_Cnt_T_logl;

	HwAgTrimPrfmd_Cnt_T_u08 = DataBuf_Uls_T_u08[4U];

	if (HwAgTrimPrfmd_Cnt_T_u08 > 1U)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}
	else
	{
		TrimVal_HwDeg_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
		HwAgTrimPrfmd_Cnt_T_logl = (boolean)HwAgTrimPrfmd_Cnt_T_u08;

		(void)Rte_Call_SetHwAgTrimVal_Oper(TrimVal_HwDeg_T_f32, HwAgTrimPrfmd_Cnt_T_logl);
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFEA2.c */
