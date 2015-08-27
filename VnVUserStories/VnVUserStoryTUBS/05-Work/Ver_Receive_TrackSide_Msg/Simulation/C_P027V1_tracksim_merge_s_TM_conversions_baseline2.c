/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_merge_s_TM_conversions_baseline2.h"

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_tracksim_merge_s_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
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
  
  outC->_L448 = 0;
  outC->_L447 = kcg_true;
  outC->_L446 = 0;
  for (i = 0; i < 30; i++) {
    outC->_L442[i].nid_packet = 0;
    outC->_L442[i].q_dir = Q_DIR_Reverse;
    outC->_L442[i].valid = kcg_true;
    outC->_L442[i].startAddress = 0;
    outC->_L442[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L443[i1] = 0;
  }
  outC->_L441 = 0;
  outC->_L440.D_STATIC = 0;
  outC->_L440.V_STATIC = 0;
  outC->_L440.Q_FRONT = 0;
  outC->_L440.N_ITER = 0;
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L440.SECTIONS_q_diff[i2].NC_DIFF = 0;
    outC->_L440.SECTIONS_q_diff[i2].V_DIFF = 0;
  }
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L439.PacketHeaders[i3].nid_packet = 0;
    outC->_L439.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->_L439.PacketHeaders[i3].valid = kcg_true;
    outC->_L439.PacketHeaders[i3].startAddress = 0;
    outC->_L439.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L439.PacketData[i4] = 0;
  }
  outC->_L438 = 0;
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L433[i5] = 0;
  }
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L434.PacketHeaders[i6].nid_packet = 0;
    outC->_L434.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L434.PacketHeaders[i6].valid = kcg_true;
    outC->_L434.PacketHeaders[i6].startAddress = 0;
    outC->_L434.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L434.PacketData[i7] = 0;
  }
  outC->_L437 = 0;
  outC->_L436 = 0;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L435[i8].nid_packet = 0;
    outC->_L435[i8].q_dir = Q_DIR_Reverse;
    outC->_L435[i8].valid = kcg_true;
    outC->_L435[i8].startAddress = 0;
    outC->_L435[i8].endAddress = 0;
  }
  outC->_L431.nid_packet = 0;
  outC->_L431.q_dir = Q_DIR_Reverse;
  outC->_L431.valid = kcg_true;
  outC->_L431.startAddress = 0;
  outC->_L431.endAddress = 0;
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L432[i9] = 0;
  }
  for (i10 = 0; i10 < 30; i10++) {
    outC->Packets_Out.PacketHeaders[i10].nid_packet = 0;
    outC->Packets_Out.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->Packets_Out.PacketHeaders[i10].valid = kcg_true;
    outC->Packets_Out.PacketHeaders[i10].startAddress = 0;
    outC->Packets_Out.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->Packets_Out.PacketData[i11] = 0;
  }
  outC->cont = kcg_true;
  /* 1 */ SEND_MessageData_init_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ SEND_WriteMessageHeader_init_TM_lib_internal(&outC->Context_1);
  /* 2 */
  C_P027V1_tracksim_compr_o_init_TM_conversions_baseline2(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P027V1_tracksim_merge_s_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
{
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ SEND_WriteMessageHeader_reset_TM_lib_internal(&outC->Context_1);
  /* 2 */
  C_P027V1_tracksim_compr_o_reset_TM_conversions_baseline2(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections */
void C_P027V1_tracksim_merge_s_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::i */ kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::PacketStream_in */ CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::P027V1_sections_from_track */ P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::n_iter */ kcg_int n_iter,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::meta_first_section_in */ kcg_int meta_first_section_in,
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
{
  outC->_L446 = i;
  kcg_copy_P027V1_section_int_T_TM_baseline2(
    &outC->_L440,
    P027V1_sections_from_track);
  outC->_L448 = meta_first_section_in;
  /* 2 */
  C_P027V1_tracksim_compr_o_TM_conversions_baseline2(
    outC->_L446,
    &outC->_L440,
    outC->_L448,
    &outC->Context_2);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L431,
    &outC->Context_2.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L432,
    &outC->Context_2.P027V1_sections_compressed);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L439, PacketStream_in);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L442,
    &outC->_L439.PacketHeaders);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &outC->_L442,
    &outC->_L431,
    &outC->Context_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L435,
    &outC->Context_1.HeadersOut);
  outC->_L436 = outC->Context_1.NewStartAddr;
  outC->_L437 = outC->Context_1.NewEndAddr;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L443,
    &outC->_L439.PacketData);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    outC->_L436,
    outC->_L437,
    &outC->_L443,
    &outC->_L432,
    &outC->_1_Context_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L433,
    &outC->_1_Context_1.DataOut);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L434.PacketHeaders,
    &outC->_L435);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L434.PacketData,
    &outC->_L433);
  outC->_L438 = i;
  outC->_L441 = n_iter;
  outC->_L447 = outC->_L441 > outC->_L438;
  outC->cont = outC->_L447;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Packets_Out,
    &outC->_L434);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_merge_s_TM_conversions_baseline2.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

