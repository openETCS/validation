/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimingChecker.h"

void TimingChecker_reset(outC_TimingChecker *outC)
{
  outC->init = kcg_true;
}

/* TimingChecker */
void TimingChecker(
  /* TimingChecker::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* TimingChecker::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* TimingChecker::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* TimingChecker::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* TimingChecker::messageTimestamp */T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker *outC)
{
  /* TimingChecker::tNvContactError */ kcg_bool _5_tNvContactError;
  /* TimingChecker::sequenceError */ kcg_bool _4_sequenceError;
  /* TimingChecker::otherTimingError */ kcg_bool _3_otherTimingError;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN _2_lastKnownTTrain;
  /* TimingChecker::ignoreTimestamp */ kcg_bool _1_ignoreTimestamp;
  /* TimingChecker::tNvContactError */ kcg_bool tNvContactError;
  /* TimingChecker::sequenceError */ kcg_bool sequenceError;
  /* TimingChecker::otherTimingError */ kcg_bool otherTimingError;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN lastKnownTTrain;
  /* TimingChecker::ignoreTimestamp */ kcg_bool ignoreTimestamp;
  /* TimingChecker::tNvContactError */ kcg_bool _25_tNvContactError;
  /* TimingChecker::sequenceError */ kcg_bool _24_sequenceError;
  /* TimingChecker::otherTimingError */ kcg_bool _23_otherTimingError;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN _22_lastKnownTTrain;
  /* TimingChecker::ignoreTimestamp */ kcg_bool _21_ignoreTimestamp;
  /* TimingChecker::tNvContactError */ kcg_bool _20_tNvContactError;
  /* TimingChecker::sequenceError */ kcg_bool _19_sequenceError;
  /* TimingChecker::otherTimingError */ kcg_bool _18_otherTimingError;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN _17_lastKnownTTrain;
  /* TimingChecker::ignoreTimestamp */ kcg_bool _16_ignoreTimestamp;
  /* TimingChecker::tNvContactError */ kcg_bool _6_tNvContactError;
  /* TimingChecker::sequenceError */ kcg_bool _7_sequenceError;
  /* TimingChecker::otherTimingError */ kcg_bool _8_otherTimingError;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN _9_lastKnownTTrain;
  /* TimingChecker::ignoreTimestamp */ kcg_bool _10_ignoreTimestamp;
  /* TimingChecker::tNvContactError */ kcg_bool _11_tNvContactError;
  /* TimingChecker::sequenceError */ kcg_bool _12_sequenceError;
  /* TimingChecker::otherTimingError */ kcg_bool _13_otherTimingError;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN _14_lastKnownTTrain;
  /* TimingChecker::ignoreTimestamp */ kcg_bool _15_ignoreTimestamp;
  /* TimingChecker::ignoreTimestamp */ kcg_bool last_ignoreTimestamp;
  /* TimingChecker::lastKnownTTrain */ T_TRAIN last_lastKnownTTrain;
  
  if (outC->init) {
    last_ignoreTimestamp = kcg_false;
  }
  else {
    last_ignoreTimestamp = outC->ignoreTimestamp;
  }
  if (outC->init) {
    last_lastKnownTTrain = cTTrainUnknown;
  }
  else {
    last_lastKnownTTrain = outC->lastKnownTTrain;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L30, rtmMessage);
  outC->_L31 = outC->_L30.Radio_Common_Header.t_train;
  outC->_L34 = cTTrainUnknown;
  outC->_L32 = outC->_L31 != outC->_L34;
  outC->TimestampKnown = outC->_L32;
  outC->IfBlock1_clock = outC->TimestampKnown & (last_lastKnownTTrain !=
      cTTrainUnknown);
  if (outC->IfBlock1_clock) {
    outC->_L33_IfBlock1 = kcg_false;
    _3_otherTimingError = outC->_L33_IfBlock1;
    outC->_L26_IfBlock1 = last_ignoreTimestamp;
    outC->_L25_IfBlock1 = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L10_IfBlock1,
      rtmMessage);
    outC->_L5_IfBlock1 = outC->_L10_IfBlock1.Radio_Common_Header.t_train;
    outC->_L3_IfBlock1 = (kcg_int) outC->_L5_IfBlock1;
    outC->_L22_IfBlock1 = last_lastKnownTTrain;
    outC->_L20_IfBlock1 = (kcg_int) outC->_L22_IfBlock1;
    outC->_L7_IfBlock1 = outC->_L3_IfBlock1 > outC->_L20_IfBlock1;
    if (outC->_L26_IfBlock1) {
      outC->_L24_IfBlock1 = outC->_L25_IfBlock1;
    }
    else {
      outC->_L24_IfBlock1 = outC->_L7_IfBlock1;
    }
    outC->_L32_IfBlock1 = !outC->_L24_IfBlock1;
    _4_sequenceError = outC->_L32_IfBlock1;
    outC->_L14_IfBlock1 = messageTimestamp;
    outC->_L4_IfBlock1 = (kcg_int) outC->_L14_IfBlock1;
    outC->_L11_IfBlock1 = tNvContact;
    outC->_L13_IfBlock1 = lastRelevantEventTimestamp;
    outC->_L6_IfBlock1 = outC->_L11_IfBlock1 + outC->_L13_IfBlock1;
    outC->_L9_IfBlock1 = outC->_L4_IfBlock1 <= outC->_L6_IfBlock1;
    outC->_L31_IfBlock1 = !outC->_L9_IfBlock1;
    _5_tNvContactError = outC->_L31_IfBlock1;
    outC->_L28_IfBlock1 = last_ignoreTimestamp;
    outC->_L29_IfBlock1 = kcg_false;
    outC->_L30_IfBlock1 = last_ignoreTimestamp;
    if (outC->_L28_IfBlock1) {
      outC->_L27_IfBlock1 = outC->_L29_IfBlock1;
    }
    else {
      outC->_L27_IfBlock1 = outC->_L30_IfBlock1;
    }
    _1_ignoreTimestamp = outC->_L27_IfBlock1;
    outC->_L12_IfBlock1 = outC->_L9_IfBlock1 & outC->_L24_IfBlock1;
    outC->_L23_IfBlock1 = last_lastKnownTTrain;
    if (outC->_L12_IfBlock1) {
      outC->_L17_IfBlock1 = outC->_L5_IfBlock1;
    }
    else {
      outC->_L17_IfBlock1 = outC->_L23_IfBlock1;
    }
    _2_lastKnownTTrain = outC->_L17_IfBlock1;
    outC->tNvContactError = _5_tNvContactError;
    outC->sequenceError = _4_sequenceError;
    outC->otherTimingError = _3_otherTimingError;
    outC->lastKnownTTrain = _2_lastKnownTTrain;
    outC->ignoreTimestamp = _1_ignoreTimestamp;
  }
  else {
    outC->else_clock_IfBlock1 = outC->TimestampKnown & (last_lastKnownTTrain ==
        cTTrainUnknown);
    if (outC->else_clock_IfBlock1) {
      _15_ignoreTimestamp = last_ignoreTimestamp;
      _14_lastKnownTTrain = last_lastKnownTTrain;
      outC->_L2_IfBlock1 = kcg_true;
      _13_otherTimingError = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = kcg_false;
      _12_sequenceError = outC->_L1_IfBlock1;
      _11_tNvContactError = outC->_L1_IfBlock1;
      ignoreTimestamp = _15_ignoreTimestamp;
      lastKnownTTrain = _14_lastKnownTTrain;
      otherTimingError = _13_otherTimingError;
      sequenceError = _12_sequenceError;
      tNvContactError = _11_tNvContactError;
    }
    else {
      outC->_L15_IfBlock1 = connectionStatus;
      outC->_L53_IfBlock1 = cRadioSessionConnecting;
      outC->_L34_IfBlock1 = outC->_L15_IfBlock1 == outC->_L53_IfBlock1;
      outC->connectingStatusConnecting_IfBlock1 = outC->_L34_IfBlock1;
      outC->IfBlock2_clock_IfBlock1 = outC->connectingStatusConnecting_IfBlock1;
      if (outC->IfBlock2_clock_IfBlock1) {
        outC->_L5_IfBlock1_IfBlock2 = kcg_false;
        _23_otherTimingError = outC->_L5_IfBlock1_IfBlock2;
        _24_sequenceError = outC->_L5_IfBlock1_IfBlock2;
        _25_tNvContactError = outC->_L5_IfBlock1_IfBlock2;
        outC->_L3_IfBlock1_IfBlock2 = 0.0;
        _22_lastKnownTTrain = outC->_L3_IfBlock1_IfBlock2;
        outC->_L2_IfBlock1_IfBlock2 = kcg_true;
        _21_ignoreTimestamp = outC->_L2_IfBlock1_IfBlock2;
        _6_tNvContactError = _25_tNvContactError;
        _7_sequenceError = _24_sequenceError;
        _8_otherTimingError = _23_otherTimingError;
        _9_lastKnownTTrain = _22_lastKnownTTrain;
        _10_ignoreTimestamp = _21_ignoreTimestamp;
      }
      else {
        _17_lastKnownTTrain = last_lastKnownTTrain;
        outC->_L31_IfBlock1_IfBlock2 = kcg_false;
        _18_otherTimingError = outC->_L31_IfBlock1_IfBlock2;
        outC->_L1_IfBlock1_IfBlock2 = kcg_true;
        _19_sequenceError = outC->_L1_IfBlock1_IfBlock2;
        _20_tNvContactError = outC->_L31_IfBlock1_IfBlock2;
        outC->_L22_IfBlock1_IfBlock2 = kcg_false;
        _16_ignoreTimestamp = outC->_L22_IfBlock1_IfBlock2;
        _6_tNvContactError = _20_tNvContactError;
        _7_sequenceError = _19_sequenceError;
        _8_otherTimingError = _18_otherTimingError;
        _9_lastKnownTTrain = _17_lastKnownTTrain;
        _10_ignoreTimestamp = _16_ignoreTimestamp;
      }
      ignoreTimestamp = _10_ignoreTimestamp;
      lastKnownTTrain = _9_lastKnownTTrain;
      otherTimingError = _8_otherTimingError;
      sequenceError = _7_sequenceError;
      tNvContactError = _6_tNvContactError;
    }
    outC->tNvContactError = tNvContactError;
    outC->sequenceError = sequenceError;
    outC->otherTimingError = otherTimingError;
    outC->lastKnownTTrain = lastKnownTTrain;
    outC->ignoreTimestamp = ignoreTimestamp;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TimingChecker.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

