/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _ConvertTrackSideMessageTo_H_
#define _ConvertTrackSideMessageTo_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::ReceivedMessage */ ReceivedMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L1 */ _L1;
  kcg_bool /* ConvertTrackSideMessageToRadioMessage::_L6 */ _L6;
  T_internal_Type_Obu_BasicTypes_Pkg /* ConvertTrackSideMessageToRadioMessage::_L5 */ _L5;
  MsgSource_T_Common_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L4 */ _L4;
  BG_Message_T_BG_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L3 */ _L3;
  RadioMessage_T_Radio_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L2 */ _L2;
  ReceivedMessage_T_Common_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L7 */ _L7;
  kcg_bool /* ConvertTrackSideMessageToRadioMessage::_L13 */ _L13;
  kcg_bool /* ConvertTrackSideMessageToRadioMessage::_L14 */ _L14;
  kcg_bool /* ConvertTrackSideMessageToRadioMessage::_L15 */ _L15;
  BG_Header_T_BG_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L16 */ _L16;
  kcg_bool /* ConvertTrackSideMessageToRadioMessage::_L17 */ _L17;
  CompressedPackets_T_Common_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L9 */ _L9;
  RadioMetadata_T_Common_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L10 */ _L10;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* ConvertTrackSideMessageToRadioMessage::_L11 */ _L11;
  kcg_bool /* ConvertTrackSideMessageToRadioMessage::_L12 */ _L12;
} outC_ConvertTrackSideMessageTo;

/* ===========  node initialization and cycle functions  =========== */
/* ConvertTrackSideMessageToRadioMessage */
extern void ConvertTrackSideMessageTo(
  /* ConvertTrackSideMessageToRadioMessage::TrackSideMessage */TrackSide_ForCheck_T_Common_Types_Pkg *TrackSideMessage,
  outC_ConvertTrackSideMessageTo *outC);

extern void ConvertTrackSideMessageTo_reset(
  outC_ConvertTrackSideMessageTo *outC);

#endif /* _ConvertTrackSideMessageTo_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertTrackSideMessageTo.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

