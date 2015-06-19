/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* 1 */
  compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
void replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::inTelegramArray */Telegram_T_BG_Types_Pkg *inTelegramArray,
  outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_bool tmp;
  
  outC->_L20 = kcg_false;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegramArray);
  outC->_L3 = outC->_L2.valid;
  outC->_L7 = outC->_L2.telegramheader.n_pig;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  outC->_L6 = outC->_L1.telegramheader.n_pig;
  outC->_L8 = outC->_L7 == outC->_L6;
  outC->_L9 = outC->_L3 & outC->_L8;
  outC->doReplace = outC->_L9;
  outC->_L19 = outC->doReplace;
  outC->tmp = outC->_L19;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L17, newTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, inTelegramArray);
  if (outC->tmp) {
    /* 1 */
    compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L17,
      &outC->_L18,
      &outC->Context_1);
    tmp = outC->Context_1.isEqual;
    outC->_L16 = tmp;
  }
  else {
    outC->_L16 = outC->_L20;
  }
  outC->outIsDuplicate = outC->_L16;
  outC->_L12 = outC->_L2.valid;
  outC->_L13 = outC->doReplace;
  outC->_L14 = !outC->_L13;
  outC->_L15 = outC->_L12 & outC->_L14;
  outC->_L10 = outC->doReplace;
  outC->_L11 = !outC->_L10;
  outC->cont = outC->_L15;
  if (outC->_L11) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L2);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, &outC->_L1);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outTelegrams, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

