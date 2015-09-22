/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Multiplexer_TestDriver_init_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg *outC)
{
  outC->_L15_IfBlock1 = 0.0;
  outC->_L26_IfBlock1 = 0.0;
  outC->_L210_IfBlock1 = 0.0;
  outC->_L19_IfBlock1 = 0.0;
  outC->_L18_IfBlock1 = 0.0;
  outC->_L27_IfBlock1 = 0.0;
  outC->_L2_IfBlock1 = 0.0;
  outC->_L1_IfBlock1 = 0.0;
  outC->IfBlock1_clock = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_4_else_clock_IfBlock1 = kcg_true;
  outC->initialVelocity = 0.0;
  outC->acceleration = 0.0;
  /* 1 */ Driver_ConstantSpeed20_init_Test_Driver(&outC->_3_Context_1);
  /* 1 */ Driver_ConstantSpeed100_init_Test_Driver(&outC->_2_Context_1);
  /* 1 */ Driver_ConstantSpeed400_init_Test_Driver(&outC->_1_Context_1);
  /* 1 */ Driver_ConstantAcc_init_Test_Driver(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Multiplexer_TestDriver_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* 1 */ Driver_ConstantSpeed20_reset_Test_Driver(&outC->_3_Context_1);
  /* 1 */ Driver_ConstantSpeed100_reset_Test_Driver(&outC->_2_Context_1);
  /* 1 */ Driver_ConstantSpeed400_reset_Test_Driver(&outC->_1_Context_1);
  /* 1 */ Driver_ConstantAcc_reset_Test_Driver(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver */
void Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::in_TestDriver */ kcg_int in_TestDriver,
  outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::initialVelocity */ kcg_real _2_initialVelocity;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::acceleration */ kcg_real _1_acceleration;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::initialVelocity */ kcg_real initialVelocity;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::acceleration */ kcg_real acceleration;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::initialVelocity */ kcg_real _10_initialVelocity;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::acceleration */ kcg_real _9_acceleration;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::initialVelocity */ kcg_real _8_initialVelocity;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::acceleration */ kcg_real _7_acceleration;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::acceleration */ kcg_real _3_acceleration;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::initialVelocity */ kcg_real _4_initialVelocity;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::acceleration */ kcg_real _5_acceleration;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::initialVelocity */ kcg_real _6_initialVelocity;
  
  outC->IfBlock1_clock = in_TestDriver == 1;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    /* 1 */ Driver_ConstantSpeed20_Test_Driver(&outC->_3_Context_1);
    outC->_L1_IfBlock1 = outC->_3_Context_1.out_acceleration;
    outC->_L2_IfBlock1 = outC->_3_Context_1.out_initialvelocity;
    _1_acceleration = outC->_L1_IfBlock1;
    outC->acceleration = _1_acceleration;
    _2_initialVelocity = outC->_L2_IfBlock1;
    outC->initialVelocity = _2_initialVelocity;
  }
  else {
    outC->_4_else_clock_IfBlock1 = in_TestDriver == 2;
    /* ck_anon_activ */ if (outC->_4_else_clock_IfBlock1) {
      /* 1 */ Driver_ConstantSpeed100_Test_Driver(&outC->_2_Context_1);
      outC->_L15_IfBlock1 = outC->_2_Context_1.out_acceleration;
      outC->_L26_IfBlock1 = outC->_2_Context_1.out_initialvelocity;
      _5_acceleration = outC->_L15_IfBlock1;
      acceleration = _5_acceleration;
    }
    else {
      outC->else_clock_IfBlock1 = in_TestDriver == 3;
      /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
        /* 1 */ Driver_ConstantSpeed400_Test_Driver(&outC->_1_Context_1);
        outC->_L18_IfBlock1 = outC->_1_Context_1.out_acceleration;
        outC->_L27_IfBlock1 = outC->_1_Context_1.out_initialvelocity;
        _9_acceleration = outC->_L18_IfBlock1;
        _3_acceleration = _9_acceleration;
      }
      else {
        /* 1 */ Driver_ConstantAcc_Test_Driver(&outC->Context_1);
        outC->_L19_IfBlock1 = outC->Context_1.out_acceleration;
        outC->_L210_IfBlock1 = outC->Context_1.out_initialvelocity;
        _7_acceleration = outC->_L19_IfBlock1;
        _3_acceleration = _7_acceleration;
      }
      acceleration = _3_acceleration;
    }
    outC->acceleration = acceleration;
    /* ck_anon_activ */ if (outC->_4_else_clock_IfBlock1) {
      _6_initialVelocity = outC->_L26_IfBlock1;
      initialVelocity = _6_initialVelocity;
    }
    else {
      /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
        _10_initialVelocity = outC->_L27_IfBlock1;
        _4_initialVelocity = _10_initialVelocity;
      }
      else {
        _8_initialVelocity = outC->_L210_IfBlock1;
        _4_initialVelocity = _8_initialVelocity;
      }
      initialVelocity = _4_initialVelocity;
    }
    outC->initialVelocity = initialVelocity;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

