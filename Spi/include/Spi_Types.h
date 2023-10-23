/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Types.h                                                 */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Database declaration.                                         */
/*                                                                            */
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
/*
 * V1.0.0:  29-Aug-2012  : Initial Version
 *
 * V1.0.1:  19-Oct-2012  : As per SCR 029 macros SPI_NINE and SPI_TEN added
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, pre-compile conditions added for
 *                         type definition of Spi_DataType
 *
 * V1.1.1:  20-MAy-2013  : As per SCR 168 for mantis #9319, following change is
 *                         made:
 *                         Macro SPI_THIRTY is added.
 * V1.1.2:  28-Jun-2013  : As per mantis #12518, following change is
 *                         made:
 *                         Macros are added to support DMA channels from
 *                         11 to 15.
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 following changes are made:
 *                          1. 'SPI_HIGH_DATA_MASK' and 'SPI_LOW_DATA_MASK'
 *                              macros are added.
 *                          2. Pre-compile condition SPI_HW_PRIORITY_ENABLED is
 *                             added for variable aaHighprioirtyJobQueueIndex
 *                          3. New Variables aaHWUnitInfoIndex, aaHWUnitNumber
 *                             are added.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.2.2:  23-Oct-2013  : As per CR 256, for mantis issue #16631 following
 *                         changes are made:
 *                          1. Pre-compile conditions are updated for
 *                             'pChannelIBRead' and 'pChannelIBWrite'.
 *
 * V1.2.3:  15-Jan-2014  : As per CR 330, following changes are made:
 *                          1. Updated as per C coding guideline.
 *                          2. Copyright is updated.
 *
 * V1.2.4:  05-Feb-2014  : As per CR 398 for the mantis issue #19208,
 *                         Header file updated as part of merge activity.
 *
 * V1.2.5:  28-Mar-2014  : As per CR 424 for the mantis issue #19537, file is
 *                         updated as per C coding guideline.
 *
 * V1.2.6:  26-Aug-2014  : As per CR 601, following changes are made:
 *                         1. Suffix 'U' is added for all scalar values.
 *
 * V1.2.7:   10-Feb-2015 : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. File is updated for C coding guidelines.
 *                         3. Copyright Information is Updated.
 */
/******************************************************************************/
#ifndef SPI_TYPES_H
#define SPI_TYPES_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/* Included for pre-compile options */
#include "Spi_Cfg.h"

/* TRACE [R4, SPI272] */
/* TRACE [R4, SPI296] */
/* TRACE [R4, SPI297] */
/* TRACE [R3, SPI174][R4, SPI296] */
/* AUTOSAR standard types */
#include "Std_Types.h"

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/

/* AUTOSAR Release version information */
#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)/* START of SPI_AR_VERSION */
#define SPI_TYPES_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_TYPES_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_TYPES_AR_RELEASE_REVISION_VERSION \
                                            SPI_AR_RELEASE_REVISION_VERSION

#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
/* AUTOSAR specification version information */
#define SPI_TYPES_AR_MAJOR_VERSION  SPI_AR_MAJOR_VERSION_VALUE
#define SPI_TYPES_AR_MINOR_VERSION  SPI_AR_MINOR_VERSION_VALUE
#define SPI_TYPES_AR_PATCH_VERSION  SPI_AR_PATCH_VERSION_VALUE
#endif /*END of SPI_AR_VERSION*/

/* File version information */
#define SPI_TYPES_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_TYPES_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#define SPI_ZERO                      0x00U
#define SPI_ONE                       0x01U
#define SPI_TWO                       0x02U
#define SPI_THREE                     0x03U
#define SPI_FOUR                      0x04U
#define SPI_FIVE                      0x05U
#define SPI_SIX                       0x06U
#define SPI_SEVEN                     0x07U
#define SPI_EIGHT                     0x08U
#define SPI_NINE                      0x09U
#define SPI_TEN                       0x0AU
#define SPI_ELEVEN                    0x0BU
#define SPI_TWELVE                    0x0CU
#define SPI_THIRTEEN                  0x0DU
#define SPI_FOURTEEN                  0x0EU
#define SPI_FIFTEEN                   0x0FU
#define SPI_SIXTEEN                   0x10U
#define SPI_THIRTY                    0x1EU

#define SPI_TRUE                      (uint8)0x01
#define SPI_FALSE                     (uint8)0x00

#define SPI_POLLING_MODE              (Spi_AsyncModeType)0
#define SPI_INTERRUPT_MODE            (Spi_AsyncModeType)1

#define SPI_HIGH_DATA_MASK            0xFFFF0000ul
#define SPI_LOW_DATA_MASK             0x0000FFFFul

#define SPI_DMA_TYPE_ONE              0x01U
#define SPI_DMA_TYPE_TWO              0x02U
/*******************************************************************************
**                         DEM TYPE CASTING                                   **
*******************************************************************************/

/*******************************************************************************
**                      SPI TYPE DEFINITION                                   **
*******************************************************************************/

/* Definition of status type */
/* TRACE [R3, SPI061][R4, SPI061] */
typedef enum ETagSpi_StatusType
{
  /* TRACE [R3, SPI011][R4, SPI011] */
  /* TRACE [R4, SPI348] */
  /* TRACE [R4, SPI346] */
  /* TRACE [R4, SPI367] */
  SPI_UNINIT = 0,
  SPI_IDLE,
  SPI_BUSY
} Spi_StatusType;

/* Definition of Job Result type */
/* TRACE [R3, SPI062][R4, SPI062] */
/* TRACE [R3, SPI012][R4, SPI012] */
/* TRACE [R4, SPI261] */
typedef uint8 Spi_JobResultType;

#define SPI_JOB_OK                    (Spi_JobResultType)0
#define SPI_JOB_PENDING               (Spi_JobResultType)1
#define SPI_JOB_FAILED                (Spi_JobResultType)2

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_JOB_QUEUED                (Spi_JobResultType)3
#endif

/* Definition of Sequence Result type */
typedef uint8 Spi_SeqResultType;

/* TRACE [R3, SPI017][R4, SPI017] */
/* TRACE [R3, SPI019][R4, SPI019] */
/* TRACE [R4, SPI351] */
#define SPI_SEQ_OK                    (Spi_SeqResultType)0
#define SPI_SEQ_PENDING               (Spi_SeqResultType)1
#define SPI_SEQ_FAILED                (Spi_SeqResultType)2
#define SPI_SEQ_CANCELLED             (Spi_SeqResultType)3

/* TRACE [R4, SPI355] */
/* Definition of type for application data buffer elements */
#if (SPI_8BIT_DATA_WIDTH == STD_ON)
typedef uint8 Spi_DataType;
#elif (SPI_16BIT_DATA_WIDTH == STD_ON)
typedef uint16 Spi_DataType;
#else
typedef uint32 Spi_DataType;
#endif

/* Definition of type for number of data elements */
typedef uint16 Spi_NumberOfDataType;

/* Definition of type for channel ID */
/* TRACE [R4, SPI356] */
typedef uint8 Spi_ChannelType;

/* Definition of type for job ID */
/* TRACE [R3, SPI167][R4, SPI167] */
/* TRACE [R4, SPI357] */
typedef uint16 Spi_JobType;

/* Definition of type for sequence ID */
typedef uint8 Spi_SequenceType;

/* Definition of type for hardware unit ID */
/* TRACE [R3, SPI169][R4, SPI169] */
/* TRACE [R4, SPI359] */
typedef uint8 Spi_HWUnitType;

/* Definition of type for asynchronous mode */
typedef uint8 Spi_AsyncModeType;

/*******************************************************************************
**                      Structure declarations                                **
*******************************************************************************/

/* TRACE [R3, SPI010][R4, SPI010] */
/* TRACE [R3, SPI008][R4, SPI008] */
/* TRACE [R4, SPI359] */
/* TRACE [R4, SPI344] */
/* TRACE [R3, SPI225][R4, SPI225_Conf] */
/* Data Structure for SPI Handler/Driver initialization */
typedef struct STag_Spi_ConfigType
{
  /* Database start value */
  uint32 ulStartOfDbToc;
  /* Pointer to first Channel configuration */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pFirstChannel;
  /* Pointer to first Job configuration */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pFirstJob;
  /* Pointer to first Sequence configuration */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pFirstSeq;
  /* Pointer to the job list array */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pJobList;
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Pointer to the structure of DMA configuration array */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_DATA) pDMAConfiguration;
  /* Pointer to DMA to SPI Hardware Unit mapping array */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) pDmaSpiHWUnitMap;
  #endif
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  /* Pointer to job notify index */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA) pJobNotifyIndex;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Pointer to the status array */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) pStatusArray;
  /* Pointer to the status byte value */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) pStsValueArray;
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Pointer to the chipselect array */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) pCSArray;
  #endif
  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && ((SPI_FIFO_MODE == STD_ON) || \
        (SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
          (SPI_LEVEL_DELIVERED == SPI_ZERO)))
  /* Pointer to the internal Read buffer  */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pChannelIBRead;
  #endif
  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && ((SPI_FIFO_MODE == STD_ON) || \
            (SPI_DIRECT_ACCESS_MODE == STD_ON)  || \
                               (SPI_HW_PRIORITY_ENABLED == STD_ON) || \
                                           (SPI_LEVEL_DELIVERED == SPI_ZERO)))
  /* Pointer to the internal Write buffer  */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pChannelIBWrite;
  #endif
  #if((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
  Spi_JobType ddDirectAccessQueueSize;
  #endif
  #if((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  /*
   * Hardware unit queue index of CSIH HW units with Tx-only or DB mode
   * If CSIG/Direct access/FIFO mode/Not used, Value = 0xFF
   */
  Spi_SequenceType aaHWUnitQueueIndex[SPI_MAX_HW_DETAILS];
  /*
   * Data structure index of CSIH HW units with Tx-only or DB mode
   * If CSIG/Direct access/FIFO mode/Not used, Value = 0xFF
   */
  Spi_HWUnitType aaHWUnitCurrentCommDataIndex[SPI_MAX_HW_DETAILS];
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /*
   * High priority job queue index of CSIH HW units
   * If Direct access/FIFO mode/Not used, Value = 0xFF
   */
  /* TRACE [R3, SPI059][R4, SPI059] */
  Spi_JobType aaHighprioirtyJobQueueIndex[SPI_MAX_CSIH_HW_INDEX];
  #endif
  #endif
  #if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO))
  /* Configured memory mode for all CSIH HW units */
  uint8 aaHWMemoryMode[SPI_MAX_CSIH_HW_INDEX];
  /*
   * The index of HW Unit (CSIH) in Spi_HWUnitInfo type structure
   * Value = 0xFF, if particular CSIH hardware unit is not used
   */
  Spi_HWUnitType aaHWUnitInfoIndex[SPI_MAX_CSIH_HW_INDEX];
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /*
   * Hardware unit number info. If CSIG, value = 0xFF
   * For CSIH0 = 0, CSIH1 = 1, ....
   */
  Spi_HWUnitType aaHWUnitNumber[SPI_MAX_HW_DETAILS];
  /* Configured chip select for all CSIH HW units */
  uint8 aaChipSelect[SPI_MAX_CSIH_HW_INDEX];
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Number of status bytes */
  uint8 ucNoofStatusByte;
  #endif
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Max number of DMA channel Ids configured in corresponding configuration */
  uint8 ucMaxDmaChannels;
  #endif
} Spi_ConfigType;


#endif /* SPI_TYPES_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
