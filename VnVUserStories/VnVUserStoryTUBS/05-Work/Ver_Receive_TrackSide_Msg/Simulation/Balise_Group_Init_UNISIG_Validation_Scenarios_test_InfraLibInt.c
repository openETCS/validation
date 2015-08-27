/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt.h"

#ifndef KCG_USER_DEFINED_INIT
void Balise_Group_Init_init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L31 = kcg_true;
  outC->_L30 = 0.0;
  outC->_L29 = 0;
  for (i = 0; i < 30; i++) {
    outC->_L28.PacketHeaders[i].nid_packet = 0;
    outC->_L28.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L28.PacketHeaders[i].valid = kcg_true;
    outC->_L28.PacketHeaders[i].startAddress = 0;
    outC->_L28.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L28.PacketData[i1] = 0;
  }
  outC->_L27.q_updown = 0;
  outC->_L27.m_version = 0;
  outC->_L27.q_media = 0;
  outC->_L27.n_pig = 0;
  outC->_L27.n_total = 0;
  outC->_L27.m_dup = 0;
  outC->_L27.m_mcount = 0;
  outC->_L27.nid_c = 0;
  outC->_L27.nid_bg = 0;
  outC->_L27.q_link = 0;
  outC->_L26.header.q_updown = 0;
  outC->_L26.header.m_version = 0;
  outC->_L26.header.q_media = 0;
  outC->_L26.header.n_pig = 0;
  outC->_L26.header.n_total = 0;
  outC->_L26.header.m_dup = 0;
  outC->_L26.header.m_mcount = 0;
  outC->_L26.header.nid_c = 0;
  outC->_L26.header.nid_bg = 0;
  outC->_L26.header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L26.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L26.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L26.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L26.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L26.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L26.packets.PacketData[i3] = 0;
  }
  outC->_L26.engineering_BG_location = 0;
  outC->_L26.TrainPos = 0.0;
  outC->_L26.pig_nom_0 = 0;
  outC->_L26.balise_passed = kcg_true;
  outC->_L14 = 0;
  outC->_L2.NID_C = 0;
  outC->_L2.NID_BG = 0;
  outC->_L2.Pos = 0;
  outC->_L2.Or_BG = Amsterdam_TM;
  outC->_L2.Or_Line = N_TM;
  outC->BG_internal_out.header.q_updown = 0;
  outC->BG_internal_out.header.m_version = 0;
  outC->BG_internal_out.header.q_media = 0;
  outC->BG_internal_out.header.n_pig = 0;
  outC->BG_internal_out.header.n_total = 0;
  outC->BG_internal_out.header.m_dup = 0;
  outC->BG_internal_out.header.m_mcount = 0;
  outC->BG_internal_out.header.nid_c = 0;
  outC->BG_internal_out.header.nid_bg = 0;
  outC->BG_internal_out.header.q_link = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->BG_internal_out.packets.PacketHeaders[i4].nid_packet = 0;
    outC->BG_internal_out.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->BG_internal_out.packets.PacketHeaders[i4].valid = kcg_true;
    outC->BG_internal_out.packets.PacketHeaders[i4].startAddress = 0;
    outC->BG_internal_out.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->BG_internal_out.packets.PacketData[i5] = 0;
  }
  outC->BG_internal_out.engineering_BG_location = 0;
  outC->BG_internal_out.TrainPos = 0.0;
  outC->BG_internal_out.pig_nom_0 = 0;
  outC->BG_internal_out.balise_passed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Group_Init_reset_UNISIG_Validation_Scenarios_test_InfraLibInt(
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init */
void Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt(
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::TrainPos */ kcg_real TrainPos,
  /* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt *outC)
{
  kcg_copy_BaliseGroupData_TM(&outC->_L2, Engineering_Data);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->_L27,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L28,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  outC->_L29 = outC->_L2.Pos;
  outC->_L30 = TrainPos;
  outC->_L14 = 0;
  outC->_L31 = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L26.header, &outC->_L27);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L26.packets,
    &outC->_L28);
  outC->_L26.engineering_BG_location = outC->_L29;
  outC->_L26.TrainPos = outC->_L30;
  outC->_L26.pig_nom_0 = outC->_L14;
  outC->_L26.balise_passed = outC->_L31;
  kcg_copy_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt(
    &outC->BG_internal_out,
    &outC->_L26);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

