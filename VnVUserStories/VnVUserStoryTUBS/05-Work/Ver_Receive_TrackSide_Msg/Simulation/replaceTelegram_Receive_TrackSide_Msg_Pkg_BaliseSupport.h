/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::cont */ cont;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outTelegrams */ outTelegrams;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outIsDuplicate */ outIsDuplicate;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::doReplace */ doReplace;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L1 */ _L1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L2 */ _L2;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L3 */ _L3;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L4 */ _L4;
  N_PIG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L6 */ _L6;
  N_PIG /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L7 */ _L7;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L8 */ _L8;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L9 */ _L9;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L10 */ _L10;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L11 */ _L11;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L12 */ _L12;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L13 */ _L13;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L14 */ _L14;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L15 */ _L15;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L16 */ _L16;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L17 */ _L17;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L18 */ _L18;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L19 */ _L19;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L20 */ _L20;
} outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
extern void replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::inTelegramArray */ Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void replaceTelegram_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

