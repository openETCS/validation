/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTransitionEffective_InformationFilter_Pkg.h"

void LevelTransitionEffective_reset_InformationFilter_Pkg(
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}

/* InformationFilter_Pkg::LevelTransitionEffective */
void LevelTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::LevelTransitionEffective::inLevel */M_LEVEL inLevel,
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC)
{
  if (outC->init) {
    outC->_L3 = M_LEVEL_Level_0;
  }
  else {
    outC->_L3 = outC->_L1;
  }
  outC->oldLevel = outC->_L3;
  outC->_L4 = inLevel == outC->oldLevel;
  outC->_L5 = !outC->_L4;
  outC->outLevelTransition = outC->_L5;
  outC->_L1 = inLevel;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelTransitionEffective_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

