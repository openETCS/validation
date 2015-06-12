/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void MergAllPackets_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  /* 1 */
  Merg2PacketsListArray_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->_2_Context_1);
  /* 1 */
  FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->_1_Context_1);
  /* 1 */
  Merg2MetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_1);
  /* 3 */ N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_3);
  /* 4 */ N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_4);
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets */
void MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegramACC */Telegram_T_BG_Types_Pkg *telegramACC,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram */Telegram_T_BG_Types_Pkg *telegram,
  outC_MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg _1_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg _5_telegram_out;
  kcg_int noname;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg _4_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg _2_telegram_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets::telegram_out */ Telegram_T_BG_Types_Pkg _3_telegram_out;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L73, telegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L71, telegramACC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L70,
    &outC->_L71.packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L69,
    &outC->_L70.PacketData);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->packetlist,
    &outC->_L69);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L72, &outC->_L70.PacketHeaders);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->metadata, &outC->_L72);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L68, telegramACC);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L62,
    &outC->_L68.telegramheader);
  outC->_L67 = outC->_L62.m_dup;
  outC->_L59 = outC->_L62.n_pig;
  /* 4 */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(outC->_L59, &outC->Context_4);
  outC->_L58 = outC->Context_4.n_pig2int;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L60, telegram);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L63,
    &outC->_L60.telegramheader);
  outC->_L64 = outC->_L63.n_pig;
  /* 3 */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(outC->_L64, &outC->Context_3);
  outC->_L61 = outC->Context_3.n_pig2int;
  outC->_L66 = outC->_L58 - outC->_L61;
  outC->mDup1 = outC->_L67;
  outC->_L65 = outC->_L63.m_dup;
  outC->diff = outC->_L66;
  outC->mDup2 = outC->_L65;
  outC->_L53 = outC->mDup1;
  outC->_L41 = _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L51 = outC->_L53 == outC->_L41;
  outC->_L43 = outC->mDup2;
  outC->_L47 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L44 = outC->_L43 == outC->_L47;
  outC->_L49 = outC->_L51 & outC->_L44;
  outC->nominal = outC->_L49;
  outC->_L10 = outC->_L73.valid;
  outC->go_on = outC->_L10;
  outC->IfBlock1_clock = (outC->diff == - 1) & outC->nominal & outC->go_on;
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1_IfBlock1, telegramACC);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L4_IfBlock1,
      &outC->_L1_IfBlock1.packets.PacketData);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L2_IfBlock1, telegram);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L3_IfBlock1, &outC->_L2_IfBlock1);
    if (kcg_true) {
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &outC->_L3_IfBlock1.packets.PacketData,
        &outC->_L4_IfBlock1);
    }
    kcg_copy_Telegram_T_BG_Types_Pkg(&_1_telegram_out, &outC->_L3_IfBlock1);
  }
  outC->_L45 = outC->mDup1;
  outC->_L42 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L50 = outC->_L45 == outC->_L42;
  outC->_L52 = outC->mDup2;
  outC->_L46 = _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L48 = outC->_L52 == outC->_L46;
  outC->_L54 = outC->_L50 & outC->_L48;
  outC->revers = outC->_L54;
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegram_out, &_1_telegram_out);
  }
  else {
    outC->_3_else_clock_IfBlock1 = (outC->diff == 1) & outC->revers &
      outC->go_on;
    if (outC->_3_else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L5_IfBlock1, telegram);
      kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L46_IfBlock1, telegramACC);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &outC->_L24_IfBlock1,
        &outC->_L46_IfBlock1.packets.PacketData);
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L35_IfBlock1,
        &outC->_L5_IfBlock1);
      if (kcg_true) {
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L35_IfBlock1.packets.PacketData,
          &outC->_L24_IfBlock1);
      }
      kcg_copy_Telegram_T_BG_Types_Pkg(&_3_telegram_out, &outC->_L35_IfBlock1);
      kcg_copy_Telegram_T_BG_Types_Pkg(&telegram_out, &_3_telegram_out);
    }
    else {
      outC->else_clock_IfBlock1 = outC->go_on;
      if (outC->else_clock_IfBlock1) {
        kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18_IfBlock1, telegram);
        kcg_copy_Metadata_T_Common_Types_Pkg(
          &outC->_L8_IfBlock1,
          &outC->metadata);
        kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L47_IfBlock1, telegram);
        /* 1 */
        Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &outC->_L8_IfBlock1,
          &outC->_L47_IfBlock1,
          &outC->Context_1);
        kcg_copy_Metadata_T_Common_Types_Pkg(
          &outC->_L29_IfBlock1,
          &outC->Context_1.mergedMetaData);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L19_IfBlock1,
          &outC->_L18_IfBlock1);
        if (kcg_true) {
          kcg_copy_Metadata_T_Common_Types_Pkg(
            &outC->_L19_IfBlock1.packets.PacketHeaders,
            &outC->_L29_IfBlock1);
        }
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L9_IfBlock1,
          &outC->packetlist);
        kcg_copy_Metadata_T_Common_Types_Pkg(
          &outC->_L10_IfBlock1,
          &outC->metadata);
        /* 1 */
        FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &outC->_L10_IfBlock1,
          &outC->_1_Context_1);
        outC->_L11_IfBlock1 = outC->_1_Context_1.index;
        outC->_L12_IfBlock1 = outC->_1_Context_1.endAddress;
        outC->_L14_IfBlock1 = 1;
        outC->_L13_IfBlock1 = outC->_L12_IfBlock1 + outC->_L14_IfBlock1;
        for (i = 0; i < 500; i++) {
          outC->_L17_IfBlock1[i] = outC->_L13_IfBlock1;
        }
        kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L15_IfBlock1, telegram);
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L16_IfBlock1,
          &outC->_L15_IfBlock1.packets.PacketData);
        /* 1 */
        Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
          &outC->_L9_IfBlock1,
          &outC->_L17_IfBlock1,
          &outC->_L16_IfBlock1,
          &outC->_2_Context_1);
        kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
          &outC->_L38_IfBlock1,
          &outC->_2_Context_1.mergPackets);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L20_IfBlock1,
          &outC->_L19_IfBlock1);
        if (kcg_true) {
          kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
            &outC->_L20_IfBlock1.packets.PacketData,
            &outC->_L38_IfBlock1);
        }
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &_5_telegram_out,
          &outC->_L20_IfBlock1);
        noname = outC->_L11_IfBlock1;
        kcg_copy_Telegram_T_BG_Types_Pkg(&_2_telegram_out, &_5_telegram_out);
      }
      else {
        kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L110_IfBlock1, telegramACC);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &_4_telegram_out,
          &outC->_L110_IfBlock1);
        kcg_copy_Telegram_T_BG_Types_Pkg(&_2_telegram_out, &_4_telegram_out);
      }
      kcg_copy_Telegram_T_BG_Types_Pkg(&telegram_out, &_2_telegram_out);
    }
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegram_out, &telegram_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

