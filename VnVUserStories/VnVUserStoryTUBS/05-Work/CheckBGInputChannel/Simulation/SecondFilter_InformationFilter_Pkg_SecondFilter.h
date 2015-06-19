/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _SecondFilter_InformationFilter_Pkg_SecondFilter_H_
#define _SecondFilter_InformationFilter_Pkg_SecondFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ outMessageAccepted;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2 */ IfBlock2_clock_IfBlock1;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3 */ IfBlock3_clock_IfBlock1_IfBlock2;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::_L6 */ _L6_IfBlock1;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_int /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::isFromSupervisingRBC */ isFromSupervisingRBC_IfBlock1;
  kcg_int /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L12 */ _L12_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L11 */ _L11_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L10 */ _L10_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L9 */ _L9_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L8 */ _L8_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L7 */ _L7_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L5 */ _L5_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::messagesForTransitionBuffer */ messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4 */ IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L1 */ _L1_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L2 */ _L2_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L1 */ _L1_IfBlock1_IfBlock2_IfBlock3;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::messagesToReject */ messagesToReject_IfBlock1_IfBlock2;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L4 */ _L4_IfBlock1_IfBlock2;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L5 */ _L5_IfBlock1_IfBlock2;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L6 */ _L6_IfBlock1_IfBlock2;
  kcg_int /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L7 */ _L7_IfBlock1_IfBlock2;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::isFromRBC */ isFromRBC;
  kcg_int /* InformationFilter_Pkg::SecondFilter::SecondFilter::radioDevice */ radioDevice;
  kcg_int /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageId */ messageId;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L14 */ _L14;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L24 */ _L24;
  kcg_bool /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L25 */ _L25;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L26 */ _L26;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L27 */ _L27;
  kcg_int /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L28 */ _L28;
  NID_MESSAGE /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L29 */ _L29;
} outC_SecondFilter_InformationFilter_Pkg_SecondFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::SecondFilter::SecondFilter */
extern void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC);

extern void SecondFilter_reset_InformationFilter_Pkg_SecondFilter(
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC);

#endif /* _SecondFilter_InformationFilter_Pkg_SecondFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SecondFilter_InformationFilter_Pkg_SecondFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

