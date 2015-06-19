/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

void CheckLevelExceptions_reset_InformationFilter_Pkg_FirstFilter(
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC)
{
  /* 2 */
  Exception01StoreOnboardIf_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_8_Context_2);
  /* 2 */
  Exception02StoreOnboardIf_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_7_Context_2);
  /* 2 */
  Exception03RejectIfPendin_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_6_Context_2);
  /* 2 */
  Exception05RejectIfEmerge_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_5_Context_2);
  /* 2 */
  Exception06StoreOnboardIf_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_2);
  /* 1 */
  Exception07RejectIfNoPend_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_4_Context_1);
  /* 1 */
  Exception13RejectIfNotWit_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_3_Context_1);
  /* 1 */
  Exception09RejectIfNoL2L3_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_2_Context_1);
  /* 1 */
  Exception11RejectIfPendin_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_1_Context_1);
  /* 1 */
  Exception12RejectIfTextMe_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_1);
}

/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */LevelDecisionTableActionKind_DataDictionary_Pkg inAction,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inEmergencyBrakeActive */kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L120 = 0;
  outC->_L28 = inLastAckTextMessageId;
  /* 1 */
  Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter(
    outC->_L120,
    outC->_L28,
    &outC->Context_1);
  outC->_L115 = outC->Context_1.outAcceptMessage;
  outC->_L116 = outC->Context_1.outStoreInTransitionBuffer;
  outC->e12b = outC->_L116;
  outC->_L126 = outC->e12b;
  outC->e12m = outC->_L115;
  outC->_L125 = outC->e12m;
  outC->_L119 = kcg_false;
  outC->_L24 = inPendingL1Transition;
  outC->_L25 = inPendingL2L3Transition;
  /* 1 */
  Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter(
    outC->_L119,
    outC->_L24,
    outC->_L25,
    &outC->_1_Context_1);
  outC->_L113 = outC->_1_Context_1.outAcceptMessage;
  outC->_L114 = outC->_1_Context_1.outStoreInTransitionBuffer;
  outC->e11m = outC->_L113;
  outC->_L124 = outC->e11m;
  outC->e11b = outC->_L114;
  outC->_L123 = outC->e11b;
  /* 1 */
  Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter(
    outC->_L119,
    &outC->_2_Context_1);
  outC->_L111 = outC->_2_Context_1.outAcceptMessage;
  outC->_L112 = outC->_2_Context_1.outStoreInTransitionBuffer;
  outC->e09b = outC->_L112;
  outC->_L122 = outC->e09b;
  outC->e09m = outC->_L111;
  outC->_L121 = outC->e09m;
  /* 1 */
  Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter(
    outC->_L119,
    &outC->_3_Context_1);
  outC->_L117 = outC->_3_Context_1.outAcceptMessage;
  outC->_L118 = outC->_3_Context_1.outStoreInTransitionBuffer;
  _1_noname = outC->_L118;
  noname = outC->_L117;
  outC->_L108 = kcg_false;
  outC->_L107 = kcg_false;
  outC->_L104 = kcg_false;
  outC->_L103 = kcg_false;
  outC->_L102 = kcg_false;
  outC->_L29 = inPendingNTCTransition;
  /* 1 */
  Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter(
    outC->_L29,
    &outC->_4_Context_1);
  outC->_L65 = outC->_4_Context_1.outAcceptMessage;
  outC->_L66 = outC->_4_Context_1.outStoreInTransitionBuffer;
  outC->e07b = outC->_L66;
  outC->_L100 = outC->e07b;
  /* 2 */
  Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter(
    outC->_L29,
    &outC->Context_2);
  outC->_L40 = outC->Context_2.outAcceptMessage;
  outC->_L41 = outC->Context_2.outStoreInTransitionBuffer;
  outC->e06b = outC->_L41;
  outC->_L99 = outC->e06b;
  outC->_L27 = inEmergencyBrakeActive;
  /* 2 */
  Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter(
    outC->_L27,
    &outC->_5_Context_2);
  outC->_L38 = outC->_5_Context_2.outAcceptMessage;
  outC->_L39 = outC->_5_Context_2.outStoreInTransitionBuffer;
  outC->e05b = outC->_L39;
  outC->_L98 = outC->e05b;
  outC->_L26 = inPendingAckOfTrainData;
  /* 2 */
  Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter(
    outC->_L26,
    &outC->_6_Context_2);
  outC->_L36 = outC->_6_Context_2.outAcceptMessage;
  outC->_L37 = outC->_6_Context_2.outStoreInTransitionBuffer;
  outC->e03b = outC->_L37;
  outC->_L97 = outC->e03b;
  /* 2 */
  Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter(
    outC->_L25,
    &outC->_7_Context_2);
  outC->_L34 = outC->_7_Context_2.outAcceptMessage;
  outC->_L35 = outC->_7_Context_2.outStoreInTransitionBuffer;
  outC->e02b = outC->_L35;
  outC->_L96 = outC->e02b;
  /* 2 */
  Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter(
    outC->_L24,
    &outC->_8_Context_2);
  outC->_L30 = outC->_8_Context_2.outAcceptMessage;
  outC->_L31 = outC->_8_Context_2.outStoreInTransitionBuffer;
  outC->e01b = outC->_L31;
  outC->_L95 = outC->e01b;
  outC->_L94 = kcg_false;
  outC->_L93 = kcg_false;
  outC->_L92 = kcg_false;
  outC->_L91 = kcg_false;
  outC->_L90 = kcg_false;
  outC->_L89 = kcg_false;
  outC->_L85 = kcg_false;
  outC->_L84 = kcg_false;
  outC->e07m = outC->_L65;
  outC->_L82 = outC->e07m;
  outC->e06m = outC->_L40;
  outC->_L81 = outC->e06m;
  outC->e05m = outC->_L38;
  outC->_L80 = outC->e05m;
  outC->e03m = outC->_L36;
  outC->_L79 = outC->e03m;
  outC->e02m = outC->_L34;
  outC->_L78 = outC->e02m;
  outC->e01m = outC->_L30;
  outC->_L77 = outC->e01m;
  outC->_L76 = inAction;
  switch (outC->_L76) {
    case LD_Accept_DataDictionary_Pkg :
      outC->_L33 = outC->_L92;
      break;
    case LD_Reject_DataDictionary_Pkg :
      outC->_L33 = outC->_L93;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      outC->_L33 = outC->_L94;
      break;
    case LD_StoreIfPendingL1Transition_DataDictionary_Pkg :
      outC->_L33 = outC->_L95;
      break;
    case LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      outC->_L33 = outC->_L96;
      break;
    case LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      outC->_L33 = outC->_L97;
      break;
    case LD_DUMMY1_DataDictionary_Pkg :
      outC->_L33 = outC->_L102;
      break;
    case LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      outC->_L33 = outC->_L98;
      break;
    case LD_StoreIfPendingNTCTransition_DataDictionary_Pkg :
      outC->_L33 = outC->_L99;
      break;
    case LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      outC->_L33 = outC->_L100;
      break;
    case LD_DUMMY2_DataDictionary_Pkg :
      outC->_L33 = outC->_L103;
      break;
    case LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      outC->_L33 = outC->_L122;
      break;
    case LD_DUMMY3_DataDictionary_Pkg :
      outC->_L33 = outC->_L104;
      break;
    case LD_DUMMY4_DataDictionary_Pkg :
      outC->_L33 = outC->_L123;
      break;
    case LD_DUMMY5_DataDictionary_Pkg :
      outC->_L33 = outC->_L126;
      break;
    case LD_DUMMY6_DataDictionary_Pkg :
      outC->_L33 = outC->_L107;
      break;
    
    default :
      outC->_L33 = outC->_L108;
  }
  outC->outStoreInTransitionBuffer = outC->_L33;
  outC->_L75 = inAction;
  outC->_L15 = kcg_false;
  outC->_L14 = kcg_false;
  outC->_L13 = kcg_true;
  switch (outC->_L75) {
    case LD_Accept_DataDictionary_Pkg :
      outC->_L11 = outC->_L13;
      break;
    case LD_Reject_DataDictionary_Pkg :
      outC->_L11 = outC->_L14;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      outC->_L11 = outC->_L84;
      break;
    case LD_StoreIfPendingL1Transition_DataDictionary_Pkg :
      outC->_L11 = outC->_L77;
      break;
    case LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      outC->_L11 = outC->_L78;
      break;
    case LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      outC->_L11 = outC->_L79;
      break;
    case LD_DUMMY1_DataDictionary_Pkg :
      outC->_L11 = outC->_L91;
      break;
    case LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      outC->_L11 = outC->_L80;
      break;
    case LD_StoreIfPendingNTCTransition_DataDictionary_Pkg :
      outC->_L11 = outC->_L81;
      break;
    case LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      outC->_L11 = outC->_L82;
      break;
    case LD_DUMMY2_DataDictionary_Pkg :
      outC->_L11 = outC->_L90;
      break;
    case LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      outC->_L11 = outC->_L121;
      break;
    case LD_DUMMY3_DataDictionary_Pkg :
      outC->_L11 = outC->_L85;
      break;
    case LD_DUMMY4_DataDictionary_Pkg :
      outC->_L11 = outC->_L124;
      break;
    case LD_DUMMY5_DataDictionary_Pkg :
      outC->_L11 = outC->_L125;
      break;
    case LD_DUMMY6_DataDictionary_Pkg :
      outC->_L11 = outC->_L89;
      break;
    
    default :
      outC->_L11 = outC->_L15;
  }
  outC->outAccept = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

