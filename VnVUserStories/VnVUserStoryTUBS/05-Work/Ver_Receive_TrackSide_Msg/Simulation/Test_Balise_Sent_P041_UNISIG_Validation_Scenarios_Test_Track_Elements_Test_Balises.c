/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"

#ifndef KCG_USER_DEFINED_INIT
void Test_Balise_Sent_P041_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC)
{
  kcg_int i9;
  kcg_int i8;
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L23.q_updown = 0;
  outC->_L23.m_version = 0;
  outC->_L23.q_media = 0;
  outC->_L23.n_pig = 0;
  outC->_L23.n_total = 0;
  outC->_L23.m_dup = 0;
  outC->_L23.m_mcount = 0;
  outC->_L23.nid_c = 0;
  outC->_L23.nid_bg = 0;
  outC->_L23.q_link = 0;
  outC->_L21 = 0;
  outC->_L20 = 0;
  outC->_L19.q_updown = 0;
  outC->_L19.m_version = 0;
  outC->_L19.q_media = 0;
  outC->_L19.n_pig = 0;
  outC->_L19.n_total = 0;
  outC->_L19.m_dup = 0;
  outC->_L19.m_mcount = 0;
  outC->_L19.nid_c = 0;
  outC->_L19.nid_bg = 0;
  outC->_L19.q_link = 0;
  outC->_L17.header.q_updown = 0;
  outC->_L17.header.m_version = 0;
  outC->_L17.header.q_media = 0;
  outC->_L17.header.n_pig = 0;
  outC->_L17.header.n_total = 0;
  outC->_L17.header.m_dup = 0;
  outC->_L17.header.m_mcount = 0;
  outC->_L17.header.nid_c = 0;
  outC->_L17.header.nid_bg = 0;
  outC->_L17.header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L17.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L17.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[i].startAddress = 0;
    outC->_L17.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L17.packets.PacketData[i1] = 0;
  }
  outC->_L17.engineering_BG_location = 0;
  outC->_L17.TrainPos = 0.0;
  outC->_L17.pig_nom_0 = 0;
  outC->_L17.balise_passed = kcg_true;
  outC->_L15.header.q_updown = 0;
  outC->_L15.header.m_version = 0;
  outC->_L15.header.q_media = 0;
  outC->_L15.header.n_pig = 0;
  outC->_L15.header.n_total = 0;
  outC->_L15.header.m_dup = 0;
  outC->_L15.header.m_mcount = 0;
  outC->_L15.header.nid_c = 0;
  outC->_L15.header.nid_bg = 0;
  outC->_L15.header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L15.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L15.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L15.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L15.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L15.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L15.packets.PacketData[i3] = 0;
  }
  outC->_L15.engineering_BG_location = 0;
  outC->_L15.TrainPos = 0.0;
  outC->_L15.pig_nom_0 = 0;
  outC->_L15.balise_passed = kcg_true;
  outC->_L5.header.q_updown = 0;
  outC->_L5.header.m_version = 0;
  outC->_L5.header.q_media = 0;
  outC->_L5.header.n_pig = 0;
  outC->_L5.header.n_total = 0;
  outC->_L5.header.m_dup = 0;
  outC->_L5.header.m_mcount = 0;
  outC->_L5.header.nid_c = 0;
  outC->_L5.header.nid_bg = 0;
  outC->_L5.header.q_link = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L5.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L5.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L5.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L5.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L5.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L5.packets.PacketData[i5] = 0;
  }
  outC->_L5.engineering_BG_location = 0;
  outC->_L5.TrainPos = 0.0;
  outC->_L5.pig_nom_0 = 0;
  outC->_L5.balise_passed = kcg_true;
  outC->_L4.header.q_updown = 0;
  outC->_L4.header.m_version = 0;
  outC->_L4.header.q_media = 0;
  outC->_L4.header.n_pig = 0;
  outC->_L4.header.n_total = 0;
  outC->_L4.header.m_dup = 0;
  outC->_L4.header.m_mcount = 0;
  outC->_L4.header.nid_c = 0;
  outC->_L4.header.nid_bg = 0;
  outC->_L4.header.q_link = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L4.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L4.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L4.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L4.packets.PacketData[i7] = 0;
  }
  outC->_L4.engineering_BG_location = 0;
  outC->_L4.TrainPos = 0.0;
  outC->_L4.pig_nom_0 = 0;
  outC->_L4.balise_passed = kcg_true;
  outC->_L2 = kcg_true;
  outC->ck_every = kcg_true;
  outC->B_data_out.header.q_updown = 0;
  outC->B_data_out.header.m_version = 0;
  outC->B_data_out.header.q_media = 0;
  outC->B_data_out.header.n_pig = 0;
  outC->B_data_out.header.n_total = 0;
  outC->B_data_out.header.m_dup = 0;
  outC->B_data_out.header.m_mcount = 0;
  outC->B_data_out.header.nid_c = 0;
  outC->B_data_out.header.nid_bg = 0;
  outC->B_data_out.header.q_link = 0;
  for (i8 = 0; i8 < 30; i8++) {
    outC->B_data_out.packets.PacketHeaders[i8].nid_packet = 0;
    outC->B_data_out.packets.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->B_data_out.packets.PacketHeaders[i8].valid = kcg_true;
    outC->B_data_out.packets.PacketHeaders[i8].startAddress = 0;
    outC->B_data_out.packets.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->B_data_out.packets.PacketData[i9] = 0;
  }
  outC->B_data_out.engineering_BG_location = 0;
  outC->B_data_out.TrainPos = 0.0;
  outC->B_data_out.pig_nom_0 = 0;
  outC->B_data_out.balise_passed = kcg_true;
  /* 1 */
  Test_BalisePackets_P041_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Localisation_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Test_Balise_Sent_P041_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC)
{
  /* 1 */
  Test_BalisePackets_P041_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Localisation_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041 */
void Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041::B_data_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *B_data_in,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041::PIG_nom */ kcg_int PIG_nom,
  outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC)
{
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041 */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt op_call;
  
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L15,
    B_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L19, Header);
  outC->_L20 = PIG_nom;
  /* 1 */
  Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L15,
    &outC->_L19,
    outC->_L20,
    &outC->Context_1);
  outC->_L21 = outC->Context_1.PIG_0_out;
  outC->_L2 = outC->Context_1.TrainPass;
  outC->ck_every = outC->_L2;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L23, Header);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L5,
    B_data_in);
  /* ck_Test_Balise_Sent_P041 */ if (outC->ck_every) {
    /* 1 */
    Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets(
      &outC->_L23,
      &outC->_L5,
      &outC->_1_Context_1);
    kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
      &op_call,
      &outC->_1_Context_1.Balise_data_out);
    kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
      &outC->_L4,
      &op_call);
  }
  else {
    kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
      &outC->_L4,
      &outC->_L5);
  }
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L17,
    &outC->_L4);
  if (kcg_true) {
    outC->_L17.pig_nom_0 = outC->_L21;
  }
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->B_data_out,
    &outC->_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

