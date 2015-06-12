/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::isTheFirst */ isTheFirst;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* 3 */ _1_Context_3;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L23 */ _L23;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L22 */ _L22;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L21 */ _L21;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L20 */ _L20;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L19 */ _L19;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L18 */ _L18;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L17 */ _L17;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L16 */ _L16;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L15 */ _L15;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L24 */ _L24;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L25 */ _L25;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L26 */ _L26;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L28 */ _L28;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L29 */ _L29;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L31 */ _L31;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L32 */ _L32;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L33 */ _L33;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L34 */ _L34;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L35 */ _L35;
} outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup */
extern void CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

extern void CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#endif /* _CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

