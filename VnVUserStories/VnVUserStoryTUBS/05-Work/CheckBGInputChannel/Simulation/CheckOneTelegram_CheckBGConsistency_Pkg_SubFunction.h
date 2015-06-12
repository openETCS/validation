/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::isConsistent */ isConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L13 */ _L13;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L29 */ _L29;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L44 */ _L44;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L45 */ _L45;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L52 */ _L52;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L51 */ _L51;
  CompressedPackets_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::_L50 */ _L50;
} outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram */
extern void CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::telegram_in */Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC);

extern void CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

