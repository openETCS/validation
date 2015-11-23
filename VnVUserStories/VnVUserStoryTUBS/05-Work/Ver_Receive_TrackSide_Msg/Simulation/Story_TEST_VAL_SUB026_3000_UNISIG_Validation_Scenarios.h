/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios_H_
#define _Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios_H_

#include "kcg_types.h"
#include "Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"
#include "Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000::BM */ BM;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises /* 2 */ Context_2;
  outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000::_L36 */ _L36;
  kcg_real /* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000::_L33 */ _L33;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000::_L49 */ _L49;
  CompressedBaliseMessage_TM /* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000::_L50 */ _L50;
} outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000 */
extern void Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios(
  /* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000::TrainPos */ kcg_real TrainPos,
  outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Story_TEST_VAL_SUB026_3000_reset_UNISIG_Validation_Scenarios(
  outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Story_TEST_VAL_SUB026_3000_init_UNISIG_Validation_Scenarios(
  outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

