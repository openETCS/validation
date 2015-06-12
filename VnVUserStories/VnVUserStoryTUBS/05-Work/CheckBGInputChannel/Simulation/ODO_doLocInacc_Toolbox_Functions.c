/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

void ODO_doLocInacc_reset_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
}

/* Toolbox::Functions::ODO_doLocInacc */
void ODO_doLocInacc_Toolbox_Functions(
  /* Toolbox::Functions::ODO_doLocInacc::d_min */L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
  outC->_L13 = d_Max;
  outC->_L12 = d_min;
  outC->_L9 = 0;
  outC->_L2.nominal = outC->_L9;
  outC->_L2.d_min = outC->_L12;
  outC->_L2.d_max = outC->_L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->locInAcc, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_doLocInacc_Toolbox_Functions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

