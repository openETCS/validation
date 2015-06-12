/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

void CheckFirstTelNotDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  /* 1 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_1_Context_1);
  /* 1 */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup */
void CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L1, telegramHeader_in);
  outC->_L2 = outC->_L1.n_total;
  /* 1 */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(outC->_L2, &outC->Context_1);
  outC->_L5 = outC->Context_1.n_total2int;
  outC->_L3 = outC->_L1.n_pig;
  /* 1 */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(outC->_L3, &outC->_1_Context_1);
  outC->_L4 = outC->_1_Context_1.n_pig2int;
  outC->_L6 = outC->_L5 == outC->_L4;
  outC->_L9 = 1;
  outC->_L8 = outC->_L4 == outC->_L9;
  outC->_L7 = outC->_L6 | outC->_L8;
  outC->isTheFirst = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

