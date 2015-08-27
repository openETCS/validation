/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt_H_
#define _Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt_H_

#include "kcg_types.h"
#include "TOOLS_convert_engineering_TM_conversions.h"
#include "Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::PIG_0_out */ PIG_0_out;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::TrainPass */ TrainPass;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TOOLS_convert_engineering_TM_conversions /* 1 */ _1_Context_1;
  outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* math::Min::Mi_Output */ Mi_Output_1;
  kcg_real /* math::Min::I2 */ I2_1;
  kcg_real /* math::Min::I1 */ I1_1;
  kcg_bool /* math::Min::_L25 */ _L25_1;
  kcg_real /* math::Min::_L24 */ _L24_1;
  kcg_real /* math::Min::_L22 */ _L22_1;
  kcg_real /* math::Min::_L21 */ _L21_1;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L15 */ _L15;
  BaliseTelegramHeader_int_T_TM /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L16 */ _L16;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L47 */ _L47;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L48 */ _L48;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L50 */ _L50;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L51 */ _L51;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L52 */ _L52;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L65 */ _L65;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L66 */ _L66;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L73 */ _L73;
  B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L71 */ _L71;
  kcg_int /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L68 */ _L68;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L75 */ _L75;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L76 */ _L76;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L77 */ _L77;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L82 */ _L82;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L90 */ _L90;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L91 */ _L91;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L92 */ _L92;
  kcg_real /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L93 */ _L93;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L94 */ _L94;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L95 */ _L95;
  kcg_bool /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::_L96 */ _L96;
} outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation */
extern void Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::B_data_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *B_data_in,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::PIG_nom */ kcg_int PIG_nom,
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Localisation_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Localisation_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

