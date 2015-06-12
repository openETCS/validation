/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  updateCollectorSendMessage_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->_2_Context_1);
  /* 1 */ manageTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
  /* 3 */ checkOdometry_reset_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_3);
  /* 3 */
  manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_3);
}

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */ Telegram_T_BG_Types_Pkg _4_telegramToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */ kcg_bool _3_telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */ centerOfBalisePosition_T_BG_Types_Pkg _2_positionToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */ kcg_bool _1_needTelegramStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */ Telegram_T_BG_Types_Pkg telegramToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */ kcg_bool telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */ centerOfBalisePosition_T_BG_Types_Pkg positionToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */ kcg_bool needTelegramStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _7_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _6_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */ BG_Message_T_BG_Types_Pkg _5_testBG;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */ BG_Message_T_BG_Types_Pkg testBG;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _8_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _9_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _10_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _11_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool _16_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool _15_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg _14_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _13_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool _12_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool _17_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _18_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg _19_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool _20_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool _21_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */ kcg_bool _22_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg _23_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg _24_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */ kcg_bool _25_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool _26_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg last_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeAdditionalTelegram */ TelegramStore_T_Receive_TrackSide_Msg_Pkg last_storeAdditionalTelegram;
  
  if (outC->init) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      &outC->storeBGTelegramArray);
  }
  if (outC->init) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      &outC->storeCollector);
  }
  if (outC->init) {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &last_storeAdditionalTelegram,
      (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &last_storeAdditionalTelegram,
      &outC->storeAdditionalTelegram);
  }
  outC->IfBlock4_clock = reset;
  if (outC->IfBlock4_clock) {
    outC->_L1_IfBlock4 = kcg_false;
    _3_telegramPresent = outC->_L1_IfBlock4;
    outC->telegramPresent = _3_telegramPresent;
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6_IfBlock4, inDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L7_IfBlock4,
      incenterOfBalisePosition);
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L5_IfBlock4,
      &last_storeAdditionalTelegram);
    outC->_L9_IfBlock4 = inTelegramPresent;
    /* 3 */
    manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
      &outC->_L6_IfBlock4,
      &outC->_L7_IfBlock4,
      &outC->_L5_IfBlock4,
      outC->_L9_IfBlock4,
      &outC->Context_3);
    outC->_L10_IfBlock4 = outC->Context_3.outputPresent;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L11_IfBlock4,
      &outC->Context_3.outDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L12_IfBlock4,
      &outC->Context_3.outcenterOfBalisePosition);
    outC->_L13_IfBlock4 = outC->Context_3.outNeedStore;
    telegramPresent = outC->_L10_IfBlock4;
    outC->telegramPresent = telegramPresent;
  }
  outC->IfBlock1_clock = outC->telegramPresent;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->IfBlock3_clock_IfBlock1 = !reset;
    if (outC->IfBlock3_clock_IfBlock1) {
      kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
        &outC->_L5_IfBlock1_IfBlock3,
        inActualOdometry);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L4_IfBlock1_IfBlock3,
        &last_storeCollector);
      /* 3 */
      checkOdometry_Receive_TrackSide_Msg_Pkg(
        &outC->_L5_IfBlock1_IfBlock3,
        &outC->_L4_IfBlock1_IfBlock3,
        &outC->_1_Context_3);
      outC->_L6_IfBlock1_IfBlock3 = outC->_1_Context_3.outMessageComplete;
      outC->_L7_IfBlock1_IfBlock3 = outC->_1_Context_3.outBGIsChangedEarly;
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L9_IfBlock1_IfBlock3,
        &outC->_1_Context_3.outCollector);
      _26_BGisComplete = outC->_L6_IfBlock1_IfBlock3;
      BGisComplete = _26_BGisComplete;
    }
    else {
      outC->_L2_IfBlock1_IfBlock3 = kcg_false;
      _21_BGisComplete = outC->_L2_IfBlock1_IfBlock3;
      BGisComplete = _21_BGisComplete;
    }
  }
  if (outC->IfBlock4_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &_4_telegramToUse,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegramToUse, &_4_telegramToUse);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&telegramToUse, &outC->_L11_IfBlock4);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->telegramToUse, &telegramToUse);
  }
  if (outC->IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L10_IfBlock1,
      &outC->telegramToUse);
  }
  if (outC->IfBlock4_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_2_positionToUse,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->positionToUse,
      &_2_positionToUse);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &positionToUse,
      &outC->_L12_IfBlock4);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->positionToUse,
      &positionToUse);
  }
  if (outC->IfBlock1_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L11_IfBlock1,
      &outC->positionToUse);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L14_IfBlock1,
      &last_storeCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L20_IfBlock1,
      &last_storeBGTelegramArray);
    /* 1 */
    manageTelegram_Receive_TrackSide_Msg_Pkg(
      &outC->_L10_IfBlock1,
      &outC->_L11_IfBlock1,
      &outC->_L14_IfBlock1,
      &outC->_L20_IfBlock1,
      &outC->Context_1);
    outC->_L4_IfBlock1 = outC->Context_1.outBGisComplete;
    outC->_L5_IfBlock1 = outC->Context_1.outBGisChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L12_IfBlock1,
      &outC->Context_1.outCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L18_IfBlock1,
      &outC->Context_1.outTelegramArray);
    outC->_L22_IfBlock1 = outC->Context_1.outStoresChanged;
    _16_BGisComplete = outC->_L4_IfBlock1;
    outC->BGisComplete = _16_BGisComplete;
  }
  else {
    outC->BGisComplete = BGisComplete;
  }
  outC->IfBlock2_clock = outC->BGisComplete;
  if (outC->IfBlock2_clock) {
    outC->_L14_IfBlock2 = kcg_true;
  }
  else {
    outC->_L1_IfBlock2 = kcg_false;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L12_IfBlock2,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    outC->_L6_IfBlock2 = 0;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L11_IfBlock2,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    outC->_L3_IfBlock2.present = outC->_L1_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L3_IfBlock2.Telegrams,
      &outC->_L12_IfBlock2);
    outC->_L3_IfBlock2.numberBalises = outC->_L6_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L3_IfBlock2.centerOfBalisePosition,
      &outC->_L11_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&testBG, &outC->_L3_IfBlock2);
  }
  if (outC->IfBlock1_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_13_tempBGTelegramArray,
      &outC->_L18_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->tempBGTelegramArray,
      &_13_tempBGTelegramArray);
  }
  else {
    if (outC->IfBlock3_clock_IfBlock1) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L11_IfBlock1_IfBlock3,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_23_tempBGTelegramArray,
        &outC->_L11_IfBlock1_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &_23_tempBGTelegramArray);
    }
    else {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_18_tempBGTelegramArray,
        (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &_18_tempBGTelegramArray);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->tempBGTelegramArray,
      &tempBGTelegramArray);
  }
  if (outC->IfBlock2_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L29_IfBlock2,
      &outC->tempBGTelegramArray);
  }
  if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_14_tempCollectorStore,
      &outC->_L12_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->tempCollectorStore,
      &_14_tempCollectorStore);
  }
  else {
    if (outC->IfBlock3_clock_IfBlock1) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_24_tempCollectorStore,
        &outC->_L9_IfBlock1_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        &_24_tempCollectorStore);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_19_tempCollectorStore,
        (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        &_19_tempCollectorStore);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->tempCollectorStore,
      &tempCollectorStore);
  }
  if (outC->IfBlock2_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L23_IfBlock2,
      &outC->tempCollectorStore);
    /* 1 */
    updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_L23_IfBlock2,
      &outC->_2_Context_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L45_IfBlock2,
      &outC->_2_Context_1.outCollector);
    outC->_L46_IfBlock2 = outC->_L45_IfBlock2.collectedTelegrams;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L48_IfBlock2,
      &outC->_L45_IfBlock2.balisePosition);
    outC->_L7_IfBlock2.present = outC->_L14_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L7_IfBlock2.Telegrams,
      &outC->_L29_IfBlock2);
    outC->_L7_IfBlock2.numberBalises = outC->_L46_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L7_IfBlock2.centerOfBalisePosition,
      &outC->_L48_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&_5_testBG, &outC->_L7_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->testBG, &_5_testBG);
  }
  else {
    kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->testBG, &testBG);
  }
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L48, &outC->testBG);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->outBGMessage, &outC->_L48);
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L47,
    (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  outC->_L46 = inTelegramPresent;
  if (outC->IfBlock4_clock) {
    _1_needTelegramStore = kcg_false;
    outC->needTelegramStore = _1_needTelegramStore;
  }
  else {
    needTelegramStore = outC->_L13_IfBlock4;
    outC->needTelegramStore = needTelegramStore;
  }
  outC->_L31 = outC->needTelegramStore;
  if (outC->IfBlock1_clock) {
    _15_BGisChangedEarly = outC->_L5_IfBlock1;
    outC->BGisChangedEarly = _15_BGisChangedEarly;
  }
  else {
    if (outC->IfBlock3_clock_IfBlock1) {
      _25_BGisChangedEarly = outC->_L7_IfBlock1_IfBlock3;
      BGisChangedEarly = _25_BGisChangedEarly;
    }
    else {
      _20_BGisChangedEarly = kcg_false;
      BGisChangedEarly = _20_BGisChangedEarly;
    }
    outC->BGisChangedEarly = BGisChangedEarly;
  }
  outC->_L44 = outC->BGisChangedEarly;
  outC->_L45 = outC->_L31 | outC->_L44;
  outC->_L42 = reset;
  outC->_L43 = !outC->_L42;
  outC->_L34 = outC->_L46 & outC->_L45 & outC->_L43;
  outC->_L25 = kcg_true;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L27, inDecodedTelegram);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L23,
    incenterOfBalisePosition);
  outC->_L30.valid = outC->_L25;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L30.telegram, &outC->_L27);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L30.position,
    &outC->_L23);
  if (outC->_L34) {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L26,
      &outC->_L30);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L26,
      &outC->_L47);
  }
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeAdditionalTelegram,
    &outC->_L26);
  if (outC->IfBlock2_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L41_IfBlock2,
      &outC->tempBGTelegramArray);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_6_storeBGTelegramArray,
      &outC->_L41_IfBlock2);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_7_storeCollector,
      &outC->_L45_IfBlock2);
  }
  if (outC->IfBlock1_clock) {
    _12_storeIsChanged = outC->_L22_IfBlock1;
    outC->storeIsChanged = _12_storeIsChanged;
  }
  else {
    if (outC->IfBlock3_clock_IfBlock1) {
      _22_storeIsChanged = kcg_false;
      storeIsChanged = _22_storeIsChanged;
    }
    else {
      outC->_L1_IfBlock1_IfBlock3 = kcg_true;
      _17_storeIsChanged = outC->_L1_IfBlock1_IfBlock3;
      storeIsChanged = _17_storeIsChanged;
    }
    outC->storeIsChanged = storeIsChanged;
  }
  if (outC->IfBlock2_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &_7_storeCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &_6_storeBGTelegramArray);
  }
  else {
    outC->IfBlock3_clock_IfBlock2 = outC->storeIsChanged;
    if (outC->IfBlock3_clock_IfBlock2) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L2_IfBlock2_IfBlock3,
        &outC->tempBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_10_storeBGTelegramArray,
        &outC->_L2_IfBlock2_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L1_IfBlock2_IfBlock3,
        &outC->tempCollectorStore);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_11_storeCollector,
        &outC->_L1_IfBlock2_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &storeCollector,
        &_11_storeCollector);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &storeBGTelegramArray,
        &_10_storeBGTelegramArray);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->_L23_IfBlock2_IfBlock3,
        &last_storeCollector);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_9_storeCollector,
        &outC->_L23_IfBlock2_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->_L14_IfBlock2_IfBlock3,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_8_storeBGTelegramArray,
        &outC->_L14_IfBlock2_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &storeCollector,
        &_9_storeCollector);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &storeBGTelegramArray,
        &_8_storeBGTelegramArray);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &storeCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &storeBGTelegramArray);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

