/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BTM_Toolbox_TrainModules.h"

void BTM_reset_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC)
{
  /* 1 */ ODO_doLocInacc_reset_Toolbox_Functions(&outC->Context_1);
}

/* Toolbox::TrainModules::BTM */
void BTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::BTM::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::BTM::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Toolbox::TrainModules::BTM::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::BTM::TelegramHeader */TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  outC_BTM_Toolbox_TrainModules *outC)
{
  outC->_L35 = 10;
  outC->_L34 = - 10;
  /* 1 */
  ODO_doLocInacc_Toolbox_Functions(outC->_L34, outC->_L35, &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L33,
    &outC->Context_1.locInAcc);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(
    &outC->_L32,
    (API_RadioMsgHeader_T_API_Msg_Pkg *) &cEmptyRadioMsgHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, Packets);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L29, TelegramHeader);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L28, TelegramHeader);
  outC->_L27 = msrc_undefined_Common_Types_Pkg;
  outC->_L26 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L22 = outC->_L29.nid_c;
  outC->_L24 = 0;
  outC->_L23 = outC->_L22 != outC->_L24;
  if (outC->_L23) {
    outC->_L25 = outC->_L26;
  }
  else {
    outC->_L25 = outC->_L27;
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L18, odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L20.odometerOfBaliseDetection,
    &outC->_L18);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L20.BG_centerDetectionInaccuraccuracies,
    &outC->_L33);
  outC->_L17 = kcg_false;
  outC->_L16 = kcg_true;
  outC->_L6 = systemTime;
  outC->_L5.present = outC->_L23;
  outC->_L5.checkResult = outC->_L16;
  outC->_L5.api_bad_balise_received = outC->_L17;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L5.api_header, &outC->_L28);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L5.centerOfBalisePosition,
    &outC->_L20);
  outC->_L4.valid = outC->_L23;
  outC->_L4.systemTimeMsgReceived = outC->_L6;
  outC->_L4.msg_type = outC->_L25;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L4.btm_msg, &outC->_L5);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L4.rtm_msg, &outC->_L32);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4.packets,
    &outC->_L30);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->TrackMessage, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BTM_Toolbox_TrainModules.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

