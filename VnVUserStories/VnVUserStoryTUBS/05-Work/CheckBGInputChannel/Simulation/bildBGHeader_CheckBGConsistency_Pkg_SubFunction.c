/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h"

void bildBGHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::bildBGHeader */
void bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
  N_PIG noname;
  M_DUP _1_noname;
  MsgSource_T_Common_Types_Pkg _2_noname;
  RadioMessage_T_Radio_Types_Pkg _3_noname;
  T_internal_Type_Obu_BasicTypes_Pkg _4_noname;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L28,
    trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L16, &outC->_L28.telegramHeaders);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L27,
    &outC->_L16.Telegrams[0].telegramheader);
  outC->_L3 = outC->_L27.q_link;
  outC->_L4 = outC->_L27.nid_bg;
  outC->_L5 = outC->_L27.nid_c;
  outC->_L6 = outC->_L27.m_mcount;
  outC->_L7 = outC->_L27.m_dup;
  outC->_L8 = outC->_L27.n_total;
  outC->_L9 = outC->_L27.n_pig;
  outC->_L10 = outC->_L27.q_media;
  outC->_L11 = outC->_L27.m_version;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L15, &outC->_L28.radio_Msg);
  outC->_L17 = outC->_L28.msg_type;
  outC->_L18 = outC->_L28.systemTime;
  outC->_L26 = cQqDirTrain_CheckBGConsistency_Pkg;
  outC->_L25 = cQDirLRBGunknown_CheckBGConsistency_Pkg;
  outC->_L23 = q_nvlocacc;
  _4_noname = outC->_L18;
  outC->_L22 = kcg_false;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_3_noname, &outC->_L15);
  _2_noname = outC->_L17;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L21,
    &outC->_L16.centerOfBalisePosition.odometerOfBaliseDetection);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    &outC->_L16.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies);
  _1_noname = outC->_L7;
  noname = outC->_L9;
  outC->_L19 = outC->_L28.valid;
  outC->_L12 = outC->_L27.q_updown;
  outC->_L2.valid = outC->_L19;
  outC->_L2.q_updown = outC->_L12;
  outC->_L2.m_version = outC->_L11;
  outC->_L2.q_media = outC->_L10;
  outC->_L2.n_total = outC->_L8;
  outC->_L2.m_mcount = outC->_L6;
  outC->_L2.nid_c = outC->_L5;
  outC->_L2.nid_bg = outC->_L4;
  outC->_L2.q_link = outC->_L3;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L2.bgPosition, &outC->_L21);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L2.BG_centerDetectionInaccuraccuracies,
    &outC->_L20);
  outC->_L2.q_nvlocacc = outC->_L23;
  outC->_L2.noCoordinateSystemHasBeenAssigned = outC->_L22;
  outC->_L2.trainOrientationToBG = outC->_L25;
  outC->_L2.trainRunningDirectionToBG = outC->_L26;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->bgHeader, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** bildBGHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

