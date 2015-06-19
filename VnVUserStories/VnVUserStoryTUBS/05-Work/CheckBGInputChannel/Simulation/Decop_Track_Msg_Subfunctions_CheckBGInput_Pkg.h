/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg_H_
#define _Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::BTM_Msg_valid */ BTM_Msg_valid;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::MsgReceivedTime */ MsgReceivedTime;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::MsgSource */ MsgSource;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::TelegramPresent */ TelegramPresent;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::CheckResult */ CheckResult;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::badbalise */ badbalise;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::q_updown */ q_updown;
  M_DUP /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::m_dup */ m_dup;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::q_link */ q_link;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::Compressed_Packets */ Compressed_Packets;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::m_Version */ m_Version;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::q_media */ q_media;
  N_PIG /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::n_pig */ n_pig;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::n_total */ n_total;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::m_mcount */ m_mcount;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::nid_c */ nid_c;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::nid_bg */ nid_bg;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_valid */ odo_valid;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_time */ odo_time;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_loc */ odo_loc;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_speed */ odo_speed;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_acc */ odo_acc;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_motion */ odo_motion;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_dir */ odo_dir;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::odo_locinacc */ odo_locinacc;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::radio_present */ radio_present;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::radio_consistency */ radio_consistency;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::RadioHeader */ RadioHeader;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::RadioMetadata */ RadioMetadata;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L1 */ _L1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L2 */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L3 */ _L3;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L4 */ _L4;
  API_TelegramHeader_T_API_Msg_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L5 */ _L5;
  API_RadioMsgHeader_T_API_Msg_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L6 */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L7 */ _L7;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L8 */ _L8;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L9 */ _L9;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L10 */ _L10;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L11 */ _L11;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L12 */ _L12;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L13 */ _L13;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L14 */ _L14;
  TelegramHeader_T_BG_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L15 */ _L15;
  centerOfBalisePosition_T_BG_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L16 */ _L16;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L19 */ _L19;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L20 */ _L20;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L21 */ _L21;
  N_PIG /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L22 */ _L22;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L23 */ _L23;
  M_DUP /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L24 */ _L24;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L25 */ _L25;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L26 */ _L26;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L27 */ _L27;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L28 */ _L28;
  odometry_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L29 */ _L29;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L30 */ _L30;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L51 */ _L51;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L50 */ _L50;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L49 */ _L49;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L48 */ _L48;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L47 */ _L47;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L46 */ _L46;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::_L45 */ _L45;
} outC_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg */
extern void Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Decop_Track_Msg::BTM_TrackMes */API_TrackSideInput_T_API_Msg_Pkg *BTM_TrackMes,
  outC_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg *outC);

extern void Decop_Track_Msg_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

