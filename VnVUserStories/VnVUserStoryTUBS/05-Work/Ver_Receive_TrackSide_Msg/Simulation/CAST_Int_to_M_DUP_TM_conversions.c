/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_DUP_init_TM_conversions(
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = 0;
  outC->error = kcg_true;
  outC->m_dup_in = 0;
  outC->_L62_IfBlock1 = kcg_true;
  outC->_L5_IfBlock1 = M_DUP_No_duplicates;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_IfBlock1 = kcg_true;
  outC->_L3_IfBlock1 = M_DUP_No_duplicates;
  outC->_L4_IfBlock1 = M_DUP_No_duplicates;
  outC->_L53_IfBlock1 = kcg_true;
  outC->_L6_IfBlock1 = M_DUP_No_duplicates;
  outC->_L7_IfBlock1 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_1_else_clock_IfBlock1 = kcg_true;
  outC->m_dup = M_DUP_No_duplicates;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_DUP_reset_TM_conversions(
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::CAST_Int_to_M_DUP */
void CAST_Int_to_M_DUP_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_DUP::int_in */ kcg_int int_in,
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup1;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup9;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup7;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup3;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup5;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = int_in;
  outC->m_dup_in = outC->_L2;
  outC->IfBlock1_clock = outC->m_dup_in ==
    INT_M_DUP_duplicate_of_next_TM_conversions;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L6_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
    m_dup1 = outC->_L6_IfBlock1;
    outC->m_dup = m_dup1;
    outC->_L7_IfBlock1 = kcg_false;
    error2 = outC->_L7_IfBlock1;
    outC->error = error2;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->m_dup_in ==
      INT_M_DUP_duplicate_of_previous_TM_conversions;
    /* ck_anon_activ */ if (outC->_1_else_clock_IfBlock1) {
      outC->_L5_IfBlock1 = ENUM_M_DUP_duplicate_of_previous_TM_conversions;
      m_dup5 = outC->_L5_IfBlock1;
      m_dup = m_dup5;
    }
    else {
      outC->else_clock_IfBlock1 = outC->m_dup_in ==
        INT_M_DUP_no_duplicates_TM_conversions;
      /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = ENUM_M_DUP_no_duplicates_TM_conversions;
        m_dup9 = outC->_L4_IfBlock1;
        m_dup3 = m_dup9;
      }
      else {
        outC->_L3_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
        m_dup7 = outC->_L3_IfBlock1;
        m_dup3 = m_dup7;
      }
      m_dup = m_dup3;
    }
    outC->m_dup = m_dup;
    /* ck_anon_activ */ if (outC->_1_else_clock_IfBlock1) {
      outC->_L62_IfBlock1 = kcg_false;
      error6 = outC->_L62_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
        outC->_L53_IfBlock1 = kcg_false;
        error10 = outC->_L53_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_L2_IfBlock1 = kcg_true;
        error8 = outC->_L2_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L3 = outC->error;
  noname = outC->_L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_DUP_TM_conversions.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

