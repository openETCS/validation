/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Decop_Received_BG_Subfunctions_CheckBGInput_Pkg_H_
#define _Decop_Received_BG_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::Output_valid */ Output_valid;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::Completenes */ Completenes;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::Consistency */ Consistency;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::TimeStamp */ TimeStamp;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::CompressedPackets */ CompressedPackets;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::RadioHeader */ RadioHeader;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::RadioMetadata */ RadioMetadata;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::Msg_Source */ Msg_Source;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::Message_valid */ Message_valid;
  Q_DIRTRAIN /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::q_dirtrain */ q_dirtrain;
  Q_DIRLRBG /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::q_dirLRBG */ q_dirLRBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::locwithinacc */ locwithinacc;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::q_link */ q_link;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::nid_bg */ nid_bg;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::nid_c */ nid_c;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::m_mcount */ m_mcount;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::n_total */ n_total;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::q_media */ q_media;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::m_version */ m_version;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::q_updown */ q_updown;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::BG_present */ BG_present;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::assignedCoordinates */ assignedCoordinates;
  Q_NVLOCACC /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::q_nvlocacc */ q_nvlocacc;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::odo_valid */ odo_valid;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::odo_time */ odo_time;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::odo_loc */ odo_loc;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::odo_speed */ odo_speed;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::odo_acc */ odo_acc;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::odo_motion */ odo_motion;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::odo_dir */ odo_dir;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L53 */ _L53;
  Consistency_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L52 */ _L52;
  Completeness_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L51 */ _L51;
  ReceivedMessage_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L50 */ _L50;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L49 */ _L49;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L73 */ _L73;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L72 */ _L72;
  BG_Header_T_BG_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L71 */ _L71;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L70 */ _L70;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L69 */ _L69;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L68 */ _L68;
  Q_DIRTRAIN /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L123 */ _L123;
  Q_DIRLRBG /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L122 */ _L122;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L121 */ _L121;
  Q_NVLOCACC /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L120 */ _L120;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L119 */ _L119;
  odometry_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L118 */ _L118;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L117 */ _L117;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L116 */ _L116;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L115 */ _L115;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L114 */ _L114;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L113 */ _L113;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L112 */ _L112;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L111 */ _L111;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L110 */ _L110;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L109 */ _L109;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L150 */ _L150;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L149 */ _L149;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L148 */ _L148;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L147 */ _L147;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L146 */ _L146;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L145 */ _L145;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L144 */ _L144;
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::_L151 */ _L151;
} outC_Decop_Received_BG_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG */
extern void Decop_Received_BG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Decop_Received_BG::Received_BG */ReceivedBG_CheckBGInputChannel_Pkg *Received_BG,
  outC_Decop_Received_BG_Subfunctions_CheckBGInput_Pkg *outC);

extern void Decop_Received_BG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Decop_Received_BG_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Decop_Received_BG_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decop_Received_BG_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

