/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P027V1_TM_trackside_baseline2.h"

#ifndef KCG_USER_DEFINED_INIT
void Write_P027V1_init_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
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
  
  outC->_L56 = 0;
  for (i = 0; i < 33; i++) {
    outC->_L55[i] = 0;
  }
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L54[i1] = 0;
  }
  outC->_L52 = kcg_true;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L51.PacketHeaders[i2].nid_packet = 0;
    outC->_L51.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L51.PacketHeaders[i2].valid = kcg_true;
    outC->_L51.PacketHeaders[i2].startAddress = 0;
    outC->_L51.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L51.PacketData[i3] = 0;
  }
  outC->_L50 = 0;
  outC->_L46 = 0;
  for (i5 = 0; i5 < 33; i5++) {
    outC->_L45[i5].D_STATIC = 0;
    outC->_L45[i5].V_STATIC = 0;
    outC->_L45[i5].Q_FRONT = 0;
    outC->_L45[i5].N_ITER = 0;
    for (i4 = 0; i4 < 32; i4++) {
      outC->_L45[i5].SECTIONS_q_diff[i4].NC_DIFF = 0;
      outC->_L45[i5].SECTIONS_q_diff[i4].V_DIFF = 0;
    }
  }
  outC->_L43.nid_packet = 0;
  outC->_L43.q_dir = Q_DIR_Reverse;
  outC->_L43.valid = kcg_true;
  outC->_L43.startAddress = 0;
  outC->_L43.endAddress = 0;
  for (i6 = 0; i6 < 500; i6++) {
    outC->_L44[i6] = 0;
  }
  for (i7 = 0; i7 < 30; i7++) {
    outC->_L41[i7].nid_packet = 0;
    outC->_L41[i7].q_dir = Q_DIR_Reverse;
    outC->_L41[i7].valid = kcg_true;
    outC->_L41[i7].startAddress = 0;
    outC->_L41[i7].endAddress = 0;
  }
  for (i8 = 0; i8 < 500; i8++) {
    outC->_L42[i8] = 0;
  }
  for (i9 = 0; i9 < 30; i9++) {
    outC->_L40.PacketHeaders[i9].nid_packet = 0;
    outC->_L40.PacketHeaders[i9].q_dir = Q_DIR_Reverse;
    outC->_L40.PacketHeaders[i9].valid = kcg_true;
    outC->_L40.PacketHeaders[i9].startAddress = 0;
    outC->_L40.PacketHeaders[i9].endAddress = 0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->_L40.PacketData[i10] = 0;
  }
  for (i11 = 0; i11 < 30; i11++) {
    outC->_L39.PacketHeaders[i11].nid_packet = 0;
    outC->_L39.PacketHeaders[i11].q_dir = Q_DIR_Reverse;
    outC->_L39.PacketHeaders[i11].valid = kcg_true;
    outC->_L39.PacketHeaders[i11].startAddress = 0;
    outC->_L39.PacketHeaders[i11].endAddress = 0;
  }
  for (i12 = 0; i12 < 500; i12++) {
    outC->_L39.PacketData[i12] = 0;
  }
  outC->_L22 = 0;
  outC->_L21 = 0;
  outC->_L18 = kcg_true;
  for (i13 = 0; i13 < 500; i13++) {
    outC->_L10[i13] = 0;
  }
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L4[i14].nid_packet = 0;
    outC->_L4[i14].q_dir = Q_DIR_Reverse;
    outC->_L4[i14].valid = kcg_true;
    outC->_L4[i14].startAddress = 0;
    outC->_L4[i14].endAddress = 0;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = 0;
  outC->_L1.Q_DIR = 0;
  outC->_L1.L_PACKET = 0;
  outC->_L1.Q_SCALE = 0;
  outC->_L1.D_STATIC = 0;
  outC->_L1.V_STATIC = 0;
  outC->_L1.Q_FRONT = 0;
  outC->_L1.N_ITER_n = 0;
  for (i15 = 0; i15 < 32; i15++) {
    outC->_L1.SECTIONS_q_diff[i15].NC_DIFF = 0;
    outC->_L1.SECTIONS_q_diff[i15].V_DIFF = 0;
  }
  outC->_L1.N_ITER_k = 0;
  for (i17 = 0; i17 < 32; i17++) {
    outC->_L1.SECTIONS_SSP[i17].D_STATIC = 0;
    outC->_L1.SECTIONS_SSP[i17].V_STATIC = 0;
    outC->_L1.SECTIONS_SSP[i17].Q_FRONT = 0;
    outC->_L1.SECTIONS_SSP[i17].N_ITER = 0;
    for (i16 = 0; i16 < 32; i16++) {
      outC->_L1.SECTIONS_SSP[i17].SECTIONS_q_diff[i16].NC_DIFF = 0;
      outC->_L1.SECTIONS_SSP[i17].SECTIONS_q_diff[i16].V_DIFF = 0;
    }
  }
  for (i18 = 0; i18 < 30; i18++) {
    outC->PacketsOut.PacketHeaders[i18].nid_packet = 0;
    outC->PacketsOut.PacketHeaders[i18].q_dir = Q_DIR_Reverse;
    outC->PacketsOut.PacketHeaders[i18].valid = kcg_true;
    outC->PacketsOut.PacketHeaders[i18].startAddress = 0;
    outC->PacketsOut.PacketHeaders[i18].endAddress = 0;
  }
  for (i19 = 0; i19 < 500; i19++) {
    outC->PacketsOut.PacketData[i19] = 0;
  }
  outC->Error = kcg_true;
  for (i20 = 0; i20 < 33; i20++) {
    /* 1 */
    C_P027V1_tracksim_merge_s_init_TM_conversions_baseline2(
      &outC->_3_Context_1[i20]);
  }
  /* 1 */ SEND_MessageData_init_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ SEND_WriteMessageHeader_init_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */
  C_P027V1_tracksim_compr_body_init_TM_conversions_baseline2(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_P027V1_reset_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P027V1_tracksim_merge_s_reset_TM_conversions_baseline2(
      &outC->_3_Context_1[i]);
  }
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ SEND_WriteMessageHeader_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */
  C_P027V1_tracksim_compr_body_reset_TM_conversions_baseline2(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_trackside_baseline2::Write_P027V1 */
void Write_P027V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P027V1::Packet27V1 */ P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* TM_trackside_baseline2::Write_P027V1::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
  kcg_int i2;
  kcg_int i1;
  /* TM_trackside_baseline2::Write_P027V1 */ CompressedPackets_T_Common_Types_Pkg acc;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&outC->_L1, Packet27V1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  /* 1 */
  C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
    &outC->_L1,
    &outC->Context_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_1.P027V1_body_compressed);
  kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(
    &outC->_L45,
    &outC->Context_1.P027V1_sections);
  outC->_L46 = outC->Context_1.n_iter_k_out;
  outC->_L56 = outC->Context_1.meta_first_section;
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &outC->_L41,
    &outC->_L43,
    &outC->_1_Context_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->_1_Context_1.HeadersOut);
  outC->_L21 = outC->_1_Context_1.NewStartAddr;
  outC->_L22 = outC->_1_Context_1.NewEndAddr;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    outC->_L21,
    outC->_L22,
    &outC->_L42,
    &outC->_L44,
    &outC->_2_Context_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->_2_Context_1.DataOut);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L39.PacketHeaders, &outC->_L4);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L39.PacketData,
    &outC->_L10);
  /* pow */ for (i2 = 0; i2 < 33; i2++) {
    outC->_L54[i2] = outC->_L46;
  }
  /* pow */ for (i1 = 0; i1 < 33; i1++) {
    outC->_L55[i1] = outC->_L56;
  }
  outC->_L52 = kcg_true;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L51, &outC->_L39);
  if (outC->_L52) {
    for (i = 0; i < 33; i++) {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&acc, &outC->_L51);
      /* 1 */
      C_P027V1_tracksim_merge_s_TM_conversions_baseline2(
        i,
        &acc,
        &outC->_L45[i],
        outC->_L54[i],
        outC->_L55[i],
        &outC->_3_Context_1[i]);
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &outC->_L51,
        &outC->_3_Context_1[i].Packets_Out);
      outC->_L50 = i + 1;
      if (!outC->_3_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L50 = 0;
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->PacketsOut, &outC->_L51);
  outC->_L18 = kcg_false;
  outC->Error = outC->_L18;
  noname = outC->_L50;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P027V1_TM_trackside_baseline2.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

