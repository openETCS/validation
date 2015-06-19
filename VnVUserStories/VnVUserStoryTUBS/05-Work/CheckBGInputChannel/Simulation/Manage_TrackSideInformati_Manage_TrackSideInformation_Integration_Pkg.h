/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg_H_
#define _Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg_H_

#include "kcg_types.h"
#include "CheckEuroRadioMessage.h"
#include "ContinuousTimeoutCheck.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"
#include "getParameterPositionReport_packagesSupport_Pkg.h"
#include "getRadioManagement_packagesSupport_Pkg.h"
#include "InformationFilter_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outputMessage */ outputMessage;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ApplyServiceBrake */ ApplyServiceBrake;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::BadBaliseMessageToDMI */ BadBaliseMessageToDMI;
  PositionReportParameter_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outPositionParams */ outPositionParams;
  radioManagementMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outRadioManagement */ outRadioManagement;
  MSG_Errors_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outCheckErrors */ outCheckErrors;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getRadioManagement_packagesSupport_Pkg /* 3 */ _5_Context_3;
  outC_getParameterPositionReport_packagesSupport_Pkg /* 3 */ _4_Context_3;
  outC_ContinuousTimeoutCheck /* 1 */ _3_Context_1;
  outC_InformationFilter_InformationFilter_Pkg /* 3 */ Context_3;
  outC_validateDataDirection_ValidateDataDirection_Pkg /* 1 */ _2_Context_1;
  outC_CheckEuroRadioMessage /* 2 */ Context_2;
  outC_CheckBGConsistency_CheckBGConsistency_Pkg /* 1 */ _1_Context_1;
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  kcg_bool tmp6;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doBaliseBranch */ doBaliseBranch;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doRadio */ doRadio;
  positionedBG_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::LRBG */ LRBG;
  trainPosition_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPositionTest */ trainPositionTest;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContactError */ tNvContactError;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::traceOutput */ traceOutput;
  API_TrackSideInput_T_API_Msg_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L1 */ _L1;
  odometry_T_Obu_BasicTypes_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L2 */ _L2;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L3 */ _L3;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L7 */ _L7;
  TrackSide_ForCheck_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L8 */ _L8;
  T_internal_Type_Obu_BasicTypes_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L11 */ _L11;
  T_internal_Type_Obu_BasicTypes_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L12 */ _L12;
  sessionStatus_Type_Radio_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L13 */ _L13;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L18 */ _L18;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L17 */ _L17;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L16 */ _L16;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L15 */ _L15;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L14 */ _L14;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L21 */ _L21;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L23 */ _L23;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L27 */ _L27;
  M_MODE /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L28 */ _L28;
  MsgSource_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L33 */ _L33;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L36 */ _L36;
  MsgSource_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L37 */ _L37;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L38 */ _L38;
  positionedBGs_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L43 */ _L43;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L44 */ _L44;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L45 */ _L45;
  MsgSource_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L52 */ _L52;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L50 */ _L50;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L53 */ _L53;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L62 */ _L62;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L61 */ _L61;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L63 */ _L63;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L64 */ _L64;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L65 */ _L65;
  positionedBGs_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L68 */ _L68;
  Q_NVLOCACC /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L69 */ _L69;
  radioManagementMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L74 */ _L74;
  PositionReportParameter_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L73 */ _L73;
  positionedBG_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L79 */ _L79;
  positionedBG_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L80 */ _L80;
  trainPosition_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L82 */ _L82;
  trainPosition_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L87 */ _L87;
  trainPosition_T_TrainPosition_Types_Pck /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L88 */ _L88;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L93 */ _L93;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L94 */ _L94;
  M_MODE /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L113 */ _L113;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L109 */ _L109;
  kcg_int /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L106 */ _L106;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L102 */ _L102;
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L103 */ _L103;
  M_LEVEL /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L101 */ _L101;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L114 */ _L114;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L115 */ _L115;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L116 */ _L116;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L117 */ _L117;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L118 */ _L118;
  kcg_int /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L119 */ _L119;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L120 */ _L120;
  kcg_int /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L121 */ _L121;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L122 */ _L122;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L124 */ _L124;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L123 */ _L123;
  MSG_Errors_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L129 */ _L129;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L137 */ _L137;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L138 */ _L138;
  odometry_T_Obu_BasicTypes_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L139 */ _L139;
  T_internal_Type_Obu_BasicTypes_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L140 */ _L140;
  T_internal_Type_Obu_BasicTypes_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L141 */ _L141;
  T_internal_Type_Obu_BasicTypes_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L142 */ _L142;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L143 */ _L143;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L144 */ _L144;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L145 */ _L145;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L147 */ _L147;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L148 */ _L148;
} outC_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
extern void Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg(
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
  outC_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg *outC);

extern void Manage_TrackSideInformati_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg *outC);

#endif /* _Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

