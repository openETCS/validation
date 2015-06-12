/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"

void CheckCompleteness_reset_CheckBGConsistency_Pkg(
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC)
{
  /* 1 */
  CompletenessFirstCheck_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->_2_Context_1);
  /* 1 */
  CheckSingleBG_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_1_Context_1);
  /* 1 */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_1);
}

/* CheckBGConsistency_Pkg::CheckCompleteness */
void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */BG_Message_T_BG_Types_Pkg *bgMessage,
  outC_CheckCompleteness_CheckBGConsistency_Pkg *outC)
{
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool _3_isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool _2_isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg _1_lastTelegram;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool _4_isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool _5_isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg _6_lastTelegram;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool _7_isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool _8_isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg _9_lastTelegram;
  
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L1, bgMessage);
  outC->_L4 = outC->_L1.Telegrams[0].telegramheader.n_total;
  /* 1 */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(outC->_L4, &outC->Context_1);
  outC->_L5 = outC->Context_1.n_total2int;
  outC->nTotal = outC->_L5;
  outC->_L3 = outC->_L1.numberBalises;
  outC->numberOfBalises = outC->_L3;
  outC->IfBlock1_clock = outC->numberOfBalises == 1;
  if (outC->IfBlock1_clock) {
    _3_isComplete = kcg_false;
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L2_IfBlock1, bgMessage);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_L2_IfBlock1.Telegrams[0]);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_1_lastTelegram, &outC->_L3_IfBlock1);
    /* 1 */
    CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L3_IfBlock1,
      &outC->_1_Context_1);
    outC->_L1_IfBlock1 = outC->_1_Context_1.isSingleBG;
    _2_isSingleBG = outC->_L1_IfBlock1;
    outC->isComplete = _3_isComplete;
    outC->isSingleBG = _2_isSingleBG;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &_1_lastTelegram);
  }
  else {
    outC->else_clock_IfBlock1 = !(outC->numberOfBalises > outC->nTotal) &
      (outC->numberOfBalises > 0);
    if (outC->else_clock_IfBlock1) {
      _8_isSingleBG = kcg_false;
      kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L4_IfBlock1, bgMessage);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L35_IfBlock1,
        &outC->_L4_IfBlock1.Telegrams);
      /* 1 */
      CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
        &outC->_L35_IfBlock1,
        &outC->_2_Context_1);
      outC->_L14_IfBlock1 = outC->_2_Context_1.isComplete;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L23_IfBlock1,
        &outC->_2_Context_1.lastTelegram);
      outC->_L5_IfBlock1 = outC->_2_Context_1.inDex;
      outC->_L8_IfBlock1 = outC->numberOfBalises;
      outC->_L7_IfBlock1 = outC->_L5_IfBlock1 == outC->_L8_IfBlock1;
      outC->_L9_IfBlock1 = outC->_L14_IfBlock1 & outC->_L7_IfBlock1;
      _7_isComplete = outC->_L9_IfBlock1;
      kcg_copy_Telegram_T_BG_Types_Pkg(&_9_lastTelegram, &outC->_L23_IfBlock1);
      kcg_copy_Telegram_T_BG_Types_Pkg(&lastTelegram, &_9_lastTelegram);
      isSingleBG = _8_isSingleBG;
      isComplete = _7_isComplete;
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L6_IfBlock1,
        (Telegram_T_BG_Types_Pkg *) &cTelegram_CheckBGConsistency_Pkg);
      kcg_copy_Telegram_T_BG_Types_Pkg(&_6_lastTelegram, &outC->_L6_IfBlock1);
      outC->_L56_IfBlock1 = kcg_false;
      _5_isSingleBG = outC->_L56_IfBlock1;
      _4_isComplete = outC->_L56_IfBlock1;
      kcg_copy_Telegram_T_BG_Types_Pkg(&lastTelegram, &_6_lastTelegram);
      isSingleBG = _5_isSingleBG;
      isComplete = _4_isComplete;
    }
    outC->isComplete = isComplete;
    outC->isSingleBG = isSingleBG;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &lastTelegram);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckCompleteness_CheckBGConsistency_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

