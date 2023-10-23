/**********************************************************************************************************************
* Copyright 2015 Nxtr 
* Nxtr Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.h
* Module Description: MotCtrlMgr Complex Driver Header Stub
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/12/15  1        Selva       Initial Version                                                                 EA4#299
* 04/29/16  2        NS          MotCurrLoaMtgtnEna renamed to CurrMeasLoaMtgtnEna per FDD v1.5.0               EA4#5368
* 09/12/16  3        NS          Fixed MOTCTRLMGR_MotCtrlIvtrLoaMtgtnEna name to match DataDict					EA4#7349
* 11/09/16  4        ML			 Added new inputs per FDD v2.1.0												EA4#7548
**********************************************************************************************************************/

/********************** Stubs added at component level******************/
#include "Std_Types.h"

#ifndef Rte_TypeDef_SysSt1
   typedef uint8 SysSt1;
#endif

# ifndef SYSST_DI
#  define SYSST_DI (0U)
# endif

# ifndef SYSST_OFF
#  define SYSST_OFF (1U)
# endif

# ifndef SYSST_ENA
#  define SYSST_ENA (2U)
# endif

# ifndef SYSST_WRMININ
#  define SYSST_WRMININ (3U)
# endif

/************************************* Declarations*****************************/ 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlBrdgVltg;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlIvtrLoaMtgtnEna;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotAgElecDly;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrDax;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrDaxCmd;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrDaxMax;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlCurrMeasLoaMtgtnEna;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrQax;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrQaxCmd;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrQaxCoggCmd ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrQaxRplCmd ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotDampgDax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotDampgQax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotIntglGainDax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotIntglGainQax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotPropGainDax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotPropGainQax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotReacncDax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotReacncQax ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotVltgDaxFf ;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotVltgQaxFf ;
extern VAR(SysSt1, AUTOMATIC)     MOTCTRLMGR_MotCtrlSysSt;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlDualEcuMotCtrlMtgtnEna;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotBackEmfVltg;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotREstimd;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotInduDaxEstimdIvs;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotInduQaxEstimdIvs;



/*************OUTPUT**********************/
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrQaxCmdFinal;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotModlnIdx;
extern VAR(uint16, AUTOMATIC) MOTCTRLMGR_MotCtrlMotPhaAdv;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotVltgDax;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotVltgQax;


/********************** Stubs added at component level******************/
    
 
 
 
 
 
