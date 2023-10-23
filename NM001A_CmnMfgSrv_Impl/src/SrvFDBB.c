/***********************************************************************************************************************
* Copyright 2015 Nxtr
* Nxtr Confidential
*
* Module File Name: SrvFDBB.c
* Module Description: 0xFDBB - Handwheel Torque Sensor 3 Offset Trim Performed
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 08/11/15  1        JWJ       Initial file creation                                                        EA4#1332
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDBBRd
 * Description:  0xFDBB: Handwheel Torque Sensor 3 Trim Performed Read
 *          ID:  0xFDBB
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  1 byte
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDBBENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDBBRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(boolean, AUTOMATIC) TrimPrfmdSts_Cnt_T_logl;

	(void)Rte_Call_HwTq3MeasHwTq3TrimPrfmdSts_Oper(&TrimPrfmdSts_Cnt_T_logl);
	DataBuf_Uls_T_u08[0U] = (uint8)TrimPrfmdSts_Cnt_T_logl;

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDBB.c */
