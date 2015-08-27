/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Multiplexer_TestTrack_init_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg *outC)
{
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
  
  outC->_L14.Header.q_updown = 0;
  outC->_L14.Header.m_version = 0;
  outC->_L14.Header.q_media = 0;
  outC->_L14.Header.n_pig = 0;
  outC->_L14.Header.n_total = 0;
  outC->_L14.Header.m_dup = 0;
  outC->_L14.Header.m_mcount = 0;
  outC->_L14.Header.nid_c = 0;
  outC->_L14.Header.nid_bg = 0;
  outC->_L14.Header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L14.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L14.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L14.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L14.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L14.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L14.Messages.PacketData[i1] = 0;
  }
  outC->CurrentTrackMsg.Header.q_updown = 0;
  outC->CurrentTrackMsg.Header.m_version = 0;
  outC->CurrentTrackMsg.Header.q_media = 0;
  outC->CurrentTrackMsg.Header.n_pig = 0;
  outC->CurrentTrackMsg.Header.n_total = 0;
  outC->CurrentTrackMsg.Header.m_dup = 0;
  outC->CurrentTrackMsg.Header.m_mcount = 0;
  outC->CurrentTrackMsg.Header.nid_c = 0;
  outC->CurrentTrackMsg.Header.nid_bg = 0;
  outC->CurrentTrackMsg.Header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->CurrentTrackMsg.Messages.PacketHeaders[i2].nid_packet = 0;
    outC->CurrentTrackMsg.Messages.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->CurrentTrackMsg.Messages.PacketHeaders[i2].valid = kcg_true;
    outC->CurrentTrackMsg.Messages.PacketHeaders[i2].startAddress = 0;
    outC->CurrentTrackMsg.Messages.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->CurrentTrackMsg.Messages.PacketData[i3] = 0;
  }
  outC->_L8_IfBlock1.Header.q_updown = 0;
  outC->_L8_IfBlock1.Header.m_version = 0;
  outC->_L8_IfBlock1.Header.q_media = 0;
  outC->_L8_IfBlock1.Header.n_pig = 0;
  outC->_L8_IfBlock1.Header.n_total = 0;
  outC->_L8_IfBlock1.Header.m_dup = 0;
  outC->_L8_IfBlock1.Header.m_mcount = 0;
  outC->_L8_IfBlock1.Header.nid_c = 0;
  outC->_L8_IfBlock1.Header.nid_bg = 0;
  outC->_L8_IfBlock1.Header.q_link = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L8_IfBlock1.Messages.PacketHeaders[i4].nid_packet = 0;
    outC->_L8_IfBlock1.Messages.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L8_IfBlock1.Messages.PacketHeaders[i4].valid = kcg_true;
    outC->_L8_IfBlock1.Messages.PacketHeaders[i4].startAddress = 0;
    outC->_L8_IfBlock1.Messages.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L8_IfBlock1.Messages.PacketData[i5] = 0;
  }
  outC->_L2_IfBlock1 = 0.0;
  outC->_L35_IfBlock1.Header.q_updown = 0;
  outC->_L35_IfBlock1.Header.m_version = 0;
  outC->_L35_IfBlock1.Header.q_media = 0;
  outC->_L35_IfBlock1.Header.n_pig = 0;
  outC->_L35_IfBlock1.Header.n_total = 0;
  outC->_L35_IfBlock1.Header.m_dup = 0;
  outC->_L35_IfBlock1.Header.m_mcount = 0;
  outC->_L35_IfBlock1.Header.nid_c = 0;
  outC->_L35_IfBlock1.Header.nid_bg = 0;
  outC->_L35_IfBlock1.Header.q_link = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L35_IfBlock1.Messages.PacketHeaders[i6].nid_packet = 0;
    outC->_L35_IfBlock1.Messages.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L35_IfBlock1.Messages.PacketHeaders[i6].valid = kcg_true;
    outC->_L35_IfBlock1.Messages.PacketHeaders[i6].startAddress = 0;
    outC->_L35_IfBlock1.Messages.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L35_IfBlock1.Messages.PacketData[i7] = 0;
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L36_IfBlock1.Header.q_updown = 0;
  outC->_L36_IfBlock1.Header.m_version = 0;
  outC->_L36_IfBlock1.Header.q_media = 0;
  outC->_L36_IfBlock1.Header.n_pig = 0;
  outC->_L36_IfBlock1.Header.n_total = 0;
  outC->_L36_IfBlock1.Header.m_dup = 0;
  outC->_L36_IfBlock1.Header.m_mcount = 0;
  outC->_L36_IfBlock1.Header.nid_c = 0;
  outC->_L36_IfBlock1.Header.nid_bg = 0;
  outC->_L36_IfBlock1.Header.q_link = 0;
  for (i8 = 0; i8 < 30; i8++) {
    outC->_L36_IfBlock1.Messages.PacketHeaders[i8].nid_packet = 0;
    outC->_L36_IfBlock1.Messages.PacketHeaders[i8].q_dir = Q_DIR_Reverse;
    outC->_L36_IfBlock1.Messages.PacketHeaders[i8].valid = kcg_true;
    outC->_L36_IfBlock1.Messages.PacketHeaders[i8].startAddress = 0;
    outC->_L36_IfBlock1.Messages.PacketHeaders[i8].endAddress = 0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->_L36_IfBlock1.Messages.PacketData[i9] = 0;
  }
  outC->_L6_IfBlock1.Header.q_updown = 0;
  outC->_L6_IfBlock1.Header.m_version = 0;
  outC->_L6_IfBlock1.Header.q_media = 0;
  outC->_L6_IfBlock1.Header.n_pig = 0;
  outC->_L6_IfBlock1.Header.n_total = 0;
  outC->_L6_IfBlock1.Header.m_dup = 0;
  outC->_L6_IfBlock1.Header.m_mcount = 0;
  outC->_L6_IfBlock1.Header.nid_c = 0;
  outC->_L6_IfBlock1.Header.nid_bg = 0;
  outC->_L6_IfBlock1.Header.q_link = 0;
  for (i10 = 0; i10 < 30; i10++) {
    outC->_L6_IfBlock1.Messages.PacketHeaders[i10].nid_packet = 0;
    outC->_L6_IfBlock1.Messages.PacketHeaders[i10].q_dir = Q_DIR_Reverse;
    outC->_L6_IfBlock1.Messages.PacketHeaders[i10].valid = kcg_true;
    outC->_L6_IfBlock1.Messages.PacketHeaders[i10].startAddress = 0;
    outC->_L6_IfBlock1.Messages.PacketHeaders[i10].endAddress = 0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->_L6_IfBlock1.Messages.PacketData[i11] = 0;
  }
  outC->_L3_IfBlock1.Header.q_updown = 0;
  outC->_L3_IfBlock1.Header.m_version = 0;
  outC->_L3_IfBlock1.Header.q_media = 0;
  outC->_L3_IfBlock1.Header.n_pig = 0;
  outC->_L3_IfBlock1.Header.n_total = 0;
  outC->_L3_IfBlock1.Header.m_dup = 0;
  outC->_L3_IfBlock1.Header.m_mcount = 0;
  outC->_L3_IfBlock1.Header.nid_c = 0;
  outC->_L3_IfBlock1.Header.nid_bg = 0;
  outC->_L3_IfBlock1.Header.q_link = 0;
  for (i12 = 0; i12 < 30; i12++) {
    outC->_L3_IfBlock1.Messages.PacketHeaders[i12].nid_packet = 0;
    outC->_L3_IfBlock1.Messages.PacketHeaders[i12].q_dir = Q_DIR_Reverse;
    outC->_L3_IfBlock1.Messages.PacketHeaders[i12].valid = kcg_true;
    outC->_L3_IfBlock1.Messages.PacketHeaders[i12].startAddress = 0;
    outC->_L3_IfBlock1.Messages.PacketHeaders[i12].endAddress = 0;
  }
  for (i13 = 0; i13 < 500; i13++) {
    outC->_L3_IfBlock1.Messages.PacketData[i13] = 0;
  }
  outC->_L1_IfBlock1 = 0.0;
  outC->_L4_IfBlock1.Header.q_updown = 0;
  outC->_L4_IfBlock1.Header.m_version = 0;
  outC->_L4_IfBlock1.Header.q_media = 0;
  outC->_L4_IfBlock1.Header.n_pig = 0;
  outC->_L4_IfBlock1.Header.n_total = 0;
  outC->_L4_IfBlock1.Header.m_dup = 0;
  outC->_L4_IfBlock1.Header.m_mcount = 0;
  outC->_L4_IfBlock1.Header.nid_c = 0;
  outC->_L4_IfBlock1.Header.nid_bg = 0;
  outC->_L4_IfBlock1.Header.q_link = 0;
  for (i14 = 0; i14 < 30; i14++) {
    outC->_L4_IfBlock1.Messages.PacketHeaders[i14].nid_packet = 0;
    outC->_L4_IfBlock1.Messages.PacketHeaders[i14].q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1.Messages.PacketHeaders[i14].valid = kcg_true;
    outC->_L4_IfBlock1.Messages.PacketHeaders[i14].startAddress = 0;
    outC->_L4_IfBlock1.Messages.PacketHeaders[i14].endAddress = 0;
  }
  for (i15 = 0; i15 < 500; i15++) {
    outC->_L4_IfBlock1.Messages.PacketData[i15] = 0;
  }
  outC->IfBlock1_clock = kcg_true;
  outC->_3_else_clock_IfBlock1 = kcg_true;
  outC->_2_else_clock_IfBlock1 = kcg_true;
  outC->_4_else_clock_IfBlock1 = kcg_true;
  outC->out_compressedTrackMsg.Header.q_updown = 0;
  outC->out_compressedTrackMsg.Header.m_version = 0;
  outC->out_compressedTrackMsg.Header.q_media = 0;
  outC->out_compressedTrackMsg.Header.n_pig = 0;
  outC->out_compressedTrackMsg.Header.n_total = 0;
  outC->out_compressedTrackMsg.Header.m_dup = 0;
  outC->out_compressedTrackMsg.Header.m_mcount = 0;
  outC->out_compressedTrackMsg.Header.nid_c = 0;
  outC->out_compressedTrackMsg.Header.nid_bg = 0;
  outC->out_compressedTrackMsg.Header.q_link = 0;
  for (i16 = 0; i16 < 30; i16++) {
    outC->out_compressedTrackMsg.Messages.PacketHeaders[i16].nid_packet = 0;
    outC->out_compressedTrackMsg.Messages.PacketHeaders[i16].q_dir =
      Q_DIR_Reverse;
    outC->out_compressedTrackMsg.Messages.PacketHeaders[i16].valid = kcg_true;
    outC->out_compressedTrackMsg.Messages.PacketHeaders[i16].startAddress = 0;
    outC->out_compressedTrackMsg.Messages.PacketHeaders[i16].endAddress = 0;
  }
  for (i17 = 0; i17 < 500; i17++) {
    outC->out_compressedTrackMsg.Messages.PacketData[i17] = 0;
  }
  /* 2 */
  Story_TEST_VAL_SUB026_3000_init_UNISIG_Validation_Scenarios(
    &outC->_1_Context_2);
  /* 2 */
  Story_TEST_VAL_SUB026_3B01_init_UNISIG_Validation_Scenarios(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Multiplexer_TestTrack_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* 2 */
  Story_TEST_VAL_SUB026_3000_reset_UNISIG_Validation_Scenarios(
    &outC->_1_Context_2);
  /* 2 */
  Story_TEST_VAL_SUB026_3B01_reset_UNISIG_Validation_Scenarios(
    &outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack */
void Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::in_TestStory */ kcg_int in_TestStory,
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::in_currentPosition */ kcg_real in_currentPosition,
  outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _1_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _5_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _4_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _9_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _8_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _6_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _7_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _2_CurrentTrackMsg;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack::CurrentTrackMsg */ CompressedBaliseMessage_TM _3_CurrentTrackMsg;
  
  outC->IfBlock1_clock = in_TestStory == 1;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1 = in_currentPosition;
    /* 2 */
    Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios(
      outC->_L1_IfBlock1,
      &outC->_1_Context_2);
    kcg_copy_CompressedBaliseMessage_TM(
      &outC->_L4_IfBlock1,
      &outC->_1_Context_2.BM);
    kcg_copy_CompressedBaliseMessage_TM(
      &_1_CurrentTrackMsg,
      &outC->_L4_IfBlock1);
    kcg_copy_CompressedBaliseMessage_TM(
      &outC->CurrentTrackMsg,
      &_1_CurrentTrackMsg);
  }
  else {
    outC->_4_else_clock_IfBlock1 = in_TestStory == 2;
    /* ck_anon_activ */ if (outC->_4_else_clock_IfBlock1) {
      outC->_L2_IfBlock1 = in_currentPosition;
      /* 2 */
      Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios(
        outC->_L2_IfBlock1,
        &outC->Context_2);
      kcg_copy_CompressedBaliseMessage_TM(
        &outC->_L8_IfBlock1,
        &outC->Context_2.BM);
      kcg_copy_CompressedBaliseMessage_TM(
        &_3_CurrentTrackMsg,
        &outC->_L8_IfBlock1);
      kcg_copy_CompressedBaliseMessage_TM(
        &CurrentTrackMsg,
        &_3_CurrentTrackMsg);
    }
    else {
      outC->_3_else_clock_IfBlock1 = in_TestStory == 3;
      /* ck_anon_activ */ if (outC->_3_else_clock_IfBlock1) {
        kcg_copy_CompressedBaliseMessage_TM(
          &outC->_L3_IfBlock1,
          (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
        kcg_copy_CompressedBaliseMessage_TM(
          &_5_CurrentTrackMsg,
          &outC->_L3_IfBlock1);
        kcg_copy_CompressedBaliseMessage_TM(
          &_2_CurrentTrackMsg,
          &_5_CurrentTrackMsg);
      }
      else {
        outC->_2_else_clock_IfBlock1 = in_TestStory == 4;
        /* ck_anon_activ */ if (outC->_2_else_clock_IfBlock1) {
          kcg_copy_CompressedBaliseMessage_TM(
            &outC->_L35_IfBlock1,
            (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
          kcg_copy_CompressedBaliseMessage_TM(
            &_7_CurrentTrackMsg,
            &outC->_L35_IfBlock1);
          kcg_copy_CompressedBaliseMessage_TM(
            &_4_CurrentTrackMsg,
            &_7_CurrentTrackMsg);
        }
        else {
          outC->else_clock_IfBlock1 = in_TestStory == 5;
          /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
            kcg_copy_CompressedBaliseMessage_TM(
              &outC->_L6_IfBlock1,
              (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
            kcg_copy_CompressedBaliseMessage_TM(
              &_9_CurrentTrackMsg,
              &outC->_L6_IfBlock1);
            kcg_copy_CompressedBaliseMessage_TM(
              &_6_CurrentTrackMsg,
              &_9_CurrentTrackMsg);
          }
          else {
            kcg_copy_CompressedBaliseMessage_TM(
              &outC->_L36_IfBlock1,
              (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
            kcg_copy_CompressedBaliseMessage_TM(
              &_8_CurrentTrackMsg,
              &outC->_L36_IfBlock1);
            kcg_copy_CompressedBaliseMessage_TM(
              &_6_CurrentTrackMsg,
              &_8_CurrentTrackMsg);
          }
          kcg_copy_CompressedBaliseMessage_TM(
            &_4_CurrentTrackMsg,
            &_6_CurrentTrackMsg);
        }
        kcg_copy_CompressedBaliseMessage_TM(
          &_2_CurrentTrackMsg,
          &_4_CurrentTrackMsg);
      }
      kcg_copy_CompressedBaliseMessage_TM(
        &CurrentTrackMsg,
        &_2_CurrentTrackMsg);
    }
    kcg_copy_CompressedBaliseMessage_TM(
      &outC->CurrentTrackMsg,
      &CurrentTrackMsg);
  }
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L14, &outC->CurrentTrackMsg);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->out_compressedTrackMsg,
    &outC->_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

