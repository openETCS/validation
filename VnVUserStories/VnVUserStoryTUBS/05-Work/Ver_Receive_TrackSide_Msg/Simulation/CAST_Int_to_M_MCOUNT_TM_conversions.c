/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MCOUNT_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_MCOUNT_init_TM_conversions(
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC)
{
  outC->_L11 = 0;
  outC->_L10 = 0;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = 0;
  outC->m_mcount = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_MCOUNT_reset_TM_conversions(
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::CAST_Int_to_M_MCOUNT */
void CAST_Int_to_M_MCOUNT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_MCOUNT::m_mcount_int */ kcg_int m_mcount_int,
  outC_CAST_Int_to_M_MCOUNT_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L1 = m_mcount_int;
  outC->m_mcount = outC->_L1;
  outC->_L11 = 255;
  outC->_L9 = outC->_L1 > outC->_L11;
  noname = outC->_L9;
  outC->_L10 = 0;
  outC->_L8 = outC->_L1 < outC->_L10;
  _1_noname = outC->_L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_MCOUNT_TM_conversions.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

