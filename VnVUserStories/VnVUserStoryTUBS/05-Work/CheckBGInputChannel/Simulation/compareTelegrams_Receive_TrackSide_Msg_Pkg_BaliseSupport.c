/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams */
void compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram1 */Telegram_T_BG_Types_Pkg *inTelegram1,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram2 */Telegram_T_BG_Types_Pkg *inTelegram2,
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */ kcg_bool _1_isEqual;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */ kcg_bool isEqual;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, inTelegram1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, &outC->_L1.telegramheader);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, inTelegram2);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L4, &outC->_L2.telegramheader);
  outC->_L5 = kcg_comp_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, &outC->_L4);
  outC->HeaderIsEqual = outC->_L5;
  outC->IfBlock1_clock = outC->HeaderIsEqual;
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L5_IfBlock1, inTelegram1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4_IfBlock1, inTelegram2);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L2_IfBlock1,
      &outC->_L5_IfBlock1.packets);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_L4_IfBlock1.packets);
    outC->_L1_IfBlock1 = kcg_comp_CompressedPackets_T_Common_Types_Pkg(
        &outC->_L2_IfBlock1,
        &outC->_L3_IfBlock1);
    _1_isEqual = outC->_L1_IfBlock1;
    outC->isEqual = _1_isEqual;
  }
  else {
    outC->_L11_IfBlock1 = kcg_false;
    isEqual = outC->_L11_IfBlock1;
    outC->isEqual = isEqual;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

