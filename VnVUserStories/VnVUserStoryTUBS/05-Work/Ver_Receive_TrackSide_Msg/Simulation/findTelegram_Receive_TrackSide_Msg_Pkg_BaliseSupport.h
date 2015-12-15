/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */ telegramAlreadyInGroup;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 7 */ Context_7[8];
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L2 */ _L2_IfBlock1;
  array_10558 /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L6 */ _L6_IfBlock1;
  N_PIG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L9 */ _L9_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::else::_L2 */ _L21_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::valid */ valid;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::_L30 */ _L30;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::_L31 */ _L31;
} outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
extern void findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::which_pig */ N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::HeaderArray */ TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::doSearch */ kcg_bool doSearch,
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void findTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

