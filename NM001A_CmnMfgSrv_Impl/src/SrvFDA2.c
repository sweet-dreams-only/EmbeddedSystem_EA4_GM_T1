/***********************************************************************************************************************
* Copyright 2015 Nxtr
* Nxtr Confidential
*
* Module File Name: SrvFDA2.c
* Module Description: 0xFDA2 - Handwheel Torque Sensor 2 Offset Auto Trim
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         2 %
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
 *        Name:  CmnMfgSrv_SrvFDA2RoutineStrt
 * Description:  0xFDA2: Handwheel Torque Sensor 2 Auto Trim Start
 *          ID:  0xFDA2
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x01 (Start)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDA2ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDA2RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	(void)Rte_Call_HwTq2MeasHwTq2AutTrim_Oper();

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDA2.c */
