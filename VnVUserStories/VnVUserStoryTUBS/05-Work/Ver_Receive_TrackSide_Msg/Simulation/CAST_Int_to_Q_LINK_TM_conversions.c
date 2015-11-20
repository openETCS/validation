/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINK_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_LINK_init_TM_conversions(
  outC_CAST_Int_to_Q_LINK_TM_conversions *outC)
{
  outC->_L12 = 0;
  outC->_L13 = kcg_true;
  outC->q_link_in = 0;
  outC->error = kcg_true;
  outC->_L51_IfBlock1 = kcg_true;
  outC->_L3_IfBlock1 = Q_LINK_Unlinked;
  outC->_L1_IfBlock1 = Q_LINK_Unlinked;
  outC->_L2_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_IfBlock1 = Q_LINK_Unlinked;
  outC->_L5_IfBlock1 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->q_link = Q_LINK_Unlinked;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_LINK_reset_TM_conversions(
  outC_CAST_Int_to_Q_LINK_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::CAST_Int_to_Q_LINK */
void CAST_Int_to_Q_LINK_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link_int */ kcg_int q_link_int,
  outC_CAST_Int_to_Q_LINK_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_LINK::error */ kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link */ Q_LINK _1_q_link;
  /* TM_conversions::CAST_Int_to_Q_LINK::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link */ Q_LINK q_link;
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link */ Q_LINK _3_q_link;
  /* TM_conversions::CAST_Int_to_Q_LINK::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_LINK::q_link */ Q_LINK _5_q_link;
  /* TM_conversions::CAST_Int_to_Q_LINK::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_link_int;
  outC->q_link_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_link_in == INT_Q_LINK_linked_TM_conversions;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error2 = outC->_L5_IfBlock1;
    outC->error = error2;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_link_in ==
      INT_Q_LINK_unlinked_TM_conversions;
    /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      error = error6;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      error = error4;
    }
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = ENUM_Q_LINK_linked_TM_conversions;
    _1_q_link = outC->_L4_IfBlock1;
    outC->q_link = _1_q_link;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
      outC->_L3_IfBlock1 = ENUM_Q_LINK_unlinked_TM_conversions;
      _5_q_link = outC->_L3_IfBlock1;
      q_link = _5_q_link;
    }
    else {
      outC->_L1_IfBlock1 = ENUM_Q_LINK_linked_TM_conversions;
      _3_q_link = outC->_L1_IfBlock1;
      q_link = _3_q_link;
    }
    outC->q_link = q_link;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LINK_TM_conversions.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

