/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios.h"

#ifndef KCG_USER_DEFINED_INIT
void Story_TEST_VAL_SUB026_3000_init_UNISIG_Validation_Scenarios(
  outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios *outC)
{
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L50.Header.q_updown = 0;
  outC->_L50.Header.m_version = 0;
  outC->_L50.Header.q_media = 0;
  outC->_L50.Header.n_pig = 0;
  outC->_L50.Header.n_total = 0;
  outC->_L50.Header.m_dup = 0;
  outC->_L50.Header.m_mcount = 0;
  outC->_L50.Header.nid_c = 0;
  outC->_L50.Header.nid_bg = 0;
  outC->_L50.Header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->_L50.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L50.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L50.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L50.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L50.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L50.Messages.PacketData[i1] = 0;
  }
  outC->_L49.Header.q_updown = 0;
  outC->_L49.Header.m_version = 0;
  outC->_L49.Header.q_media = 0;
  outC->_L49.Header.n_pig = 0;
  outC->_L49.Header.n_total = 0;
  outC->_L49.Header.m_dup = 0;
  outC->_L49.Header.m_mcount = 0;
  outC->_L49.Header.nid_c = 0;
  outC->_L49.Header.nid_bg = 0;
  outC->_L49.Header.q_link = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L49.Messages.PacketHeaders[i2].nid_packet = 0;
    outC->_L49.Messages.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L49.Messages.PacketHeaders[i2].valid = kcg_true;
    outC->_L49.Messages.PacketHeaders[i2].startAddress = 0;
    outC->_L49.Messages.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L49.Messages.PacketData[i3] = 0;
  }
  outC->_L33 = 0.0;
  outC->_L36.Header.q_updown = 0;
  outC->_L36.Header.m_version = 0;
  outC->_L36.Header.q_media = 0;
  outC->_L36.Header.n_pig = 0;
  outC->_L36.Header.n_total = 0;
  outC->_L36.Header.m_dup = 0;
  outC->_L36.Header.m_mcount = 0;
  outC->_L36.Header.nid_c = 0;
  outC->_L36.Header.nid_bg = 0;
  outC->_L36.Header.q_link = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L36.Messages.PacketHeaders[i4].nid_packet = 0;
    outC->_L36.Messages.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->_L36.Messages.PacketHeaders[i4].valid = kcg_true;
    outC->_L36.Messages.PacketHeaders[i4].startAddress = 0;
    outC->_L36.Messages.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L36.Messages.PacketData[i5] = 0;
  }
  outC->BM.Header.q_updown = 0;
  outC->BM.Header.m_version = 0;
  outC->BM.Header.q_media = 0;
  outC->BM.Header.n_pig = 0;
  outC->BM.Header.n_total = 0;
  outC->BM.Header.m_dup = 0;
  outC->BM.Header.m_mcount = 0;
  outC->BM.Header.nid_c = 0;
  outC->BM.Header.nid_bg = 0;
  outC->BM.Header.q_link = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->BM.Messages.PacketHeaders[i6].nid_packet = 0;
    outC->BM.Messages.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->BM.Messages.PacketHeaders[i6].valid = kcg_true;
    outC->BM.Messages.PacketHeaders[i6].startAddress = 0;
    outC->BM.Messages.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->BM.Messages.PacketData[i7] = 0;
  }
  /* 2 */
  Test_BG002_200_8BT_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->Context_2);
  /* 1 */
  Test_BG001_100_Single_init_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Story_TEST_VAL_SUB026_3000_reset_UNISIG_Validation_Scenarios(
  outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios *outC)
{
  /* 2 */
  Test_BG002_200_8BT_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->Context_2);
  /* 1 */
  Test_BG001_100_Single_reset_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000 */
void Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios(
  /* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000::TrainPos */ kcg_real TrainPos,
  outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios *outC)
{
  outC->_L33 = TrainPos;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L36,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
  /* 1 */
  Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_L36,
    outC->_L33,
    (BaliseGroupData_TM *)
      &test_BG001_100_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L49,
    &outC->Context_1.BG_message_out);
  /* 2 */
  Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises(
    &outC->_L49,
    outC->_L33,
    (BaliseGroupData_TM *)
      &test_BG002_200_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises,
    &outC->Context_2);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L50,
    &outC->Context_2.BG_message_out);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BM, &outC->_L50);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

