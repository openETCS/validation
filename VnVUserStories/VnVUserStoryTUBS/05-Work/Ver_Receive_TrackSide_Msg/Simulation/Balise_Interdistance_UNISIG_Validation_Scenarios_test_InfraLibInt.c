/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

#ifndef KCG_USER_DEFINED_INIT
void Balise_Interdistance_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  outC->_L14 = 0.0;
  outC->_L13 = 0;
  outC->_L12 = 0.0;
  outC->_L11 = 0;
  outC->_L10 = 0;
  outC->_L9 = 0;
  outC->_L8 = kcg_true;
  outC->_L6 = 0;
  outC->_L5 = 0.0;
  outC->_L4 = 0.0;
  outC->_L3 = 0.0;
  outC->_L2 = 0.0;
  outC->_L1 = 0.0;
  outC->_L1_1 = kcg_true;
  outC->_L2_1 = 0;
  outC->_L3_1 = 0;
  outC->_L5_1 = 0;
  outC->_L8_1 = 0;
  outC->A_Input_1 = 0;
  outC->A_Output_1 = 0;
  outC->distance_BB = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Interdistance_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance */
void Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::pig0 */ kcg_int pig0,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance::n_pig */ kcg_int n_pig,
  outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  outC->_L6 = pig0;
  outC->_L9 = 0;
  outC->_L8 = outC->_L6 == outC->_L9;
  outC->_L4 = 1.0;
  outC->_L5 = - 1.0;
  /* 1 */ if (outC->_L8) {
    outC->_L1 = outC->_L4;
  }
  else {
    outC->_L1 = outC->_L5;
  }
  outC->_L8_1 = 0;
  outC->_L10 = n_pig;
  outC->_L11 = outC->_L10 - outC->_L6;
  outC->A_Input_1 = outC->_L11;
  outC->_L5_1 = outC->A_Input_1;
  outC->_L1_1 = outC->_L8_1 <= outC->_L5_1;
  outC->_L3_1 = - outC->_L5_1;
  /* 2 */ if (outC->_L1_1) {
    outC->_L2_1 = outC->_L5_1;
  }
  else {
    outC->_L2_1 = outC->_L3_1;
  }
  outC->A_Output_1 = outC->_L2_1;
  outC->_L13 = outC->A_Output_1;
  outC->_L14 = (kcg_real) outC->_L13;
  outC->_L3 =
    Distance_Balises_in_BG_UNISIG_Validation_Scenarios_test_InfraLibInt;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->_L12 = outC->_L14 * outC->_L2;
  outC->distance_BB = outC->_L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

