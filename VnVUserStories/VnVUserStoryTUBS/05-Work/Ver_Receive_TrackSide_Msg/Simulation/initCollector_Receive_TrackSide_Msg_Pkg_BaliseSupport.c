/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void initCollector_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->_L12.valid = kcg_true;
  outC->_L12.checkResult = kcg_true;
  outC->_L12.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L12.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L12.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L12.telegramheader.m_mcount = 0;
  outC->_L12.telegramheader.nid_c = 0;
  outC->_L12.telegramheader.nid_bg = 0;
  outC->_L12.telegramheader.q_link = Q_LINK_Unlinked;
  for (i = 0; i < 30; i++) {
    outC->_L12.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L12.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[i].startAddress = 0;
    outC->_L12.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L12.packets.PacketData[i1] = 0;
  }
  outC->_L1 = kcg_true;
  outC->_L2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.odometerOfBaliseDetection.timestamp = 0;
  outC->_L2.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L2.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L2.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L2.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L2.odometerOfBaliseDetection.acceleration = 0;
  outC->_L2.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L3 = 0;
  outC->_L4 = N_TOTAL_1_balise_in_the_group;
  outC->_L5 = 0;
  outC->_L6.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.q_media = Q_MEDIA_Balise;
  outC->_L6.n_pig = N_PIG_I_am_the_1st;
  outC->_L6.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.m_dup = M_DUP_No_duplicates;
  outC->_L6.m_mcount = 0;
  outC->_L6.nid_c = 0;
  outC->_L6.nid_bg = 0;
  outC->_L6.q_link = Q_LINK_Unlinked;
  outC->_L7 = 0;
  outC->_L8 = 0;
  outC->_L9 = kcg_true;
  outC->_L10.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L10.odometerOfBaliseDetection.timestamp = 0;
  outC->_L10.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L10.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L10.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L10.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L10.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L10.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L10.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L10.odometerOfBaliseDetection.acceleration = 0;
  outC->_L10.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L10.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L10.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L11.badBaliseFlag = kcg_true;
  outC->_L11.BGMessageSent = kcg_true;
  outC->_L11.C_ID = 0;
  outC->_L11.BG_ID = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L11.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L11.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L11.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L11.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L11.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L11.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L11.collectedTelegrams = 0;
  outC->_L11.totalTelegrams = 0;
  outC->outCollector.badBaliseFlag = kcg_true;
  outC->outCollector.BGMessageSent = kcg_true;
  outC->outCollector.C_ID = 0;
  outC->outCollector.BG_ID = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outCollector.collectedTelegrams = 0;
  outC->outCollector.totalTelegrams = 0;
  /* 1 */
  convNTotal_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* 1 */
  convNTotal_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector */
void initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  outC->_L1 = kcg_true;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L2,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L12, newTelegram);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L6,
    &outC->_L12.telegramheader);
  outC->_L3 = outC->_L6.nid_bg;
  outC->_L4 = outC->_L6.n_total;
  /* 1 */
  convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    outC->_L4,
    &outC->Context_1);
  outC->_L5 = outC->Context_1.outTotal;
  outC->_L7 = 0;
  outC->_L8 = outC->_L6.nid_c;
  outC->_L9 = kcg_false;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L10,
    (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
  outC->_L11.badBaliseFlag = outC->_L9;
  outC->_L11.BGMessageSent = outC->_L1;
  outC->_L11.C_ID = outC->_L8;
  outC->_L11.BG_ID = outC->_L3;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L11.balisePosition,
    &outC->_L10);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L11.positionFirstContact,
    &outC->_L2);
  outC->_L11.collectedTelegrams = outC->_L7;
  outC->_L11.totalTelegrams = outC->_L5;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

