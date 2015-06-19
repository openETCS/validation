/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Check2Telegrams_CheckBGConsistency_Pkg_SubFunction_H_
#define _Check2Telegrams_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "Check2Headers_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isConsistent */ isConsistent;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram_out */ telegram_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L1 */ _L1;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L2 */ _L2;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L3 */ _L3;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L4 */ _L4;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L5 */ _L5;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L7 */ _L7;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L6 */ _L6;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L8 */ _L8;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L9 */ _L9;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L10 */ _L10;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::_L85 */ _L85;
} outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
extern void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */Telegram_T_BG_Types_Pkg *telegram2,
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC);

extern void Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _Check2Telegrams_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

