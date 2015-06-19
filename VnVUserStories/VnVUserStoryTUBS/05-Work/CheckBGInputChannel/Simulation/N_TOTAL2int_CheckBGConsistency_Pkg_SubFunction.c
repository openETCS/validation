/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

void N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int */
void N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::N_TOTAL2int::n_total */N_TOTAL n_total,
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L11 = n_total;
  outC->_L9 = 1;
  outC->_L7 = 2;
  outC->_L2 = 3;
  outC->_L1 = 4;
  outC->_L10 = 5;
  outC->_L4 = 6;
  outC->_L6 = 7;
  outC->_L8 = 8;
  switch (outC->_L11) {
    case N_TOTAL_1_balise_in_the_group :
      outC->_L3 = outC->_L9;
      break;
    case N_TOTAL_2_balises_in_the_group :
      outC->_L3 = outC->_L7;
      break;
    case N_TOTAL_3_balises_in_the_group :
      outC->_L3 = outC->_L2;
      break;
    case N_TOTAL_4_balises_in_the_group :
      outC->_L3 = outC->_L1;
      break;
    case N_TOTAL_5_balises_in_the_group :
      outC->_L3 = outC->_L10;
      break;
    case N_TOTAL_6_balises_in_the_group :
      outC->_L3 = outC->_L4;
      break;
    case N_TOTAL_7_balises_in_the_group :
      outC->_L3 = outC->_L6;
      break;
    case N_TOTAL_8_balises_in_the_group :
      outC->_L3 = outC->_L8;
      break;
    
  }
  outC->n_total2int = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

