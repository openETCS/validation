/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _FilterTrackMsg_Subfuction_Enhancements_Pkg_H_
#define _FilterTrackMsg_Subfuction_Enhancements_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::FiltereTrackMsg */ FiltereTrackMsg;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::TrackMsg */ rem_TrackMsg;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::LastBTreceived */ LastBTreceived;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L1 */ _L1;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L49 */ _L49;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L50 */ _L50;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L51 */ _L51;
  TelegramHeader_T_BG_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L52 */ _L52;
  centerOfBalisePosition_T_BG_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L53 */ _L53;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L43 */ _L43;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L44 */ _L44;
  MsgSource_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L45 */ _L45;
  API_TelegramHeader_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L46 */ _L46;
  API_RadioMsgHeader_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L47 */ _L47;
  CompressedPackets_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L48 */ _L48;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L56 */ _L56;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L57 */ _L57;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L63 */ _L63;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L64 */ _L64;
  MsgSource_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L65 */ _L65;
  API_TelegramHeader_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L66 */ _L66;
  API_RadioMsgHeader_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L67 */ _L67;
  CompressedPackets_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L68 */ _L68;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L58 */ _L58;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L59 */ _L59;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L60 */ _L60;
  TelegramHeader_T_BG_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L61 */ _L61;
  centerOfBalisePosition_T_BG_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L62 */ _L62;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L69 */ _L69;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L71 */ _L71;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L72 */ _L72;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L73 */ _L73;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L75 */ _L75;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L77 */ _L77;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L78 */ _L78;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L79 */ _L79;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L80 */ _L80;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L81 */ _L81;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L82 */ _L82;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L83 */ _L83;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L84 */ _L84;
  kcg_bool /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L86 */ _L86;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L87 */ _L87;
  RBC_Id_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L94 */ _L94;
  RBC_Id_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::FilterTrackMsg::_L101 */ _L101;
} outC_FilterTrackMsg_Subfuction_Enhancements_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfuction_Enhancements_Pkg::FilterTrackMsg */
extern void FilterTrackMsg_Subfuction_Enhancements_Pkg(
  /* Subfuction_Enhancements_Pkg::FilterTrackMsg::TrackMsg */ API_TrackSideInput_T_API_Msg_Pkg *TrackMsg,
  outC_FilterTrackMsg_Subfuction_Enhancements_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FilterTrackMsg_reset_Subfuction_Enhancements_Pkg(
  outC_FilterTrackMsg_Subfuction_Enhancements_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FilterTrackMsg_init_Subfuction_Enhancements_Pkg(
  outC_FilterTrackMsg_Subfuction_Enhancements_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FilterTrackMsg_Subfuction_Enhancements_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FilterTrackMsg_Subfuction_Enhancements_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

