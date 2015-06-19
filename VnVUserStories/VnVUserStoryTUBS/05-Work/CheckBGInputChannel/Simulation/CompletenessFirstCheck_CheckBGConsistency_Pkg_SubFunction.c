/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"

void CompletenessFirstCheck_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_int i;
  
  /* 2 */
  CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_2);
  /* 3 */
  CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_3);
  /* 6 */
  Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_6);
  for (i = 0; i < 7; i++) {
    /* 5 */
    Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(
      &outC->Context_5[i]);
  }
  /* 1 */
  CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_1_Context_1);
  /* 1 */
  CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  outC_CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction *outC)
{
  Telegram_T_BG_Types_Pkg tmp;
  kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */ kcg_bool _3_isComplete;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */ Telegram_T_BG_Types_Pkg _2_lastTelegram;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */ kcg_int inDex1;
  Telegram_T_BG_Types_Pkg _4_noname;
  Telegram_T_BG_Types_Pkg noname;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */ kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */ Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */ kcg_int inDex;
  kcg_int default_inDex;
  
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L15, telegramarray_in);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L16,
    &outC->_L15[0].telegramheader);
  /* 1 */
  CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_L16,
    &outC->Context_1);
  outC->_L18 = outC->Context_1.isTheFirst;
  /* 1 */
  CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_L16,
    &outC->_1_Context_1);
  outC->_L19 = outC->_1_Context_1.isTheFirst;
  outC->_L20 = outC->_L18 | outC->_L19;
  outC->_L21 = outC->_L15[0].valid;
  outC->_L22 = outC->_L20 & outC->_L21;
  outC->firstTelegramIsValid = outC->_L22;
  outC->IfBlock1_clock = outC->firstTelegramIsValid;
  if (outC->IfBlock1_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L43_IfBlock1,
      telegramarray_in);
    outC->_L42_IfBlock1 = 1;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L34_IfBlock1,
      telegramarray_in);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L11_IfBlock1,
      telegramarray_in);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L12_IfBlock1,
      &outC->_L11_IfBlock1[0]);
    kcg_copy_array__18453(
      &outC->_L26_IfBlock1,
      (array__18453 *) &outC->_L11_IfBlock1[1]);
    outC->_L8_IfBlock1 = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L10_IfBlock1,
      &outC->_L12_IfBlock1);
    if (outC->_L8_IfBlock1) {
      for (i = 0; i < 7; i++) {
        kcg_copy_Telegram_T_BG_Types_Pkg(&tmp, &outC->_L10_IfBlock1);
        /* 5 */
        Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
          &tmp,
          &outC->_L26_IfBlock1[i],
          &outC->Context_5[i]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L10_IfBlock1,
          &outC->Context_5[i].telegram_out);
        outC->_L9_IfBlock1 = i + 1;
        if (!outC->Context_5[i].isConsistent) {
          break;
        }
      }
    }
    else {
      outC->_L9_IfBlock1 = 0;
    }
    outC->_L32_IfBlock1 = outC->_L9_IfBlock1 - outC->_L42_IfBlock1;
    if ((0 <= outC->_L32_IfBlock1) & (outC->_L32_IfBlock1 < 8)) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L36_IfBlock1,
        &outC->_L34_IfBlock1[outC->_L32_IfBlock1]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L36_IfBlock1,
        (Telegram_T_BG_Types_Pkg *)
          &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    outC->_L33_IfBlock1 = 2;
    outC->_L41_IfBlock1 = outC->_L9_IfBlock1 - outC->_L33_IfBlock1;
    if ((0 <= outC->_L41_IfBlock1) & (outC->_L41_IfBlock1 < 8)) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L39_IfBlock1,
        &outC->_L43_IfBlock1[outC->_L41_IfBlock1]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L39_IfBlock1,
        (Telegram_T_BG_Types_Pkg *)
          &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    /* 6 */
    Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L36_IfBlock1,
      &outC->_L39_IfBlock1,
      &outC->Context_6);
    outC->_L37_IfBlock1 = outC->Context_6.isConsistent;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L38_IfBlock1,
      &outC->Context_6.telegram_out);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_4_noname, &outC->_L38_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&noname, &outC->_L10_IfBlock1);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &outC->_L16_IfBlock1,
      &outC->_L36_IfBlock1.telegramheader);
    inDex1 = outC->_L9_IfBlock1;
    /* 3 */
    CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &outC->_L16_IfBlock1,
      &outC->Context_3);
    outC->_L13_IfBlock1 = outC->Context_3.isTheFirst;
    /* 2 */
    CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &outC->_L16_IfBlock1,
      &outC->Context_2);
    outC->_L14_IfBlock1 = outC->Context_2.isTheFirst;
    outC->_L15_IfBlock1 = outC->_L13_IfBlock1 | outC->_L14_IfBlock1;
    outC->_L29_IfBlock1 = outC->_L37_IfBlock1 & outC->_L15_IfBlock1;
    kcg_copy_Telegram_T_BG_Types_Pkg(&_2_lastTelegram, &outC->_L36_IfBlock1);
    _3_isComplete = outC->_L29_IfBlock1;
  }
  default_inDex = - 1;
  if (outC->IfBlock1_clock) {
    outC->isComplete = _3_isComplete;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &_2_lastTelegram);
    outC->inDex = inDex1;
  }
  else {
    inDex = default_inDex;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &lastTelegram,
      (Telegram_T_BG_Types_Pkg *)
        &cInConsistentTelegram_CheckBGConsistency_Pkg);
    outC->_L1_IfBlock1 = kcg_false;
    isComplete = outC->_L1_IfBlock1;
    outC->isComplete = isComplete;
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &lastTelegram);
    outC->inDex = inDex;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

