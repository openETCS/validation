/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Multiplexer_VerReTrackMsg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Input_Multiplexer_init_VerReTrackMsg_Pkg(
  outC_Input_Multiplexer_VerReTrackMsg_Pkg *outC)
{
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L18 = 0.0;
  outC->_L9.Header.q_updown = 0;
  outC->_L9.Header.m_version = 0;
  outC->_L9.Header.q_media = 0;
  outC->_L9.Header.n_pig = 0;
  outC->_L9.Header.n_total = 0;
  outC->_L9.Header.m_dup = 0;
  outC->_L9.Header.m_mcount = 0;
  outC->_L9.Header.nid_c = 0;
  outC->_L9.Header.nid_bg = 0;
  outC->_L9.Header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L9.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L9.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L9.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L9.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L9.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L9.Messages.PacketData[i1] = 0;
  }
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L7.PacketHeaders[i2].nid_packet = 0;
    outC->_L7.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L7.PacketHeaders[i2].valid = kcg_true;
    outC->_L7.PacketHeaders[i2].startAddress = 0;
    outC->_L7.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L7.PacketData[i3] = 0;
  }
  outC->_L8.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.q_media = Q_MEDIA_Balise;
  outC->_L8.n_pig = N_PIG_I_am_the_1st;
  outC->_L8.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.m_dup = M_DUP_No_duplicates;
  outC->_L8.m_mcount = 0;
  outC->_L8.nid_c = 0;
  outC->_L8.nid_bg = 0;
  outC->_L8.q_link = Q_LINK_Unlinked;
  outC->_L2 = 0.0;
  outC->_L12 = kcg_true;
  outC->_L6 = 0;
  outC->out_TrackFinished = kcg_true;
  outC->out_TelegramHeader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->out_TelegramHeader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->out_TelegramHeader.q_media = Q_MEDIA_Balise;
  outC->out_TelegramHeader.n_pig = N_PIG_I_am_the_1st;
  outC->out_TelegramHeader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->out_TelegramHeader.m_dup = M_DUP_No_duplicates;
  outC->out_TelegramHeader.m_mcount = 0;
  outC->out_TelegramHeader.nid_c = 0;
  outC->out_TelegramHeader.nid_bg = 0;
  outC->out_TelegramHeader.q_link = Q_LINK_Unlinked;
  for (i4 = 0; i4 < 30; i4++) {
    outC->out_compressedPackets.PacketHeaders[i4].nid_packet = 0;
    outC->out_compressedPackets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->out_compressedPackets.PacketHeaders[i4].valid = kcg_true;
    outC->out_compressedPackets.PacketHeaders[i4].startAddress = 0;
    outC->out_compressedPackets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->out_compressedPackets.PacketData[i5] = 0;
  }
  /* 1 */
  Convert_CompressedBalise__init_Subfuction_Enhancements_Pkg(
    &outC->_2_Context_1);
  /* 1 */
  Multiplexer_TestTrack_init_Subfunctions_CheckBGInput_Pkg(&outC->_1_Context_1);
  /* 1 */ Check_EndofTrack_init_Subfuction_Enhancements_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_Multiplexer_reset_VerReTrackMsg_Pkg(
  outC_Input_Multiplexer_VerReTrackMsg_Pkg *outC)
{
  /* 1 */
  Convert_CompressedBalise__reset_Subfuction_Enhancements_Pkg(
    &outC->_2_Context_1);
  /* 1 */
  Multiplexer_TestTrack_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->_1_Context_1);
  /* 1 */ Check_EndofTrack_reset_Subfuction_Enhancements_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* VerReTrackMsg_Pkg::Input_Multiplexer */
void Input_Multiplexer_VerReTrackMsg_Pkg(
  /* VerReTrackMsg_Pkg::Input_Multiplexer::in_TestStory */ kcg_int in_TestStory,
  /* VerReTrackMsg_Pkg::Input_Multiplexer::in_currentPosition */ kcg_real in_currentPosition,
  /* VerReTrackMsg_Pkg::Input_Multiplexer::EndofStory */ kcg_real EndofStory,
  outC_Input_Multiplexer_VerReTrackMsg_Pkg *outC)
{
  outC->_L6 = in_TestStory;
  outC->_L2 = in_currentPosition;
  outC->_L18 = EndofStory;
  /* 1 */
  Check_EndofTrack_Subfuction_Enhancements_Pkg(
    outC->_L2,
    outC->_L18,
    &outC->Context_1);
  outC->_L12 = outC->Context_1.out_TracksFinished;
  outC->out_TrackFinished = outC->_L12;
  /* 1 */
  Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg(
    outC->_L6,
    outC->_L2,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_1_Context_1.out_compressedTrackMsg);
  /* 1 */
  Convert_CompressedBalise__Subfuction_Enhancements_Pkg(
    &outC->_L9,
    &outC->_2_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->_2_Context_1.out_CompressedPackets);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L8,
    &outC->_2_Context_1.out_TelegramHeader);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->out_compressedPackets,
    &outC->_L7);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->out_TelegramHeader, &outC->_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Multiplexer_VerReTrackMsg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

