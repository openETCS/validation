/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt_H_
#define _TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt_H_

#include "kcg_types.h"
#include "Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt.h"
#include "No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ _1_Context_1;
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L2 */ _L2;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L4 */ _L4;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L5 */ _L5;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L15 */ _L15;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L17 */ _L17;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L19 */ _L19;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L20 */ _L20;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L21 */ _L21;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::_L23 */ _L23;
} outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified */
extern void TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::B_data_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *B_data_in,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified::PIG_nom */ kcg_int PIG_nom,
  outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TEMPLATE_Balise_modified_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TEMPLATE_Balise_modified_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

