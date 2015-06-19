/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg.h"

void Manage_TrackSideInformati_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* 3 */ getRadioManagement_reset_packagesSupport_Pkg(&outC->_5_Context_3);
  /* 3 */
  getParameterPositionReport_reset_packagesSupport_Pkg(&outC->_4_Context_3);
  /* 1 */ ContinuousTimeoutCheck_reset(&outC->_3_Context_1);
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */
  validateDataDirection_reset_ValidateDataDirection_Pkg(&outC->_2_Context_1);
  /* 2 */ CheckEuroRadioMessage_reset(&outC->Context_2);
  /* 1 */ CheckBGConsistency_reset_CheckBGConsistency_Pkg(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
void Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */kcg_int inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inEmergencyBrakeActive */kcg_bool inEmergencyBrakeActive,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */kcg_int inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */kcg_bool inTrainDataValid,
  outC_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  kcg_bool tmp5;
  kcg_bool tmp6;
  kcg_bool tmp7;
  kcg_bool tmp8;
  ReceivedMessage_T_Common_Types_Pkg tmp9;
  kcg_bool tmp;
  kcg_bool tmp1;
  kcg_bool tmp2;
  kcg_bool tmp3;
  ReceivedMessage_T_Common_Types_Pkg tmp4;
  kcg_bool noname;
  kcg_bool _10_noname;
  
  outC->_L3 = reset;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, API_trackSide_Message);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L2, ActualOdometry);
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    outC->_L3,
    &outC->_L1,
    &outC->_L2,
    &outC->Context_1);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L8,
    &outC->Context_1.outTrackMessage_for_check);
  outC->_L93 = outC->_L8.valid;
  outC->_L37 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L33 = outC->_L8.msg_type;
  outC->_L36 = outC->_L37 == outC->_L33;
  outC->_L94 = outC->_L93 & outC->_L36;
  outC->doBaliseBranch = outC->_L94;
  outC->_L44 = outC->doBaliseBranch;
  outC->tmp6 = outC->_L44;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L43, inAnnouncedBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L82, trainPosition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPositionTest,
    &outC->_L82);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L87,
    &outC->trainPositionTest);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L7, modeAndLevel);
  outC->_L28 = outC->_L7.Mode;
  outC->_L69 = q_nvlocacc;
  if (outC->tmp6) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      &outC->_L43,
      &outC->_L87,
      outC->_L28,
      &outC->_L8,
      outC->_L69,
      &outC->_1_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp9,
      &outC->_1_Context_1.passedBG_out);
    tmp8 = outC->_1_Context_1.applyServiceBrake;
    tmp7 = outC->_1_Context_1.badBaliseMessageToDMI;
    tmp6 = outC->_1_Context_1.errorLinkedBG;
    tmp5 = outC->_1_Context_1.errorUnlinkedBG;
  }
  outC->_L45 = kcg_false;
  if (outC->tmp6) {
    outC->_L18 = tmp5;
    outC->_L17 = tmp6;
    outC->_L16 = tmp7;
    outC->_L15 = tmp8;
  }
  else {
    outC->_L18 = outC->_L45;
    outC->_L17 = outC->_L45;
    outC->_L16 = outC->_L45;
    outC->_L15 = outC->_L45;
  }
  outC->_L52 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L50 = outC->_L33 == outC->_L52;
  outC->doRadio = outC->_L50;
  outC->_L53 = outC->doRadio;
  outC->tmp = outC->_L53;
  outC->_L11 = tNvContact;
  outC->_L12 = lastRelevantEventTimestamp;
  outC->_L13 = connectionStatus;
  outC->_L114 = fullChecks;
  if (outC->tmp) {
    /* 2 */
    CheckEuroRadioMessage(
      &outC->_L8,
      outC->_L11,
      outC->_L12,
      outC->_L13,
      outC->_L114,
      &outC->Context_2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp4,
      &outC->Context_2.checkedMessage);
    tmp3 = outC->Context_2.radioSequenceError;
    tmp2 = outC->Context_2.tNvContactError;
    tmp1 = outC->Context_2.otherTimingError;
    tmp = outC->Context_2.radioMessageConsistencyError;
  }
  outC->_L63 = kcg_false;
  if (outC->tmp) {
    outC->_L124 = tmp;
    outC->_L123 = tmp1;
    outC->_L62 = tmp2;
    outC->_L61 = tmp3;
  }
  else {
    outC->_L124 = outC->_L63;
    outC->_L123 = outC->_L63;
    outC->_L62 = outC->_L63;
    outC->_L61 = outC->_L63;
  }
  outC->_L27 = outC->doBaliseBranch;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L64,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (outC->tmp6) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L14, &tmp9);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L14, &outC->_L64);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L65,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (outC->tmp) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L38, &tmp4);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L38, &outC->_L65);
  }
  if (outC->_L27) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, &outC->_L14);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, &outC->_L38);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L79,
    &outC->_L82.LRBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->LRBG, &outC->_L79);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L80, &outC->LRBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L68, inAnnouncedBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L88,
    &outC->trainPositionTest);
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &outC->_L23,
    &outC->_L80,
    &outC->_L68,
    &outC->_L88,
    &outC->_2_Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L21,
    &outC->_2_Context_1.outMessage);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L109, modeAndLevel);
  outC->_L101 = outC->_L109.level;
  outC->_L113 = outC->_L109.Mode;
  outC->_L106 = inSupervisingRbcId;
  outC->_L115 = inPendingL1Transition;
  outC->_L116 = inPendingL2L3Transition;
  outC->_L117 = inPendingAckOfTrainData;
  outC->_L118 = inEmergencyBrakeActive;
  outC->_L119 = inLastAckTextMessageId;
  outC->_L120 = inPendingNTCTransition;
  outC->_L121 = inActiveCab;
  outC->_L122 = inTrainDataValid;
  /* 3 */
  InformationFilter_InformationFilter_Pkg(
    &outC->_L21,
    outC->_L101,
    outC->_L113,
    outC->_L106,
    outC->_L115,
    outC->_L116,
    outC->_L117,
    outC->_L118,
    outC->_L119,
    outC->_L120,
    outC->_L121,
    outC->_L122,
    &outC->Context_3);
  outC->_L102 = outC->Context_3.outAcceptedMessage;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L103,
    &outC->Context_3.outMessage);
  outC->_L147 = outC->_L103.valid;
  outC->traceOutput = outC->_L147;
  outC->_L148 = outC->traceOutput;
  _10_noname = outC->_L148;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L139, ActualOdometry);
  outC->_L140 = outC->_L139.timestamp;
  outC->_L141 = tNvContact;
  outC->_L142 = lastRelevantEventTimestamp;
  outC->_L143 = fullChecks;
  /* 1 */
  ContinuousTimeoutCheck(
    outC->_L140,
    outC->_L141,
    outC->_L142,
    outC->_L143,
    &outC->_3_Context_1);
  outC->_L138 = outC->_3_Context_1.tNvContactError;
  outC->_L144 = outC->_L62 | outC->_L138;
  outC->tNvContactError = outC->_L144;
  outC->_L145 = outC->tNvContactError;
  outC->_L137 = kcg_false;
  outC->_L129.linkedBGError = outC->_L17;
  outC->_L129.unlinkedBGError = outC->_L18;
  outC->_L129.BG_versionIncompatible = outC->_L137;
  outC->_L129.radioSequenceError = outC->_L61;
  outC->_L129.tNvContactError = outC->_L145;
  outC->_L129.otherTimingError = outC->_L123;
  outC->_L129.radioMessageConsistencyError = outC->_L124;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->outCheckErrors, &outC->_L129);
  noname = outC->_L102;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessage,
    &outC->_L103);
  /* 3 */
  getParameterPositionReport_packagesSupport_Pkg(
    &outC->_L103,
    &outC->_4_Context_3);
  kcg_copy_PositionReportParameter_T_Common_Types_Pkg(
    &outC->_L73,
    &outC->_4_Context_3.outPositionReportParam);
  kcg_copy_PositionReportParameter_T_Common_Types_Pkg(
    &outC->outPositionParams,
    &outC->_L73);
  /* 3 */
  getRadioManagement_packagesSupport_Pkg(&outC->_L103, &outC->_5_Context_3);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->_L74,
    &outC->_5_Context_3.outRadioManagement);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->outRadioManagement,
    &outC->_L74);
  outC->BadBaliseMessageToDMI = outC->_L16;
  outC->ApplyServiceBrake = outC->_L15;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

