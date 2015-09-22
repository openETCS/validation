/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_convert_engineering_TM_conversions.h"

#ifndef KCG_USER_DEFINED_INIT
void TOOLS_convert_engineering_init_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
  outC->_L4 = 0.0;
  outC->_L3 = 0.0;
  outC->_L2 = 0.0;
  outC->_L1 = 0;
  outC->Loc_real = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TOOLS_convert_engineering_reset_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions::TOOLS_convert_engineering_location */
void TOOLS_convert_engineering_TM_conversions(
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_int */ kcg_int Loc_int,
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
  outC->_L1 = Loc_int;
  outC->_L2 = (kcg_real) outC->_L1;
  outC->_L3 = DIM_scale_eng_location_TM;
  outC->_L4 = outC->_L2 * outC->_L3;
  outC->Loc_real = outC->_L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TOOLS_convert_engineering_TM_conversions.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

