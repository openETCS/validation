/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _FirstFilter_InformationFilter_Pkg_FirstFilter_H_
#define _FirstFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::outMessage */ outMessage;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::outStoreInTransitionBuffer */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SetValidFlag_InformationFilter_Pkg_Common /* SetValidFlag */ Context_SetValidFlag[30];
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter /* 1 */ _1_Context_1[30];
  outC_GetPacketId_InformationFilter_Pkg_Common /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::source */ source;
  M_LEVEL /* InformationFilter_Pkg::FirstFilter::FirstFilter::level */ level;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::valid */ valid;
  BG_Header_T_BG_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::bg_header */ bg_header;
  RadioMetadata_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::radio_metadata */ radio_metadata;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::radio_header */ radio_header;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::packets */ packets;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L2 */ _L2;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L6 */ _L6;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L5 */ _L5;
  M_LEVEL /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L7 */ _L7;
  RadioMetadata_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L8 */ _L8;
  BG_Header_T_BG_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L9 */ _L9;
  array_bool_30 /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L1 */ _L1;
  array__18474 /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L46 */ _L46;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L48 */ _L48;
  array_int_30 /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L49 */ _L49;
  M_LEVEL /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L47 */ _L47;
  array__18477 /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L45 */ _L45;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L58 */ _L58;
  array__18122 /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L73 */ _L73;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L76 */ _L76;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L77 */ _L77;
  BG_Header_T_BG_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L78 */ _L78;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L79 */ _L79;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L82 */ _L82;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L81 */ _L81;
  RadioMetadata_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L83 */ _L83;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L84 */ _L84;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L85 */ _L85;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L86 */ _L86;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L87 */ _L87;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L88 */ _L88;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L89 */ _L89;
  kcg_int /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L90 */ _L90;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L91 */ _L91;
  Metadata_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L98 */ _L98;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L105 */ _L105;
} outC_FirstFilter_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::FirstFilter */
extern void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC);

extern void FirstFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC);

#endif /* _FirstFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FirstFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

