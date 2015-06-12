/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decop_Track_Msg_Subfunctions.h"

void Decop_Track_Msg_reset_Subfunctions(outC_Decop_Track_Msg_Subfunctions *outC)
{
}

/* Subfunctions::Decop_Track_Msg */
void Decop_Track_Msg_Subfunctions(
  /* Subfunctions::Decop_Track_Msg::BTM_TrackMes */API_TrackSideInput_T_API_Msg_Pkg *BTM_TrackMes,
  outC_Decop_Track_Msg_Subfunctions *outC)
{
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, BTM_TrackMes);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L1.packets);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L6, &outC->_L1.rtm_msg);
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L5, &outC->_L1.btm_msg);
  outC->_L4 = outC->_L1.msg_type;
  outC->_L3 = outC->_L1.systemTimeMsgReceived;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->_L6.Radio_MetaData);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L10,
    &outC->_L6.Radio_Common_Header);
  outC->_L9 = outC->_L6.apiConsistencyError;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L16,
    &outC->_L5.centerOfBalisePosition);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L15, &outC->_L5.api_header);
  outC->_L14 = outC->_L5.api_bad_balise_received;
  outC->_L13 = outC->_L5.checkResult;
  outC->_L28 = outC->_L15.q_link;
  outC->_L27 = outC->_L15.nid_bg;
  outC->_L26 = outC->_L15.nid_c;
  outC->_L25 = outC->_L15.m_mcount;
  outC->_L24 = outC->_L15.m_dup;
  outC->_L23 = outC->_L15.n_total;
  outC->_L22 = outC->_L15.n_pig;
  outC->_L21 = outC->_L15.q_media;
  outC->_L20 = outC->_L15.m_version;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L30,
    &outC->_L16.BG_centerDetectionInaccuraccuracies);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L29,
    &outC->_L16.odometerOfBaliseDetection);
  outC->_L51 = outC->_L29.motionDirection;
  outC->_L50 = outC->_L29.motionState;
  outC->_L49 = outC->_L29.acceleration;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L48, &outC->_L29.speed);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L47, &outC->_L29.odo);
  outC->_L46 = outC->_L29.timestamp;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->RadioMetadata, &outC->_L11);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioHeader,
    &outC->_L10);
  outC->radio_consistency = outC->_L9;
  outC->_L8 = outC->_L6.present;
  outC->radio_present = outC->_L8;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->odo_locinacc, &outC->_L30);
  outC->odo_dir = outC->_L51;
  outC->odo_motion = outC->_L50;
  outC->odo_acc = outC->_L49;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->odo_speed, &outC->_L48);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->odo_loc, &outC->_L47);
  outC->odo_time = outC->_L46;
  outC->_L45 = outC->_L29.valid;
  outC->odo_valid = outC->_L45;
  outC->nid_bg = outC->_L27;
  outC->nid_c = outC->_L26;
  outC->m_mcount = outC->_L25;
  outC->n_total = outC->_L23;
  outC->n_pig = outC->_L22;
  outC->q_media = outC->_L21;
  outC->m_Version = outC->_L20;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets,
    &outC->_L7);
  outC->_L19 = outC->_L15.q_updown;
  outC->_L12 = outC->_L5.present;
  outC->_L2 = outC->_L1.valid;
  outC->BTM_Msg_valid = outC->_L2;
  outC->MsgReceivedTime = outC->_L3;
  outC->MsgSource = outC->_L4;
  outC->TelegramPresent = outC->_L12;
  outC->CheckResult = outC->_L13;
  outC->badbalise = outC->_L14;
  outC->q_updown = outC->_L19;
  outC->m_dup = outC->_L24;
  outC->q_link = outC->_L28;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decop_Track_Msg_Subfunctions.c
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

