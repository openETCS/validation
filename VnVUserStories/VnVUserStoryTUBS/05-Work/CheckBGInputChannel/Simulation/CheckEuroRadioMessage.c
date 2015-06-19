/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckEuroRadioMessage.h"

void CheckEuroRadioMessage_reset(outC_CheckEuroRadioMessage *outC)
{
  /* 7 */ ConvertTrackSideMessageTo_reset(&outC->Context_7);
  /* 6 */ BuildOutput_reset(&outC->_4_Context_6);
  /* 6 */ CheckMandatoryVariablesAndMA_reset(&outC->_3_Context_6);
  /* 6 */ CheckAllowedPacketsRadio_reset(&outC->_2_Context_6);
  /* 6 */ TimingChecker_reset(&outC->_1_Context_6);
  /* 6 */ ConvertTrackSideMessageTo_reset(&outC->Context_6);
}

/* CheckEuroRadioMessage */
void CheckEuroRadioMessage(
  /* CheckEuroRadioMessage::rtmMessage */TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroRadioMessage::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroRadioMessage::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroRadioMessage::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* CheckEuroRadioMessage::activateCheck */kcg_bool activateCheck,
  outC_CheckEuroRadioMessage *outC)
{
  /* CheckEuroRadioMessage::checkedMessage */ ReceivedMessage_T_Common_Types_Pkg _5_checkedMessage;
  /* CheckEuroRadioMessage::radioSequenceError */ kcg_bool _4_radioSequenceError;
  /* CheckEuroRadioMessage::tNvContactError */ kcg_bool _3_tNvContactError;
  /* CheckEuroRadioMessage::otherTimingError */ kcg_bool _2_otherTimingError;
  /* CheckEuroRadioMessage::radioMessageConsistencyError */ kcg_bool _1_radioMessageConsistencyError;
  /* CheckEuroRadioMessage::checkedMessage */ ReceivedMessage_T_Common_Types_Pkg checkedMessage;
  /* CheckEuroRadioMessage::radioSequenceError */ kcg_bool radioSequenceError;
  /* CheckEuroRadioMessage::tNvContactError */ kcg_bool tNvContactError;
  /* CheckEuroRadioMessage::otherTimingError */ kcg_bool otherTimingError;
  /* CheckEuroRadioMessage::radioMessageConsistencyError */ kcg_bool radioMessageConsistencyError;
  
  outC->IfBlock1_clock = activateCheck;
  if (outC->IfBlock1_clock) {
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L99_IfBlock1,
      rtmMessage);
    outC->_L101_IfBlock1 = outC->_L99_IfBlock1.valid;
    outC->_L75_IfBlock1 = tNvContact;
    outC->_L82_IfBlock1 = lastRelevantEventTimestamp;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L77_IfBlock1,
      rtmMessage);
    /* 6 */ ConvertTrackSideMessageTo(&outC->_L77_IfBlock1, &outC->Context_6);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L76_IfBlock1,
      &outC->Context_6.ReceivedMessage);
    outC->_L67_IfBlock1 = connectionStatus;
    outC->_L84_IfBlock1 = outC->_L77_IfBlock1.systemTime;
    /* 6 */
    TimingChecker(
      outC->_L75_IfBlock1,
      outC->_L82_IfBlock1,
      &outC->_L76_IfBlock1,
      outC->_L67_IfBlock1,
      outC->_L84_IfBlock1,
      &outC->_1_Context_6);
    outC->_L85_IfBlock1 = outC->_1_Context_6.tNvContactError;
    outC->_L86_IfBlock1 = outC->_1_Context_6.sequenceError;
    outC->_L95_IfBlock1 = outC->_1_Context_6.otherTimingError;
    outC->_L100_IfBlock1 = outC->_L101_IfBlock1 & outC->_L95_IfBlock1;
    _2_otherTimingError = outC->_L100_IfBlock1;
    outC->_L93_IfBlock1 = outC->_L85_IfBlock1 & outC->_L86_IfBlock1 &
      outC->_L95_IfBlock1;
    outC->_L94_IfBlock1 = !outC->_L93_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L79_IfBlock1,
      rtmMessage);
    outC->_L66_IfBlock1 = outC->_L79_IfBlock1.valid;
    outC->_L81_IfBlock1 = outC->_L66_IfBlock1 & outC->_L85_IfBlock1;
    _3_tNvContactError = outC->_L81_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L91_IfBlock1,
      rtmMessage);
    outC->_L89_IfBlock1 = outC->_L91_IfBlock1.valid;
    outC->_L90_IfBlock1 = outC->_L89_IfBlock1 & outC->_L86_IfBlock1;
    _4_radioSequenceError = outC->_L90_IfBlock1;
    /* 6 */ CheckAllowedPacketsRadio(&outC->_L76_IfBlock1, &outC->_2_Context_6);
    outC->_L64_IfBlock1 = outC->_2_Context_6.valid;
    /* 6 */
    CheckMandatoryVariablesAndMA(&outC->_L76_IfBlock1, &outC->_3_Context_6);
    outC->_L73_IfBlock1 = outC->_3_Context_6.valid;
    outC->_L78_IfBlock1 = outC->_L64_IfBlock1 & outC->_L73_IfBlock1 &
      outC->_L94_IfBlock1;
    /* 6 */
    BuildOutput(&outC->_L76_IfBlock1, outC->_L78_IfBlock1, &outC->_4_Context_6);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L83_IfBlock1,
      &outC->_4_Context_6.ReceivedMessage);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L68_IfBlock1,
      rtmMessage);
    outC->_L74_IfBlock1 = outC->_L68_IfBlock1.valid;
    outC->_L72_IfBlock1 = !outC->_L64_IfBlock1;
    outC->_L70_IfBlock1 = !outC->_L73_IfBlock1;
    outC->_L65_IfBlock1 = outC->_L72_IfBlock1 | outC->_L70_IfBlock1;
    outC->_L80_IfBlock1 = outC->_L74_IfBlock1 & outC->_L65_IfBlock1;
    _1_radioMessageConsistencyError = outC->_L80_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_5_checkedMessage,
      &outC->_L83_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->checkedMessage,
      &_5_checkedMessage);
    outC->radioSequenceError = _4_radioSequenceError;
    outC->tNvContactError = _3_tNvContactError;
    outC->otherTimingError = _2_otherTimingError;
    outC->radioMessageConsistencyError = _1_radioMessageConsistencyError;
  }
  else {
    outC->_L3_IfBlock1 = kcg_false;
    otherTimingError = outC->_L3_IfBlock1;
    tNvContactError = outC->_L3_IfBlock1;
    radioSequenceError = outC->_L3_IfBlock1;
    radioMessageConsistencyError = outC->_L3_IfBlock1;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L1_IfBlock1,
      rtmMessage);
    /* 7 */ ConvertTrackSideMessageTo(&outC->_L1_IfBlock1, &outC->Context_7);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L2_IfBlock1,
      &outC->Context_7.ReceivedMessage);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &checkedMessage,
      &outC->_L2_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->checkedMessage,
      &checkedMessage);
    outC->radioSequenceError = radioSequenceError;
    outC->tNvContactError = tNvContactError;
    outC->otherTimingError = otherTimingError;
    outC->radioMessageConsistencyError = radioMessageConsistencyError;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckEuroRadioMessage.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

