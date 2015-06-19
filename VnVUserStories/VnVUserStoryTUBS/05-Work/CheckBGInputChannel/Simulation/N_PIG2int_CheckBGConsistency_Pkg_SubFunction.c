/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

void N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::N_PIG2int */
void N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_PIG2int::n_pig */N_PIG n_pig,
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L2 = n_pig;
  outC->_L3 = 1;
  outC->_L4 = 2;
  outC->_L5 = 3;
  outC->_L6 = 4;
  outC->_L7 = 5;
  outC->_L8 = 6;
  outC->_L9 = 7;
  outC->_L10 = 8;
  switch (outC->_L2) {
    case N_PIG_I_am_the_1st :
      outC->_L1 = outC->_L3;
      break;
    case N_PIG_I_am_the_2nd :
      outC->_L1 = outC->_L4;
      break;
    case N_PIG_I_am_the_3rd :
      outC->_L1 = outC->_L5;
      break;
    case N_PIG_I_am_the_4th :
      outC->_L1 = outC->_L6;
      break;
    case N_PIG_I_am_the_5th :
      outC->_L1 = outC->_L7;
      break;
    case N_PIG_I_am_the_6th :
      outC->_L1 = outC->_L8;
      break;
    case N_PIG_I_am_the_7th :
      outC->_L1 = outC->_L9;
      break;
    case N_PIG_I_am_the_8th :
      outC->_L1 = outC->_L10;
      break;
    
  }
  outC->n_pig2int = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** N_PIG2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

