/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_
#define _Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_

#include "kcg_types.h"
#include "Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets.h"
#include "Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets /* 1 */ _1_Context_1;
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L2 */ _L2;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L4 */ _L4;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L5 */ _L5;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L15 */ _L15;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L17 */ _L17;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L19 */ _L19;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L20 */ _L20;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L21 */ _L21;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::_L23 */ _L23;
} outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short */
extern void Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::B_data_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *B_data_in,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short::PIG_nom */ kcg_int PIG_nom,
  outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Test_Balise_Sent_P072_short_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Test_Balise_Sent_P072_short_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

