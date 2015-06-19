/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Receive_RadioMsg_Receive_TrackSide_Msg_Pkg_H_
#define _Receive_RadioMsg_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::outTrackMessage_for_check */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L12 */ _L12;
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L14 */ _L14;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L15 */ _L15;
  T_internal_Type_Obu_BasicTypes_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L16 */ _L16;
  MsgSource_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L17 */ _L17;
  RadioMessage_T_Radio_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L19 */ _L19;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L34 */ _L34;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L36 */ _L36;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L37 */ _L37;
  RadioMetadata_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L21 */ _L21;
  CompressedPackets_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L67 */ _L67;
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L68 */ _L68;
} outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg */
extern void Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::API_TrackSide_Msg */API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC);

extern void Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _Receive_RadioMsg_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

