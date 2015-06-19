/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _InformationFilter_InformationFilter_Pkg_H_
#define _InformationFilter_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "MessageBuffer_InformationFilter_Pkg.h"
#include "LevelTransitionEffective_InformationFilter_Pkg.h"
#include "RbcTransitionEffective_InformationFilter_Pkg.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"
#include "TransitionBuffer_InformationFilter_Pkg_Common.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::outAcceptedMessage */ outAcceptedMessage;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L16 */ _L16;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L15 */ _L15;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L24 */ _L24;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L38 */ _L38;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L37 */ _L37;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter /* 1 */ _6_Context_1;
  outC_TransitionBuffer_InformationFilter_Pkg_Common /* 1 */ _5_Context_1;
  outC_TransitionBuffer_InformationFilter_Pkg_Common /* 2 */ Context_2;
  outC_LevelTransitionEffective_InformationFilter_Pkg /* 1 */ _4_Context_1;
  outC_RbcTransitionEffective_InformationFilter_Pkg /* 1 */ _3_Context_1;
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter /* 1 */ _2_Context_1;
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter /* 1 */ _1_Context_1;
  outC_MessageBuffer_InformationFilter_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  kcg_bool tmp7;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::TbMessage */ TbMessage;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::TbMessageValid */ TbMessageValid;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L1 */ _L1;
  M_LEVEL /* InformationFilter_Pkg::InformationFilter::_L5 */ _L5;
  M_MODE /* InformationFilter_Pkg::InformationFilter::_L6 */ _L6;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L10 */ _L10;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L11 */ _L11;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L17 */ _L17;
  kcg_int /* InformationFilter_Pkg::InformationFilter::_L18 */ _L18;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L22 */ _L22;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L23 */ _L23;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L26 */ _L26;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L27 */ _L27;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L28 */ _L28;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L29 */ _L29;
  kcg_int /* InformationFilter_Pkg::InformationFilter::_L30 */ _L30;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L31 */ _L31;
  kcg_int /* InformationFilter_Pkg::InformationFilter::_L32 */ _L32;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L33 */ _L33;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L34 */ _L34;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L40 */ _L40;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L39 */ _L39;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L42 */ _L42;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L41 */ _L41;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L43 */ _L43;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L44 */ _L44;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L51 */ _L51;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::InformationFilter::_L52 */ _L52;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L53 */ _L53;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L54 */ _L54;
  M_LEVEL /* InformationFilter_Pkg::InformationFilter::_L55 */ _L55;
  kcg_bool /* InformationFilter_Pkg::InformationFilter::_L56 */ _L56;
  kcg_int /* InformationFilter_Pkg::InformationFilter::_L57 */ _L57;
} outC_InformationFilter_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter */
extern void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::InformationFilter::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::InformationFilter::inPendingAckOfTrainDataFromRBC */kcg_bool inPendingAckOfTrainDataFromRBC,
  /* InformationFilter_Pkg::InformationFilter::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::InformationFilter::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::InformationFilter::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */kcg_int inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */kcg_bool inTrainDataValid,
  outC_InformationFilter_InformationFilter_Pkg *outC);

extern void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);

#endif /* _InformationFilter_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InformationFilter_InformationFilter_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

