/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_VERSION_init_TM_conversions(
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = 0;
  outC->error = kcg_true;
  outC->m_version_in = 0;
  outC->_L53_IfBlock1 = kcg_true;
  outC->_L3_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L45_IfBlock1 = kcg_true;
  outC->_L26_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_IfBlock1 = kcg_true;
  outC->_L27_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L44_IfBlock1 = kcg_true;
  outC->_L4_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_IfBlock1 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_1_else_clock_IfBlock1 = kcg_true;
  outC->_2_else_clock_IfBlock1 = kcg_true;
  outC->m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_VERSION_reset_TM_conversions(
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::CAST_Int_to_M_VERSION */
void CAST_Int_to_M_VERSION_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version_int */ kcg_int m_version_int,
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _1_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _9_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _7_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _11_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error12;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _13_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error14;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _3_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _5_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L4 = m_version_int;
  outC->m_version_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_version_in <=
    INT_M_VERSION_previous_M_TM_conversions;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = ENUM_M_VERSION_Previous_versions_TM_conversions;
    _1_m_version = outC->_L4_IfBlock1;
    outC->m_version = _1_m_version;
    outC->_L5_IfBlock1 = kcg_false;
    error2 = outC->_L5_IfBlock1;
    outC->error = error2;
  }
  else {
    outC->_2_else_clock_IfBlock1 = outC->m_version_in ==
      INT_M_VERSION_1_0_TM_conversions;
    /* ck_anon_activ */ if (outC->_2_else_clock_IfBlock1) {
      outC->_L3_IfBlock1 = ENUM_M_VERSION_Version_1_0_TM_conversions;
      _5_m_version = outC->_L3_IfBlock1;
      m_version = _5_m_version;
    }
    else {
      outC->_1_else_clock_IfBlock1 = outC->m_version_in ==
        INT_M_VERSION_1_1_TM_conversions;
      /* ck_anon_activ */ if (outC->_1_else_clock_IfBlock1) {
        outC->_L2_IfBlock1 = ENUM_M_VERSION_Version_1_1_TM_conversions;
        _9_m_version = outC->_L2_IfBlock1;
        _3_m_version = _9_m_version;
      }
      else {
        outC->else_clock_IfBlock1 = outC->m_version_in ==
          INT_M_VERSION_2_0_TM_conversions;
        /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
          outC->_L26_IfBlock1 = ENUM_M_VERSION_Version_2_0_TM_conversions;
          _13_m_version = outC->_L26_IfBlock1;
          _7_m_version = _13_m_version;
        }
        else {
          outC->_L27_IfBlock1 = ENUM_M_VERSION_Previous_versions_TM_conversions;
          _11_m_version = outC->_L27_IfBlock1;
          _7_m_version = _11_m_version;
        }
        _3_m_version = _7_m_version;
      }
      m_version = _3_m_version;
    }
    outC->m_version = m_version;
    /* ck_anon_activ */ if (outC->_2_else_clock_IfBlock1) {
      outC->_L53_IfBlock1 = kcg_false;
      error6 = outC->_L53_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (outC->_1_else_clock_IfBlock1) {
        outC->_L44_IfBlock1 = kcg_false;
        error10 = outC->_L44_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
          outC->_L45_IfBlock1 = kcg_false;
          error14 = outC->_L45_IfBlock1;
          error8 = error14;
        }
        else {
          outC->_L1_IfBlock1 = kcg_true;
          error12 = outC->_L1_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_VERSION_TM_conversions.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

