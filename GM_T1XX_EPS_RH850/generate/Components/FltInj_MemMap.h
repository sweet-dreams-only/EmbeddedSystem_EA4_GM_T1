/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FltInj_MemMap.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nxtr Automotive Corporation
 *
 *   Description:  Memory Mapping header file for SW-C <FltInj>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * FltInj specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_START_SEC_CODE
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_START_SEC_CODE
# undef FltInj_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#pragma ghs section bss=".osGlobalShared_bss"
#pragma ghs section sbss=".osGlobalShared_sbss"
#pragma ghs section data=".osGlobalShared_data"
#pragma ghs section sdata=".osGlobalShared_sdata"
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_START_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_START_SEC_CONST_UNSPECIFIED
# undef FltInj_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_START_SEC_VAR_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FltInj_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl6_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_START_SEC_VAR_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_START_SEC_VAR_INIT_UNSPECIFIED
# undef FltInj_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl6_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef FltInj_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl6_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_STOP_SEC_CODE
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_STOP_SEC_CODE
# undef FltInj_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#pragma ghs section bss=default
#pragma ghs section sbss=default
#pragma ghs section data=default
#pragma ghs section sdata=default
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_STOP_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_STOP_SEC_CONST_UNSPECIFIED
# undef FltInj_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_STOP_SEC_VAR_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FltInj_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl6_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_STOP_SEC_VAR_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FltInj_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl6_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef FltInj_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef FltInj_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl6_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!        << Start of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_OS_MEMMAP_INCLUDE
 *********************************************************************************************************************/

#include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0883:  MISRA rule: 19.15
     Reason:     AUTOSAR SWS Memory Mapping requires inclusion of MemMap.h multiple times in a file in order to
                 select appropriate #pragma directives.
     Risk:       MemMap.h is provided by the integrator, hence many risks may occur, caused by wrong implementation of this file.
     Prevention: The integrator strictly has to adhere to the definitions of the AUTOSAR SWS Memory Mapping. Extensions to
                 the file not described in the SWS may not be put into MemMap.h. This has to be verified by code inspection.

*/
