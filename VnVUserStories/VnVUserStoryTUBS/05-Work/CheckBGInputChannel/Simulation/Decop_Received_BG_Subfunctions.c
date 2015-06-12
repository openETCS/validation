/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decop_Received_BG_Subfunctions.h"

void Decop_Received_BG_reset_Subfunctions(
  outC_Decop_Received_BG_Subfunctions *outC)
{
}

/* Subfunctions::Decop_Received_BG */
void Decop_Received_BG_Subfunctions(
  /* Subfunctions::Decop_Received_BG::Received_BG */ReceivedBG_CheckBGInputChannel_Pkg *Received_BG,
  outC_Decop_Received_BG_Subfunctions *outC)
{
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->_L151, Received_BG);
  outC->_L53 = outC->_L151.TimeStamp;
  outC->_L52 = outC->_L151.consistent;
  outC->_L51 = outC->_L151.complete;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L50, &outC->_L151.BG);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L73,
    &outC->_L50.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L72,
    &outC->_L50.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L71, &outC->_L50.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L70,
    &outC->_L50.radioMetadata);
  outC->_L69 = outC->_L50.source;
  outC->_L123 = outC->_L71.trainRunningDirectionToBG;
  outC->_L122 = outC->_L71.trainOrientationToBG;
  outC->_L121 = outC->_L71.noCoordinateSystemHasBeenAssigned;
  outC->_L120 = outC->_L71.q_nvlocacc;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L119,
    &outC->_L71.BG_centerDetectionInaccuraccuracies);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L118, &outC->_L71.bgPosition);
  outC->_L117 = outC->_L71.q_link;
  outC->_L116 = outC->_L71.nid_bg;
  outC->_L115 = outC->_L71.nid_c;
  outC->_L114 = outC->_L71.m_mcount;
  outC->_L113 = outC->_L71.n_total;
  outC->_L112 = outC->_L71.q_media;
  outC->_L111 = outC->_L71.m_version;
  outC->_L110 = outC->_L71.q_updown;
  outC->_L150 = outC->_L118.motionDirection;
  outC->_L149 = outC->_L118.motionState;
  outC->_L148 = outC->_L118.acceleration;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L147,
    &outC->_L118.speed);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L146,
    &outC->_L118.odo);
  outC->_L145 = outC->_L118.timestamp;
  outC->_L144 = outC->_L118.valid;
  outC->_L109 = outC->_L71.valid;
  outC->_L68 = outC->_L50.valid;
  outC->_L49 = outC->_L151.valid;
  outC->odo_dir = outC->_L150;
  outC->odo_motion = outC->_L149;
  outC->odo_acc = outC->_L148;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->odo_speed, &outC->_L147);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->odo_loc, &outC->_L146);
  outC->odo_time = outC->_L145;
  outC->odo_valid = outC->_L144;
  outC->Output_valid = outC->_L49;
  outC->Completenes = outC->_L51;
  outC->Consistency = outC->_L52;
  outC->TimeStamp = outC->_L53;
  outC->Message_valid = outC->_L68;
  outC->Msg_Source = outC->_L69;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->RadioMetadata, &outC->_L70);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioHeader,
    &outC->_L72);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->CompressedPackets,
    &outC->_L73);
  outC->BG_present = outC->_L109;
  outC->q_updown = outC->_L110;
  outC->m_version = outC->_L111;
  outC->q_media = outC->_L112;
  outC->n_total = outC->_L113;
  outC->m_mcount = outC->_L114;
  outC->nid_c = outC->_L115;
  outC->nid_bg = outC->_L116;
  outC->q_link = outC->_L117;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->locwithinacc, &outC->_L119);
  outC->q_nvlocacc = outC->_L120;
  outC->assignedCoordinates = outC->_L121;
  outC->q_dirLRBG = outC->_L122;
  outC->q_dirtrain = outC->_L123;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decop_Received_BG_Subfunctions.c
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

