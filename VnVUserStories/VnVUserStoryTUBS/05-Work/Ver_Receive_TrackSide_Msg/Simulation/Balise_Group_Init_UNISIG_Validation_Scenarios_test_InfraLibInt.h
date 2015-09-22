/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt_H_
#define _Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::BG_internal_out */ BG_internal_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BaliseGroupData_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L2 */ _L2;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L14 */ _L14;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L26 */ _L26;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L27 */ _L27;
  CompressedPackets_T_Common_Types_Pkg /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L28 */ _L28;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L29 */ _L29;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L30 */ _L30;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::_L31 */ _L31;
} outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init */
extern void Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::TrainPos */ kcg_real TrainPos,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Group_Init_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Group_Init_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

