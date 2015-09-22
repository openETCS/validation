/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_
#define _Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_

#include "kcg_types.h"
#include "Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"
#include "Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt.h"
#include "Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ _2_Context_1;
  outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises /* 1 */ _1_Context_1;
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_out */ B_data_out_1;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::PIG_nom */ PIG_nom_1;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::Header */ Header_1;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_in */ B_data_in_1;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L3 */ _L3_1;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L2 */ _L2_1;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L1 */ _L1_1;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_out */ B_data_out_2;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::PIG_nom */ PIG_nom_2;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::Header */ Header_2;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_in */ B_data_in_2;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L3 */ _L3_2;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L2 */ _L2_2;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L1 */ _L1_2;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_out */ B_data_out_3;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::PIG_nom */ PIG_nom_3;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::Header */ Header_3;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_in */ B_data_in_3;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L3 */ _L3_3;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L2 */ _L2_3;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L1 */ _L1_3;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_out */ B_data_out_4;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::PIG_nom */ PIG_nom_4;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::Header */ Header_4;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_in */ B_data_in_4;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L3 */ _L3_4;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L2 */ _L2_4;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L1 */ _L1_4;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_out */ B_data_out_5;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::PIG_nom */ PIG_nom_5;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::Header */ Header_5;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_in */ B_data_in_5;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L3 */ _L3_5;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L2 */ _L2_5;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L1 */ _L1_5;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_out */ B_data_out_6;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::PIG_nom */ PIG_nom_6;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::Header */ Header_6;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_in */ B_data_in_6;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L3 */ _L3_6;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L2 */ _L2_6;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L1 */ _L1_6;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_out */ B_data_out_7;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::PIG_nom */ PIG_nom_7;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::Header */ Header_7;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::B_data_in */ B_data_in_7;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L3 */ _L3_7;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L2 */ _L2_7;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise::_L1 */ _L1_7;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::BaliseDataIn */ BaliseDataIn;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::BaliseDataOut */ BaliseDataOut;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L1 */ _L1;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L2 */ _L2;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L3 */ _L3;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L4 */ _L4;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L5 */ _L5;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L6 */ _L6;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L7 */ _L7;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L9 */ _L9;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L11 */ _L11;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L13 */ _L13;
  kcg_bool /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L14 */ _L14;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L16 */ _L16;
  BaliseGroupData_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L19 */ _L19;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L20 */ _L20;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L21 */ _L21;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L22 */ _L22;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L23 */ _L23;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L24 */ _L24;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L25 */ _L25;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L26 */ _L26;
  kcg_int /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L27 */ _L27;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L8 */ _L8;
  kcg_real /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L28 */ _L28;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::_L29 */ _L29;
} outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single */
extern void Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::TrainPos */ kcg_real TrainPos,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Test_BG001_100_Single_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Test_BG001_100_Single_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

