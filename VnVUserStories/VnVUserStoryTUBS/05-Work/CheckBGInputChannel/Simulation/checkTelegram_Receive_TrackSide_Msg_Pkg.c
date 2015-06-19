/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"

void checkTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_2_Context_1);
  /* 1 */
  checkSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_1_Context_1);
  /* 1 */
  initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::checkTelegram */
void checkTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::inTelegramArray */TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::BGCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *BGCollector,
  outC_checkTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L94,
    (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2, newTelegram);
  outC->_L32 = outC->_L2.telegramheader.nid_bg;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L56, BGCollector);
  outC->_L61 = outC->_L56.BG_ID;
  outC->_L36 = outC->_L32 == outC->_L61;
  outC->_L62 = !outC->_L36;
  outC->_L64 = outC->_L56.totalTelegrams;
  outC->_L66 = 0;
  outC->_L65 = outC->_L64 > outC->_L66;
  outC->_L63 = outC->_L62 & outC->_L65;
  outC->_L67 = outC->_L56.BGMessageSent;
  outC->_L68 = outC->_L63 & outC->_L67;
  outC->newBGInitNeeded = outC->_L68;
  outC->_L73 = outC->newBGInitNeeded;
  /* 1 */
  initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_L2,
    &outC->Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L92,
    &outC->Context_1.outCollector);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L74, BGCollector);
  if (outC->_L73) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L72, &outC->_L92);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L72, &outC->_L74);
  }
  /* 1 */
  checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_L2,
    &outC->_L72,
    &outC->_1_Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L93,
    &outC->_1_Context_1.outCollector);
  outC->_L87 = !outC->_L67;
  outC->_L88 = outC->_L63 & outC->_L87;
  outC->_L70 = outC->newBGInitNeeded;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L40, inTelegramArray);
  if (outC->_L70) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L69, &outC->_L94);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L69, &outC->_L40);
  }
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->outTelegramArray, &outC->_L69);
  outC->_L55 = outC->_L2.telegramheader.n_pig;
  outC->_L4 = outC->_L2.valid;
  outC->_L31 = outC->_L4 & outC->_L36;
  /* 1 */
  findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    outC->_L55,
    &outC->_L69,
    outC->_L31,
    &outC->_2_Context_1);
  outC->_L41 = outC->_2_Context_1.telegramAlreadyInGroup;
  outC->_L86 = !outC->_L41;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L93);
  outC->outBGchangedEarly = outC->_L88;
  outC->outTelegramNotInGroup = outC->_L86;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

