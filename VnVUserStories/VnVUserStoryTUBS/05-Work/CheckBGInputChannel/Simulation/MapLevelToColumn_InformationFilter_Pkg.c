/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"

void MapLevelToColumn_reset_InformationFilter_Pkg(
  outC_MapLevelToColumn_InformationFilter_Pkg *outC)
{
}

/* InformationFilter_Pkg::MapLevelToColumn */
void MapLevelToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapLevelToColumn::inLevel */M_LEVEL inLevel,
  outC_MapLevelToColumn_InformationFilter_Pkg *outC)
{
  outC->_L7 = 4;
  outC->_L6 = 3;
  outC->_L5 = 2;
  outC->_L4 = 1;
  outC->_L3 = 0;
  outC->_L1 = inLevel;
  switch (outC->_L1) {
    case M_LEVEL_Level_0 :
      outC->_L2 = outC->_L3;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      outC->_L2 = outC->_L4;
      break;
    case M_LEVEL_Level_1 :
      outC->_L2 = outC->_L5;
      break;
    case M_LEVEL_Level_2 :
      outC->_L2 = outC->_L6;
      break;
    case M_LEVEL_Level_3 :
      outC->_L2 = outC->_L7;
      break;
    
  }
  outC->outColumn = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapLevelToColumn_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

