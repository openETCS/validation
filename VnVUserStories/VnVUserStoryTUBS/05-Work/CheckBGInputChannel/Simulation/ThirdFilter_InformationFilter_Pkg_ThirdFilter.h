/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_
#define _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_

#include "kcg_types.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SetValidFlag_InformationFilter_Pkg_Common /* 1 */ _1_Context_1[30];
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter /* 2 */ Context_2[30];
  outC_GetPacketId_InformationFilter_Pkg_Common /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::valid */ valid;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::source */ source;
  RadioMetadata_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::radio_metadata */ radio_metadata;
  BG_Header_T_BG_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::bg_header */ bg_header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::radio_header */ radio_header;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::packets */ packets;
  array_bool_30 /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L10 */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L11 */ _L11;
  array_int_30 /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L12 */ _L12;
  array__18122 /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L13 */ _L13;
  BG_Header_T_BG_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L21 */ _L21;
  RadioMetadata_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L20 */ _L20;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L19 */ _L19;
  kcg_bool /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L18 */ _L18;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L22 */ _L22;
  array__18480 /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L23 */ _L23;
  M_MODE /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L24 */ _L24;
  kcg_bool /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L25 */ _L25;
  MsgSource_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L26 */ _L26;
  RadioMetadata_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L27 */ _L27;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L30 */ _L30;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L29 */ _L29;
  BG_Header_T_BG_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L31 */ _L31;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L32 */ _L32;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L33 */ _L33;
  CompressedPackets_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L52 */ _L52;
  Metadata_T_Common_Types_Pkg /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L53 */ _L53;
} outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
extern void ThirdFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inModus */M_MODE inModus,
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC);

extern void ThirdFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC);

#endif /* _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ThirdFilter_InformationFilter_Pkg_ThirdFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

