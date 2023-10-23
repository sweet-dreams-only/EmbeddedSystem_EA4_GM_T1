/***********************************************************************************************************************
* Copyright 2015 Nxtr
* Nxtr Confidential
*
* Module File Name: SrvFDDA.c
* Module Description: 0xFDDA - Correlation Table 1 Segment 1 Read/Write
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         2 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 07/15/15  1        JWJ       Initial file creation                                                        EA4#881
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
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
 *        Name:  CmnMfgSrv_SrvFDDARd
 * Description:  0xFDDA: Correction Table 1 Part 1 Read
 *          ID:  0xFDDA
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  258 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDDAENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDDARd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) DataBuf_Uls_T_u16[257U];

	(void)Rte_Call_MotAg1MeasMotAg1CorrnTblSegRead_Oper((uint16*)DataBuf_Uls_T_u16, 1U);

	for (Index_Cnt_T_u16 = 0U; Index_Cnt_T_u16 < 257U; Index_Cnt_T_u16 += 1U)
	{
		CmnMfgSrvFct_Decompose16(DataBuf_Uls_T_u16[Index_Cnt_T_u16], &DataBuf_Uls_T_u08[2U * Index_Cnt_T_u16]);
	}

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDDAWr
 * Description:  0xFDDA: Correction Table 1 Part 1 Write
 *          ID:  0xFDDA
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  258 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDDAENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDDAWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum;
	VAR(uint8, AUTOMATIC) Rsp_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) DataBuf_Uls_T_u16[257U];

	for (Index_Cnt_T_u16 = 0U; Index_Cnt_T_u16 < 257U; Index_Cnt_T_u16 += 1U)
	{
		DataBuf_Uls_T_u16[Index_Cnt_T_u16] = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[2U * Index_Cnt_T_u16]);
	}

	(void)Rte_Call_MotAg1MeasMotAg1CorrnTblSegUpd_Oper((uint16*)DataBuf_Uls_T_u16, 1U, &Rsp_Cnt_T_u08);

	if (Rsp_Cnt_T_u08 == 1U)
	{
		/* CRC Failure */
		RspCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}
	else if (Rsp_Cnt_T_u08 == 2U)
	{
		/* Segment Failure */
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}
	else
	{
		/* Positive Response */
		RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	}

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDDA.c */
