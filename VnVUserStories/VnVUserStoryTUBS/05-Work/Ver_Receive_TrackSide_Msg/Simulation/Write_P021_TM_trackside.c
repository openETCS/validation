/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P021_TM_trackside.h"

#ifndef KCG_USER_DEFINED_INIT
void Write_P021_init_TM_trackside(outC_Write_P021_TM_trackside *outC)
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
  
  outC->_L43.nid_packet = 0;
  outC->_L43.q_dir = Q_DIR_Reverse;
  outC->_L43.valid = kcg_true;
  outC->_L43.startAddress = 0;
  outC->_L43.endAddress = 0;
  for (i = 0; i < 500; i++) {
    outC->_L44[i] = 0;
  }
  for (i1 = 0; i1 < 30; i1++) {
    outC->_L41[i1].nid_packet = 0;
    outC->_L41[i1].q_dir = Q_DIR_Reverse;
    outC->_L41[i1].valid = kcg_true;
    outC->_L41[i1].startAddress = 0;
    outC->_L41[i1].endAddress = 0;
  }
  for (i2 = 0; i2 < 500; i2++) {
    outC->_L42[i2] = 0;
  }
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L40.PacketHeaders[i3].nid_packet = 0;
    outC->_L40.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->_L40.PacketHeaders[i3].valid = kcg_true;
    outC->_L40.PacketHeaders[i3].startAddress = 0;
    outC->_L40.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L40.PacketData[i4] = 0;
  }
  for (i5 = 0; i5 < 30; i5++) {
    outC->_L39.PacketHeaders[i5].nid_packet = 0;
    outC->_L39.PacketHeaders[i5].q_dir = Q_DIR_Reverse;
    outC->_L39.PacketHeaders[i5].valid = kcg_true;
    outC->_L39.PacketHeaders[i5].startAddress = 0;
    outC->_L39.PacketHeaders[i5].endAddress = 0;
  }
  for (i6 = 0; i6 < 500; i6++) {
    outC->_L39.PacketData[i6] = 0;
  }
  outC->_L22 = 0;
  outC->_L21 = 0;
  outC->_L18 = kcg_true;
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L10[i7] = 0;
  }
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L4[i8].nid_packet = 0;
    outC->_L4[i8].q_dir = Q_DIR_Reverse;
    outC->_L4[i8].valid = kcg_true;
    outC->_L4[i8].startAddress = 0;
    outC->_L4[i8].endAddress = 0;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = 0;
  outC->_L1.Q_DIR = 0;
  outC->_L1.L_PACKET = 0;
  outC->_L1.Q_SCALE = 0;
  outC->_L1.D_GRADIENT = 0;
  outC->_L1.Q_GDIR = 0;
  outC->_L1.G_A = 0;
  outC->_L1.N_ITER = 0;
  for (i9 = 0; i9 < 32; i9++) {
    outC->_L1.SECTIONS[i9].D_GRADIENT = 0;
    outC->_L1.SECTIONS[i9].Q_GDIR = 0;
    outC->_L1.SECTIONS[i9].G_A = 0;
  }
  for (i10 = 0; i10 < 30; i10++) {
    outC->RadioPacketsOut.PacketHeaders[i10].nid_packet = 0;
    outC->RadioPacketsOut.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->RadioPacketsOut.PacketHeaders[i10].valid = kcg_true;
    outC->RadioPacketsOut.PacketHeaders[i10].startAddress = 0;
    outC->RadioPacketsOut.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->RadioPacketsOut.PacketData[i11] = 0;
  }
  outC->Error = kcg_true;
  /* 1 */ SEND_MessageData_init_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */
  SEND_WriteBaliseMessageHeader_init_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P021_tracksim_compr_init_TM_conversions(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_P021_reset_TM_trackside(outC_Write_P021_TM_trackside *outC)
{
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */
  SEND_WriteBaliseMessageHeader_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P021_tracksim_compr_reset_TM_conversions(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_trackside::Write_P021 */
void Write_P021_TM_trackside(
  /* TM_trackside::Write_P021::Packet21 */ P021_trackside_int_T_TM *Packet21,
  /* TM_trackside::Write_P021::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P021_TM_trackside *outC)
{
  kcg_copy_P021_trackside_int_T_TM(&outC->_L1, Packet21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  /* 1 */ C_P021_tracksim_compr_TM_conversions(&outC->_L1, &outC->Context_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_1.P005_compressed);
  /* 1 */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
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
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioPacketsOut,
    &outC->_L39);
  outC->_L18 = kcg_false;
  outC->Error = outC->_L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P021_TM_trackside.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

