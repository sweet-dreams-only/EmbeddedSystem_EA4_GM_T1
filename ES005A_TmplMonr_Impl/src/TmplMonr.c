/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TmplMonr.c
 *     SW-C Type:  TmplMonr
 *  Generated at:  Thu Dec  8 16:45:26 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TmplMonr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015, 2016 Nxtr 
* Nxtr Confidential
*
* Module File Name  : TmplMonr.c
* Module Description: Temporal Monitor Function
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          8 %
* %derived_by:       jzk9cc %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 04/06/15   1       Rijvi        Initial version                                                             EA4#403
* 07/14/15   2       Rijvi        Implement FDD revision 1.1.0                                                EA4#1065
* 07/30/15   3       Rijvi        Implement FDD revision 2.1.0 (which includes anomaly# 1040 fix)             EA4#1155
* 08/17/15   4       Rijvi        Implement FDD revision 2.2.0 (which includes anomaly# 1338  fix)            EA4#1341
* 09/28/15   5       Rijvi        Implement FDD revision 2.3.0 (update for the set nErr client function)      EA4#1715
* 03/10/16   6       Rijvi        Implement anomaly EA4#3982 fix											  EA4#4373   
* 06/28/16   7       Rijvi        Implement FDD revision 2.5.0 (anomaly EA4#5862 fix)						  EA4#6221  
* 08/15/16   8       Rijvi        Implement FDD revision 2.6.0                                                EA4#6878
* 12/08/16   9       JK           Implement FDD revision 2.7.0                                                EA4#8532
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  NtcNr1
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  NtcSts1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_TmplMonr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "ElecGlbPrm.h"
#include "Spi.h"
#include "Os.h"


/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 



/********************************************* Embedded Local Constants **********************************************/
#define  TMPLMONRCFGREG1READVAL_CNT_U16     (9216U)  
#define  TMPLMONRCFGREG1WRVAL_CNT_U16     	(9739U)  
#define  TMPLMONRSTSREG2READVAL_CNT_U16     (2048U) 
#define  TMPLMONRWDGMODKEYWORD1_CNT_U16     (7891U) 
#define  TMPLMONRWDGMODKEYWORD2_CNT_U16     (7731U) 
#define  TMPLMONRWDGMODKEYWORD3_CNT_U16     (7885U)   


/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTest( void );
static FUNC(void, TmplMonr_CODE) TMFInitTestCase0( void );
static FUNC(void, TmplMonr_CODE) TMFInitTestCase10To11Case15To17( void ); 
static FUNC(void, TmplMonr_CODE) TMFInitTestCase13( void ); 
static FUNC(void, TmplMonr_CODE) TMFInitTestCase18( void ); 
static FUNC(void, TmplMonr_CODE) TMFInitTestCase19( void ); 
static FUNC(void, TmplMonr_CODE) TMFInitTestCase53( void ); 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * NtcNr1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_0X001 (1U)
 *   NTCNR_0X002 (2U)
 *   NTCNR_0X003 (3U)
 *   NTCNR_0X004 (4U)
 *   NTCNR_0X005 (5U)
 *   NTCNR_0X006 (6U)
 *   NTCNR_0X007 (7U)
 *   NTCNR_0X008 (8U)
 *   NTCNR_0X009 (9U)
 *   NTCNR_0X00A (10U)
 *   NTCNR_0X00B (11U)
 *   NTCNR_0X00C (12U)
 *   NTCNR_0X00D (13U)
 *   NTCNR_0X00E (14U)
 *   NTCNR_0X00F (15U)
 *   NTCNR_0X010 (16U)
 *   NTCNR_0X011 (17U)
 *   NTCNR_0X012 (18U)
 *   NTCNR_0X013 (19U)
 *   NTCNR_0X014 (20U)
 *   NTCNR_0X015 (21U)
 *   NTCNR_0X016 (22U)
 *   NTCNR_0X017 (23U)
 *   NTCNR_0X018 (24U)
 *   NTCNR_0X019 (25U)
 *   NTCNR_0X01A (26U)
 *   NTCNR_0X01B (27U)
 *   NTCNR_0X01C (28U)
 *   NTCNR_0X01D (29U)
 *   NTCNR_0X01E (30U)
 *   NTCNR_0X01F (31U)
 *   NTCNR_0X020 (32U)
 *   NTCNR_0X021 (33U)
 *   NTCNR_0X022 (34U)
 *   NTCNR_0X023 (35U)
 *   NTCNR_0X024 (36U)
 *   NTCNR_0X025 (37U)
 *   NTCNR_0X026 (38U)
 *   NTCNR_0X027 (39U)
 *   NTCNR_0X028 (40U)
 *   NTCNR_0X029 (41U)
 *   NTCNR_0X02A (42U)
 *   NTCNR_0X02B (43U)
 *   NTCNR_0X02C (44U)
 *   NTCNR_0X02D (45U)
 *   NTCNR_0X02E (46U)
 *   NTCNR_0X02F (47U)
 *   NTCNR_0X030 (48U)
 *   NTCNR_0X031 (49U)
 *   NTCNR_0X032 (50U)
 *   NTCNR_0X033 (51U)
 *   NTCNR_0X034 (52U)
 *   NTCNR_0X035 (53U)
 *   NTCNR_0X036 (54U)
 *   NTCNR_0X037 (55U)
 *   NTCNR_0X038 (56U)
 *   NTCNR_0X039 (57U)
 *   NTCNR_0X03A (58U)
 *   NTCNR_0X03B (59U)
 *   NTCNR_0X03C (60U)
 *   NTCNR_0X03D (61U)
 *   NTCNR_0X03E (62U)
 *   NTCNR_0X03F (63U)
 *   NTCNR_0X040 (64U)
 *   NTCNR_0X041 (65U)
 *   NTCNR_0X042 (66U)
 *   NTCNR_0X043 (67U)
 *   NTCNR_0X044 (68U)
 *   NTCNR_0X045 (69U)
 *   NTCNR_0X046 (70U)
 *   NTCNR_0X047 (71U)
 *   NTCNR_0X048 (72U)
 *   NTCNR_0X049 (73U)
 *   NTCNR_0X04A (74U)
 *   NTCNR_0X04B (75U)
 *   NTCNR_0X04C (76U)
 *   NTCNR_0X04D (77U)
 *   NTCNR_0X04E (78U)
 *   NTCNR_0X04F (79U)
 *   NTCNR_0X050 (80U)
 *   NTCNR_0X051 (81U)
 *   NTCNR_0X052 (82U)
 *   NTCNR_0X053 (83U)
 *   NTCNR_0X054 (84U)
 *   NTCNR_0X055 (85U)
 *   NTCNR_0X056 (86U)
 *   NTCNR_0X057 (87U)
 *   NTCNR_0X058 (88U)
 *   NTCNR_0X059 (89U)
 *   NTCNR_0X05A (90U)
 *   NTCNR_0X05B (91U)
 *   NTCNR_0X05C (92U)
 *   NTCNR_0X05D (93U)
 *   NTCNR_0X05E (94U)
 *   NTCNR_0X05F (95U)
 *   NTCNR_0X060 (96U)
 *   NTCNR_0X061 (97U)
 *   NTCNR_0X062 (98U)
 *   NTCNR_0X063 (99U)
 *   NTCNR_0X064 (100U)
 *   NTCNR_0X065 (101U)
 *   NTCNR_0X066 (102U)
 *   NTCNR_0X067 (103U)
 *   NTCNR_0X068 (104U)
 *   NTCNR_0X069 (105U)
 *   NTCNR_0X06A (106U)
 *   NTCNR_0X06B (107U)
 *   NTCNR_0X06C (108U)
 *   NTCNR_0X06D (109U)
 *   NTCNR_0X06E (110U)
 *   NTCNR_0X06F (111U)
 *   NTCNR_0X070 (112U)
 *   NTCNR_0X071 (113U)
 *   NTCNR_0X072 (114U)
 *   NTCNR_0X073 (115U)
 *   NTCNR_0X074 (116U)
 *   NTCNR_0X075 (117U)
 *   NTCNR_0X076 (118U)
 *   NTCNR_0X077 (119U)
 *   NTCNR_0X078 (120U)
 *   NTCNR_0X079 (121U)
 *   NTCNR_0X07A (122U)
 *   NTCNR_0X07B (123U)
 *   NTCNR_0X07C (124U)
 *   NTCNR_0X07D (125U)
 *   NTCNR_0X07E (126U)
 *   NTCNR_0X07F (127U)
 *   NTCNR_0X080 (128U)
 *   NTCNR_0X081 (129U)
 *   NTCNR_0X082 (130U)
 *   NTCNR_0X083 (131U)
 *   NTCNR_0X084 (132U)
 *   NTCNR_0X085 (133U)
 *   NTCNR_0X086 (134U)
 *   NTCNR_0X087 (135U)
 *   NTCNR_0X088 (136U)
 *   NTCNR_0X089 (137U)
 *   NTCNR_0X08A (138U)
 *   NTCNR_0X08B (139U)
 *   NTCNR_0X08C (140U)
 *   NTCNR_0X08D (141U)
 *   NTCNR_0X08E (142U)
 *   NTCNR_0X08F (143U)
 *   NTCNR_0X090 (144U)
 *   NTCNR_0X091 (145U)
 *   NTCNR_0X092 (146U)
 *   NTCNR_0X093 (147U)
 *   NTCNR_0X094 (148U)
 *   NTCNR_0X095 (149U)
 *   NTCNR_0X096 (150U)
 *   NTCNR_0X097 (151U)
 *   NTCNR_0X098 (152U)
 *   NTCNR_0X099 (153U)
 *   NTCNR_0X09A (154U)
 *   NTCNR_0X09B (155U)
 *   NTCNR_0X09C (156U)
 *   NTCNR_0X09D (157U)
 *   NTCNR_0X09E (158U)
 *   NTCNR_0X09F (159U)
 *   NTCNR_0X0A0 (160U)
 *   NTCNR_0X0A1 (161U)
 *   NTCNR_0X0A2 (162U)
 *   NTCNR_0X0A3 (163U)
 *   NTCNR_0X0A4 (164U)
 *   NTCNR_0X0A5 (165U)
 *   NTCNR_0X0A6 (166U)
 *   NTCNR_0X0A7 (167U)
 *   NTCNR_0X0A8 (168U)
 *   NTCNR_0X0A9 (169U)
 *   NTCNR_0X0AA (170U)
 *   NTCNR_0X0AB (171U)
 *   NTCNR_0X0AC (172U)
 *   NTCNR_0X0AD (173U)
 *   NTCNR_0X0AE (174U)
 *   NTCNR_0X0AF (175U)
 *   NTCNR_0X0B0 (176U)
 *   NTCNR_0X0B1 (177U)
 *   NTCNR_0X0B2 (178U)
 *   NTCNR_0X0B3 (179U)
 *   NTCNR_0X0B4 (180U)
 *   NTCNR_0X0B5 (181U)
 *   NTCNR_0X0B6 (182U)
 *   NTCNR_0X0B7 (183U)
 *   NTCNR_0X0B8 (184U)
 *   NTCNR_0X0B9 (185U)
 *   NTCNR_0X0BA (186U)
 *   NTCNR_0X0BB (187U)
 *   NTCNR_0X0BC (188U)
 *   NTCNR_0X0BD (189U)
 *   NTCNR_0X0BE (190U)
 *   NTCNR_0X0BF (191U)
 *   NTCNR_0X0C0 (192U)
 *   NTCNR_0X0C1 (193U)
 *   NTCNR_0X0C2 (194U)
 *   NTCNR_0X0C3 (195U)
 *   NTCNR_0X0C4 (196U)
 *   NTCNR_0X0C5 (197U)
 *   NTCNR_0X0C6 (198U)
 *   NTCNR_0X0C7 (199U)
 *   NTCNR_0X0C8 (200U)
 *   NTCNR_0X0C9 (201U)
 *   NTCNR_0X0CA (202U)
 *   NTCNR_0X0CB (203U)
 *   NTCNR_0X0CC (204U)
 *   NTCNR_0X0CD (205U)
 *   NTCNR_0X0CE (206U)
 *   NTCNR_0X0CF (207U)
 *   NTCNR_0X0D0 (208U)
 *   NTCNR_0X0D1 (209U)
 *   NTCNR_0X0D2 (210U)
 *   NTCNR_0X0D3 (211U)
 *   NTCNR_0X0D4 (212U)
 *   NTCNR_0X0D5 (213U)
 *   NTCNR_0X0D6 (214U)
 *   NTCNR_0X0D7 (215U)
 *   NTCNR_0X0D8 (216U)
 *   NTCNR_0X0D9 (217U)
 *   NTCNR_0X0DA (218U)
 *   NTCNR_0X0DB (219U)
 *   NTCNR_0X0DC (220U)
 *   NTCNR_0X0DD (221U)
 *   NTCNR_0X0DE (222U)
 *   NTCNR_0X0DF (223U)
 *   NTCNR_0X0E0 (224U)
 *   NTCNR_0X0E1 (225U)
 *   NTCNR_0X0E2 (226U)
 *   NTCNR_0X0E3 (227U)
 *   NTCNR_0X0E4 (228U)
 *   NTCNR_0X0E5 (229U)
 *   NTCNR_0X0E6 (230U)
 *   NTCNR_0X0E7 (231U)
 *   NTCNR_0X0E8 (232U)
 *   NTCNR_0X0E9 (233U)
 *   NTCNR_0X0EA (234U)
 *   NTCNR_0X0EB (235U)
 *   NTCNR_0X0EC (236U)
 *   NTCNR_0X0ED (237U)
 *   NTCNR_0X0EE (238U)
 *   NTCNR_0X0EF (239U)
 *   NTCNR_0X0F0 (240U)
 *   NTCNR_0X0F1 (241U)
 *   NTCNR_0X0F2 (242U)
 *   NTCNR_0X0F3 (243U)
 *   NTCNR_0X0F4 (244U)
 *   NTCNR_0X0F5 (245U)
 *   NTCNR_0X0F6 (246U)
 *   NTCNR_0X0F7 (247U)
 *   NTCNR_0X0F8 (248U)
 *   NTCNR_0X0F9 (249U)
 *   NTCNR_0X0FA (250U)
 *   NTCNR_0X0FB (251U)
 *   NTCNR_0X0FC (252U)
 *   NTCNR_0X0FD (253U)
 *   NTCNR_0X0FE (254U)
 *   NTCNR_0X0FF (255U)
 *   NTCNR_0X100 (256U)
 *   NTCNR_0X101 (257U)
 *   NTCNR_0X102 (258U)
 *   NTCNR_0X103 (259U)
 *   NTCNR_0X104 (260U)
 *   NTCNR_0X105 (261U)
 *   NTCNR_0X106 (262U)
 *   NTCNR_0X107 (263U)
 *   NTCNR_0X108 (264U)
 *   NTCNR_0X109 (265U)
 *   NTCNR_0X10A (266U)
 *   NTCNR_0X10B (267U)
 *   NTCNR_0X10C (268U)
 *   NTCNR_0X10D (269U)
 *   NTCNR_0X10E (270U)
 *   NTCNR_0X10F (271U)
 *   NTCNR_0X110 (272U)
 *   NTCNR_0X111 (273U)
 *   NTCNR_0X112 (274U)
 *   NTCNR_0X113 (275U)
 *   NTCNR_0X114 (276U)
 *   NTCNR_0X115 (277U)
 *   NTCNR_0X116 (278U)
 *   NTCNR_0X117 (279U)
 *   NTCNR_0X118 (280U)
 *   NTCNR_0X119 (281U)
 *   NTCNR_0X11A (282U)
 *   NTCNR_0X11B (283U)
 *   NTCNR_0X11C (284U)
 *   NTCNR_0X11D (285U)
 *   NTCNR_0X11E (286U)
 *   NTCNR_0X11F (287U)
 *   NTCNR_0X120 (288U)
 *   NTCNR_0X121 (289U)
 *   NTCNR_0X122 (290U)
 *   NTCNR_0X123 (291U)
 *   NTCNR_0X124 (292U)
 *   NTCNR_0X125 (293U)
 *   NTCNR_0X126 (294U)
 *   NTCNR_0X127 (295U)
 *   NTCNR_0X128 (296U)
 *   NTCNR_0X129 (297U)
 *   NTCNR_0X12A (298U)
 *   NTCNR_0X12B (299U)
 *   NTCNR_0X12C (300U)
 *   NTCNR_0X12D (301U)
 *   NTCNR_0X12E (302U)
 *   NTCNR_0X12F (303U)
 *   NTCNR_0X130 (304U)
 *   NTCNR_0X131 (305U)
 *   NTCNR_0X132 (306U)
 *   NTCNR_0X133 (307U)
 *   NTCNR_0X134 (308U)
 *   NTCNR_0X135 (309U)
 *   NTCNR_0X136 (310U)
 *   NTCNR_0X137 (311U)
 *   NTCNR_0X138 (312U)
 *   NTCNR_0X139 (313U)
 *   NTCNR_0X13A (314U)
 *   NTCNR_0X13B (315U)
 *   NTCNR_0X13C (316U)
 *   NTCNR_0X13D (317U)
 *   NTCNR_0X13E (318U)
 *   NTCNR_0X13F (319U)
 *   NTCNR_0X140 (320U)
 *   NTCNR_0X141 (321U)
 *   NTCNR_0X142 (322U)
 *   NTCNR_0X143 (323U)
 *   NTCNR_0X144 (324U)
 *   NTCNR_0X145 (325U)
 *   NTCNR_0X146 (326U)
 *   NTCNR_0X147 (327U)
 *   NTCNR_0X148 (328U)
 *   NTCNR_0X149 (329U)
 *   NTCNR_0X14A (330U)
 *   NTCNR_0X14B (331U)
 *   NTCNR_0X14C (332U)
 *   NTCNR_0X14D (333U)
 *   NTCNR_0X14E (334U)
 *   NTCNR_0X14F (335U)
 *   NTCNR_0X150 (336U)
 *   NTCNR_0X151 (337U)
 *   NTCNR_0X152 (338U)
 *   NTCNR_0X153 (339U)
 *   NTCNR_0X154 (340U)
 *   NTCNR_0X155 (341U)
 *   NTCNR_0X156 (342U)
 *   NTCNR_0X157 (343U)
 *   NTCNR_0X158 (344U)
 *   NTCNR_0X159 (345U)
 *   NTCNR_0X15A (346U)
 *   NTCNR_0X15B (347U)
 *   NTCNR_0X15C (348U)
 *   NTCNR_0X15D (349U)
 *   NTCNR_0X15E (350U)
 *   NTCNR_0X15F (351U)
 *   NTCNR_0X160 (352U)
 *   NTCNR_0X161 (353U)
 *   NTCNR_0X162 (354U)
 *   NTCNR_0X163 (355U)
 *   NTCNR_0X164 (356U)
 *   NTCNR_0X165 (357U)
 *   NTCNR_0X166 (358U)
 *   NTCNR_0X167 (359U)
 *   NTCNR_0X168 (360U)
 *   NTCNR_0X169 (361U)
 *   NTCNR_0X16A (362U)
 *   NTCNR_0X16B (363U)
 *   NTCNR_0X16C (364U)
 *   NTCNR_0X16D (365U)
 *   NTCNR_0X16E (366U)
 *   NTCNR_0X16F (367U)
 *   NTCNR_0X170 (368U)
 *   NTCNR_0X171 (369U)
 *   NTCNR_0X172 (370U)
 *   NTCNR_0X173 (371U)
 *   NTCNR_0X174 (372U)
 *   NTCNR_0X175 (373U)
 *   NTCNR_0X176 (374U)
 *   NTCNR_0X177 (375U)
 *   NTCNR_0X178 (376U)
 *   NTCNR_0X179 (377U)
 *   NTCNR_0X17A (378U)
 *   NTCNR_0X17B (379U)
 *   NTCNR_0X17C (380U)
 *   NTCNR_0X17D (381U)
 *   NTCNR_0X17E (382U)
 *   NTCNR_0X17F (383U)
 *   NTCNR_0X180 (384U)
 *   NTCNR_0X181 (385U)
 *   NTCNR_0X182 (386U)
 *   NTCNR_0X183 (387U)
 *   NTCNR_0X184 (388U)
 *   NTCNR_0X185 (389U)
 *   NTCNR_0X186 (390U)
 *   NTCNR_0X187 (391U)
 *   NTCNR_0X188 (392U)
 *   NTCNR_0X189 (393U)
 *   NTCNR_0X18A (394U)
 *   NTCNR_0X18B (395U)
 *   NTCNR_0X18C (396U)
 *   NTCNR_0X18D (397U)
 *   NTCNR_0X18E (398U)
 *   NTCNR_0X18F (399U)
 *   NTCNR_0X190 (400U)
 *   NTCNR_0X191 (401U)
 *   NTCNR_0X192 (402U)
 *   NTCNR_0X193 (403U)
 *   NTCNR_0X194 (404U)
 *   NTCNR_0X195 (405U)
 *   NTCNR_0X196 (406U)
 *   NTCNR_0X197 (407U)
 *   NTCNR_0X198 (408U)
 *   NTCNR_0X199 (409U)
 *   NTCNR_0X19A (410U)
 *   NTCNR_0X19B (411U)
 *   NTCNR_0X19C (412U)
 *   NTCNR_0X19D (413U)
 *   NTCNR_0X19E (414U)
 *   NTCNR_0X19F (415U)
 *   NTCNR_0X1A0 (416U)
 *   NTCNR_0X1A1 (417U)
 *   NTCNR_0X1A2 (418U)
 *   NTCNR_0X1A3 (419U)
 *   NTCNR_0X1A4 (420U)
 *   NTCNR_0X1A5 (421U)
 *   NTCNR_0X1A6 (422U)
 *   NTCNR_0X1A7 (423U)
 *   NTCNR_0X1A8 (424U)
 *   NTCNR_0X1A9 (425U)
 *   NTCNR_0X1AA (426U)
 *   NTCNR_0X1AB (427U)
 *   NTCNR_0X1AC (428U)
 *   NTCNR_0X1AD (429U)
 *   NTCNR_0X1AE (430U)
 *   NTCNR_0X1AF (431U)
 *   NTCNR_0X1B0 (432U)
 *   NTCNR_0X1B1 (433U)
 *   NTCNR_0X1B2 (434U)
 *   NTCNR_0X1B3 (435U)
 *   NTCNR_0X1B4 (436U)
 *   NTCNR_0X1B5 (437U)
 *   NTCNR_0X1B6 (438U)
 *   NTCNR_0X1B7 (439U)
 *   NTCNR_0X1B8 (440U)
 *   NTCNR_0X1B9 (441U)
 *   NTCNR_0X1BA (442U)
 *   NTCNR_0X1BB (443U)
 *   NTCNR_0X1BC (444U)
 *   NTCNR_0X1BD (445U)
 *   NTCNR_0X1BE (446U)
 *   NTCNR_0X1BF (447U)
 *   NTCNR_0X1C0 (448U)
 *   NTCNR_0X1C1 (449U)
 *   NTCNR_0X1C2 (450U)
 *   NTCNR_0X1C3 (451U)
 *   NTCNR_0X1C4 (452U)
 *   NTCNR_0X1C5 (453U)
 *   NTCNR_0X1C6 (454U)
 *   NTCNR_0X1C7 (455U)
 *   NTCNR_0X1C8 (456U)
 *   NTCNR_0X1C9 (457U)
 *   NTCNR_0X1CA (458U)
 *   NTCNR_0X1CB (459U)
 *   NTCNR_0X1CC (460U)
 *   NTCNR_0X1CD (461U)
 *   NTCNR_0X1CE (462U)
 *   NTCNR_0X1CF (463U)
 *   NTCNR_0X1D0 (464U)
 *   NTCNR_0X1D1 (465U)
 *   NTCNR_0X1D2 (466U)
 *   NTCNR_0X1D3 (467U)
 *   NTCNR_0X1D4 (468U)
 *   NTCNR_0X1D5 (469U)
 *   NTCNR_0X1D6 (470U)
 *   NTCNR_0X1D7 (471U)
 *   NTCNR_0X1D8 (472U)
 *   NTCNR_0X1D9 (473U)
 *   NTCNR_0X1DA (474U)
 *   NTCNR_0X1DB (475U)
 *   NTCNR_0X1DC (476U)
 *   NTCNR_0X1DD (477U)
 *   NTCNR_0X1DE (478U)
 *   NTCNR_0X1DF (479U)
 *   NTCNR_0X1E0 (480U)
 *   NTCNR_0X1E1 (481U)
 *   NTCNR_0X1E2 (482U)
 *   NTCNR_0X1E3 (483U)
 *   NTCNR_0X1E4 (484U)
 *   NTCNR_0X1E5 (485U)
 *   NTCNR_0X1E6 (486U)
 *   NTCNR_0X1E7 (487U)
 *   NTCNR_0X1E8 (488U)
 *   NTCNR_0X1E9 (489U)
 *   NTCNR_0X1EA (490U)
 *   NTCNR_0X1EB (491U)
 *   NTCNR_0X1EC (492U)
 *   NTCNR_0X1ED (493U)
 *   NTCNR_0X1EE (494U)
 *   NTCNR_0X1EF (495U)
 *   NTCNR_0X1F0 (496U)
 *   NTCNR_0X1F1 (497U)
 *   NTCNR_0X1F2 (498U)
 *   NTCNR_0X1F3 (499U)
 *   NTCNR_0X1F4 (500U)
 *   NTCNR_0X1F5 (501U)
 *   NTCNR_0X1F6 (502U)
 *   NTCNR_0X1F7 (503U)
 *   NTCNR_0X1F8 (504U)
 *   NTCNR_0X1F9 (505U)
 *   NTCNR_0X1FA (506U)
 *   NTCNR_0X1FB (507U)
 *   NTCNR_0X1FC (508U)
 *   NTCNR_0X1FD (509U)
 *   NTCNR_0X1FE (510U)
 *   NTCNR_0X1FF (511U)
 * NtcSts1: Enumeration of integer in interval [0...255] with enumerators
 *   NTCSTS_PASSD (0U)
 *   NTCSTS_FAILD (1U)
 *   NTCSTS_PREPASSD (2U)
 *   NTCSTS_PREFAILD (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_TmplMonrIninCntr(void)
 *   uint8 *Rte_Pim_TmplMonrNtc40PrmByte(void)
 *   uint8 *Rte_Pim_TmplMonrWdgRstrtCnt(void)
 *   boolean *Rte_Pim_TmplMonrIninTestCmplFlg(void)
 *   boolean *Rte_Pim_TmplMonrSpiReadWrOrderFlg1(void)
 *   boolean *Rte_Pim_TmplMonrSpiReadWrOrderFlg2(void)
 *
 *********************************************************************************************************************/


#define TmplMonr_START_SEC_CODE
#include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data)
 *
 *********************************************************************************************************************/

FUNC(void, TmplMonr_CODE) TmplMonrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TmplMonrInit1
 *********************************************************************************************************************/
 
	/* Reset all of the PIMs to zero */
	*Rte_Pim_TmplMonrIninCntr() = 0U; /* REQ: ES005A #169 I */
	*Rte_Pim_TmplMonrNtc40PrmByte() = 0U;
	*Rte_Pim_TmplMonrWdgRstrtCnt() = 0U;
	*Rte_Pim_TmplMonrIninTestCmplFlg() = FALSE;
	*Rte_Pim_TmplMonrSpiReadWrOrderFlg1() = FALSE;
	*Rte_Pim_TmplMonrSpiReadWrOrderFlg2() = FALSE;
	
	/* Write module o/p */
	(void) Rte_Write_TmplMonrIninTestCmpl_Logl( FALSE );
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper(boolean *PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, TmplMonr_CODE) TmplMonrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TmplMonrPer1
 *********************************************************************************************************************/

	/* Note: TmplMonrPer1() should be scheduled at the start of 2ms task and TmplMonrPer2() at the end of the same 
	         MPU that the TmplMonrPer1() runs. */
 
	/* REQ: ES005A #29 I */  /* REQ: ES005A #104 I */
 
	/* Temporary variables */
	VAR(uint8,   AUTOMATIC)  StrtUpSt_Cnt_T_u08;	
	VAR(boolean, AUTOMATIC)  PwrOutpEnaFb_Cnt_T_logl; 
	VAR(uint16,  AUTOMATIC)  CmnSpiTxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  TmplMonrStsReg2ReadVal_Cnt_T_u16;
	
	
	/* Read module input */
	(void) Rte_Read_StrtUpSt_Val( &StrtUpSt_Cnt_T_u08 ); /* REQ: ES005A #106 I */

	
	/* REQ: ES005A #108 I */
	if( *Rte_Pim_TmplMonrIninTestCmplFlg() == TRUE )
	{	
		/*** TMF Run: Should come here after the TmplMonr initialization is completed and regardless the system is in ENABLE or DISABLE or OFF state ***/
		
		/* REQ: ES005A #168 I */  /* REQ: ES005A #124 I */ /* REQ: ES005A #125 I */
		
		/* Set GPIO TmplMonrWdg pin to High */
		(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_HIGH );
		
		/* Get the pin state of  POE */
		(void) Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper( &PwrOutpEnaFb_Cnt_T_logl ); /* REQ: ES005A #96 I */ /* REQ: ES005A #92 I */
		
		if( PwrOutpEnaFb_Cnt_T_logl == STD_HIGH )
		{
			/*** Normal Condition ***/
			
			/* REQ: ES005A #166 I */
			
			(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X041, 0U, NTCSTS_PASSD, 0U );
			
			*Rte_Pim_TmplMonrSpiReadWrOrderFlg2() = FALSE;
			
			/* ENDREQ: ES005A #166 */
		}
		else
		{
			/*** Fault Condition - WD Run Fault ***/
			
			/* REQ: ES005A #165 I */
			
			if( *Rte_Pim_TmplMonrSpiReadWrOrderFlg2() == FALSE )
			{
				/* Send spi read command to PwrSply IC */
				CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRSTSREG2READVAL_CNT_U16 );
				(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh1, &CmnSpiTxBuf_Cnt_T_u16 );
				(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq1 );
				
				*Rte_Pim_TmplMonrSpiReadWrOrderFlg2() = TRUE;
			}
			else
			{
				/* Read spi receive buffer */
				(void) Spi_ReadIB( SpiConf_SpiChannel_TmplMonrCh1, &TmplMonrStsReg2ReadVal_Cnt_T_u16 );
				
				if( (TmplMonrStsReg2ReadVal_Cnt_T_u16 & 0x0007U) != 0x0007U )
				{
					/*** WD_STATE = NOT Watchdog (7) ***/
					
					(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X041, 2U, NTCSTS_FAILD, 0U );
					
				}
				else
				{
					/*** WD_STATE = Watchdog (7) ***/
					
					(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X041, 1U, NTCSTS_FAILD, 0U ); /* REQ: ES005A #159 I */
				}
				
				*Rte_Pim_TmplMonrSpiReadWrOrderFlg2() = FALSE;
			}
			
			/* ENDREQ: ES005A #165 */
		}
		/* ENDREQ: ES005A #168 */ /* ENDREQ: ES005A #124 */ /* ENDREQ: ES005A #125 */
	}
	else if( StrtUpSt_Cnt_T_u08 == ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 )
	{
		/*** TMF Init Test: Should come here during the TmplMonr initialization. ***/
		
		/* REQ: ES005A #32 I */
		
		TMFInitTest();
		
		/* ENDREQ: ES005A #32 */
	}
	else
	{
		/*** Should come here after cycling the ignition and before start the TmplMonr initialization. ***/
		
		/* Do nothing */
	
	}
	/* ENDREQ: ES005A #108 */
	
	/* ENDREQ: ES005A #29 */ /* ENDREQ: ES005A #104 */
	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, TmplMonr_CODE) TmplMonrPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TmplMonrPer2
 *********************************************************************************************************************/

	/* Note: TmplMonrPer1() should be scheduled at the start of 2ms task and TmplMonrPer2() at the end of the same 
	MPU that the TmplMonrPer1() runs. */

	VAR(uint8,AUTOMATIC)  StrtUpSt_Cnt_T_u08;
	VAR(boolean,AUTOMATIC)  DiagcStsIvtr1Inactv_Cnt_T_Logl;
	VAR(boolean,AUTOMATIC)  DiagcStsIvtr2Inactv_Cnt_T_Logl;

	(void)Rte_Read_StrtUpSt_Val( &StrtUpSt_Cnt_T_u08 );
	(void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_Logl);
	(void)Rte_Read_DiagcStsIvtr2Inactv_Logl(&DiagcStsIvtr2Inactv_Cnt_T_Logl);

	/* Set the GPIO SysFlt2A pin */
	if((StrtUpSt_Cnt_T_u08 >= ELECGLBPRM_STRTUPSTDI_CNT_U08)||(StrtUpSt_Cnt_T_u08 < ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08)||(DiagcStsIvtr1Inactv_Cnt_T_Logl == TRUE))
	{
		(void)Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(STD_HIGH);
	}
	else
	{
		(void)Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(STD_LOW);
	}

	/* Set the GPIO SysFlt2B pin */
	if((StrtUpSt_Cnt_T_u08 >= ELECGLBPRM_STRTUPSTDI_CNT_U08)||(StrtUpSt_Cnt_T_u08 < ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08)||(DiagcStsIvtr2Inactv_Cnt_T_Logl == TRUE))
	{
		(void)Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(STD_HIGH);
	}
	else
	{
		(void)Rte_Call_IoHwAb_SetGpioSysFlt2B_Oper(STD_LOW);
	}

	/* REQ: ES005A #29 I */  /* REQ: ES005A #104 I */
	
	/* Reset GPIO TmplMonrWdg pin to Low */
	(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); 
	
	/* ENDREQ: ES005A #29 */ /* ENDREQ: ES005A #104 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TmplMonr_STOP_SEC_CODE
#include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define TmplMonr_START_SEC_CODE
#include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
* Name:        TMFInitTest
* Description: Temporal Monitor Initialization Test
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTest( void )
{
	VAR(uint16,  AUTOMATIC)  CmnSpiTxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  CmnSpiRxBuf_Cnt_T_u16; 
	
	
	switch( *Rte_Pim_TmplMonrIninCntr() )
	{
		case 0U:
			TMFInitTestCase0();  /* REQ: ES005A #186 I */
		break;
		
		
		/* REQ: ES005A #107 I */
		case 1U: case 2U: case 3U: case 4U: case 5U: case 6U: case 7U: case 8U: case 9U: 
			/* Set GPIO TmplMonrWdg pin to High */
			(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_HIGH ); /* REQ: ES005A #104 I */
			*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
		break;
		/* ENDREQ: ES005A #107 */
		
		
		/* REQ: ES005A #107 I */ /* REQ: ES005A #163 I */ /* REQ: ES005A #172 I */ /* REQ: ES005A #158 I */
		case 10U: case 11U: case 15U: case 16U: case 17U:
			TMFInitTestCase10To11Case15To17();
		break;
		/* ENDREQ: ES005A #107 */ /* ENDREQ: ES005A #163 */ /* ENDREQ: ES005A #172 */ /* ENDREQ: ES005A #158 */
		
		
		/* REQ: ES005A #170 I */ /* REQ: ES005A #167 I */
		case 12U:  
			/* Reset GPIO TmplMonrWdg pin to Low */
			(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
			/* Set nErr pin to Low */
			(void) Rte_Call_CtrlErrOut_Oper( STD_LOW, TRIGREG_MSTANDCHKR ); /* REQ: ES005A #93 I */
			*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
		break;
		/* ENDREQ: ES005A #170 */ /* ENDREQ: ES005A #167 */
		
		
		/* REQ: ES005A #170 I */ /* REQ: ES005A #167 I */ /* REQ: ES005A #171 I */
		case 13U:  
			TMFInitTestCase13();
		break;
		/* ENDREQ: ES005A #170 */ /* ENDREQ: ES005A #167 */ /* ENDREQ: ES005A #171 */
		
		
		/* REQ: ES005A #107 I */
		case 14U:		
			/* Set nErr pin to High */
			(void) Rte_Call_CtrlErrOut_Oper( STD_HIGH, TRIGREG_MSTANDCHKR ); /* REQ: ES005A #93 I */
			/* Reset GPIO TmplMonrWdg pin to Low */
			(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
			*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
		break;
		/* ENDREQ: ES005A #107 */
		
		
		/* REQ: ES005A #170 I */ /* REQ: ES005A #173 I */
		case 18U:  
			TMFInitTestCase18();
		break;
		/* ENDREQ: ES005A #170 */ /* ENDREQ: ES005A #173 */ 
		
		
		case 19U:  
			TMFInitTestCase19();
		break;
		
		
		case 20U:  
			/* Send spi read command to PwrSply IC */
			CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRCFGREG1READVAL_CNT_U16 );
			(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh3, &CmnSpiTxBuf_Cnt_T_u16 );
			(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq3 );
			
			/* Reset GPIO TmplMonrWdg pin to Low */
			(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
			*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
		break;
		
		
		case 21U: 
			/* Read spi receive buffer */
			(void) Spi_ReadIB( SpiConf_SpiChannel_TmplMonrCh3, &CmnSpiRxBuf_Cnt_T_u16 );
			
			if( (CmnSpiRxBuf_Cnt_T_u16 & 0x000FU) != 11U )
			{	/* Edge/Valid Cnts are NOT Correct */
				*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 32U; /* REQ: ES005A #176 I */
			}
		
			/* Reset GPIO TmplMonrWdg pin to Low */
			(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
			*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
		break;
		
		
		/* REQ: ES005A #168 I */ /* REQ: ES005A #124 I */
		case 22U: case 23U: case 24U: case 25U: case 26U: case 27U: case 28U: case 29U: case 30U: 
		case 31U: case 32U: case 33U: case 34U: case 35U: case 36U: case 37U: case 38U: case 39U: case 40U: 
		case 41U: case 42U: case 43U: case 44U: case 45U: case 46U: case 47U: case 48U: case 49U: case 50U: 
		case 51U: case 52U: 
			/* Set GPIO TmplMonrWdg pin to High */
			(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_HIGH ); /* REQ: ES005A #104 I */
			*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
		break;
		/* ENDREQ: ES005A #168 */ /* ENDREQ: ES005A #124 */  
		
		
		/* REQ: ES005A #168 I */ /* REQ: ES005A #124 I */ /* REQ: ES005A #164 I */ /* REQ: ES005A #175 I */ /* REQ: ES005A #178 I */
		case 53U:  
			TMFInitTestCase53();
		break;
		/* ENDREQ: ES005A #168 */ /* ENDREQ: ES005A #124 */ /* ENDREQ: ES005A #164 */ /* ENDREQ: ES005A #175 */ /* ENDREQ: ES005A #178 */
		
		
		default :
			/* Technically this is unreachable place */
		break;
	}
	
}





/**********************************************************************************************************************
* Name:        TMFInitTestCase0
* Description: Temporal Monitor Initialization Test Case 0
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTestCase0( void )
{
	VAR(uint16,  AUTOMATIC)  CmnSpiTxBuf_Cnt_T_u16; 
	
	
	/*** START: Send WatchDog restart command through spi ***/
	/* Transmit "Watchdog Mode Key: Word1" command */
	CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRWDGMODKEYWORD1_CNT_U16 );
	(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh1, &CmnSpiTxBuf_Cnt_T_u16 );
	(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq1 );
			
	/* Transmit "Watchdog Mode Key: Word2" command */
	CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRWDGMODKEYWORD2_CNT_U16 );
	(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh2, &CmnSpiTxBuf_Cnt_T_u16 );
	(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq2 );
			
	/* Transmit "Watchdog Mode Key: Word3" command */
	CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRWDGMODKEYWORD3_CNT_U16 );
	(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh3, &CmnSpiTxBuf_Cnt_T_u16 );
	(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq3 );
	/*** END: Send WatchDog restart command through spi ***/
	
	
	(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW );
	*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
	
}


/**********************************************************************************************************************
* Name:        TMFInitTestCase10To11Case15To17
* Description: Temporal Monitor Initialization Test Case 10, 11, 15, 16, 17
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTestCase10To11Case15To17( void )
{
	VAR(boolean, AUTOMATIC)  PwrOutpEnaFb_Cnt_T_logl; 
	
	if( *Rte_Pim_TmplMonrIninCntr() < 17U )
	{
	
		/* Get the pin state of  POE */
		(void) Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper( &PwrOutpEnaFb_Cnt_T_logl ); /* REQ: ES005A #96 I */ /* REQ: ES005A #92 I */
			
		if( PwrOutpEnaFb_Cnt_T_logl != STD_HIGH )
		{	/* Fault Condition - WD Signal */
				
			if( *Rte_Pim_TmplMonrIninCntr() > 14U )
			{
				*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 4U;
			}
			else
			{
				*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 1U;
			}
		}
	
	}
			
	/* Set nErr pin to High */
	(void) Rte_Call_CtrlErrOut_Oper( STD_HIGH, TRIGREG_MSTANDCHKR ); /* REQ: ES005A #93 I */
	/* Reset GPIO TmplMonrWdg pin to Low */
	(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
	*Rte_Pim_TmplMonrIninCntr() = (*Rte_Pim_TmplMonrIninCntr() + 1U) & 0xFFU; /* Masking is added to fix the BugFinder numerical defect */
}



/**********************************************************************************************************************
* Name:        TMFInitTestCase13
* Description: Temporal Monitor Initialization Test Case 13
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTestCase13( void )
{
	VAR(boolean, AUTOMATIC)  PwrOutpEnaFb_Cnt_T_logl;
	
	/* Get the pin state of  POE */
	(void) Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper( &PwrOutpEnaFb_Cnt_T_logl ); /* REQ: ES005A #96 I */ /* REQ: ES005A #92 I */
			
	if( PwrOutpEnaFb_Cnt_T_logl != STD_LOW )
	{	/* Fault Condition - AND Gate */
		*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 2U;
	}
			
	/* Reset GPIO TmplMonrWdg pin to Low */
	(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
	/* Set nErr pin to Low */
	(void) Rte_Call_CtrlErrOut_Oper( STD_LOW, TRIGREG_MSTANDCHKR ); /* REQ: ES005A #93 I */
	*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
}



/**********************************************************************************************************************
* Name:        TMFInitTestCase18
* Description: Temporal Monitor Initialization Test Case 18
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTestCase18( void )
{
	VAR(boolean, AUTOMATIC)  PwrOutpEnaFb_Cnt_T_logl; 
	VAR(uint16,  AUTOMATIC)  CmnSpiTxBuf_Cnt_T_u16;
	
	
	/* Get the pin state of  POE */
	(void) Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper( &PwrOutpEnaFb_Cnt_T_logl ); /* REQ: ES005A #96 I */ /* REQ: ES005A #92 I */
			
	if( PwrOutpEnaFb_Cnt_T_logl != STD_LOW )
	{	/* Fault Condition - WD */
		*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 8U;
	}
		
	/* Send spi read command to PwrSply IC */
	CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRSTSREG2READVAL_CNT_U16 );
	(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh1, &CmnSpiTxBuf_Cnt_T_u16 );
	(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq1 );
			
	/* Reset GPIO TmplMonrWdg pin to Low */
	(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
	*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
}



/**********************************************************************************************************************
* Name:        TMFInitTestCase19
* Description: Temporal Monitor Initialization Test Case 19
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTestCase19( void )
{
	VAR(uint16,  AUTOMATIC)  CmnSpiTxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  CmnSpiRxBuf_Cnt_T_u16; 
	
	
	/* Read spi receive buffer */
	(void) Spi_ReadIB( SpiConf_SpiChannel_TmplMonrCh1, &CmnSpiRxBuf_Cnt_T_u16 );
			
	if( ((CmnSpiRxBuf_Cnt_T_u16 & 0x0007U) >= 3U) && ((CmnSpiRxBuf_Cnt_T_u16 & 0x0007U) <= 6U) )
	{	/* WD_STATE = 3 ~ 6 */
		/* Send spi write command to PwrSply IC */
		CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRCFGREG1WRVAL_CNT_U16 );
		(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh2, &CmnSpiTxBuf_Cnt_T_u16 );
		(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq2 );
				
		*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
	}
	else
	{	/* WD_STATE = 0 ~ 2, 7 */
		
		/* REQ: ES005A #177 I */
				
		if( *Rte_Pim_TmplMonrWdgRstrtCnt() <= 1U )
		{	/* WD RESTART - Two Try */
					
			*Rte_Pim_TmplMonrWdgRstrtCnt() = *Rte_Pim_TmplMonrWdgRstrtCnt() + 1U;
					
			/* Clear the NTC40PrmByte */
			*Rte_Pim_TmplMonrNtc40PrmByte() = 0U;
					
			/* Reset the TmplMonrIninCntr to restart the initialization test */
			*Rte_Pim_TmplMonrIninCntr() = 0U;
		}
		else
		{	/* Jump to Stage 50 */
			
			*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 16U;
			*Rte_Pim_TmplMonrIninCntr() = 53U;
		}
				
		/* ENDREQ: ES005A #177 */ 
	}
			
	/* Reset GPIO TmplMonrWdg pin to Low */
	(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_LOW ); /* REQ: ES005A #104 I */
}



/**********************************************************************************************************************
* Name:        TMFInitTestCase53
* Description: Temporal Monitor Initialization Test Case 53
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, TmplMonr_CODE) TMFInitTestCase53( void )
{
	VAR(boolean, AUTOMATIC)  PwrOutpEnaFb_Cnt_T_logl; 
	VAR(uint16,  AUTOMATIC)  CmnSpiTxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  CmnSpiRxBuf_Cnt_T_u16; 
	
	/* Get the pin state of  POE */
	(void) Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper( &PwrOutpEnaFb_Cnt_T_logl ); /* REQ: ES005A #96 I */ /* REQ: ES005A #92 I */
			
	if( PwrOutpEnaFb_Cnt_T_logl == STD_HIGH )
	{	/* Normal Condition */
		
		/* Write module o/p */
		(void) Rte_Write_TmplMonrIninTestCmpl_Logl( TRUE ); /* REQ: ES005A #97 I */
		*Rte_Pim_TmplMonrIninTestCmplFlg() = TRUE;
		*Rte_Pim_TmplMonrSpiReadWrOrderFlg1() = FALSE;
		*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
	}
	else
	{	/* Fault Condition - WD Run Fault */
		
		if( *Rte_Pim_TmplMonrSpiReadWrOrderFlg1() == FALSE )
		{
			/* Send spi read command to PwrSply IC */
			CmnSpiTxBuf_Cnt_T_u16 = (uint16)( TMPLMONRSTSREG2READVAL_CNT_U16 );
			(void) Spi_WriteIB( SpiConf_SpiChannel_TmplMonrCh1, &CmnSpiTxBuf_Cnt_T_u16 );
			(void) Call_Spi_AsyncTransmit( SpiConf_SpiSequence_TmplMonrSeq1 );
					
			*Rte_Pim_TmplMonrSpiReadWrOrderFlg1() = TRUE;
		}
		else
		{
			/* Read spi receive buffer */
			(void) Spi_ReadIB( SpiConf_SpiChannel_TmplMonrCh1, &CmnSpiRxBuf_Cnt_T_u16 );
					
			if( (CmnSpiRxBuf_Cnt_T_u16 & 0x0007U) != 7U )
			{	/* WD_STATE = NOT Watchdog (~=7) */
				*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 64U;
			}
			else
			{	/* WD_STATE = Watchdog (7) */
				*Rte_Pim_TmplMonrNtc40PrmByte() = *Rte_Pim_TmplMonrNtc40PrmByte() | 128U;
			}
					
			/* Write module o/p */
			(void) Rte_Write_TmplMonrIninTestCmpl_Logl( TRUE ); /* REQ: ES005A #97 I */
			*Rte_Pim_TmplMonrIninTestCmplFlg() = TRUE;
			*Rte_Pim_TmplMonrSpiReadWrOrderFlg1() = FALSE;
			*Rte_Pim_TmplMonrIninCntr() = *Rte_Pim_TmplMonrIninCntr() + 1U;
		}
				
	}
	
	if( *Rte_Pim_TmplMonrIninTestCmplFlg() == TRUE )
	{
		if( *Rte_Pim_TmplMonrNtc40PrmByte() == 0U )
		{
			(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X040, 0U, NTCSTS_PASSD, 0U );
		}
		else
		{
			(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X040, *Rte_Pim_TmplMonrNtc40PrmByte(), NTCSTS_FAILD, 0U );
		}
	}
		
	/* Set GPIO TmplMonrWdg pin to High */
	(void) Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper( STD_HIGH ); /* REQ: ES005A #104 I */
}



#define TmplMonr_STOP_SEC_CODE
#include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
