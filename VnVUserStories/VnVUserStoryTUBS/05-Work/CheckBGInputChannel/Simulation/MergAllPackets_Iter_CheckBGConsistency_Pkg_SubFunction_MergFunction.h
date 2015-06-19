/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramout */ telegramout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ Context_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L1 */ _L1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L3 */ _L3;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L4 */ _L4;
  TelegramArray_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L5 */ _L5;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L6 */ _L6;
  array__18453 /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::_L8 */ _L8;
} outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
extern void MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramArray */TelegramArray_T_BG_Types_Pkg *telegramArray,
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void MergAllPackets_Iter_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

