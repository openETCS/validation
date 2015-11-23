/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_MultiplexerInit_VerReTrackMsg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Input_MultiplexerInit_init_VerReTrackMsg_Pkg(
  outC_Input_MultiplexerInit_VerReTrackMsg_Pkg *outC)
{
  outC->_L15 = 0;
  outC->_L14 = 0.0;
  outC->_L13 = 0.0;
  outC->_L11 = 0.0;
  outC->_L10 = 0.0;
  outC->_L3 = 0;
  outC->_L6 = 0;
  outC->EndofStory = 0.0;
  outC->out_TotalNrofBGs = 0;
  outC->out_initialVelocity = 0.0;
  outC->out_initialPosition = 0.0;
  outC->out_acceleration = 0.0;
  /* 1 */
  Multiplexer_TestDriver_init_Subfunctions_CheckBGInput_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  Multiplexer_TestInitialTr_init_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_MultiplexerInit_reset_VerReTrackMsg_Pkg(
  outC_Input_MultiplexerInit_VerReTrackMsg_Pkg *outC)
{
  /* 1 */
  Multiplexer_TestDriver_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  Multiplexer_TestInitialTr_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* VerReTrackMsg_Pkg::Input_MultiplexerInit */
void Input_MultiplexerInit_VerReTrackMsg_Pkg(
  /* VerReTrackMsg_Pkg::Input_MultiplexerInit::in_TestDriver */ kcg_int in_TestDriver,
  /* VerReTrackMsg_Pkg::Input_MultiplexerInit::in_TestStory */ kcg_int in_TestStory,
  outC_Input_MultiplexerInit_VerReTrackMsg_Pkg *outC)
{
  outC->_L6 = in_TestStory;
  /* 1 */
  Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg(
    outC->_L6,
    &outC->Context_1);
  outC->_L13 = outC->Context_1.out_initialPosition;
  outC->_L14 = outC->Context_1.out_EndofTrack;
  outC->_L15 = outC->Context_1.out_TotalNrofBGs;
  outC->out_TotalNrofBGs = outC->_L15;
  outC->out_initialPosition = outC->_L13;
  outC->_L3 = in_TestDriver;
  /* 1 */
  Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg(
    outC->_L3,
    &outC->_1_Context_1);
  outC->_L10 = outC->_1_Context_1.acceleration;
  outC->_L11 = outC->_1_Context_1.initialVelocity;
  outC->out_initialVelocity = outC->_L11;
  outC->out_acceleration = outC->_L10;
  outC->EndofStory = outC->_L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_MultiplexerInit_VerReTrackMsg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

