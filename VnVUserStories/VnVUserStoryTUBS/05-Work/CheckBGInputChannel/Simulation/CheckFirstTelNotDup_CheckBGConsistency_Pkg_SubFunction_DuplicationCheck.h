/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::isTheFirst */ isTheFirst;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 1 */ _1_Context_1;
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L1 */ _L1;
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L2 */ _L2;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L3 */ _L3;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L4 */ _L4;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L5 */ _L5;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L6 */ _L6;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L7 */ _L7;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L8 */ _L8;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L9 */ _L9;
} outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup */
extern void CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

extern void CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#endif /* _CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

