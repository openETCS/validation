/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_
#define _Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_

#include "kcg_types.h"
#include "Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"
#include "Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"
#include "Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"
#include "Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"
#include "TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt.h"
#include "Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt.h"
#include "Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ _5_Context_1;
  outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises /* 1 */ _4_Context_1;
  outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt /* 6 */ Context_6;
  outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt /* 5 */ Context_5;
  outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises /* 1 */ _3_Context_1;
  outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt /* 3 */ Context_3;
  outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises /* 1 */ _2_Context_1;
  outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises /* 1 */ _1_Context_1;
  outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt /* 8 */ Context_8;
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::BaliseDataIn */ BaliseDataIn;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::BaliseDataOut */ BaliseDataOut;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L1 */ _L1;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L2 */ _L2;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L3 */ _L3;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L4 */ _L4;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L5 */ _L5;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L6 */ _L6;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L7 */ _L7;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L9 */ _L9;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L11 */ _L11;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L13 */ _L13;
  kcg_bool /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L14 */ _L14;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L16 */ _L16;
  BaliseGroupData_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L19 */ _L19;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L20 */ _L20;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L21 */ _L21;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L22 */ _L22;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L23 */ _L23;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L24 */ _L24;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L25 */ _L25;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L26 */ _L26;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L27 */ _L27;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L8 */ _L8;
  kcg_real /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L28 */ _L28;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::_L29 */ _L29;
} outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT */
extern void Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::TrainPos */ kcg_real TrainPos,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Test_BG002_200_8BT_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Test_BG002_200_8BT_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

