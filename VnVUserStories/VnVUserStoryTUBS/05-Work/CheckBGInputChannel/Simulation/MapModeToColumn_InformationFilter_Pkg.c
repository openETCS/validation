/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapModeToColumn_InformationFilter_Pkg.h"

void MapModeToColumn_reset_InformationFilter_Pkg(
  outC_MapModeToColumn_InformationFilter_Pkg *outC)
{
}

/* InformationFilter_Pkg::MapModeToColumn */
void MapModeToColumn_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapModeToColumn::inMode */M_MODE inMode,
  outC_MapModeToColumn_InformationFilter_Pkg *outC)
{
  outC->_L28 = 16;
  outC->_L25 = 15;
  outC->_L24 = 14;
  outC->_L23 = 13;
  outC->_L22 = 12;
  outC->_L21 = 11;
  outC->_L20 = 10;
  outC->_L19 = 9;
  outC->_L18 = 8;
  outC->_L17 = 7;
  outC->_L16 = 6;
  outC->_L15 = 5;
  outC->_L14 = 4;
  outC->_L13 = 3;
  outC->_L12 = 2;
  outC->_L11 = 1;
  outC->_L10 = 0;
  outC->_L1 = inMode;
  switch (outC->_L1) {
    case M_MODE_No_Power :
      outC->_L2 = outC->_L10;
      break;
    case M_MODE_Stand_By :
      outC->_L2 = outC->_L11;
      break;
    case M_MODE_Passive_Shunting :
      outC->_L2 = outC->_L12;
      break;
    case M_MODE_Shunting :
      outC->_L2 = outC->_L13;
      break;
    case M_MODE_Full_Supervision :
      outC->_L2 = outC->_L14;
      break;
    case M_MODE_Limited_Supervision :
      outC->_L2 = outC->_L15;
      break;
    case M_MODE_Staff_Responsible :
      outC->_L2 = outC->_L16;
      break;
    case M_MODE_On_Sight :
      outC->_L2 = outC->_L17;
      break;
    case M_MODE_Sleeping :
      outC->_L2 = outC->_L18;
      break;
    case M_MODE_Non_Leading :
      outC->_L2 = outC->_L19;
      break;
    case M_MODE_Unfitted :
      outC->_L2 = outC->_L20;
      break;
    case M_MODE_Trip :
      outC->_L2 = outC->_L21;
      break;
    case M_MODE_Post_Trip :
      outC->_L2 = outC->_L22;
      break;
    case M_MODE_System_Failure :
      outC->_L2 = outC->_L23;
      break;
    case M_MODE_Isolation :
      outC->_L2 = outC->_L24;
      break;
    case M_MODE_National_System :
      outC->_L2 = outC->_L25;
      break;
    case M_MODE_Reversing :
      outC->_L2 = outC->_L28;
      break;
    
  }
  outC->outColumn = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapModeToColumn_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

