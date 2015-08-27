/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.h"

#ifndef KCG_USER_DEFINED_INIT
void Test_BG002_200_8BT_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC)
{
  kcg_int i31;
  kcg_int i30;
  kcg_int i29;
  kcg_int i28;
  kcg_int i27;
  kcg_int i26;
  kcg_int i25;
  kcg_int i24;
  kcg_int i23;
  kcg_int i22;
  kcg_int i21;
  kcg_int i20;
  kcg_int i19;
  kcg_int i18;
  kcg_int i17;
  kcg_int i16;
  kcg_int i15;
  kcg_int i14;
  kcg_int i13;
  kcg_int i12;
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
  
  outC->_L29.Header.q_updown = 0;
  outC->_L29.Header.m_version = 0;
  outC->_L29.Header.q_media = 0;
  outC->_L29.Header.n_pig = 0;
  outC->_L29.Header.n_total = 0;
  outC->_L29.Header.m_dup = 0;
  outC->_L29.Header.m_mcount = 0;
  outC->_L29.Header.nid_c = 0;
  outC->_L29.Header.nid_bg = 0;
  outC->_L29.Header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L29.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L29.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L29.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L29.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L29.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L29.Messages.PacketData[i1] = 0;
  }
  outC->_L28 = 0.0;
  outC->_L8.header.q_updown = 0;
  outC->_L8.header.m_version = 0;
  outC->_L8.header.q_media = 0;
  outC->_L8.header.n_pig = 0;
  outC->_L8.header.n_total = 0;
  outC->_L8.header.m_dup = 0;
  outC->_L8.header.m_mcount = 0;
  outC->_L8.header.nid_c = 0;
  outC->_L8.header.nid_bg = 0;
  outC->_L8.header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L8.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L8.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L8.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L8.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L8.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L8.packets.PacketData[i3] = 0;
  }
  outC->_L8.engineering_BG_location = 0;
  outC->_L8.TrainPos = 0.0;
  outC->_L8.pig_nom_0 = 0;
  outC->_L8.balise_passed = kcg_true;
  outC->_L27 = 0;
  outC->_L26 = 0;
  outC->_L25 = 0;
  outC->_L24 = 0;
  outC->_L23 = 0;
  outC->_L22 = 0;
  outC->_L21 = 0;
  outC->_L20 = 0;
  outC->_L19.NID_C = 0;
  outC->_L19.NID_BG = 0;
  outC->_L19.Pos = 0;
  outC->_L19.Or_BG = Amsterdam_TM;
  outC->_L19.Or_Line = N_TM;
  outC->_L16.header.q_updown = 0;
  outC->_L16.header.m_version = 0;
  outC->_L16.header.q_media = 0;
  outC->_L16.header.n_pig = 0;
  outC->_L16.header.n_total = 0;
  outC->_L16.header.m_dup = 0;
  outC->_L16.header.m_mcount = 0;
  outC->_L16.header.nid_c = 0;
  outC->_L16.header.nid_bg = 0;
  outC->_L16.header.q_link = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L16.packets.PacketHeaders[i4].nid_packet = 0;
    outC->_L16.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L16.packets.PacketHeaders[i4].valid = kcg_true;
    outC->_L16.packets.PacketHeaders[i4].startAddress = 0;
    outC->_L16.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L16.packets.PacketData[i5] = 0;
  }
  outC->_L16.engineering_BG_location = 0;
  outC->_L16.TrainPos = 0.0;
  outC->_L16.pig_nom_0 = 0;
  outC->_L16.balise_passed = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13.Header.q_updown = 0;
  outC->_L13.Header.m_version = 0;
  outC->_L13.Header.q_media = 0;
  outC->_L13.Header.n_pig = 0;
  outC->_L13.Header.n_total = 0;
  outC->_L13.Header.m_dup = 0;
  outC->_L13.Header.m_mcount = 0;
  outC->_L13.Header.nid_c = 0;
  outC->_L13.Header.nid_bg = 0;
  outC->_L13.Header.q_link = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L13.Messages.PacketHeaders[i6].nid_packet = 0;
    outC->_L13.Messages.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L13.Messages.PacketHeaders[i6].valid = kcg_true;
    outC->_L13.Messages.PacketHeaders[i6].startAddress = 0;
    outC->_L13.Messages.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L13.Messages.PacketData[i7] = 0;
  }
  outC->_L11.header.q_updown = 0;
  outC->_L11.header.m_version = 0;
  outC->_L11.header.q_media = 0;
  outC->_L11.header.n_pig = 0;
  outC->_L11.header.n_total = 0;
  outC->_L11.header.m_dup = 0;
  outC->_L11.header.m_mcount = 0;
  outC->_L11.header.nid_c = 0;
  outC->_L11.header.nid_bg = 0;
  outC->_L11.header.q_link = 0;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L11.packets.PacketHeaders[i8].nid_packet = 0;
    outC->_L11.packets.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L11.packets.PacketHeaders[i8].valid = kcg_true;
    outC->_L11.packets.PacketHeaders[i8].startAddress = 0;
    outC->_L11.packets.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L11.packets.PacketData[i9] = 0;
  }
  outC->_L11.engineering_BG_location = 0;
  outC->_L11.TrainPos = 0.0;
  outC->_L11.pig_nom_0 = 0;
  outC->_L11.balise_passed = kcg_true;
  outC->_L9.header.q_updown = 0;
  outC->_L9.header.m_version = 0;
  outC->_L9.header.q_media = 0;
  outC->_L9.header.n_pig = 0;
  outC->_L9.header.n_total = 0;
  outC->_L9.header.m_dup = 0;
  outC->_L9.header.m_mcount = 0;
  outC->_L9.header.nid_c = 0;
  outC->_L9.header.nid_bg = 0;
  outC->_L9.header.q_link = 0;
  for (i10 = 0; i10 < 30; i10++) {
    outC->_L9.packets.PacketHeaders[i10].nid_packet = 0;
    outC->_L9.packets.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->_L9.packets.PacketHeaders[i10].valid = kcg_true;
    outC->_L9.packets.PacketHeaders[i10].startAddress = 0;
    outC->_L9.packets.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->_L9.packets.PacketData[i11] = 0;
  }
  outC->_L9.engineering_BG_location = 0;
  outC->_L9.TrainPos = 0.0;
  outC->_L9.pig_nom_0 = 0;
  outC->_L9.balise_passed = kcg_true;
  outC->_L7.header.q_updown = 0;
  outC->_L7.header.m_version = 0;
  outC->_L7.header.q_media = 0;
  outC->_L7.header.n_pig = 0;
  outC->_L7.header.n_total = 0;
  outC->_L7.header.m_dup = 0;
  outC->_L7.header.m_mcount = 0;
  outC->_L7.header.nid_c = 0;
  outC->_L7.header.nid_bg = 0;
  outC->_L7.header.q_link = 0;
  for (i12 = 0; i12 < 30; i12++) {
    outC->_L7.packets.PacketHeaders[i12].nid_packet = 0;
    outC->_L7.packets.PacketHeaders[i12].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[i12].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[i12].startAddress = 0;
    outC->_L7.packets.PacketHeaders[i12].endAddress = 0;
  }
  for (i13 = 0; i13 < 500; i13++) {
    outC->_L7.packets.PacketData[i13] = 0;
  }
  outC->_L7.engineering_BG_location = 0;
  outC->_L7.TrainPos = 0.0;
  outC->_L7.pig_nom_0 = 0;
  outC->_L7.balise_passed = kcg_true;
  outC->_L6.header.q_updown = 0;
  outC->_L6.header.m_version = 0;
  outC->_L6.header.q_media = 0;
  outC->_L6.header.n_pig = 0;
  outC->_L6.header.n_total = 0;
  outC->_L6.header.m_dup = 0;
  outC->_L6.header.m_mcount = 0;
  outC->_L6.header.nid_c = 0;
  outC->_L6.header.nid_bg = 0;
  outC->_L6.header.q_link = 0;
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L6.packets.PacketHeaders[i14].nid_packet = 0;
    outC->_L6.packets.PacketHeaders[i14].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[i14].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[i14].startAddress = 0;
    outC->_L6.packets.PacketHeaders[i14].endAddress = 0;
  }
  for (i15 = 0; i15 < 500; i15++) {
    outC->_L6.packets.PacketData[i15] = 0;
  }
  outC->_L6.engineering_BG_location = 0;
  outC->_L6.TrainPos = 0.0;
  outC->_L6.pig_nom_0 = 0;
  outC->_L6.balise_passed = kcg_true;
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
  for (i16 = 0; i16 < 30; i16++) {
    outC->_L5.packets.PacketHeaders[i16].nid_packet = 0;
    outC->_L5.packets.PacketHeaders[i16].q_dir = Q_DIR_Reverse;
    outC->_L5.packets.PacketHeaders[i16].valid = kcg_true;
    outC->_L5.packets.PacketHeaders[i16].startAddress = 0;
    outC->_L5.packets.PacketHeaders[i16].endAddress = 0;
  }
  for (i17 = 0; i17 < 500; i17++) {
    outC->_L5.packets.PacketData[i17] = 0;
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
  for (i18 = 0; i18 < 30; i18++) {
    outC->_L4.packets.PacketHeaders[i18].nid_packet = 0;
    outC->_L4.packets.PacketHeaders[i18].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[i18].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[i18].startAddress = 0;
    outC->_L4.packets.PacketHeaders[i18].endAddress = 0;
  }
  for (i19 = 0; i19 < 500; i19++) {
    outC->_L4.packets.PacketData[i19] = 0;
  }
  outC->_L4.engineering_BG_location = 0;
  outC->_L4.TrainPos = 0.0;
  outC->_L4.pig_nom_0 = 0;
  outC->_L4.balise_passed = kcg_true;
  outC->_L3.header.q_updown = 0;
  outC->_L3.header.m_version = 0;
  outC->_L3.header.q_media = 0;
  outC->_L3.header.n_pig = 0;
  outC->_L3.header.n_total = 0;
  outC->_L3.header.m_dup = 0;
  outC->_L3.header.m_mcount = 0;
  outC->_L3.header.nid_c = 0;
  outC->_L3.header.nid_bg = 0;
  outC->_L3.header.q_link = 0;
  for (i20 = 0; i20 < 30; i20++) {
    outC->_L3.packets.PacketHeaders[i20].nid_packet = 0;
    outC->_L3.packets.PacketHeaders[i20].q_dir = Q_DIR_Reverse;
    outC->_L3.packets.PacketHeaders[i20].valid = kcg_true;
    outC->_L3.packets.PacketHeaders[i20].startAddress = 0;
    outC->_L3.packets.PacketHeaders[i20].endAddress = 0;
  }
  for (i21 = 0; i21 < 500; i21++) {
    outC->_L3.packets.PacketData[i21] = 0;
  }
  outC->_L3.engineering_BG_location = 0;
  outC->_L3.TrainPos = 0.0;
  outC->_L3.pig_nom_0 = 0;
  outC->_L3.balise_passed = kcg_true;
  outC->_L2.header.q_updown = 0;
  outC->_L2.header.m_version = 0;
  outC->_L2.header.q_media = 0;
  outC->_L2.header.n_pig = 0;
  outC->_L2.header.n_total = 0;
  outC->_L2.header.m_dup = 0;
  outC->_L2.header.m_mcount = 0;
  outC->_L2.header.nid_c = 0;
  outC->_L2.header.nid_bg = 0;
  outC->_L2.header.q_link = 0;
  for (i22 = 0; i22 < 30; i22++) {
    outC->_L2.packets.PacketHeaders[i22].nid_packet = 0;
    outC->_L2.packets.PacketHeaders[i22].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[i22].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[i22].startAddress = 0;
    outC->_L2.packets.PacketHeaders[i22].endAddress = 0;
  }
  for (i23 = 0; i23 < 500; i23++) {
    outC->_L2.packets.PacketData[i23] = 0;
  }
  outC->_L2.engineering_BG_location = 0;
  outC->_L2.TrainPos = 0.0;
  outC->_L2.pig_nom_0 = 0;
  outC->_L2.balise_passed = kcg_true;
  outC->_L1.header.q_updown = 0;
  outC->_L1.header.m_version = 0;
  outC->_L1.header.q_media = 0;
  outC->_L1.header.n_pig = 0;
  outC->_L1.header.n_total = 0;
  outC->_L1.header.m_dup = 0;
  outC->_L1.header.m_mcount = 0;
  outC->_L1.header.nid_c = 0;
  outC->_L1.header.nid_bg = 0;
  outC->_L1.header.q_link = 0;
  for (i24 = 0; i24 < 30; i24++) {
    outC->_L1.packets.PacketHeaders[i24].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i24].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i24].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i24].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i24].endAddress = 0;
  }
  for (i25 = 0; i25 < 500; i25++) {
    outC->_L1.packets.PacketData[i25] = 0;
  }
  outC->_L1.engineering_BG_location = 0;
  outC->_L1.TrainPos = 0.0;
  outC->_L1.pig_nom_0 = 0;
  outC->_L1.balise_passed = kcg_true;
  outC->BaliseDataOut.header.q_updown = 0;
  outC->BaliseDataOut.header.m_version = 0;
  outC->BaliseDataOut.header.q_media = 0;
  outC->BaliseDataOut.header.n_pig = 0;
  outC->BaliseDataOut.header.n_total = 0;
  outC->BaliseDataOut.header.m_dup = 0;
  outC->BaliseDataOut.header.m_mcount = 0;
  outC->BaliseDataOut.header.nid_c = 0;
  outC->BaliseDataOut.header.nid_bg = 0;
  outC->BaliseDataOut.header.q_link = 0;
  for (i26 = 0; i26 < 30; i26++) {
    outC->BaliseDataOut.packets.PacketHeaders[i26].nid_packet = 0;
    outC->BaliseDataOut.packets.PacketHeaders[i26].q_dir = Q_DIR_Reverse;
    outC->BaliseDataOut.packets.PacketHeaders[i26].valid = kcg_true;
    outC->BaliseDataOut.packets.PacketHeaders[i26].startAddress = 0;
    outC->BaliseDataOut.packets.PacketHeaders[i26].endAddress = 0;
  }
  for (i27 = 0; i27 < 500; i27++) {
    outC->BaliseDataOut.packets.PacketData[i27] = 0;
  }
  outC->BaliseDataOut.engineering_BG_location = 0;
  outC->BaliseDataOut.TrainPos = 0.0;
  outC->BaliseDataOut.pig_nom_0 = 0;
  outC->BaliseDataOut.balise_passed = kcg_true;
  outC->BaliseDataIn.header.q_updown = 0;
  outC->BaliseDataIn.header.m_version = 0;
  outC->BaliseDataIn.header.q_media = 0;
  outC->BaliseDataIn.header.n_pig = 0;
  outC->BaliseDataIn.header.n_total = 0;
  outC->BaliseDataIn.header.m_dup = 0;
  outC->BaliseDataIn.header.m_mcount = 0;
  outC->BaliseDataIn.header.nid_c = 0;
  outC->BaliseDataIn.header.nid_bg = 0;
  outC->BaliseDataIn.header.q_link = 0;
  for (i28 = 0; i28 < 30; i28++) {
    outC->BaliseDataIn.packets.PacketHeaders[i28].nid_packet = 0;
    outC->BaliseDataIn.packets.PacketHeaders[i28].q_dir = Q_DIR_Reverse;
    outC->BaliseDataIn.packets.PacketHeaders[i28].valid = kcg_true;
    outC->BaliseDataIn.packets.PacketHeaders[i28].startAddress = 0;
    outC->BaliseDataIn.packets.PacketHeaders[i28].endAddress = 0;
  }
  for (i29 = 0; i29 < 500; i29++) {
    outC->BaliseDataIn.packets.PacketData[i29] = 0;
  }
  outC->BaliseDataIn.engineering_BG_location = 0;
  outC->BaliseDataIn.TrainPos = 0.0;
  outC->BaliseDataIn.pig_nom_0 = 0;
  outC->BaliseDataIn.balise_passed = kcg_true;
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
  for (i30 = 0; i30 < 30; i30++) {
    outC->BG_message_out.Messages.PacketHeaders[i30].nid_packet = 0;
    outC->BG_message_out.Messages.PacketHeaders[i30].q_dir = Q_DIR_Reverse;
    outC->BG_message_out.Messages.PacketHeaders[i30].valid = kcg_true;
    outC->BG_message_out.Messages.PacketHeaders[i30].startAddress = 0;
    outC->BG_message_out.Messages.PacketHeaders[i30].endAddress = 0;
  }
  for (i31 = 0; i31 < 500; i31++) {
    outC->BG_message_out.Messages.PacketData[i31] = 0;
  }
  /* 1 */
  Balise_Group_Close_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_5_Context_1);
  /* 1 */
  Test_Balise_Sent_P072_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_4_Context_1);
  /* 6 */
  TEMPLATE_Balise_modified_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_6);
  /* 5 */
  TEMPLATE_Balise_modified_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_5);
  /* 1 */
  Test_Balise_Sent_P041_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_3_Context_1);
  /* 3 */
  TEMPLATE_Balise_modified_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_3);
  /* 1 */
  Test_Balise_Sent_P027_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Test_Balise_Sent_P021_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_1_Context_1);
  /* 8 */
  TEMPLATE_Balise_modified_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_8);
  /* 1 */
  Balise_Group_Init_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Test_BG002_200_8BT_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC)
{
  /* 1 */
  Balise_Group_Close_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_5_Context_1);
  /* 1 */
  Test_Balise_Sent_P072_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_4_Context_1);
  /* 6 */
  TEMPLATE_Balise_modified_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_6);
  /* 5 */
  TEMPLATE_Balise_modified_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_5);
  /* 1 */
  Test_Balise_Sent_P041_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_3_Context_1);
  /* 3 */
  TEMPLATE_Balise_modified_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_3);
  /* 1 */
  Test_Balise_Sent_P027_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Test_Balise_Sent_P021_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_1_Context_1);
  /* 8 */
  TEMPLATE_Balise_modified_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_8);
  /* 1 */
  Balise_Group_Init_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT */
void Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::BG_message_in */ CompressedBaliseMessage_TM *BG_message_in,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::TrainPos */ kcg_real TrainPos,
  /* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises *outC)
{
  kcg_bool noname;
  
  outC->_L28 = TrainPos;
  kcg_copy_BaliseGroupData_TM(&outC->_L19, Engineering_Data);
  /* 1 */
  Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt(
    outC->_L28,
    &outC->_L19,
    &outC->Context_1);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L11,
    &outC->Context_1.BG_internal_out);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->BaliseDataIn,
    &outC->_L11);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L9,
    &outC->BaliseDataIn);
  outC->_L20 = 0;
  /* 8 */
  TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L9,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B0of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L20,
    &outC->Context_8);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L8,
    &outC->Context_8.B_data_out);
  outC->_L21 = 1;
  /* 1 */
  Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_L8,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B1of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L21,
    &outC->_1_Context_1);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L7,
    &outC->_1_Context_1.B_data_out);
  outC->_L22 = 2;
  /* 1 */
  Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_L7,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B2of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L22,
    &outC->_2_Context_1);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L6,
    &outC->_2_Context_1.B_data_out);
  outC->_L23 = 3;
  /* 3 */
  TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L6,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B3of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L23,
    &outC->Context_3);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L5,
    &outC->Context_3.B_data_out);
  outC->_L24 = 4;
  /* 1 */
  Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_L5,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B4of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L24,
    &outC->_3_Context_1);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L4,
    &outC->_3_Context_1.B_data_out);
  outC->_L25 = 5;
  /* 5 */
  TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L4,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B5of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L25,
    &outC->Context_5);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L3,
    &outC->Context_5.B_data_out);
  outC->_L26 = 6;
  /* 6 */
  TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L3,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B6of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L26,
    &outC->Context_6);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L2,
    &outC->Context_6.B_data_out);
  outC->_L27 = 7;
  /* 1 */
  Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_L2,
    (BaliseTelegramHeader_int_T_TM *)
      &test_BG002_header_B7of7_nlink_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    outC->_L27,
    &outC->_4_Context_1);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L1,
    &outC->_4_Context_1.B_data_out);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->BaliseDataOut,
    &outC->_L1);
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L16,
    &outC->BaliseDataOut);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L29, BG_message_in);
  /* 1 */
  Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->_L16,
    &outC->_L29,
    &outC->_5_Context_1);
  outC->_L14 = outC->_5_Context_1.Error_out;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_5_Context_1.BG_message_out);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_message_out, &outC->_L13);
  noname = outC->_L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

