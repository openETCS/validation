/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg_H_
#define _Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "CAST_NID_BG_to_int_TM_conversions.h"
#include "CAST_N_TOTAL_to_int_TM_conversions.h"
#include "CAST_NID_C_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::valid */ valid;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::Source */ Source;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::validBG */ validBG;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::UPDOWN */ UPDOWN;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::TOTAL */ TOTAL;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::MCOUNT */ MCOUNT;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::NIDC */ NIDC;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::NIDBG */ NIDBG;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::LINK */ LINK;
  Metadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::PacketHeader */ PacketHeader;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::LocNominal */ LocNominal;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::LocMin */ LocMin;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::LocMax */ LocMax;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_N_TOTAL_to_int_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_NID_C_to_int_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_NID_BG_to_int_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L1 */ _L1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L2 */ _L2;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L3 */ _L3;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L4 */ _L4;
  BG_Header_T_BG_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L5 */ _L5;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L6 */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L7 */ _L7;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L8 */ _L8;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L9 */ _L9;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L10 */ _L10;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L11 */ _L11;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L12 */ _L12;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L13 */ _L13;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L14 */ _L14;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L15 */ _L15;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L16 */ _L16;
  odometry_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L17 */ _L17;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L18 */ _L18;
  Q_NVLOCACC /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L19 */ _L19;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L20 */ _L20;
  Q_DIRLRBG /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L21 */ _L21;
  Q_DIRTRAIN /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L22 */ _L22;
  Metadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L23 */ _L23;
  CompressedPacketData_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L24 */ _L24;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L25 */ _L25;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L26 */ _L26;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L27 */ _L27;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L28 */ _L28;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L29 */ _L29;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::_L30 */ _L30;
} outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage */
extern void Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::ReceivedMessage */ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage,
  outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg *outC);

extern void Decop_OutputMessage_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

