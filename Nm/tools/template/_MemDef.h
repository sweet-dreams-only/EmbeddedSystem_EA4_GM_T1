/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  Copyright (c) 2007 - 2012 by Vctr Informatik GmbH.                                           All rights reserved.

                This software is copyright protected and proprietary to Vctr Informatik GmbH.
                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vctr Informatik GmbH.
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
         File:  _MemDef.h
      Project:  GMLAN Handler Calibration
       Module:  -
    Generator:  -
  Description:  Template for the definition of memory qualifiers and memory mapping
                of the calibration parameters of the GMLAN Handler.
**********************************************************************************************************************/

/**********************************************************************************************************************
  AUTHOR IDENTITY
-----------------------------------------------------------------------------------------------------------------------
  Initials     Name                      Company
-----------------------------------------------------------------------------------------------------------------------
  vistri       Frank Triem               Vctr Informatik GmbH
  vismas       Markus Schwarz            Vctr Informatik GmbH
  vismpf       Marco Pfalzgraf           Vctr Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
-----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Change Id     Description
-----------------------------------------------------------------------------------------------------------------------
  1.00.00   2007-03-28  vistri                creation
  1.01.00   2007-11-20  vismas                added GMLCAL_MEMROM3
                                              corrected locking mechanism for multiple includes
                                              adapted to current coding template
  1.01.01   2012-01-19  vismpf  ESCAN00056105 reworked misra justifications
**********************************************************************************************************************/

#if defined ( V_MEMDEF_HEADER )
#else
#define V_MEMDEF_HEADER

/**********************************************************************************************************************
  Includes
**********************************************************************************************************************/
#include "v_def.h"

/* Default definition of memory qualifiers */
#define GMLCAL_MEMROM0  V_MEMROM0
#define GMLCAL_MEMROM1  V_MEMROM1
#define GMLCAL_MEMROM2  V_MEMROM2
#define GMLCAL_MEMROM3  V_MEMROM3

#endif /* V_MEMDEF_HEADER */

/* Note: This part of the code may not be locked against multiple includes */

/* Check of section utilization */
#if defined ( GMLCAL_START_SEC_CONST ) && defined ( GMLCAL_STOP_SEC_CONST )  /* PRQA S 883 */ /* MD_NmGmlanGm_883 */
  #error "Utilization of start and stop of sections inconsistent!"
#endif

/* Definition of section for calibration parameters. */
#if defined ( GMLCAL_START_SEC_CONST )
  #undef GMLCAL_START_SEC_CONST  /* PRQA S 841 */ /* MD_NmGmlanGm_841 */
  /* Enter your #pragma definitions here:
     e.g. #pragma section .CALIBRATION
  */
#endif

/* Definition of section for default parameters. */
#if defined ( GMLCAL_STOP_SEC_CONST )
  #undef GMLCAL_STOP_SEC_CONST  /* PRQA S 841 */ /* MD_NmGmlanGm_841 */
  /* Enter your #pragma definitions here:
     e.g.  #pragma section .DEFAULT
  */
#endif

/**********************************************************************************************************************
  EOF
**********************************************************************************************************************/
