/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

#ifndef KCG_USER_DEFINED_INIT
void Balise_Group_Close_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_int i11;
  kcg_int i10;
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
  
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24.Header.q_updown = 0;
  outC->_L24.Header.m_version = 0;
  outC->_L24.Header.q_media = 0;
  outC->_L24.Header.n_pig = 0;
  outC->_L24.Header.n_total = 0;
  outC->_L24.Header.m_dup = 0;
  outC->_L24.Header.m_mcount = 0;
  outC->_L24.Header.nid_c = 0;
  outC->_L24.Header.nid_bg = 0;
  outC->_L24.Header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L24.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L24.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L24.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L24.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L24.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L24.Messages.PacketData[i1] = 0;
  }
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L23.PacketHeaders[i2].nid_packet = 0;
    outC->_L23.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L23.PacketHeaders[i2].valid = kcg_true;
    outC->_L23.PacketHeaders[i2].startAddress = 0;
    outC->_L23.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L23.PacketData[i3] = 0;
  }
  outC->_L22.q_updown = 0;
  outC->_L22.m_version = 0;
  outC->_L22.q_media = 0;
  outC->_L22.n_pig = 0;
  outC->_L22.n_total = 0;
  outC->_L22.m_dup = 0;
  outC->_L22.m_mcount = 0;
  outC->_L22.nid_c = 0;
  outC->_L22.nid_bg = 0;
  outC->_L22.q_link = 0;
  outC->_L21.header.q_updown = 0;
  outC->_L21.header.m_version = 0;
  outC->_L21.header.q_media = 0;
  outC->_L21.header.n_pig = 0;
  outC->_L21.header.n_total = 0;
  outC->_L21.header.m_dup = 0;
  outC->_L21.header.m_mcount = 0;
  outC->_L21.header.nid_c = 0;
  outC->_L21.header.nid_bg = 0;
  outC->_L21.header.q_link = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L21.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L21.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L21.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L21.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L21.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L21.packets.PacketData[i5] = 0;
  }
  outC->_L21.engineering_BG_location = 0;
  outC->_L21.TrainPos = 0.0;
  outC->_L21.pig_nom_0 = 0;
  outC->_L21.balise_passed = kcg_true;
  outC->_L20.Header.q_updown = 0;
  outC->_L20.Header.m_version = 0;
  outC->_L20.Header.q_media = 0;
  outC->_L20.Header.n_pig = 0;
  outC->_L20.Header.n_total = 0;
  outC->_L20.Header.m_dup = 0;
  outC->_L20.Header.m_mcount = 0;
  outC->_L20.Header.nid_c = 0;
  outC->_L20.Header.nid_bg = 0;
  outC->_L20.Header.q_link = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L20.Messages.PacketHeaders[i6].nid_packet = 0;
    outC->_L20.Messages.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L20.Messages.PacketHeaders[i6].valid = kcg_true;
    outC->_L20.Messages.PacketHeaders[i6].startAddress = 0;
    outC->_L20.Messages.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L20.Messages.PacketData[i7] = 0;
  }
  outC->_L2.Header.q_updown = 0;
  outC->_L2.Header.m_version = 0;
  outC->_L2.Header.q_media = 0;
  outC->_L2.Header.n_pig = 0;
  outC->_L2.Header.n_total = 0;
  outC->_L2.Header.m_dup = 0;
  outC->_L2.Header.m_mcount = 0;
  outC->_L2.Header.nid_c = 0;
  outC->_L2.Header.nid_bg = 0;
  outC->_L2.Header.q_link = 0;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L2.Messages.PacketHeaders[i8].nid_packet = 0;
    outC->_L2.Messages.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L2.Messages.PacketHeaders[i8].valid = kcg_true;
    outC->_L2.Messages.PacketHeaders[i8].startAddress = 0;
    outC->_L2.Messages.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L2.Messages.PacketData[i9] = 0;
  }
  outC->BG_message_out.Header.q_updown = 0;
  outC->BG_message_out.Header.m_version = 0;
  outC->BG_message_out.Header.q_media = 0;
  outC->BG_message_out.Header.n_pig = 0;
  outC->BG_message_out.Header.n_total = 0;
  outC->BG_message_out.Header.m_dup = 0;
  outC->BG_message_out.Header.m_mcount = 0;
  outC->BG_message_out.Header.nid_c = 0;
  outC->BG_message_out.Header.nid_bg = 0;
  outC->BG_message_out.Header.q_link = 0;
  for (i10 = 0; i10 < 30; i10++) {
    outC->BG_message_out.Messages.PacketHeaders[i10].nid_packet = 0;
    outC->BG_message_out.Messages.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->BG_message_out.Messages.PacketHeaders[i10].valid = kcg_true;
    outC->BG_message_out.Messages.PacketHeaders[i10].startAddress = 0;
    outC->BG_message_out.Messages.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->BG_message_out.Messages.PacketData[i11] = 0;
  }
  outC->Error_out = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Group_Close_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close */
void Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::BG_internal_in */ B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt *BG_internal_in,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L2, BG_message_in);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L21,
    BG_internal_in);
  outC->_L25 = outC->_L21.balise_passed;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L22, &outC->_L21.header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L23,
    &outC->_L21.packets);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L20.Header, &outC->_L22);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L20.Messages,
    &outC->_L23);
  /* 1 */ if (outC->_L25) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L24, &outC->_L20);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L24, &outC->_L2);
  }
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_message_out, &outC->_L24);
  outC->_L26 = kcg_false;
  outC->Error_out = outC->_L26;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

