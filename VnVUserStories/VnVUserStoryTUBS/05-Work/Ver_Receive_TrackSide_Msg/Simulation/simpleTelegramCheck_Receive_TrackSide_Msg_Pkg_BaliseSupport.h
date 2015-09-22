/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::cont */ cont;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegramAlreadyInGroup */ telegramAlreadyInGroup;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L5 */ _L5;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L2 */ _L2;
  N_PIG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L3 */ _L3;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L1 */ _L1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L8 */ _L8;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L12 */ _L12;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L13 */ _L13;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L14 */ _L14;
  N_PIG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L15 */ _L15;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L16 */ _L16;
} outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck */
extern void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::iteratorIndex */ kcg_int iteratorIndex,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::accu */ kcg_bool accu,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::which_pig */ N_PIG which_pig,
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void simpleTelegramCheck_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

