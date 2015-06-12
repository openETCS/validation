/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertTrackSideMessageTo.h"

void ConvertTrackSideMessageTo_reset(outC_ConvertTrackSideMessageTo *outC)
{
}

/* ConvertTrackSideMessageToRadioMessage */
void ConvertTrackSideMessageTo(
  /* ConvertTrackSideMessageToRadioMessage::TrackSideMessage */TrackSide_ForCheck_T_Common_Types_Pkg *TrackSideMessage,
  outC_ConvertTrackSideMessageTo *outC)
{
  T_internal_Type_Obu_BasicTypes_Pkg noname;
  BG_Message_T_BG_Types_Pkg _1_noname;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L1, TrackSideMessage);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L2, &outC->_L1.radio_Msg);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L3, &outC->_L1.telegramHeaders);
  outC->_L4 = outC->_L1.msg_type;
  outC->_L5 = outC->_L1.systemTime;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L9, &outC->_L2.packets);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->_L2.radioMetadata);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L11,
    &outC->_L2.header);
  outC->_L12 = outC->_L2.consistencyError;
  outC->_L17 = !outC->_L12;
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &outC->_L16,
    (BG_Header_T_BG_Types_Pkg *) &cEmptyBG_Header_BG_Types_Pkg);
  outC->_L6 = outC->_L1.valid;
  outC->_L13 = outC->_L2.present;
  outC->_L14 = outC->_L13 & outC->_L17;
  outC->_L15 = outC->_L6 & outC->_L14;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_1_noname, &outC->_L3);
  noname = outC->_L5;
  outC->_L7.valid = outC->_L15;
  outC->_L7.source = outC->_L4;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L7.radioMetadata,
    &outC->_L10);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L7.BG_Common_Header, &outC->_L16);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L7.Radio_Common_Header,
    &outC->_L11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7.packets, &outC->_L9);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->ReceivedMessage,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertTrackSideMessageTo.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

