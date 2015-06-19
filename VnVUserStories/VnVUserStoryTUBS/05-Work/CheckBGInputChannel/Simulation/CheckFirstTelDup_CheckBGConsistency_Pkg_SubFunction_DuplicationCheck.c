/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

void CheckFirstTelDup_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  /* 3 */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_1_Context_3);
  /* 3 */ N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_3);
}

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup */
void CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L22, telegramHeader_in);
  outC->_L21 = outC->_L22.n_pig;
  /* 3 */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(outC->_L21, &outC->Context_3);
  outC->_L20 = outC->Context_3.n_pig2int;
  outC->_L15 = 2;
  outC->_L16 = outC->_L20 == outC->_L15;
  outC->_L33 = outC->_L22.m_dup;
  outC->_L29 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L34 = outC->_L33 == outC->_L29;
  outC->_L35 = outC->_L16 & outC->_L34;
  outC->_L28 = _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L26 = outC->_L22.m_dup;
  outC->_L31 = outC->_L28 == outC->_L26;
  outC->_L23 = outC->_L22.n_total;
  /* 3 */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
    outC->_L23,
    &outC->_1_Context_3);
  outC->_L18 = outC->_1_Context_3.n_total2int;
  outC->_L24 = 1;
  outC->_L25 = outC->_L18 - outC->_L24;
  outC->_L19 = outC->_L25 == outC->_L20;
  outC->_L32 = outC->_L31 & outC->_L19;
  outC->_L17 = outC->_L32 | outC->_L35;
  outC->isTheFirst = outC->_L17;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

