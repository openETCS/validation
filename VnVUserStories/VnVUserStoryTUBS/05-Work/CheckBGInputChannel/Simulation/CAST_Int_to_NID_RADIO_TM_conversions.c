/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_RADIO_TM_conversions.h"

void CAST_Int_to_NID_RADIO_reset_TM_conversions(
  outC_CAST_Int_to_NID_RADIO_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_NID_RADIO */
void CAST_Int_to_NID_RADIO_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_RADIO::nid_radio_int */kcg_int nid_radio_int,
  outC_CAST_Int_to_NID_RADIO_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L5 = 0;
  outC->_L1 = nid_radio_int;
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = 9999999999999999;
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_radio = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_RADIO_TM_conversions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

