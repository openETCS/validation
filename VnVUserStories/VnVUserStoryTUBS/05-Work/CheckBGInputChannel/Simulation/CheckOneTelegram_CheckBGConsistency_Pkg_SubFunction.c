/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

void CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* 1 */
  CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram */
void CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::telegram_in */Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction *outC)
{
  CompressedPackets_T_Common_Types_Pkg noname;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L13, telegram_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L50,
    &outC->_L13.packets);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L51,
    &outC->_L13.telegramheader);
  outC->_L52 = outC->_L13.checkResult;
  outC->_L45 = outC->_L13.valid;
  /* 1 */
  CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L51,
    &outC->Context_1);
  outC->_L44 = outC->Context_1.isConsistent;
  outC->_L29 = outC->_L45 & outC->_L52 & outC->_L44;
  outC->isConsistent = outC->_L29;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&noname, &outC->_L50);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

