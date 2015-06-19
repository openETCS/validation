/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void checkSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB */
void checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inTelegram */Telegram_T_BG_Types_Pkg *inTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_bool noname;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L2, inCollector);
  outC->_L23 = outC->_L2.totalTelegrams;
  outC->_L24 = outC->_L2.collectedTelegrams;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L25,
    &outC->_L2.positionFirstContact);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L26,
    &outC->_L2.balisePosition);
  outC->_L27 = outC->_L2.BG_ID;
  outC->_L28 = outC->_L2.C_ID;
  outC->_L29 = outC->_L2.BGMessageSent;
  noname = outC->_L29;
  outC->_L30 = outC->_L2.badBaliseFlag;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, inTelegram);
  outC->_L19 = outC->_L18.valid;
  outC->_L20 = !outC->_L19;
  outC->_L14 = outC->_L2.BGMessageSent;
  outC->_L21 = !outC->_L14;
  outC->_L15 = outC->_L2.collectedTelegrams;
  outC->_L17 = 0;
  outC->_L16 = outC->_L15 == outC->_L17;
  outC->_L22 = outC->_L20 & outC->_L21 & outC->_L16;
  outC->_L3.badBaliseFlag = outC->_L30;
  outC->_L3.BGMessageSent = outC->_L22;
  outC->_L3.C_ID = outC->_L28;
  outC->_L3.BG_ID = outC->_L27;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.balisePosition,
    &outC->_L26);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.positionFirstContact,
    &outC->_L25);
  outC->_L3.collectedTelegrams = outC->_L24;
  outC->_L3.totalTelegrams = outC->_L23;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

