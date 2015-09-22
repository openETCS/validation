/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt_H_
#define _No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::Balise_data_out */ Balise_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::_L36 */ _L36;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::_L35 */ _L35;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::_L32 */ _L32;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::_L31 */ _L31;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::_L30 */ _L30;
} outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets */
extern void No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::Balise_data_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *Balise_data_in,
  outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void No_Balise_Packets_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void No_Balise_Packets_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

