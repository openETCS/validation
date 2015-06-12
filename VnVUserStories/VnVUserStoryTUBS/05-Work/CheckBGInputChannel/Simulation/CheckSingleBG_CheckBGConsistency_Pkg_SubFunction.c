/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

void CheckSingleBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* 6 */
  CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_6);
  /* 2 */
  CheckOneTelegram_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_2);
}

/* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG */
void CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::telegram_in */Telegram_T_BG_Types_Pkg *telegram_in,
  outC_CheckSingleBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */ kcg_bool _1_isSingleBG;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */ kcg_bool isSingleBG;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */ kcg_bool _2_isSingleBG;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */ kcg_bool _3_isSingleBG;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, telegram_in);
  outC->_L22 = outC->_L1.valid;
  outC->valid = outC->_L22;
  outC->_L21 = outC->_L1.telegramheader.n_total;
  outC->n_total = outC->_L21;
  outC->IfBlock1_clock = (outC->n_total == N_TOTAL_1_balise_in_the_group) &
    outC->valid;
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1_IfBlock1, telegram_in);
    /* 2 */
    CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L1_IfBlock1,
      &outC->Context_2);
    outC->_L2_IfBlock1 = outC->Context_2.isConsistent;
    outC->_L3_IfBlock1 = outC->_L1_IfBlock1.telegramheader.n_pig;
    outC->_L5_IfBlock1 = N_PIG_I_am_the_1st;
    outC->_L6_IfBlock1 = outC->_L3_IfBlock1 == outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = outC->_L1_IfBlock1.telegramheader.m_dup;
    outC->_L8_IfBlock1 = M_DUP_No_duplicates;
    outC->_L9_IfBlock1 = outC->_L4_IfBlock1 == outC->_L8_IfBlock1;
    outC->_L10_IfBlock1 = outC->_L2_IfBlock1 & outC->_L6_IfBlock1 &
      outC->_L9_IfBlock1;
    _1_isSingleBG = outC->_L10_IfBlock1;
    outC->isSingleBG = _1_isSingleBG;
  }
  else {
    outC->else_clock_IfBlock1 = (outC->n_total ==
        N_TOTAL_2_balises_in_the_group) & outC->valid;
    if (outC->else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L13_IfBlock1, telegram_in);
      outC->_L19_IfBlock1 = outC->_L13_IfBlock1.telegramheader.n_pig;
      outC->_L14_IfBlock1 = N_PIG_I_am_the_1st;
      outC->_L16_IfBlock1 = outC->_L19_IfBlock1 == outC->_L14_IfBlock1;
      outC->_L17_IfBlock1 = outC->_L13_IfBlock1.telegramheader.m_dup;
      outC->_L22_IfBlock1 =
        _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
      outC->_L18_IfBlock1 = outC->_L17_IfBlock1 == outC->_L22_IfBlock1;
      outC->_L23_IfBlock1 = outC->_L16_IfBlock1 & outC->_L18_IfBlock1;
      outC->_L24_IfBlock1 = outC->_L13_IfBlock1.telegramheader.n_pig;
      outC->_L28_IfBlock1 = N_PIG_I_am_the_2nd;
      outC->_L25_IfBlock1 = outC->_L24_IfBlock1 == outC->_L28_IfBlock1;
      outC->_L29_IfBlock1 = outC->_L13_IfBlock1.telegramheader.m_dup;
      outC->_L30_IfBlock1 =
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
      outC->_L26_IfBlock1 = outC->_L29_IfBlock1 == outC->_L30_IfBlock1;
      outC->_L27_IfBlock1 = outC->_L25_IfBlock1 & outC->_L26_IfBlock1;
      outC->_L31_IfBlock1 = outC->_L23_IfBlock1 | outC->_L27_IfBlock1;
      /* 6 */
      CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
        &outC->_L13_IfBlock1,
        &outC->Context_6);
      outC->_L20_IfBlock1 = outC->Context_6.isConsistent;
      outC->_L21_IfBlock1 = outC->_L20_IfBlock1 & outC->_L31_IfBlock1;
      _3_isSingleBG = outC->_L21_IfBlock1;
      isSingleBG = _3_isSingleBG;
    }
    else {
      outC->_L11_IfBlock1 = kcg_false;
      _2_isSingleBG = outC->_L11_IfBlock1;
      isSingleBG = _2_isSingleBG;
    }
    outC->isSingleBG = isSingleBG;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

