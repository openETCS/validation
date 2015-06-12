/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"

void checkInit_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::checkInit */
void checkInit_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkInit::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkInit::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _1_outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L8, inCollector);
  outC->_L2 = outC->_L8.totalTelegrams;
  outC->_L4 = 0;
  outC->_L6 = outC->_L2 > outC->_L4;
  outC->isDefined = outC->_L6;
  outC->IfBlock1_clock = outC->isDefined;
  if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L1_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_1_outCollector,
      &outC->_L1_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_1_outCollector);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L19_IfBlock1, newTelegram);
    /* 1 */
    initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L19_IfBlock1,
      &outC->Context_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L20_IfBlock1,
      &outC->Context_1.outCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &outC->_L20_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkInit_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

