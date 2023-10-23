/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Cfg.h                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the definitions of pre-compile time parameters.         */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*  V1.0.0      31-Aug-2012      Initial Version                                  
 *  V1.1.0      29-Jan-2013      As per SCR 072, BswHdrTpl::Template_Hash hash   
 *                             is updated.                                      
 *  V1.1.1      18-Mar-2013      As per SCR 104 for the mantis issue #8153,      
 *                              BswHdrTpl::Template_Hash hash is updated.       
 *  V1.1.2      08-Aug-2013      As per CR 225, following change is made:        
 *                              1. Document is updated as per new template      
 *                                 attached in mantis #11710.                   
 *  V1.1.3      02-Jan-2014      As per CR 330, for the mantis issue #15705,     
 *                              Copyright information is updated.               
 *  V1.1.4      30-Jul-2014      As per CR 563, following changes are made:      
 *                              The macros 'SPI_SELCSIHDMA_ADDR' and            
 *                              'SPI_SELCSIHDMA_REG_VAL' are renamed to         
 *                              'SPI_SELECT_CSIH_DMA_ADDR' and                  
 *                              'SPI_SELECT_CSIH_DMA_REG_VAL' respectively.     
 *  V1.1.5      28-Aug-2014      As per CR 601, for the mantis #22252,           
 *                              BswHdrTpl::Template_Hash is updated.            
 *  V1.1.6      10-Feb-2015      As a part of Merging Activity, for the mantis   
 *                              #26024 Following Changes are made.              
 *                              1. As per CR 094 and CR 001, for the mantis 
 *                                 issue#19850, Template_Hash is updated.             
 *                              2. All the elements are updated for QAC         
 *                                 warnings.                                    
 *                              3. Copyright Information is Updated             
 */
/*******************************************************************************
**                   Generation Tool Version                                  **
*******************************************************************************/
/*
 * TOOL VERSION:  1.2.12 
 */

/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    C:\Users\nz2654\AppData\Local\Temp\DaVinci\Cfg-3747693\Generation\Cfg_Gen-1481733754247-0\AutosarFiles_ValGen-1481734289264-0\Spi_ECUC_3231796230563067222.arxml
 *                C:\Hari\Work\SynergyProjects\T1xx_Synergy\WorkingProject_Synergy\Spi\generate\R403_SPI_P1x_BSWMDT.arxml
 * GENERATED ON:  14 Dec 2016 - 11:52:14
 */


#ifndef SPI_CFG_H
#define SPI_CFG_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR specification version information */
#define SPI_CFG_AR_RELEASE_MAJOR_VERSION  4U
#define SPI_CFG_AR_RELEASE_MINOR_VERSION  0U
#define SPI_CFG_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define SPI_CFG_SW_MAJOR_VERSION  1U
#define SPI_CFG_SW_MINOR_VERSION  6U

/*******************************************************************************
**                       Common Published Information                         **
*******************************************************************************/

/* TRACE [R4, SPI068] */
#define SPI_AR_RELEASE_MAJOR_VERSION_VALUE  4U
#define SPI_AR_RELEASE_MINOR_VERSION_VALUE  0U
#define SPI_AR_RELEASE_REVISION_VERSION_VALUE  3U

#define SPI_SW_MAJOR_VERSION_VALUE  1U
#define SPI_SW_MINOR_VERSION_VALUE  6U
#define SPI_SW_PATCH_VERSION_VALUE  0U

#define SPI_VENDOR_ID_VALUE  59U
#define SPI_MODULE_ID_VALUE  83U

/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3452) Object-like macro appears to expand to an         */
/*                  arithmetic expression which is not parenthesized.         */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : This is a pointer to base address of register              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3452)-1 and                           */
/*                 END Msg(4:3452)-1 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/* Instance ID of the SPI SpiDriver*/
#define SPI_INSTANCE_ID_VALUE                     0U

/* Pre-compile option for Version information */
#define SPI_AR_VERSION                        SPI_AR_HIGHER_VERSION

/* TRACE [R4, SPI005] */
/* TRACE [R4, SPI100] */
/* TRACE [R4, SPI228_Conf] */
/* TRACE [R4, SPI249] */
/* TRACE [R4, SPI250] */
/* Enables/Disables Development error detection */
#define SPI_DEV_ERROR_DETECT                  STD_ON

/* TRACE [R4, SPI232_Conf] */
/* TRACE [R4, SPI278] */
/* Enables/Disables GetVersionInfo API */
#define SPI_VERSION_INFO_API                  STD_OFF

/* Pre-compile option for enable or disable inter-module dependencies */
#define SPI_VERSION_CHECK_EXT_MODULES         STD_OFF

/* Pre-compile option for enable or disable hardware priority */
#define SPI_HW_PRIORITY_ENABLED               STD_OFF

/* TRACE [R4, SPI117] */
/* TRACE [R4, SPI121] */
/* TRACE [R4, SPI122] */
/* TRACE [R4, SPI123] */
/* TRACE [R4, SPI222_Conf] */
/* TRACE [R4, SPI230_Conf] */
/* Switches the Interruptible SpiSequence handling functionality ON or OFF */
#define SPI_INTERRUPTIBLE_SEQ_ALLOWED         STD_OFF

/* Enables/Disables the SpiDma mode */
#define SPI_DMA_MODE_ENABLE                   STD_OFF

/* TRACE [R4, SPI142] */
/* TRACE [R4, SPI229_Conf] */
/* Enables/Disables GetHWUnitStatus API */
#define SPI_HW_STATUS_API                     STD_OFF

/* TRACE [R4, SPI226_Conf] */
/* TRACE [R4, SPI230] */
/* Enables/Disables Cancel API */
#define SPI_CANCEL_API                        STD_OFF

/* Enables/Disables IB Channel Operation */
#define SPI_IB_CONFIGURED                     STD_ON

/* Enables/Disables EB Channel Operation */
#define SPI_EB_CONFIGURED                     STD_OFF

/* Configuration of CSIG hardware unit */
#define SPI_CSIG_CONFIGURED                   STD_ON

/* Configuration of CSIH hardware unit */
#define SPI_CSIH_CONFIGURED                   STD_ON

/* TRACE [R4, SPI109] */
/* TRACE [R4, SPI110] */
/* TRACE [R4, SPI136] */
/* TRACE [R4, SPI160] */
/* TRACE [R4, SPI162] */
/* TRACE [R4, SPI231_Conf] */
/* Selects the SPI Handler/SpiDriver level of scalable functionality */
#define SPI_LEVEL_DELIVERED                   1U

/* TRACE [R4, SPI111] */
/* TRACE [R4, SPI115] */
/* TRACE [R4, SPI117] */
/* TRACE [R4, SPI137] */
/* TRACE [R4, SPI227_Conf] */
/* TRACE [R4, SPI279] */
/* Selects the SPI Handler/SpiDriver Channel Buffers usage allowed */
#define SPI_CHANNEL_BUFFERS_ALLOWED           0U

/* TRACE [R4, SPI197] */
/* Number of SpiChannel configured */
#define SPI_MAX_CHANNEL                       (Spi_ChannelType)67

/* TRACE [R4, SPI198_Conf] */
/* Number of SpiJob configured */
#define SPI_MAX_JOB                           (Spi_JobType)67

/* TRACE [R4, SPI199_Conf] */
/* Number of SpiSequence configured */
#define SPI_MAX_SEQUENCE                      (Spi_SequenceType)67

/* Enables/Disables configuration of data consistency check */
#define SPI_DATA_CONSISTENCY_CHECK            STD_ON

/* Enables/Disables configuration of Direct Access Memory mode selection */
#define SPI_DIRECT_ACCESS_MODE                STD_ON

/* Enables/Disables configuration of Fifo Memory mode selection */
#define SPI_FIFO_MODE                         STD_OFF

/* Enables/Disables configuration of Dual Buffer Memory mode selection */
#define SPI_DUAL_BUFFER_MODE                  STD_OFF

/* Enables/Disables configuration of Tx only Memory mode selection */
#define SPI_TX_ONLY_MODE                      STD_OFF

/* Enables/Disables configuration of critical section functionality */
#define SPI_CRITICAL_SECTION_PROTECTION       STD_ON

/* Gives the maximum queue */
#define SPI_MAX_QUEUE                         5U

/* Internal R/W Buffers configured */
#define SPI_INTERNAL_RW_BUFFERS               STD_ON

/* Gives the start index of the receive buffer in case of TX ONLY mode */
#define SPI_RX_BUFFER_START                   0U

/* TRACE [R4, SPI237_Conf] */
/*
 * Specifies whether concurrent Spi_SyncTransmit() calls for different 
 * sequences shall be configurable
 */
#define SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT  STD_OFF

/* TRACE [R4, SPI233] */
/*
 * Enables/Disables the SPI_E_ALREADY_INITIALIZED Det error check 
 * in Spi_Init API
 */
#define SPI_ALREADY_INIT_DET_CHECK            STD_ON

/* Enables/Disables the names configured in SpiSeqStartNotification */
#define SPI_SEQ_STARTNOTIFICATION_ENABLED     STD_OFF

/* TRACE [R4, SPI223_Conf] */
/*
 * Enables/Disables the check for the names configured for synchronous
 * transmissions in SpiSeqEndNotification
 */
#define SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED  STD_OFF

/* Number of CSIH devices configured in TX_ONLY_MODE */
#define SPI_MAX_NUM_OF_TX_ONLY_CSIH           0U

/* Number of CSIH devices configured in DUAL_BUFFER_MODE */
#define SPI_MAX_NUM_OF_DUAL_BUFFER_CSIH       0U

/* Enables/Disables the check when HW configuration is static or dynamic HW */
#define SPI_PERSISTENT_HW_CONFIGURATION_ENABLED STD_ON

/* 
 * Timeout value for updating the status of data transmission in status 
 * register of CSIG/CSIH
 */
#define SPI_LOOP_TIMEOUT                      65535U

/* Enables/Disables the loop back test */
#define SPI_LOOPBACK_SELFTEST                 STD_OFF

/* TRACE [R4, SPI149] */
/* Enables/Disables configuration of extended data length */
#define SPI_EXTENDED_DATA_LENGTH            STD_OFF

/* TRACE [R4, SPI149] */
/* Enables/Disables configuration of channel datas width as 16-bit */
#define SPI_16BIT_DATA_WIDTH                STD_ON

/* TRACE [R4, SPI149] */
/* Enables/Disables configuration of channel data width as 8-bit */
#define SPI_8BIT_DATA_WIDTH                 STD_OFF

/* Maximum number of cancel bytes */
#define SPI_MAX_CANCEL_BYTES                0UL

/* Enable/Disable generation of job Queue */
#define SPI_HWUNIT_ASYNCHRONOUS             STD_ON

/* Gives the maximum number of Hardware units */
#define SPI_MAX_CSIH_HW_INDEX               3U

/* TRACE [R4, SPI097] */
/* TRACE [R4, SPI195] */
/* The failure of the sequence is reported using the following error code */
#define SPI_E_HARDWARE_ERROR                \
  DemConf_DemEventParameter_SPI_E_HARDWARE_ERROR

/* The time out of the sequence is reported using the following error code */
#define SPI_E_DATA_TX_TIMEOUT_FAILURE       \
  DemConf_DemEventParameter_SPI_E_DATA_TX_TIMEOUT_FAILURE

/* Number of structure of type Spi_HWUnitInfo */
#define SPI_MAX_HW_DETAILS                  3U

/* Number of structure for CSIG in Spi_HWUnitInfo structure array */
#define SPI_MAX_NUM_OF_CSIG                 1U

/* TRACE [R4, SPI200_Conf] */
/* Handles for configured SpiChannel */
#define SpiConf_SpiChannel_GateDrv0Cfg0Ch    (Spi_ChannelType)0U
#define SpiConf_SpiChannel_GateDrv0Cfg1Ch    (Spi_ChannelType)1U
#define SpiConf_SpiChannel_GateDrv0Cfg2Ch    (Spi_ChannelType)2U
#define SpiConf_SpiChannel_GateDrv0Cfg3Ch    (Spi_ChannelType)3U
#define SpiConf_SpiChannel_GateDrv0Cfg4Ch    (Spi_ChannelType)4U
#define SpiConf_SpiChannel_GateDrv0Cfg5Ch    (Spi_ChannelType)5U
#define SpiConf_SpiChannel_GateDrv0Cfg6Ch    (Spi_ChannelType)6U
#define SpiConf_SpiChannel_GateDrv0Cfg7Ch    (Spi_ChannelType)7U
#define SpiConf_SpiChannel_GateDrv0Cfg8Ch    (Spi_ChannelType)8U
#define SpiConf_SpiChannel_GateDrv0Cfg9Ch    (Spi_ChannelType)9U
#define SpiConf_SpiChannel_GateDrv0Cfg10Ch    (Spi_ChannelType)10U
#define SpiConf_SpiChannel_GateDrv0Cfg11Ch    (Spi_ChannelType)11U
#define SpiConf_SpiChannel_GateDrv0Cfg12Ch    (Spi_ChannelType)12U
#define SpiConf_SpiChannel_GateDrv0Cfg13Ch    (Spi_ChannelType)13U
#define SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch    (Spi_ChannelType)14U
#define SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch    (Spi_ChannelType)15U
#define SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch    (Spi_ChannelType)16U
#define SpiConf_SpiChannel_GateDrv0VrfyRes0Ch    (Spi_ChannelType)17U
#define SpiConf_SpiChannel_GateDrv0VrfyRes1Ch    (Spi_ChannelType)18U
#define SpiConf_SpiChannel_GateDrv0Mask0Ch    (Spi_ChannelType)19U
#define SpiConf_SpiChannel_GateDrv0Mask1Ch    (Spi_ChannelType)20U
#define SpiConf_SpiChannel_GateDrv0Mask2Ch    (Spi_ChannelType)21U
#define SpiConf_SpiChannel_GateDrv0Diag0Ch    (Spi_ChannelType)22U
#define SpiConf_SpiChannel_GateDrv0Diag1Ch    (Spi_ChannelType)23U
#define SpiConf_SpiChannel_GateDrv0Diag2Ch    (Spi_ChannelType)24U
#define SpiConf_SpiChannel_GateDrv0CtrlCh    (Spi_ChannelType)25U
#define SpiConf_SpiChannel_GateDrv1Cfg0Ch    (Spi_ChannelType)26U
#define SpiConf_SpiChannel_GateDrv1Cfg1Ch    (Spi_ChannelType)27U
#define SpiConf_SpiChannel_GateDrv1Cfg2Ch    (Spi_ChannelType)28U
#define SpiConf_SpiChannel_GateDrv1Cfg3Ch    (Spi_ChannelType)29U
#define SpiConf_SpiChannel_GateDrv1Cfg4Ch    (Spi_ChannelType)30U
#define SpiConf_SpiChannel_GateDrv1Cfg5Ch    (Spi_ChannelType)31U
#define SpiConf_SpiChannel_GateDrv1Cfg6Ch    (Spi_ChannelType)32U
#define SpiConf_SpiChannel_GateDrv1Cfg7Ch    (Spi_ChannelType)33U
#define SpiConf_SpiChannel_GateDrv1Cfg8Ch    (Spi_ChannelType)34U
#define SpiConf_SpiChannel_GateDrv1Cfg9Ch    (Spi_ChannelType)35U
#define SpiConf_SpiChannel_GateDrv1Cfg10Ch    (Spi_ChannelType)36U
#define SpiConf_SpiChannel_GateDrv1Cfg11Ch    (Spi_ChannelType)37U
#define SpiConf_SpiChannel_GateDrv1Cfg12Ch    (Spi_ChannelType)38U
#define SpiConf_SpiChannel_GateDrv1Cfg13Ch    (Spi_ChannelType)39U
#define SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch    (Spi_ChannelType)40U
#define SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch    (Spi_ChannelType)41U
#define SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch    (Spi_ChannelType)42U
#define SpiConf_SpiChannel_GateDrv1VrfyRes0Ch    (Spi_ChannelType)43U
#define SpiConf_SpiChannel_GateDrv1VrfyRes1Ch    (Spi_ChannelType)44U
#define SpiConf_SpiChannel_GateDrv1Mask0Ch    (Spi_ChannelType)45U
#define SpiConf_SpiChannel_GateDrv1Mask1Ch    (Spi_ChannelType)46U
#define SpiConf_SpiChannel_GateDrv1Mask2Ch    (Spi_ChannelType)47U
#define SpiConf_SpiChannel_GateDrv1Diag0Ch    (Spi_ChannelType)48U
#define SpiConf_SpiChannel_GateDrv1Diag1Ch    (Spi_ChannelType)49U
#define SpiConf_SpiChannel_GateDrv1Diag2Ch    (Spi_ChannelType)50U
#define SpiConf_SpiChannel_GateDrv1CtrlCh    (Spi_ChannelType)51U
#define SpiConf_SpiChannel_TmplMonrCh1    (Spi_ChannelType)52U
#define SpiConf_SpiChannel_TmplMonrCh2    (Spi_ChannelType)53U
#define SpiConf_SpiChannel_TmplMonrCh3    (Spi_ChannelType)54U
#define SpiConf_SpiChannel_TmplMonrCh4    (Spi_ChannelType)55U
#define SpiConf_SpiChannel_TmplMonrCh5    (Spi_ChannelType)56U
#define SpiConf_SpiChannel_PwrSplyCh1    (Spi_ChannelType)57U
#define SpiConf_SpiChannel_PwrSplyCh2    (Spi_ChannelType)58U
#define SpiConf_SpiChannel_PwrSplyCh3    (Spi_ChannelType)59U
#define SpiConf_SpiChannel_PwrSplyCh4    (Spi_ChannelType)60U
#define SpiConf_SpiChannel_PwrSplyCh5    (Spi_ChannelType)61U
#define SpiConf_SpiChannel_PwrSplyCh6    (Spi_ChannelType)62U
#define SpiConf_SpiChannel_PwrSplyCh7    (Spi_ChannelType)63U
#define SpiConf_SpiChannel_PwrSplyCh8    (Spi_ChannelType)64U
#define SpiConf_SpiChannel_PwrSplyCh9    (Spi_ChannelType)65U
#define SpiConf_SpiChannel_PwrSplyCh10    (Spi_ChannelType)66U

/* Handles for configured SpiJob */
#define SpiConf_SpiJob_GateDrv0Cfg0Job    (Spi_JobType)0U
#define SpiConf_SpiJob_GateDrv0Cfg1Job    (Spi_JobType)1U
#define SpiConf_SpiJob_GateDrv0Cfg2Job    (Spi_JobType)2U
#define SpiConf_SpiJob_GateDrv0Cfg3Job    (Spi_JobType)3U
#define SpiConf_SpiJob_GateDrv0Cfg4Job    (Spi_JobType)4U
#define SpiConf_SpiJob_GateDrv0Cfg5Job    (Spi_JobType)5U
#define SpiConf_SpiJob_GateDrv0Cfg6Job    (Spi_JobType)6U
#define SpiConf_SpiJob_GateDrv0Cfg7Job    (Spi_JobType)7U
#define SpiConf_SpiJob_GateDrv0Cfg8Job    (Spi_JobType)8U
#define SpiConf_SpiJob_GateDrv0Cfg9Job    (Spi_JobType)9U
#define SpiConf_SpiJob_GateDrv0Cfg10Job    (Spi_JobType)10U
#define SpiConf_SpiJob_GateDrv0Cfg11Job    (Spi_JobType)11U
#define SpiConf_SpiJob_GateDrv0Cfg12Job    (Spi_JobType)12U
#define SpiConf_SpiJob_GateDrv0Cfg13Job    (Spi_JobType)13U
#define SpiConf_SpiJob_GateDrv0VrfyCmd0Job    (Spi_JobType)14U
#define SpiConf_SpiJob_GateDrv0VrfyCmd1Job    (Spi_JobType)15U
#define SpiConf_SpiJob_GateDrv0VrfyCmd2Job    (Spi_JobType)16U
#define SpiConf_SpiJob_GateDrv0VrfyRes0Job    (Spi_JobType)17U
#define SpiConf_SpiJob_GateDrv0VrfyRes1Job    (Spi_JobType)18U
#define SpiConf_SpiJob_GateDrv0Mask0Job    (Spi_JobType)19U
#define SpiConf_SpiJob_GateDrv0Mask1Job    (Spi_JobType)20U
#define SpiConf_SpiJob_GateDrv0Mask2Job    (Spi_JobType)21U
#define SpiConf_SpiJob_GateDrv0Diag0Job    (Spi_JobType)22U
#define SpiConf_SpiJob_GateDrv0Diag1Job    (Spi_JobType)23U
#define SpiConf_SpiJob_GateDrv0Diag2Job    (Spi_JobType)24U
#define SpiConf_SpiJob_GateDrv0CtrlJob    (Spi_JobType)25U
#define SpiConf_SpiJob_GateDrv1Cfg0Job    (Spi_JobType)26U
#define SpiConf_SpiJob_GateDrv1Cfg1Job    (Spi_JobType)27U
#define SpiConf_SpiJob_GateDrv1Cfg2Job    (Spi_JobType)28U
#define SpiConf_SpiJob_GateDrv1Cfg3Job    (Spi_JobType)29U
#define SpiConf_SpiJob_GateDrv1Cfg4Job    (Spi_JobType)30U
#define SpiConf_SpiJob_GateDrv1Cfg5Job    (Spi_JobType)31U
#define SpiConf_SpiJob_GateDrv1Cfg6Job    (Spi_JobType)32U
#define SpiConf_SpiJob_GateDrv1Cfg7Job    (Spi_JobType)33U
#define SpiConf_SpiJob_GateDrv1Cfg8Job    (Spi_JobType)34U
#define SpiConf_SpiJob_GateDrv1Cfg9Job    (Spi_JobType)35U
#define SpiConf_SpiJob_GateDrv1Cfg10Job    (Spi_JobType)36U
#define SpiConf_SpiJob_GateDrv1Cfg11Job    (Spi_JobType)37U
#define SpiConf_SpiJob_GateDrv1Cfg12Job    (Spi_JobType)38U
#define SpiConf_SpiJob_GateDrv1Cfg13Job    (Spi_JobType)39U
#define SpiConf_SpiJob_GateDrv1VrfyCmd0Job    (Spi_JobType)40U
#define SpiConf_SpiJob_GateDrv1VrfyCmd1Job    (Spi_JobType)41U
#define SpiConf_SpiJob_GateDrv1VrfyCmd2Job    (Spi_JobType)42U
#define SpiConf_SpiJob_GateDrv1VrfyRes0Job    (Spi_JobType)43U
#define SpiConf_SpiJob_GateDrv1VrfyRes1Job    (Spi_JobType)44U
#define SpiConf_SpiJob_GateDrv1Mask0Job    (Spi_JobType)45U
#define SpiConf_SpiJob_GateDrv1Mask1Job    (Spi_JobType)46U
#define SpiConf_SpiJob_GateDrv1Mask2Job    (Spi_JobType)47U
#define SpiConf_SpiJob_GateDrv1Diag0Job    (Spi_JobType)48U
#define SpiConf_SpiJob_GateDrv1Diag1Job    (Spi_JobType)49U
#define SpiConf_SpiJob_GateDrv1Diag2Job    (Spi_JobType)50U
#define SpiConf_SpiJob_GateDrv1CtrlJob    (Spi_JobType)51U
#define SpiConf_SpiJob_TmplMonrJob1    (Spi_JobType)52U
#define SpiConf_SpiJob_TmplMonrJob2    (Spi_JobType)53U
#define SpiConf_SpiJob_TmplMonrJob3    (Spi_JobType)54U
#define SpiConf_SpiJob_TmplMonrJob4    (Spi_JobType)55U
#define SpiConf_SpiJob_TmplMonrJob5    (Spi_JobType)56U
#define SpiConf_SpiJob_PwrSplyJob1    (Spi_JobType)57U
#define SpiConf_SpiJob_PwrSplyJob2    (Spi_JobType)58U
#define SpiConf_SpiJob_PwrSplyJob3    (Spi_JobType)59U
#define SpiConf_SpiJob_PwrSplyJob4    (Spi_JobType)60U
#define SpiConf_SpiJob_PwrSplyJob5    (Spi_JobType)61U
#define SpiConf_SpiJob_PwrSplyJob6    (Spi_JobType)62U
#define SpiConf_SpiJob_PwrSplyJob7    (Spi_JobType)63U
#define SpiConf_SpiJob_PwrSplyJob8    (Spi_JobType)64U
#define SpiConf_SpiJob_PwrSplyJob9    (Spi_JobType)65U
#define SpiConf_SpiJob_PwrSplyJob10    (Spi_JobType)66U

/* TRACE [R4, SPI224_Conf] */
/* Handles for configured SpiSequence */
#define SpiConf_SpiSequence_GateDrv0Cfg0Seq    (Spi_SequenceType)0U
#define SpiConf_SpiSequence_GateDrv0Cfg1Seq    (Spi_SequenceType)1U
#define SpiConf_SpiSequence_GateDrv0Cfg2Seq    (Spi_SequenceType)2U
#define SpiConf_SpiSequence_GateDrv0Cfg3Seq    (Spi_SequenceType)3U
#define SpiConf_SpiSequence_GateDrv0Cfg4Seq    (Spi_SequenceType)4U
#define SpiConf_SpiSequence_GateDrv0Cfg5Seq    (Spi_SequenceType)5U
#define SpiConf_SpiSequence_GateDrv0Cfg6Seq    (Spi_SequenceType)6U
#define SpiConf_SpiSequence_GateDrv0Cfg7Seq    (Spi_SequenceType)7U
#define SpiConf_SpiSequence_GateDrv0Cfg8Seq    (Spi_SequenceType)8U
#define SpiConf_SpiSequence_GateDrv0Cfg9Seq    (Spi_SequenceType)9U
#define SpiConf_SpiSequence_GateDrv0Cfg10Seq    (Spi_SequenceType)10U
#define SpiConf_SpiSequence_GateDrv0Cfg11Seq    (Spi_SequenceType)11U
#define SpiConf_SpiSequence_GateDrv0Cfg12Seq    (Spi_SequenceType)12U
#define SpiConf_SpiSequence_GateDrv0Cfg13Seq    (Spi_SequenceType)13U
#define SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq    (Spi_SequenceType)14U
#define SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq    (Spi_SequenceType)15U
#define SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq    (Spi_SequenceType)16U
#define SpiConf_SpiSequence_GateDrv0VrfyRes0Seq    (Spi_SequenceType)17U
#define SpiConf_SpiSequence_GateDrv0VrfyRes1Seq    (Spi_SequenceType)18U
#define SpiConf_SpiSequence_GateDrv0Mask0Seq    (Spi_SequenceType)19U
#define SpiConf_SpiSequence_GateDrv0Mask1Seq    (Spi_SequenceType)20U
#define SpiConf_SpiSequence_GateDrv0Mask2Seq    (Spi_SequenceType)21U
#define SpiConf_SpiSequence_GateDrv0Diag0Seq    (Spi_SequenceType)22U
#define SpiConf_SpiSequence_GateDrv0Diag1Seq    (Spi_SequenceType)23U
#define SpiConf_SpiSequence_GateDrv0Diag2Seq    (Spi_SequenceType)24U
#define SpiConf_SpiSequence_GateDrv0CtrlSeq    (Spi_SequenceType)25U
#define SpiConf_SpiSequence_GateDrv1Cfg0Seq    (Spi_SequenceType)26U
#define SpiConf_SpiSequence_GateDrv1Cfg1Seq    (Spi_SequenceType)27U
#define SpiConf_SpiSequence_GateDrv1Cfg2Seq    (Spi_SequenceType)28U
#define SpiConf_SpiSequence_GateDrv1Cfg3Seq    (Spi_SequenceType)29U
#define SpiConf_SpiSequence_GateDrv1Cfg4Seq    (Spi_SequenceType)30U
#define SpiConf_SpiSequence_GateDrv1Cfg5Seq    (Spi_SequenceType)31U
#define SpiConf_SpiSequence_GateDrv1Cfg6Seq    (Spi_SequenceType)32U
#define SpiConf_SpiSequence_GateDrv1Cfg7Seq    (Spi_SequenceType)33U
#define SpiConf_SpiSequence_GateDrv1Cfg8Seq    (Spi_SequenceType)34U
#define SpiConf_SpiSequence_GateDrv1Cfg9Seq    (Spi_SequenceType)35U
#define SpiConf_SpiSequence_GateDrv1Cfg10Seq    (Spi_SequenceType)36U
#define SpiConf_SpiSequence_GateDrv1Cfg11Seq    (Spi_SequenceType)37U
#define SpiConf_SpiSequence_GateDrv1Cfg12Seq    (Spi_SequenceType)38U
#define SpiConf_SpiSequence_GateDrv1Cfg13Seq    (Spi_SequenceType)39U
#define SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq    (Spi_SequenceType)40U
#define SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq    (Spi_SequenceType)41U
#define SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq    (Spi_SequenceType)42U
#define SpiConf_SpiSequence_GateDrv1VrfyRes0Seq    (Spi_SequenceType)43U
#define SpiConf_SpiSequence_GateDrv1VrfyRes1Seq    (Spi_SequenceType)44U
#define SpiConf_SpiSequence_GateDrv1Mask0Seq    (Spi_SequenceType)45U
#define SpiConf_SpiSequence_GateDrv1Mask1Seq    (Spi_SequenceType)46U
#define SpiConf_SpiSequence_GateDrv1Mask2Seq    (Spi_SequenceType)47U
#define SpiConf_SpiSequence_GateDrv1Diag0Seq    (Spi_SequenceType)48U
#define SpiConf_SpiSequence_GateDrv1Diag1Seq    (Spi_SequenceType)49U
#define SpiConf_SpiSequence_GateDrv1Diag2Seq    (Spi_SequenceType)50U
#define SpiConf_SpiSequence_GateDrv1CtrlSeq    (Spi_SequenceType)51U
#define SpiConf_SpiSequence_TmplMonrSeq1    (Spi_SequenceType)52U
#define SpiConf_SpiSequence_TmplMonrSeq2    (Spi_SequenceType)53U
#define SpiConf_SpiSequence_TmplMonrSeq3    (Spi_SequenceType)54U
#define SpiConf_SpiSequence_TmplMonrSeq4    (Spi_SequenceType)55U
#define SpiConf_SpiSequence_TmplMonrSeq5    (Spi_SequenceType)56U
#define SpiConf_SpiSequence_PwrSplySeq1    (Spi_SequenceType)57U
#define SpiConf_SpiSequence_PwrSplySeq2    (Spi_SequenceType)58U
#define SpiConf_SpiSequence_PwrSplySeq3    (Spi_SequenceType)59U
#define SpiConf_SpiSequence_PwrSplySeq4    (Spi_SequenceType)60U
#define SpiConf_SpiSequence_PwrSplySeq5    (Spi_SequenceType)61U
#define SpiConf_SpiSequence_PwrSplySeq6    (Spi_SequenceType)62U
#define SpiConf_SpiSequence_PwrSplySeq7    (Spi_SequenceType)63U
#define SpiConf_SpiSequence_PwrSplySeq8    (Spi_SequenceType)64U
#define SpiConf_SpiSequence_PwrSplySeq9    (Spi_SequenceType)65U
#define SpiConf_SpiSequence_PwrSplySeq10    (Spi_SequenceType)66U

/* Handles for configured HW unit */
#define SPI_CSIG0 (Spi_HWUnitType)0
#define SPI_CSIH0 (Spi_HWUnitType)1
#define SPI_CSIH2 (Spi_HWUnitType)2

/* Configuration Set Handles */
/* MISRA Violation: START Msg(4:3452)-1 */
#define SpiDriver  &Spi_GstConfiguration[0]
/* END Msg(4:3452)-1 */

/* Macros for enabling/disabling Hardware units ISRS */
#define SPI_CSIG0_TIC_ISR_API               STD_ON
#define SPI_CSIG1_TIC_ISR_API               STD_OFF
#define SPI_CSIG2_TIC_ISR_API               STD_OFF
#define SPI_CSIG3_TIC_ISR_API               STD_OFF
#define SPI_CSIG4_TIC_ISR_API               STD_OFF
#define SPI_CSIG5_TIC_ISR_API               STD_OFF
#define SPI_CSIG6_TIC_ISR_API               STD_OFF
#define SPI_CSIG7_TIC_ISR_API               STD_OFF
#define SPI_CSIH0_TIC_ISR_API               STD_ON
#define SPI_CSIH1_TIC_ISR_API               STD_OFF
#define SPI_CSIH2_TIC_ISR_API               STD_ON
#define SPI_CSIH3_TIC_ISR_API               STD_OFF
#define SPI_CSIG0_TIJC_ISR_API              STD_OFF
#define SPI_CSIG1_TIJC_ISR_API              STD_OFF
#define SPI_CSIG2_TIJC_ISR_API              STD_OFF
#define SPI_CSIG3_TIJC_ISR_API              STD_OFF
#define SPI_CSIG4_TIJC_ISR_API              STD_OFF
#define SPI_CSIG5_TIJC_ISR_API              STD_OFF
#define SPI_CSIG6_TIJC_ISR_API              STD_OFF
#define SPI_CSIG7_TIJC_ISR_API              STD_OFF
#define SPI_CSIH0_TIJC_ISR_API              STD_OFF
#define SPI_CSIH1_TIJC_ISR_API              STD_OFF
#define SPI_CSIH2_TIJC_ISR_API              STD_OFF
#define SPI_CSIH3_TIJC_ISR_API              STD_OFF
#define SPI_CSIG0_TIR_ISR_API               STD_ON
#define SPI_CSIG1_TIR_ISR_API               STD_OFF
#define SPI_CSIG2_TIR_ISR_API               STD_OFF
#define SPI_CSIG3_TIR_ISR_API               STD_OFF
#define SPI_CSIG4_TIR_ISR_API               STD_OFF
#define SPI_CSIG5_TIR_ISR_API               STD_OFF
#define SPI_CSIG6_TIR_ISR_API               STD_OFF
#define SPI_CSIG7_TIR_ISR_API               STD_OFF
#define SPI_CSIH0_TIR_ISR_API               STD_ON
#define SPI_CSIH1_TIR_ISR_API               STD_OFF
#define SPI_CSIH2_TIR_ISR_API               STD_ON
#define SPI_CSIH3_TIR_ISR_API               STD_OFF
#define SPI_CSIG0_TIRE_ISR_API              STD_ON
#define SPI_CSIG1_TIRE_ISR_API              STD_OFF
#define SPI_CSIG2_TIRE_ISR_API              STD_OFF
#define SPI_CSIG3_TIRE_ISR_API              STD_OFF
#define SPI_CSIG4_TIRE_ISR_API              STD_OFF
#define SPI_CSIG5_TIRE_ISR_API              STD_OFF
#define SPI_CSIG6_TIRE_ISR_API              STD_OFF
#define SPI_CSIG7_TIRE_ISR_API              STD_OFF
#define SPI_CSIH0_TIRE_ISR_API              STD_ON
#define SPI_CSIH1_TIRE_ISR_API              STD_OFF
#define SPI_CSIH2_TIRE_ISR_API              STD_ON
#define SPI_CSIH3_TIRE_ISR_API              STD_OFF
#define SPI_DMA00_ISR_API                   STD_OFF
#define SPI_DMA01_ISR_API                   STD_OFF
#define SPI_DMA02_ISR_API                   STD_OFF
#define SPI_DMA03_ISR_API                   STD_OFF
#define SPI_DMA04_ISR_API                   STD_OFF
#define SPI_DMA05_ISR_API                   STD_OFF
#define SPI_DMA06_ISR_API                   STD_OFF
#define SPI_DMA07_ISR_API                   STD_OFF
#define SPI_DMA08_ISR_API                   STD_OFF
#define SPI_DMA09_ISR_API                   STD_OFF
#define SPI_DMA10_ISR_API                   STD_OFF
#define SPI_DMA11_ISR_API                   STD_OFF
#define SPI_DMA12_ISR_API                   STD_OFF
#define SPI_DMA13_ISR_API                   STD_OFF
#define SPI_DMA14_ISR_API                   STD_OFF
#define SPI_DMA15_ISR_API                   STD_OFF

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/


/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#endif /* SPI_CFG_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
