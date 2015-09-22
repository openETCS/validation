/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt_H_
#define _Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::Error_out */ Error_out;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L2 */ _L2;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L20 */ _L20;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L21 */ _L21;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L23 */ _L23;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L24 */ _L24;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L25 */ _L25;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::_L26 */ _L26;
} outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close */
extern void Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::BG_internal_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *BG_internal_in,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Group_Close_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Group_Close_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

