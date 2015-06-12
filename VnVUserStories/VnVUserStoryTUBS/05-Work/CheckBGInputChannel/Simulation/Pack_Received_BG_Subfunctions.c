/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Pack_Received_BG_Subfunctions.h"

void Pack_Received_BG_reset_Subfunctions(
  outC_Pack_Received_BG_Subfunctions *outC)
{
}

/* Subfunctions::Pack_Received_BG */
void Pack_Received_BG_Subfunctions(
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
  outC_Pack_Received_BG_Subfunctions *outC)
{
  outC->_L42 = odo_dir;
  outC->_L41 = odo_motion;
  outC->_L40 = odo_acc;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L39, odo_speed);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L38, odo_loc);
  outC->_L37 = odo_time;
  outC->_L36 = odo_valid;
  outC->_L35.valid = outC->_L36;
  outC->_L35.timestamp = outC->_L37;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L35.odo, &outC->_L38);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L35.speed, &outC->_L39);
  outC->_L35.acceleration = outC->_L40;
  outC->_L35.motionState = outC->_L41;
  outC->_L35.motionDirection = outC->_L42;
  outC->_L10 = BG_present;
  outC->_L11 = q_updown;
  outC->_L12 = m_version;
  outC->_L13 = q_media;
  outC->_L14 = n_total;
  outC->_L15 = m_mcount;
  outC->_L16 = nid_c;
  outC->_L17 = nid_bg;
  outC->_L18 = q_link;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L20, locwithinacc);
  outC->_L21 = q_nvlocacc;
  outC->_L22 = assignedCoordinates;
  outC->_L23 = q_dirLRBG;
  outC->_L24 = q_dirtrain;
  outC->_L27.valid = outC->_L10;
  outC->_L27.q_updown = outC->_L11;
  outC->_L27.m_version = outC->_L12;
  outC->_L27.q_media = outC->_L13;
  outC->_L27.n_total = outC->_L14;
  outC->_L27.m_mcount = outC->_L15;
  outC->_L27.nid_c = outC->_L16;
  outC->_L27.nid_bg = outC->_L17;
  outC->_L27.q_link = outC->_L18;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L27.bgPosition, &outC->_L35);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L27.BG_centerDetectionInaccuraccuracies,
    &outC->_L20);
  outC->_L27.q_nvlocacc = outC->_L21;
  outC->_L27.noCoordinateSystemHasBeenAssigned = outC->_L22;
  outC->_L27.trainOrientationToBG = outC->_L23;
  outC->_L27.trainRunningDirectionToBG = outC->_L24;
  outC->_L5 = Message_valid;
  outC->_L6 = Msg_Source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L7, RadioMetadata);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&outC->_L8, RadioHeader);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L9, CompressedPackets);
  outC->_L26.valid = outC->_L5;
  outC->_L26.source = outC->_L6;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L26.radioMetadata,
    &outC->_L7);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L26.BG_Common_Header, &outC->_L27);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L26.Radio_Common_Header,
    &outC->_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L26.packets,
    &outC->_L9);
  outC->_L1 = Output_valid;
  outC->_L2 = Completenes;
  outC->_L3 = Consistency;
  outC->_L4 = TimeStamp;
  outC->_L25.valid = outC->_L1;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L25.BG, &outC->_L26);
  outC->_L25.complete = outC->_L2;
  outC->_L25.consistent = outC->_L3;
  outC->_L25.TimeStamp = outC->_L4;
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->Received_BG, &outC->_L25);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Pack_Received_BG_Subfunctions.c
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

