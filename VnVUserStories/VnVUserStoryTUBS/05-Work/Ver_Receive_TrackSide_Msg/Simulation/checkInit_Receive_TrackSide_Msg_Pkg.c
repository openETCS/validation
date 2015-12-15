/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkInit_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void checkInit_init_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->_L8.badBaliseFlag = kcg_true;
  outC->_L8.BGMessageSent = kcg_true;
  outC->_L8.C_ID = 0;
  outC->_L8.BG_ID = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L8.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L8.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L8.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L8.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L8.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L8.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L8.collectedTelegrams = 0;
  outC->_L8.totalTelegrams = 0;
  outC->_L6 = kcg_true;
  outC->_L4 = 0;
  outC->_L2 = 0;
  outC->isDefined = kcg_true;
  outC->_L19_IfBlock1.valid = kcg_true;
  outC->_L19_IfBlock1.checkResult = kcg_true;
  outC->_L19_IfBlock1.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19_IfBlock1.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_IfBlock1.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L19_IfBlock1.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L19_IfBlock1.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19_IfBlock1.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L19_IfBlock1.telegramheader.m_mcount = 0;
  outC->_L19_IfBlock1.telegramheader.nid_c = 0;
  outC->_L19_IfBlock1.telegramheader.nid_bg = 0;
  outC->_L19_IfBlock1.telegramheader.q_link = Q_LINK_Unlinked;
  for (i = 0; i < 30; i++) {
    outC->_L19_IfBlock1.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L19_IfBlock1.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L19_IfBlock1.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L19_IfBlock1.packets.PacketHeaders[i].startAddress = 0;
    outC->_L19_IfBlock1.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L19_IfBlock1.packets.PacketData[i1] = 0;
  }
  outC->_L20_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L20_IfBlock1.BGMessageSent = kcg_true;
  outC->_L20_IfBlock1.C_ID = 0;
  outC->_L20_IfBlock1.BG_ID = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L20_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L20_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L20_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L20_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L20_IfBlock1.collectedTelegrams = 0;
  outC->_L20_IfBlock1.totalTelegrams = 0;
  outC->_L1_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L1_IfBlock1.BGMessageSent = kcg_true;
  outC->_L1_IfBlock1.C_ID = 0;
  outC->_L1_IfBlock1.BG_ID = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1_IfBlock1.collectedTelegrams = 0;
  outC->_L1_IfBlock1.totalTelegrams = 0;
  outC->IfBlock1_clock = kcg_true;
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
  initCollector_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkInit_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  initCollector_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::checkInit */
void checkInit_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkInit::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkInit::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkInit_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _1_outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkInit::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L8, inCollector);
  outC->_L2 = outC->_L8.totalTelegrams;
  outC->_L4 = 0;
  outC->_L6 = outC->_L2 > outC->_L4;
  outC->isDefined = outC->_L6;
  outC->IfBlock1_clock = outC->isDefined;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L1_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_1_outCollector,
      &outC->_L1_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_1_outCollector);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L19_IfBlock1, newTelegram);
    /* 1 */
    initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L19_IfBlock1,
      &outC->Context_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L20_IfBlock1,
      &outC->Context_1.outCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &outC->_L20_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkInit_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

