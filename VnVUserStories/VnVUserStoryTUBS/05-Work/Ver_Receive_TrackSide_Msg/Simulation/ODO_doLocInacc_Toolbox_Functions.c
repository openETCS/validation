/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

#ifndef KCG_USER_DEFINED_INIT
void ODO_doLocInacc_init_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L9 = 0;
  outC->_L2.nominal = 0;
  outC->_L2.d_min = 0;
  outC->_L2.d_max = 0;
  outC->locInAcc.nominal = 0;
  outC->locInAcc.d_min = 0;
  outC->locInAcc.d_max = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_doLocInacc_reset_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::ODO_doLocInacc */
void ODO_doLocInacc_Toolbox_Functions(
  /* Toolbox::Functions::ODO_doLocInacc::d_min */ L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */ L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
  outC->_L9 = 0;
  outC->_L12 = d_min;
  outC->_L13 = d_Max;
  outC->_L2.nominal = outC->_L9;
  outC->_L2.d_min = outC->_L12;
  outC->_L2.d_max = outC->_L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->locInAcc, &outC->_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_doLocInacc_Toolbox_Functions.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

