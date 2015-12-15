/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Driver_ConstantAcc_Test_Driver.h"

#ifndef KCG_USER_DEFINED_INIT
void Driver_ConstantAcc_init_Test_Driver(
  outC_Driver_ConstantAcc_Test_Driver *outC)
{
  outC->_L2 = 0.0;
  outC->_L1 = 0.0;
  outC->out_initialvelocity = 0.0;
  outC->out_acceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Driver_ConstantAcc_reset_Test_Driver(
  outC_Driver_ConstantAcc_Test_Driver *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Test_Driver::Driver_ConstantAcc */
void Driver_ConstantAcc_Test_Driver(outC_Driver_ConstantAcc_Test_Driver *outC)
{
  outC->_L1 = 100.0;
  outC->out_acceleration = outC->_L1;
  outC->_L2 = 0.0;
  outC->out_initialvelocity = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Driver_ConstantAcc_Test_Driver.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

