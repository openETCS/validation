/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"

void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */ BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram */
void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::reset */kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::inActualOdometry */odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::API_TrackSide_Msg */API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L17, API_TrackSide_Msg);
  outC->_L18 = outC->_L17.valid;
  outC->_L19 = outC->_L17.btm_msg.present;
  outC->_L20 = outC->_L18 & outC->_L19;
  outC->telegramPresent = outC->_L20;
  outC->_L30 = outC->telegramPresent;
  outC->_L31 = outC->_L17.btm_msg.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L26,
    &outC->_L17.btm_msg.api_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L46,
    &outC->_L17.packets);
  outC->_L55.valid = outC->_L30;
  outC->_L55.checkResult = outC->_L31;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L55.telegramheader,
    &outC->_L26);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L55.packets,
    &outC->_L46);
  outC->_L38 = outC->_L17.systemTimeMsgReceived;
  outC->systemTimeMsgReceived = outC->_L38;
  outC->_L40 = outC->systemTimeMsgReceived;
  outC->_L35 = outC->_L17.msg_type;
  outC->msgType = outC->_L35;
  outC->_L37 = outC->msgType;
  outC->_L1 = reset;
  outC->_L22 = outC->telegramPresent;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->decodedTelegram, &outC->_L55);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L28, &outC->decodedTelegram);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L23,
    &outC->_L17.btm_msg.centerOfBalisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->centerOfBaliseDetection,
    &outC->_L23);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L25,
    &outC->centerOfBaliseDetection);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L5, inActualOdometry);
  /* 1 */
  BuildBGMessage_Receive_TrackSide_Msg_Pkg(
    outC->_L1,
    outC->_L22,
    &outC->_L28,
    &outC->_L25,
    &outC->_L5,
    &outC->Context_1);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L6, &outC->Context_1.outBGMessage);
  outC->_L34 = outC->_L6.present;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(
    &outC->_L13,
    (RadioMessage_T_Radio_Types_Pkg *) &cEmptyRadioMsg_Radio_Types_Pkg);
  outC->_L7.valid = outC->_L34;
  outC->_L7.systemTime = outC->_L40;
  outC->_L7.msg_type = outC->_L37;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L7.telegramHeaders, &outC->_L6);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L7.radio_Msg, &outC->_L13);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->outTrackMessage_for_check,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

