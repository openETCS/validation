/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_
#define _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */ isComplete;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */ lastTelegram;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */ inDex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 2 */ Context_2;
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 3 */ Context_3;
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction /* 6 */ Context_6;
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction /* 5 */ Context_5[7];
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 1 */ _1_Context_1;
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramArray_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L43 */ _L43_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L42 */ _L42_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L41 */ _L41_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L39 */ _L39_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L37 */ _L37_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L38 */ _L38_IfBlock1;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L16 */ _L16_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L36 */ _L36_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L34 */ _L34_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L33 */ _L33_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L32 */ _L32_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L29 */ _L29_IfBlock1;
  array__18453 /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L26 */ _L26_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L15 */ _L15_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L14 */ _L14_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L13 */ _L13_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L8 */ _L8_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L10 */ _L10_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L9 */ _L9_IfBlock1;
  TelegramArray_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L11 */ _L11_IfBlock1;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L12 */ _L12_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::firstTelegramIsValid */ firstTelegramIsValid;
  TelegramArray_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L15 */ _L15;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L16 */ _L16;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L18 */ _L18;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L19 */ _L19;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L20 */ _L20;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L21 */ _L21;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L22 */ _L22;
} outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
extern void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC);

extern void CompletenessFirstCheck_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

