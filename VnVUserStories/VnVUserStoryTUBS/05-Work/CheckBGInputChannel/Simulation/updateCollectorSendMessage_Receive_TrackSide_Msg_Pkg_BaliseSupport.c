/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void updateCollectorSendMessage_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage */
void updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_bool noname;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L2, inCollector);
  outC->_L4 = outC->_L2.totalTelegrams;
  outC->_L5 = outC->_L2.collectedTelegrams;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L6,
    &outC->_L2.positionFirstContact);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L7,
    &outC->_L2.balisePosition);
  outC->_L8 = outC->_L2.BG_ID;
  outC->_L9 = outC->_L2.C_ID;
  outC->_L10 = outC->_L2.BGMessageSent;
  noname = outC->_L10;
  outC->_L14 = kcg_true;
  outC->_L11 = outC->_L2.badBaliseFlag;
  outC->_L3.badBaliseFlag = outC->_L11;
  outC->_L3.BGMessageSent = outC->_L14;
  outC->_L3.C_ID = outC->_L9;
  outC->_L3.BG_ID = outC->_L8;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.balisePosition,
    &outC->_L7);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.positionFirstContact,
    &outC->_L6);
  outC->_L3.collectedTelegrams = outC->_L5;
  outC->_L3.totalTelegrams = outC->_L4;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

