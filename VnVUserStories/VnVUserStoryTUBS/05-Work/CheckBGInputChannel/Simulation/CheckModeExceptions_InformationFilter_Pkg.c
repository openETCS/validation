/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckModeExceptions_InformationFilter_Pkg.h"

void CheckModeExceptions_reset_InformationFilter_Pkg(
  outC_CheckModeExceptions_InformationFilter_Pkg *outC)
{
}

/* InformationFilter_Pkg::CheckModeExceptions */
void CheckModeExceptions_InformationFilter_Pkg(
  /* InformationFilter_Pkg::CheckModeExceptions::inAction */ModeDecisionTableActionKind_DataDictionary_Pkg inAction,
  outC_CheckModeExceptions_InformationFilter_Pkg *outC)
{
  ModeDecisionTableActionKind_DataDictionary_Pkg noname;
  
  outC->_L1 = inAction;
  noname = outC->_L1;
  outC->_L2 = kcg_true;
  outC->outAccept = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckModeExceptions_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

