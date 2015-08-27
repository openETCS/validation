/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

#ifndef KCG_USER_DEFINED_INIT
void No_Balise_Packets_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L30.header.q_updown = 0;
  outC->_L30.header.m_version = 0;
  outC->_L30.header.q_media = 0;
  outC->_L30.header.n_pig = 0;
  outC->_L30.header.n_total = 0;
  outC->_L30.header.m_dup = 0;
  outC->_L30.header.m_mcount = 0;
  outC->_L30.header.nid_c = 0;
  outC->_L30.header.nid_bg = 0;
  outC->_L30.header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L30.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L30.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L30.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L30.packets.PacketHeaders[i].startAddress = 0;
    outC->_L30.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L30.packets.PacketData[i1] = 0;
  }
  outC->_L30.engineering_BG_location = 0;
  outC->_L30.TrainPos = 0.0;
  outC->_L30.pig_nom_0 = 0;
  outC->_L30.balise_passed = kcg_true;
  outC->_L31.header.q_updown = 0;
  outC->_L31.header.m_version = 0;
  outC->_L31.header.q_media = 0;
  outC->_L31.header.n_pig = 0;
  outC->_L31.header.n_total = 0;
  outC->_L31.header.m_dup = 0;
  outC->_L31.header.m_mcount = 0;
  outC->_L31.header.nid_c = 0;
  outC->_L31.header.nid_bg = 0;
  outC->_L31.header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L31.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L31.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L31.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L31.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L31.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L31.packets.PacketData[i3] = 0;
  }
  outC->_L31.engineering_BG_location = 0;
  outC->_L31.TrainPos = 0.0;
  outC->_L31.pig_nom_0 = 0;
  outC->_L31.balise_passed = kcg_true;
  outC->_L32.q_updown = 0;
  outC->_L32.m_version = 0;
  outC->_L32.q_media = 0;
  outC->_L32.n_pig = 0;
  outC->_L32.n_total = 0;
  outC->_L32.m_dup = 0;
  outC->_L32.m_mcount = 0;
  outC->_L32.nid_c = 0;
  outC->_L32.nid_bg = 0;
  outC->_L32.q_link = 0;
  outC->_L35 = kcg_true;
  outC->_L36.header.q_updown = 0;
  outC->_L36.header.m_version = 0;
  outC->_L36.header.q_media = 0;
  outC->_L36.header.n_pig = 0;
  outC->_L36.header.n_total = 0;
  outC->_L36.header.m_dup = 0;
  outC->_L36.header.m_mcount = 0;
  outC->_L36.header.nid_c = 0;
  outC->_L36.header.nid_bg = 0;
  outC->_L36.header.q_link = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L36.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L36.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L36.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L36.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L36.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L36.packets.PacketData[i5] = 0;
  }
  outC->_L36.engineering_BG_location = 0;
  outC->_L36.TrainPos = 0.0;
  outC->_L36.pig_nom_0 = 0;
  outC->_L36.balise_passed = kcg_true;
  outC->Balise_data_out.header.q_updown = 0;
  outC->Balise_data_out.header.m_version = 0;
  outC->Balise_data_out.header.q_media = 0;
  outC->Balise_data_out.header.n_pig = 0;
  outC->Balise_data_out.header.n_total = 0;
  outC->Balise_data_out.header.m_dup = 0;
  outC->Balise_data_out.header.m_mcount = 0;
  outC->Balise_data_out.header.nid_c = 0;
  outC->Balise_data_out.header.nid_bg = 0;
  outC->Balise_data_out.header.q_link = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->Balise_data_out.packets.PacketHeaders[i6].nid_packet = 0;
    outC->Balise_data_out.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->Balise_data_out.packets.PacketHeaders[i6].valid = kcg_true;
    outC->Balise_data_out.packets.PacketHeaders[i6].startAddress = 0;
    outC->Balise_data_out.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->Balise_data_out.packets.PacketData[i7] = 0;
  }
  outC->Balise_data_out.engineering_BG_location = 0;
  outC->Balise_data_out.TrainPos = 0.0;
  outC->Balise_data_out.pig_nom_0 = 0;
  outC->Balise_data_out.balise_passed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void No_Balise_Packets_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets */
void No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets::Balise_data_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *Balise_data_in,
  outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L30,
    Balise_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L32, Header);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L36,
    &outC->_L30);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L36.header, &outC->_L32);
  }
  outC->_L35 = kcg_true;
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L31,
    &outC->_L36);
  if (kcg_true) {
    outC->_L31.balise_passed = outC->_L35;
  }
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Balise_data_out,
    &outC->_L31);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

