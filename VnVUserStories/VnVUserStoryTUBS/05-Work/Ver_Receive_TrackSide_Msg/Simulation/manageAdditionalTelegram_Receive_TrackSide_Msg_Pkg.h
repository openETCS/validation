/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outputPresent */ outputPresent;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outDecodedTelegram */ outDecodedTelegram;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outcenterOfBalisePosition */ outcenterOfBalisePosition;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outNeedStore */ outNeedStore;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::storeValid */ storeValid;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L52 */ _L52;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L51 */ _L51;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L21 */ _L21;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L7 */ _L7;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L26 */ _L26;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L20 */ _L20;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L22 */ _L22;
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L46 */ _L46;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L19 */ _L19;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L18 */ _L18;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L17 */ _L17;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L9 */ _L9;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L28 */ _L28;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L27 */ _L27;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L55 */ _L55;
} outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
extern void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */ TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */ kcg_bool inputTelegramPresent,
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageAdditionalTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

