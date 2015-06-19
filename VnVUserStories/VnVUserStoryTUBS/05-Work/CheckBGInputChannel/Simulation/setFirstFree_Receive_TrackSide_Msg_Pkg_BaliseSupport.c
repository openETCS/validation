/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree */
void setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::inTelegramArray */Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegramArray);
  outC->_L14 = outC->_L2.valid;
  outC->_L15 = !outC->_L14;
  outC->cont = outC->_L14;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  if (outC->_L15) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L1);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L2);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outTelegrams, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

