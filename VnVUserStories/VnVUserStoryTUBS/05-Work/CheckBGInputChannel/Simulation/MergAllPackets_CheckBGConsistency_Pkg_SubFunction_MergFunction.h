/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::go_on */ go_on;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ telegram_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ _2_Context_1;
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ _1_Context_1;
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ Context_1;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 3 */ Context_3;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 4 */ Context_4;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else */ _3_else_clock_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L4 */ _L4_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L3 */ _L3_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L2 */ _L2_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::then::_L1 */ _L1_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L20 */ _L20_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L19 */ _L19_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L18 */ _L18_IfBlock1;
  array_int_500 /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L17 */ _L17_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L16 */ _L16_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L15 */ _L15_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L14 */ _L14_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L13 */ _L13_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L11 */ _L11_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L12 */ _L12_IfBlock1;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L10 */ _L10_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L9 */ _L9_IfBlock1;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L8 */ _L8_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L4 */ _L47_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L3 */ _L38_IfBlock1;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::then::_L2 */ _L29_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::else::else::_L1 */ _L110_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L4 */ _L46_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L3 */ _L35_IfBlock1;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::IfBlock1::else::then::_L2 */ _L24_IfBlock1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::mDup1 */ mDup1;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::mDup2 */ mDup2;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::diff */ diff;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::nominal */ nominal;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::revers */ revers;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::metadata */ metadata;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::packetlist */ packetlist;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L10 */ _L10;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L54 */ _L54;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L53 */ _L53;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L52 */ _L52;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L51 */ _L51;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L50 */ _L50;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L49 */ _L49;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L48 */ _L48;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L47 */ _L47;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L46 */ _L46;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L45 */ _L45;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L44 */ _L44;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L43 */ _L43;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L42 */ _L42;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L41 */ _L41;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L68 */ _L68;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L67 */ _L67;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L66 */ _L66;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L65 */ _L65;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L64 */ _L64;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L63 */ _L63;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L62 */ _L62;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L61 */ _L61;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L60 */ _L60;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L59 */ _L59;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L58 */ _L58;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L72 */ _L72;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L71 */ _L71;
  CompressedPackets_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L70 */ _L70;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L69 */ _L69;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::_L73 */ _L73;
} outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets */
extern void MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegramACC */Telegram_T_BG_Types_Pkg *telegramACC,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram */Telegram_T_BG_Types_Pkg *telegram,
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void MergAllPackets_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

