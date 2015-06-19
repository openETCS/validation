/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"

void CheckMode_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::CheckMode */
void CheckMode_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckMode::currentMode */M_MODE currentMode,
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L34 = currentMode;
  outC->_L30 = M_MODE_Stand_By;
  outC->_L15 = outC->_L34 == outC->_L30;
  outC->_L17 = M_MODE_Shunting;
  outC->_L18 = outC->_L34 == outC->_L17;
  outC->_L36 = M_MODE_Staff_Responsible;
  outC->_L21 = outC->_L34 == outC->_L36;
  outC->_L16 = M_MODE_Sleeping;
  outC->_L27 = outC->_L34 == outC->_L16;
  outC->_L26 = M_MODE_Trip;
  outC->_L37 = outC->_L34 == outC->_L26;
  outC->_L29 = M_MODE_Non_Leading;
  outC->_L14 = outC->_L34 == outC->_L29;
  outC->_L28 = M_MODE_Unfitted;
  outC->_L32 = outC->_L34 == outC->_L28;
  outC->_L24 = M_MODE_Reversing;
  outC->_L20 = outC->_L34 == outC->_L24;
  outC->_L23 = M_MODE_National_System;
  outC->_L25 = outC->_L34 == outC->_L23;
  outC->_L31 = M_MODE_Post_Trip;
  outC->_L35 = outC->_L34 == outC->_L31;
  outC->_L33 = M_MODE_Post_Trip;
  outC->_L19 = outC->_L34 == outC->_L33;
  outC->_L49 = M_MODE_On_Sight;
  outC->_L50 = outC->_L34 == outC->_L49;
  outC->_L48 = M_MODE_Limited_Supervision;
  outC->_L46 = outC->_L34 == outC->_L48;
  outC->_L52 = M_MODE_Full_Supervision;
  outC->_L51 = outC->_L34 == outC->_L52;
  outC->_L22 = outC->_L15 | outC->_L18 | outC->_L21 | outC->_L27 | outC->_L37 |
    outC->_L14 | outC->_L32 | outC->_L20 | outC->_L25 | outC->_L35 |
    outC->_L19 | outC->_L50 | outC->_L46 | outC->_L51;
  outC->bgConsistansyIsActive = outC->_L22;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckMode_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

