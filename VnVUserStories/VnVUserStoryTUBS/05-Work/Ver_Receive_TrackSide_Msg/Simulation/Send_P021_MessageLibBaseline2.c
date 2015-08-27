/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P021_MessageLibBaseline2.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_P021_init_MessageLibBaseline2(
  outC_Send_P021_MessageLibBaseline2 *outC)
{
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L5 = kcg_true;
  for (i = 0; i < 30; i++) {
    outC->_L7.PacketHeaders[i].nid_packet = 0;
    outC->_L7.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L7.PacketHeaders[i].valid = kcg_true;
    outC->_L7.PacketHeaders[i].startAddress = 0;
    outC->_L7.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L7.PacketData[i1] = 0;
  }
  outC->_L6 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.NID_PACKET = 0;
  outC->_L4.Q_DIR = 0;
  outC->_L4.L_PACKET = 0;
  outC->_L4.Q_SCALE = 0;
  outC->_L4.D_GRADIENT = 0;
  outC->_L4.Q_GDIR = 0;
  outC->_L4.G_A = 0;
  outC->_L4.N_ITER = 0;
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L4.SECTIONS[i2].D_GRADIENT = 0;
    outC->_L4.SECTIONS[i2].Q_GDIR = 0;
    outC->_L4.SECTIONS[i2].G_A = 0;
  }
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L3.PacketHeaders[i3].nid_packet = 0;
    outC->_L3.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[i3].valid = kcg_true;
    outC->_L3.PacketHeaders[i3].startAddress = 0;
    outC->_L3.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L3.PacketData[i4] = 0;
  }
  outC->ck_every = kcg_true;
  for (i5 = 0; i5 < 30; i5++) {
    outC->B_data_out.PacketHeaders[i5].nid_packet = 0;
    outC->B_data_out.PacketHeaders[i5].q_dir = Q_DIR_Reverse;
    outC->B_data_out.PacketHeaders[i5].valid = kcg_true;
    outC->B_data_out.PacketHeaders[i5].startAddress = 0;
    outC->B_data_out.PacketHeaders[i5].endAddress = 0;
  }
  for (i6 = 0; i6 < 500; i6++) {
    outC->B_data_out.PacketData[i6] = 0;
  }
  /* 1 */ Write_P021_init_TM_trackside(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_P021_reset_MessageLibBaseline2(
  outC_Send_P021_MessageLibBaseline2 *outC)
{
  /* 1 */ Write_P021_reset_TM_trackside(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MessageLibBaseline2::Send_P021 */
void Send_P021_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P021::B_data_in */ CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P021::P021 */ P021_trackside_int_T_TM *P021,
  outC_Send_P021_MessageLibBaseline2 *outC)
{
  /* MessageLibBaseline2::Send_P021 */ CompressedPackets_T_Common_Types_Pkg op_call;
  /* MessageLibBaseline2::Send_P021 */ kcg_bool _1_op_call;
  kcg_bool noname;
  
  kcg_copy_P021_trackside_int_T_TM(&outC->_L4, P021);
  outC->_L5 = outC->_L4.valid;
  outC->ck_every = outC->_L5;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, B_data_in);
  /* ck_Send_P021 */ if (outC->ck_every) {
    /* 1 */ Write_P021_TM_trackside(&outC->_L4, &outC->_L3, &outC->Context_1);
    _1_op_call = outC->Context_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &op_call,
      &outC->Context_1.RadioPacketsOut);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L3);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L7);
  outC->_L8 = kcg_false;
  /* ck_Send_P021 */ if (outC->ck_every) {
    outC->_L6 = _1_op_call;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  noname = outC->_L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P021_MessageLibBaseline2.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

