/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"

void Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg */
void Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::API_TrackSide_Msg */API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_BG_Message_T_BG_Types_Pkg(
    &outC->_L68,
    (BG_Message_T_BG_Types_Pkg *) &cEmptyBGMessages_BG_Types_Pkg);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L12, API_TrackSide_Msg);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L67,
    &outC->_L12.packets);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L21,
    &outC->_L12.rtm_msg.Radio_MetaData);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L37,
    &outC->_L12.rtm_msg.Radio_Common_Header);
  outC->_L36 = outC->_L12.rtm_msg.present;
  outC->_L34 = outC->_L12.rtm_msg.apiConsistencyError;
  outC->_L19.present = outC->_L36;
  outC->_L19.consistencyError = outC->_L34;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L19.header,
    &outC->_L37);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L19.radioMetadata,
    &outC->_L21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L19.packets,
    &outC->_L67);
  outC->_L17 = outC->_L12.msg_type;
  outC->_L16 = outC->_L12.systemTimeMsgReceived;
  outC->_L15 = outC->_L12.valid;
  outC->_L14.valid = outC->_L15;
  outC->_L14.systemTime = outC->_L16;
  outC->_L14.msg_type = outC->_L17;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L14.telegramHeaders, &outC->_L68);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L14.radio_Msg, &outC->_L19);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->outTrackMessage_for_check,
    &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

