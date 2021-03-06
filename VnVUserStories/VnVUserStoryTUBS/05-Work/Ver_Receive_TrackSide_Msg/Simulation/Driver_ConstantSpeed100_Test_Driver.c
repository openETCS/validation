/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Driver_ConstantSpeed100_Test_Driver.h"

#ifndef KCG_USER_DEFINED_INIT
void Driver_ConstantSpeed100_init_Test_Driver(
  outC_Driver_ConstantSpeed100_Test_Driver *outC)
{
  outC->_L4 = 0.0;
  outC->_L3 = 0.0;
  outC->_L2 = 0.0;
  outC->_L1 = 0.0;
  outC->out_initialvelocity = 0.0;
  outC->out_acceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Driver_ConstantSpeed100_reset_Test_Driver(
  outC_Driver_ConstantSpeed100_Test_Driver *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Test_Driver::Driver_ConstantSpeed100 */
void Driver_ConstantSpeed100_Test_Driver(
  outC_Driver_ConstantSpeed100_Test_Driver *outC)
{
  outC->_L1 = 100.0;
  outC->_L2 = 0.0;
  outC->out_acceleration = outC->_L2;
  outC->_L4 = 3.6;
  outC->_L3 = outC->_L1 / outC->_L4;
  outC->out_initialvelocity = outC->_L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Driver_ConstantSpeed100_Test_Driver.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

