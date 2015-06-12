/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckMandatoryVariablesAndMA_H_
#define _CheckMandatoryVariablesAndMA_H_

#include "kcg_types.h"
#include "CheckIfPacket15IsPresent_SubFunctions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckMandatoryVariablesAndMA::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckIfPacket15IsPresent_SubFunctions /* 5 */ Context_5;
  outC_CheckIfPacket15IsPresent_SubFunctions /* 3 */ Context_3;
  outC_CheckIfPacket15IsPresent_SubFunctions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else */ _9_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else */ _7_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else */ _5_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else */ _3_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else */ _4_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else */ _6_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else */ _8_else_clock_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L18 */ _L18_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L17 */ _L17_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L16 */ _L16_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L15 */ _L15_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L6 */ _L6_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L9 */ _L9_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L10 */ _L10_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L11 */ _L11_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L12 */ _L12_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L13 */ _L13_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L14 */ _L14_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::then::_L2 */ _L2_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L6 */ _L621_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L7 */ _L722_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L16 */ _L1623_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L15 */ _L1524_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L14 */ _L1425_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L13 */ _L1326_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L12 */ _L1227_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L11 */ _L1128_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L10 */ _L1029_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L9 */ _L930_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L8 */ _L831_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L17 */ _L1732_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L18 */ _L1833_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L19 */ _L19_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::then::_L20 */ _L20_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L52 */ _L52_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L38 */ _L38_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L39 */ _L39_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L41 */ _L41_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L50 */ _L50_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L49 */ _L49_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L48 */ _L48_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L47 */ _L47_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L46 */ _L46_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L45 */ _L45_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L44 */ _L44_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L43 */ _L43_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::then::_L42 */ _L42_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L11 */ _L1163_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L20 */ _L2064_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L19 */ _L1965_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L18 */ _L1866_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L17 */ _L1767_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L16 */ _L1668_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L15 */ _L1569_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L14 */ _L1470_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L13 */ _L1371_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L12 */ _L1272_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L21 */ _L2173_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::then::_L22 */ _L22_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L20 */ _L2087_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L17 */ _L1788_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L10 */ _L1089_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L9 */ _L990_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L8 */ _L891_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L7 */ _L792_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L6 */ _L693_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L5 */ _L594_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L4 */ _L495_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */ _L396_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */ _L297_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L11 */ _L1198_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L12 */ _L1299_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L13 */ _L13100_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L14 */ _L14101_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L15 */ _L15102_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::then::_L16 */ _L16103_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L7 */ _L7108_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L8 */ _L8109_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L17 */ _L17110_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L16 */ _L16111_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L15 */ _L15112_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L14 */ _L14113_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L13 */ _L13114_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L12 */ _L12115_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L11 */ _L11116_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L10 */ _L10117_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L9 */ _L9118_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L18 */ _L18119_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else */ else_clock_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */ _L2107_IfBlock1;
  M_ACK /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L3 */ _L3106_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L4 */ _L4105_IfBlock1;
  M_ACK /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L5 */ _L5104_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L14 */ _L1486_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L13 */ _L1385_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L4 */ _L484_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L5 */ _L583_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L6 */ _L682_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L7 */ _L781_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L8 */ _L880_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L9 */ _L979_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L10 */ _L1078_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L11 */ _L1177_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L12 */ _L1276_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L2 */ _L275_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::then::_L15 */ _L1574_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L14 */ _L1462_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L13 */ _L1361_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L4 */ _L460_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L5 */ _L559_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L6 */ _L658_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L7 */ _L757_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L8 */ _L856_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L9 */ _L955_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L10 */ _L1054_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L11 */ _L1153_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L12 */ _L1252_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L3 */ _L351_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::then::_L2 */ _L250_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L14 */ _L1449_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L13 */ _L1348_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L3 */ _L347_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L4 */ _L446_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L5 */ _L545_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L6 */ _L644_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L7 */ _L743_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L8 */ _L842_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L9 */ _L941_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L10 */ _L1040_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L11 */ _L1139_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L2 */ _L238_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L16 */ _L1637_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L18 */ _L1836_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L19 */ _L1935_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L20 */ _L2034_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::then::_L21 */ _L21_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L12 */ _L1220_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L4 */ _L419_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L6 */ _L618_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L7 */ _L717_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L8 */ _L816_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L9 */ _L915_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L10 */ _L1014_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L11 */ _L1113_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L2 */ _L212_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L13 */ _L1311_IfBlock1;
  kcg_bool /* CheckMandatoryVariablesAndMA::IfBlock1::else::then::_L14 */ _L1410_IfBlock1;
  kcg_int /* CheckMandatoryVariablesAndMA::nid_message */ nid_message;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::radioMetadata */ radioMetadata;
  ReceivedMessage_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::_L1 */ _L1;
  NID_MESSAGE /* CheckMandatoryVariablesAndMA::_L2 */ _L2;
  RadioMetadata_T_Common_Types_Pkg /* CheckMandatoryVariablesAndMA::_L3 */ _L3;
} outC_CheckMandatoryVariablesAndMA;

/* ===========  node initialization and cycle functions  =========== */
/* CheckMandatoryVariablesAndMA */
extern void CheckMandatoryVariablesAndMA(
  /* CheckMandatoryVariablesAndMA::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckMandatoryVariablesAndMA *outC);

extern void CheckMandatoryVariablesAndMA_reset(
  outC_CheckMandatoryVariablesAndMA *outC);

#endif /* _CheckMandatoryVariablesAndMA_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckMandatoryVariablesAndMA.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

