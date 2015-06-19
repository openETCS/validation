/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void MergAllPackets_Iter_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_int i;
  
  for (i = 0; i < 7; i++) {
    /* 1 */
    MergAllPackets_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_1[i]);
  }
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
void MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramArray */TelegramArray_T_BG_Types_Pkg *telegramArray,
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  Telegram_T_BG_Types_Pkg tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L5, telegramArray);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6, &outC->_L5[0]);
  kcg_copy_array__18453(&outC->_L8, (array__18453 *) &outC->_L5[1]);
  outC->_L4 = kcg_true;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, &outC->_L6);
  if (outC->_L4) {
    for (i = 0; i < 7; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&tmp, &outC->_L1);
      /* 1 */
      MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &tmp,
        &outC->_L8[i],
        &outC->Context_1[i]);
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L1,
        &outC->Context_1[i].telegram_out);
      outC->_L3 = i + 1;
      if (!outC->Context_1[i].go_on) {
        break;
      }
    }
  }
  else {
    outC->_L3 = 0;
  }
  noname = outC->_L3;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegramout, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

