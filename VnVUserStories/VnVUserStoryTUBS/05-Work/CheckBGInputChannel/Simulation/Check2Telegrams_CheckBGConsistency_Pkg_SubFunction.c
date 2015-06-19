/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

void Check2Telegrams_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* 1 */
  Check2Headers_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */Telegram_T_BG_Types_Pkg *telegram2,
  outC_Check2Telegrams_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L85, telegram2);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegram_out, &outC->_L85);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, telegram1);
  outC->_L8 = outC->_L1.valid;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L2, &outC->_L1.telegramheader);
  outC->_L5 = outC->_L1.checkResult;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L4, telegram2);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L7, &outC->_L4.telegramheader);
  outC->_L6 = outC->_L4.checkResult;
  /* 1 */
  Check2Headers_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L2,
    outC->_L5,
    &outC->_L7,
    outC->_L6,
    &outC->Context_1);
  outC->_L3 = outC->Context_1.isConsistent;
  outC->_L9 = outC->_L4.valid;
  outC->_L10 = outC->_L8 & outC->_L3 & outC->_L9;
  outC->isConsistent = outC->_L10;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

