/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

#ifndef KCG_USER_DEFINED_INIT
void Balise_Localisation_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = 0.0;
  outC->_L92 = 0.0;
  outC->_L91 = 0.0;
  outC->_L90 = 0.0;
  outC->_L82 = 0.0;
  outC->_L77 = 0.0;
  outC->_L76 = 0.0;
  outC->_L75 = 0.0;
  outC->_L68 = 0;
  outC->_L71.header.q_updown = 0;
  outC->_L71.header.m_version = 0;
  outC->_L71.header.q_media = 0;
  outC->_L71.header.n_pig = 0;
  outC->_L71.header.n_total = 0;
  outC->_L71.header.m_dup = 0;
  outC->_L71.header.m_mcount = 0;
  outC->_L71.header.nid_c = 0;
  outC->_L71.header.nid_bg = 0;
  outC->_L71.header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L71.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L71.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L71.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L71.packets.PacketHeaders[i].startAddress = 0;
    outC->_L71.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L71.packets.PacketData[i1] = 0;
  }
  outC->_L71.engineering_BG_location = 0;
  outC->_L71.TrainPos = 0.0;
  outC->_L71.pig_nom_0 = 0;
  outC->_L71.balise_passed = kcg_true;
  outC->_L73 = 0.0;
  outC->_L66 = 0;
  outC->_L65.header.q_updown = 0;
  outC->_L65.header.m_version = 0;
  outC->_L65.header.q_media = 0;
  outC->_L65.header.n_pig = 0;
  outC->_L65.header.n_total = 0;
  outC->_L65.header.m_dup = 0;
  outC->_L65.header.m_mcount = 0;
  outC->_L65.header.nid_c = 0;
  outC->_L65.header.nid_bg = 0;
  outC->_L65.header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L65.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L65.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L65.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L65.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L65.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L65.packets.PacketData[i3] = 0;
  }
  outC->_L65.engineering_BG_location = 0;
  outC->_L65.TrainPos = 0.0;
  outC->_L65.pig_nom_0 = 0;
  outC->_L65.balise_passed = kcg_true;
  outC->_L52 = 0;
  outC->_L51 = 0;
  outC->_L50 = kcg_true;
  outC->_L48 = 0;
  outC->_L47 = 0;
  outC->_L16.q_updown = 0;
  outC->_L16.m_version = 0;
  outC->_L16.q_media = 0;
  outC->_L16.n_pig = 0;
  outC->_L16.n_total = 0;
  outC->_L16.m_dup = 0;
  outC->_L16.m_mcount = 0;
  outC->_L16.nid_c = 0;
  outC->_L16.nid_bg = 0;
  outC->_L16.q_link = 0;
  outC->_L15 = 0;
  outC->_L21_1 = 0.0;
  outC->_L22_1 = 0.0;
  outC->_L24_1 = 0.0;
  outC->_L25_1 = kcg_true;
  outC->I1_1 = 0.0;
  outC->I2_1 = 0.0;
  outC->Mi_Output_1 = 0.0;
  outC->TrainPass = kcg_true;
  outC->PIG_0_out = 0;
  /* 1 */ TOOLS_convert_engineering_init_TM_conversions(&outC->_1_Context_1);
  /* 1 */
  Balise_Interdistance_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Localisation_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  /* 1 */ TOOLS_convert_engineering_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */
  Balise_Interdistance_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation */
void Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::B_data_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *B_data_in,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation::PIG_nom */ kcg_int PIG_nom,
  outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_int noname;
  
  outC->_L15 = 0;
  noname = outC->_L15;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L16, Header);
  outC->_L47 = outC->_L16.n_pig;
  outC->_L48 = PIG_nom;
  outC->_L51 = 0;
  outC->_L50 = outC->_L48 == outC->_L51;
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L65,
    B_data_in);
  outC->_L66 = outC->_L65.pig_nom_0;
  /* 1 */ if (outC->_L50) {
    outC->_L52 = outC->_L47;
  }
  else {
    outC->_L52 = outC->_L66;
  }
  outC->PIG_0_out = outC->_L52;
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L71,
    B_data_in);
  outC->_L68 = outC->_L71.engineering_BG_location;
  /* 1 */
  Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt(
    outC->_L52,
    outC->_L47,
    &outC->Context_1);
  outC->_L75 = outC->Context_1.distance_BB;
  /* 1 */
  TOOLS_convert_engineering_TM_conversions(outC->_L68, &outC->_1_Context_1);
  outC->_L77 = outC->_1_Context_1.Loc_real;
  outC->_L76 = outC->_L75 + outC->_L77;
  outC->_L82 =
    Half_Distance_Balises_in_BG_UNISIG_Validation_Scenarios_test_InfraLibInt;
  outC->I1_1 = outC->_L82;
  outC->_L21_1 = outC->I1_1;
  outC->_L92 = ReleaseDelta_UNISIG_Validation_Scenarios_test_InfraLibInt;
  outC->I2_1 = outC->_L92;
  outC->_L22_1 = outC->I2_1;
  outC->_L25_1 = outC->_L21_1 <= outC->_L22_1;
  /* 1 */ if (outC->_L25_1) {
    outC->_L24_1 = outC->_L21_1;
  }
  else {
    outC->_L24_1 = outC->_L22_1;
  }
  outC->Mi_Output_1 = outC->_L24_1;
  outC->_L93 = outC->Mi_Output_1;
  outC->_L90 = outC->_L76 + outC->_L93;
  outC->_L73 = outC->_L71.TrainPos;
  outC->_L95 = outC->_L90 > outC->_L73;
  outC->_L91 = outC->_L76 - outC->_L93;
  outC->_L94 = outC->_L91 <= outC->_L73;
  outC->_L96 = outC->_L95 & outC->_L94;
  outC->TrainPass = outC->_L96;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

