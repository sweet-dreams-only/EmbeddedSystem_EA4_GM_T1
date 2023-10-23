/**********************************************************************************************************************
* Module File Name: BswM_UserTypes.h
* Module Description: BswM Included user types. This file is needed to define RTE linkage for DTC enable conditions.
*                     Inline function is used by enable condition expression to determine when the DTC is failed.
* Project           : GM T1xx
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/20/16  1        JWJ       Created the file 
* 12/15/16  2        HM        Cleaned up the file
**********************************************************************************************************************/

/* double include prevention */
#ifndef _BSWM_USERTYPES_H
# define _BSWM_USERTYPES_H

#include "Rte_CustDiagc_Type.h"
#include "Rte_GmMsg1F1BusHiSpd_Type.h"
#include "Dem.h"

/* RTE Signals used for DEM/DiagcMgr Enable Conditions */
extern VAR(uint8, AUTOMATIC) Rte_SysStMod_SysSt_Val;
extern VAR(GmSysPwrMod1, AUTOMATIC) Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val;
extern VAR(boolean, AUTOMATIC) Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl;
extern VAR(boolean, AUTOMATIC) Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl;
extern VAR(boolean, AUTOMATIC) Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl;
extern VAR(float32, AUTOMATIC) Rte_BattVltg_BrdgVltg_Val;
extern VAR(boolean, AUTOMATIC) Rte_SerlComOutpProxy_BusOffHiSpd_Logl;
extern VAR(boolean, AUTOMATIC) Rte_SerlComOutpProxy_BusOffChassisExp_Logl;
extern VAR(MfgEnaSt1, AUTOMATIC) Rte_PartNr_CustMfgEnSt_Val;
extern VAR(boolean, AUTOMATIC) Rte_CustDiagc_SerlComDi_Logl;


static INLINE FUNC(boolean, AUTOMATIC) BswMUser_GetDtcFailed(VAR(Dem_EventIdType, AUTOMATIC) EventId)
{
	VAR(boolean, AUTOMATIC) Faild_Cnt_T_logl = FALSE;

	if (Dem_GetEventFailed(EventId, &Faild_Cnt_T_logl) != E_OK)
	{
		Faild_Cnt_T_logl = TRUE;
	}

	return Faild_Cnt_T_logl;
}



#endif /* _BSWM_USERTYPES_H */
