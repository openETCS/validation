/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* 1 */
  convNTotal_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector */
void initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L12, newTelegram);
  outC->_L9 = kcg_false;
  outC->_L1 = kcg_true;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L6,
    &outC->_L12.telegramheader);
  outC->_L8 = outC->_L6.nid_c;
  outC->_L3 = outC->_L6.nid_bg;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L10,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L2,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  outC->_L7 = 0;
  outC->_L4 = outC->_L6.n_total;
  /* 1 */
  convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    outC->_L4,
    &outC->Context_1);
  outC->_L5 = outC->Context_1.outTotal;
  outC->_L11.badBaliseFlag = outC->_L9;
  outC->_L11.BGMessageSent = outC->_L1;
  outC->_L11.C_ID = outC->_L8;
  outC->_L11.BG_ID = outC->_L3;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L11.balisePosition,
    &outC->_L10);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L11.positionFirstContact,
    &outC->_L2);
  outC->_L11.collectedTelegrams = outC->_L7;
  outC->_L11.totalTelegrams = outC->_L5;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L11);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

