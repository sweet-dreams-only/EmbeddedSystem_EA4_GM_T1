/*****************************************************************************
* Copyright 2015, 2016 Nxtr 
* Nxtr Confidential
*
* Module File Name: ElecGlbPrm.h
* Module Description: Electrical global parameter definitions
* Project           : CBD
* Author            : Spandana Balani
*****************************************************************************
* Version Control:
* %version:           6 %
* %derived_by:        jzk9cc %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 04/21/15  1        SB       Initial version                                                                 	EA4#490
* 06/04/15  2        SB       Implement version 2                                                             	EA4#733
* 13/08/15  3        Rijvi    Implement version 3                                                             	EA4#1242
* 13/01/16  4        SB		  Implement version 4                                                             	EA4#3324
* 06/10/16  5        KK		  Implement version 5                                                             	EA4#6208
* 07/14/16  6        Rijvi	  Implement version 6                                                             	EA4#6490
******************************************************************************/	

#ifndef ELECGLBPRM_H
#define ELECGLBPRM_H

/* 	Start of Config Param */ 
/*	Constant values of ConfigParam are from CM010A_GmT1xxMcuCfg_DataDict.m 
	In future this will be part of generated code */

/* Inverter Count */
#define ELECGLBPRM_IVTRCNT_CNT_U08		(2U)

/* Maximum PWM Frequency */
#define ELECGLBPRM_PWMFRQMAX_HZ_U32 		(18000U)

/* Minimum PWM Frequency */
#define ELECGLBPRM_PWMFRQMIN_HZ_U32 		(14000U)

/* Maximum PWM Period */
#define ELECGLBPRM_PWMPERDMAX_NANOSEC_U32	(71429U)

/* Minimum PWM Period */
#define ELECGLBPRM_PWMPERDMIN_NANOSEC_U32	(55555U)

/* Motor Control ISR Period Times 2 */
/* This constant is 2 times ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 in seconds */
#define ELECGLBPRM_PWMPERDNOMX2_SEC_F32		(0.00125F) 

/* Nominal PWM Period */
/* (62.5F * NXTRFIXDPT_FLOATTOP9_ULS_F32) */
#define ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9	(32000U) 

/* Start of Constants */

/* PWM Timer Unit Frequency */
#define ELECGLBPRM_PWMTMRFRQ_HZ_U32		(80000000U)

/* Inverse Motor Control Period */
/* (0.08F * NXTRFIXDPT_FLOATTOP19_ULS_F32) */
#define ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19	(41943U) 

/* StartUp State - Current Measurement WarmInit Initialization Complete */
#define ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08	(110U)

/* StartUp State - Current Measurement WarmInit Initialization Start */
#define ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08	(100U)

/* StartUp State - Disable */
#define ELECGLBPRM_STRTUPSTDI_CNT_U08		(160U)

/* StartUp State - Flash Memory Initialization Start */
#define ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08	(110U)

/* StartUp State - Initial */
#define ELECGLBPRM_STRTUPSTINIT_CNT_U08		(20U)

/* StartUp State - Motor Driver Initialization Complete */
#define ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08	(100U)

/* StartUp State - Motor Driver Initialization Start */
#define ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08	(80U)

/* StartUp State - Power Disconnect A Complete */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08 	(40U)

/* StartUp State - Power Disconnect A Start */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08 (20U)

/* StartUp State - Power Disconnect B Complete */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08 (80U)

/* StartUp State - Power Disconnect B Start */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08 (60U)

/* StartUp State - Run */
#define ELECGLBPRM_STRTUPSTRUN_CNT_U08 (140U)

/* StartUp State - Temporal Monitor Initialization Complete */
#define ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08 (60U)

/* StartUp State - Temporal Monitor Initialization Start */
#define ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 (40U)

/* StartUp State - Warm Initialization Complete */
#define ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08 (120U)

/* Degrees per Revolution */
#define ELECGLBPRM_DEGPERREV_DEGPERREV_F32 (360.0F)

/* HandWheel Angle Center Offset */
#define ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32 (900.0F)

/* Handwheel Angle Saturation Lower Limit */
#define ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32 (-900.0F)

/* Handwheel Angle Saturation Upper Limit */
#define ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32 (900.0F)

/* Handwheel Angle Scale */
#define ELECGLBPRM_HWAGSCA_ULS_F32 (0.08789F)

/* Handwheel Angle Spur Gear Ratio */
#define ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32 (1.1F)

/* Handwheel Angle0 Spur to Ring Gear Ratio Sensor 0 */
#define ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32 (0.4545F)

/* Handwheel Angle0 Spur to Ring Gear Ratio Sensor 1 */
#define ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32 (0.5F)

/* Handwheel Torque Offset */
#define ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32 (10.0F)

/* Handwheel Torque Saturation Lower Limit */
#define ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 (-10.0F)

/* Handwheel Torque Saturation Upper Limit */
#define ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 (10.0F)

/* Handwheel Torque Scale */
#define ELECGLBPRM_HWTQSCA_ULS_F32 (0.004884005F)

/* No Fault */
#define ELECGLBPRM_NOFLT_CNT_U08 (0U)

/* Offset Trim Not Performed */
#define ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08 (1U)

/* Protocol Fault */
#define ELECGLBPRM_PRTCLFLT_CNT_U08 (1U)

/* Revolutions per 360 Degrees */
#define ELECGLBPRM_REVPER360DEG_REVPERDEG_F32 (0.002777777778F)

/* Skip Step Fault */
#define ELECGLBPRM_SKIPSTEPFLT_CNT_U08 (1U)

/* Sensor Internal Fault */
#define ELECGLBPRM_SNSRINTFLT_CNT_U08 (2U)

/* Vernier Error Fault */
#define ELECGLBPRM_VRNRERRFLT_CNT_U08 (2U)

/* Handwheel Torque Measure Buffer Size */
#define ELECGLBPRM_HWTQBUFSIZE_CNT_U08  			(8U)

/* ADC Fault */
#define ELECGLBPRM_ADCFLT_CNT_U08        			(4U)

/* Offset Trim Not Performed */
#define ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08			(1U)

/* Sensor Scale Not Performed */
#define ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08			(1U)

/* Gate Drive Configuration  State Parameter Bit Starting Index */
#define ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08  	  127U

/* Gate Drive Configuration  State */
#define ELECGLBPRM_GATEDRVCFGST_CNT_U08  					2U

/* Gate Drive Offstate Check Register Write 1 Column 1 */
#define ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08  		0U

/* Gate Drive Offstate Check Register Write 2 Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08  		1U

/* Gate Drive Offstate Check Digital Pin Verify Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08  	2U

/* Gate Drive Offstate Check Status Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08  		3U

/* Gate Drive Offstate Check Diagnostic 1 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08  		4U

/* Gate Drive Offstate Check Diagnostic 2 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08  		5U

/* Gate Drive Offstate Check Verify Result 0 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08  		6U

/* Gate Drive Offstate Check Verify Result 1 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08  		7U

/* OffState Verification Size */
#define ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08 				19U

/* Gate Drive OffState Verify State */
#define ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08  				1U

/* Gate Drive Operate Fault Monitor State */
#define ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08  			3U


/* Gate Drive Offstate Check Data Array */
extern CONST(uint16, ElecGlbPrm_CONST)  ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[20][8];


#endif
