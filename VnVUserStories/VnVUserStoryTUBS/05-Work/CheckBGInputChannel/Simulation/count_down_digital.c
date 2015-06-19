/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "count_down_digital.h"

void count_down_reset_digital(outC_count_down_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::count_down */
void count_down_digital(
  /* digital::count_down::Reset */kcg_bool Reset,
  /* digital::count_down::N */kcg_int N,
  outC_count_down_digital *outC)
{
  outC->_L13 = outC->_L4;
  outC->_L2 = N;
  if (outC->init) {
    outC->_L8 = outC->_L2;
  }
  else {
    outC->_L8 = outC->_L13;
  }
  outC->_L7 = 1;
  outC->_L1 = Reset;
  if (outC->_L1) {
    outC->_L3 = outC->_L2;
  }
  else {
    outC->_L3 = outC->_L8;
  }
  outC->_L4 = outC->_L3 - outC->_L7;
  outC->cpt = outC->_L3;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** count_down_digital.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

