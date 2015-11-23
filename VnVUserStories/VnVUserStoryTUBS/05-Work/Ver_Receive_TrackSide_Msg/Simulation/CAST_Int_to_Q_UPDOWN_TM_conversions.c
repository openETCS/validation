/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_UPDOWN_init_TM_conversions(
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions *outC)
{
  outC->_L12 = 0;
  outC->_L13 = kcg_true;
  outC->q_updown_in = 0;
  outC->error = kcg_true;
  outC->_L51_IfBlock1 = kcg_true;
  outC->_L3_IfBlock1 = Q_UPDOWN_Down_link_telegram;
  outC->_L1_IfBlock1 = Q_UPDOWN_Down_link_telegram;
  outC->_L2_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_IfBlock1 = Q_UPDOWN_Down_link_telegram;
  outC->_L5_IfBlock1 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->q_updown = Q_UPDOWN_Down_link_telegram;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_UPDOWN_reset_TM_conversions(
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::CAST_Int_to_Q_UPDOWN */
void CAST_Int_to_Q_UPDOWN_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown_int */ kcg_int q_updown_int,
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */ kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */ Q_UPDOWN _1_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */ Q_UPDOWN q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */ Q_UPDOWN _3_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */ Q_UPDOWN _5_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_updown_int;
  outC->q_updown_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_updown_in ==
    INT_Q_UPDOWN_downlink_TM_conversions;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error2 = outC->_L5_IfBlock1;
    outC->error = error2;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_updown_in ==
      INT_Q_UPDOWN_uplink_TM_conversions;
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
    outC->_L4_IfBlock1 = ENUM_Q_UPDOWN_downlink_TM_conversions;
    _1_q_updown = outC->_L4_IfBlock1;
    outC->q_updown = _1_q_updown;
  }
  else {
    /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
      outC->_L3_IfBlock1 = ENUM_Q_UPDOWN_uplink_TM_conversions;
      _5_q_updown = outC->_L3_IfBlock1;
      q_updown = _5_q_updown;
    }
    else {
      outC->_L1_IfBlock1 = ENUM_Q_UPDOWN_downlink_TM_conversions;
      _3_q_updown = outC->_L1_IfBlock1;
      q_updown = _3_q_updown;
    }
    outC->q_updown = q_updown;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_UPDOWN_TM_conversions.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

