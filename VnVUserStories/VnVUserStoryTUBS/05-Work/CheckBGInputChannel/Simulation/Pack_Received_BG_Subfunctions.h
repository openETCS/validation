/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */
#ifndef _Pack_Received_BG_Subfunctions_H_
#define _Pack_Received_BG_Subfunctions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions::Pack_Received_BG::Received_BG */ Received_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIRTRAIN /* Subfunctions::Pack_Received_BG::_L24 */ _L24;
  Q_DIRLRBG /* Subfunctions::Pack_Received_BG::_L23 */ _L23;
  kcg_bool /* Subfunctions::Pack_Received_BG::_L22 */ _L22;
  Q_NVLOCACC /* Subfunctions::Pack_Received_BG::_L21 */ _L21;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L20 */ _L20;
  Q_LINK /* Subfunctions::Pack_Received_BG::_L18 */ _L18;
  NID_BG /* Subfunctions::Pack_Received_BG::_L17 */ _L17;
  NID_C /* Subfunctions::Pack_Received_BG::_L16 */ _L16;
  M_MCOUNT /* Subfunctions::Pack_Received_BG::_L15 */ _L15;
  N_TOTAL /* Subfunctions::Pack_Received_BG::_L14 */ _L14;
  Q_MEDIA /* Subfunctions::Pack_Received_BG::_L13 */ _L13;
  M_VERSION /* Subfunctions::Pack_Received_BG::_L12 */ _L12;
  Q_UPDOWN /* Subfunctions::Pack_Received_BG::_L11 */ _L11;
  kcg_bool /* Subfunctions::Pack_Received_BG::_L10 */ _L10;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions::Pack_Received_BG::_L9 */ _L9;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions::Pack_Received_BG::_L8 */ _L8;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions::Pack_Received_BG::_L7 */ _L7;
  MsgSource_T_Common_Types_Pkg /* Subfunctions::Pack_Received_BG::_L6 */ _L6;
  kcg_bool /* Subfunctions::Pack_Received_BG::_L5 */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L4 */ _L4;
  kcg_bool /* Subfunctions::Pack_Received_BG::_L3 */ _L3;
  kcg_bool /* Subfunctions::Pack_Received_BG::_L2 */ _L2;
  kcg_bool /* Subfunctions::Pack_Received_BG::_L1 */ _L1;
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions::Pack_Received_BG::_L25 */ _L25;
  ReceivedMessage_T_Common_Types_Pkg /* Subfunctions::Pack_Received_BG::_L26 */ _L26;
  BG_Header_T_BG_Types_Pkg /* Subfunctions::Pack_Received_BG::_L27 */ _L27;
  odometry_T_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L35 */ _L35;
  kcg_bool /* Subfunctions::Pack_Received_BG::_L36 */ _L36;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L37 */ _L37;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L38 */ _L38;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L39 */ _L39;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L40 */ _L40;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L41 */ _L41;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions::Pack_Received_BG::_L42 */ _L42;
} outC_Pack_Received_BG_Subfunctions;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions::Pack_Received_BG */
extern void Pack_Received_BG_Subfunctions(
  /* Subfunctions::Pack_Received_BG::Output_valid */kcg_bool Output_valid,
  /* Subfunctions::Pack_Received_BG::Completenes */kcg_bool Completenes,
  /* Subfunctions::Pack_Received_BG::Consistency */kcg_bool Consistency,
  /* Subfunctions::Pack_Received_BG::TimeStamp */T_internal_Type_Obu_BasicTypes_Pkg TimeStamp,
  /* Subfunctions::Pack_Received_BG::Message_valid */kcg_bool Message_valid,
  /* Subfunctions::Pack_Received_BG::Msg_Source */MsgSource_T_Common_Types_Pkg Msg_Source,
  /* Subfunctions::Pack_Received_BG::RadioMetadata */RadioMetadata_T_Common_Types_Pkg *RadioMetadata,
  /* Subfunctions::Pack_Received_BG::RadioHeader */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeader,
  /* Subfunctions::Pack_Received_BG::CompressedPackets */CompressedPackets_T_Common_Types_Pkg *CompressedPackets,
  /* Subfunctions::Pack_Received_BG::BG_present */kcg_bool BG_present,
  /* Subfunctions::Pack_Received_BG::q_updown */Q_UPDOWN q_updown,
  /* Subfunctions::Pack_Received_BG::m_version */M_VERSION m_version,
  /* Subfunctions::Pack_Received_BG::q_media */Q_MEDIA q_media,
  /* Subfunctions::Pack_Received_BG::n_total */N_TOTAL n_total,
  /* Subfunctions::Pack_Received_BG::m_mcount */M_MCOUNT m_mcount,
  /* Subfunctions::Pack_Received_BG::nid_c */NID_C nid_c,
  /* Subfunctions::Pack_Received_BG::nid_bg */NID_BG nid_bg,
  /* Subfunctions::Pack_Received_BG::q_link */Q_LINK q_link,
  /* Subfunctions::Pack_Received_BG::locwithinacc */LocWithInAcc_T_Obu_BasicTypes_Pkg *locwithinacc,
  /* Subfunctions::Pack_Received_BG::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* Subfunctions::Pack_Received_BG::assignedCoordinates */kcg_bool assignedCoordinates,
  /* Subfunctions::Pack_Received_BG::q_dirLRBG */Q_DIRLRBG q_dirLRBG,
  /* Subfunctions::Pack_Received_BG::q_dirtrain */Q_DIRTRAIN q_dirtrain,
  /* Subfunctions::Pack_Received_BG::odo_valid */kcg_bool odo_valid,
  /* Subfunctions::Pack_Received_BG::odo_time */T_internal_Type_Obu_BasicTypes_Pkg odo_time,
  /* Subfunctions::Pack_Received_BG::odo_loc */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_loc,
  /* Subfunctions::Pack_Received_BG::odo_speed */OdometrySpeeds_T_Obu_BasicTypes_Pkg *odo_speed,
  /* Subfunctions::Pack_Received_BG::odo_acc */A_internal_Type_Obu_BasicTypes_Pkg odo_acc,
  /* Subfunctions::Pack_Received_BG::odo_motion */odoMotionState_T_Obu_BasicTypes_Pkg odo_motion,
  /* Subfunctions::Pack_Received_BG::odo_dir */odoMotionDirection_T_Obu_BasicTypes_Pkg odo_dir,
  outC_Pack_Received_BG_Subfunctions *outC);

extern void Pack_Received_BG_reset_Subfunctions(
  outC_Pack_Received_BG_Subfunctions *outC);

#endif /* _Pack_Received_BG_Subfunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Pack_Received_BG_Subfunctions.h
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

