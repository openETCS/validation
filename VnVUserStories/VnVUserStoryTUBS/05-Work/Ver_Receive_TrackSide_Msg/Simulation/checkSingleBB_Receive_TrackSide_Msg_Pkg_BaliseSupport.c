/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void checkSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->_L23 = 0;
  outC->_L24 = 0;
  outC->_L25.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L25.odometerOfBaliseDetection.timestamp = 0;
  outC->_L25.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L25.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L25.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L25.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L25.odometerOfBaliseDetection.acceleration = 0;
  outC->_L25.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L26.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L26.odometerOfBaliseDetection.timestamp = 0;
  outC->_L26.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L26.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L26.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L26.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L26.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L26.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L26.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L26.odometerOfBaliseDetection.acceleration = 0;
  outC->_L26.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L26.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L26.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L27 = 0;
  outC->_L28 = 0;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.checkResult = kcg_true;
  outC->_L18.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L18.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L18.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L18.telegramheader.m_mcount = 0;
  outC->_L18.telegramheader.nid_c = 0;
  outC->_L18.telegramheader.nid_bg = 0;
  outC->_L18.telegramheader.q_link = Q_LINK_Unlinked;
  for (i = 0; i < 30; i++) {
    outC->_L18.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L18.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[i].startAddress = 0;
    outC->_L18.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L18.packets.PacketData[i1] = 0;
  }
  outC->_L17 = 0;
  outC->_L16 = kcg_true;
  outC->_L15 = 0;
  outC->_L14 = kcg_true;
  outC->_L3.badBaliseFlag = kcg_true;
  outC->_L3.BGMessageSent = kcg_true;
  outC->_L3.C_ID = 0;
  outC->_L3.BG_ID = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L3.collectedTelegrams = 0;
  outC->_L3.totalTelegrams = 0;
  outC->_L2.badBaliseFlag = kcg_true;
  outC->_L2.BGMessageSent = kcg_true;
  outC->_L2.C_ID = 0;
  outC->_L2.BG_ID = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.timestamp = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.acceleration = 0;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L2.collectedTelegrams = 0;
  outC->_L2.totalTelegrams = 0;
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
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB */
void checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inTelegram */ Telegram_T_BG_Types_Pkg *inTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_bool noname;
  
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L2, inCollector);
  outC->_L30 = outC->_L2.badBaliseFlag;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, inTelegram);
  outC->_L19 = outC->_L18.valid;
  outC->_L20 = !outC->_L19;
  outC->_L14 = outC->_L2.BGMessageSent;
  outC->_L21 = !outC->_L14;
  outC->_L15 = outC->_L2.collectedTelegrams;
  outC->_L17 = 0;
  outC->_L16 = outC->_L15 == outC->_L17;
  outC->_L22 = outC->_L20 & outC->_L21 & outC->_L16;
  outC->_L28 = outC->_L2.C_ID;
  outC->_L27 = outC->_L2.BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L26,
    &outC->_L2.balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L25,
    &outC->_L2.positionFirstContact);
  outC->_L24 = outC->_L2.collectedTelegrams;
  outC->_L23 = outC->_L2.totalTelegrams;
  outC->_L3.badBaliseFlag = outC->_L30;
  outC->_L3.BGMessageSent = outC->_L22;
  outC->_L3.C_ID = outC->_L28;
  outC->_L3.BG_ID = outC->_L27;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.balisePosition,
    &outC->_L26);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.positionFirstContact,
    &outC->_L25);
  outC->_L3.collectedTelegrams = outC->_L24;
  outC->_L3.totalTelegrams = outC->_L23;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L3);
  outC->_L29 = outC->_L2.BGMessageSent;
  noname = outC->_L29;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

