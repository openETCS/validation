/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_
#define _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
#include "Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
#include "Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"
#include "Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter.h"
#include "Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h"
#include "Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter.h"
#include "Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter.h"
#include "Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter.h"
#include "Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter.h"
#include "Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outAccept */ outAccept;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outStoreInTransitionBuffer */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter /* 2 */ _8_Context_2;
  outC_Exception02StoreOnboardIf_InformationFilter_Pkg_FirstFilter /* 2 */ _7_Context_2;
  outC_Exception03RejectIfPendin_InformationFilter_Pkg_FirstFilter /* 2 */ _6_Context_2;
  outC_Exception05RejectIfEmerge_InformationFilter_Pkg_FirstFilter /* 2 */ _5_Context_2;
  outC_Exception06StoreOnboardIf_InformationFilter_Pkg_FirstFilter /* 2 */ Context_2;
  outC_Exception07RejectIfNoPend_InformationFilter_Pkg_FirstFilter /* 1 */ _4_Context_1;
  outC_Exception13RejectIfNotWit_InformationFilter_Pkg_FirstFilter /* 1 */ _3_Context_1;
  outC_Exception09RejectIfNoL2L3_InformationFilter_Pkg_FirstFilter /* 1 */ _2_Context_1;
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter /* 1 */ _1_Context_1;
  outC_Exception12RejectIfTextMe_InformationFilter_Pkg_FirstFilter /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01m */ e01m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01b */ e01b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02m */ e02m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02b */ e02b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03m */ e03m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03b */ e03b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05m */ e05m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05b */ e05b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06m */ e06m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06b */ e06b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07m */ e07m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07b */ e07b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09m */ e09m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09b */ e09b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11m */ e11m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11b */ e11b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12m */ e12m;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12b */ e12b;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L11 */ _L11;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L13 */ _L13;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L14 */ _L14;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L15 */ _L15;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L24 */ _L24;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L25 */ _L25;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L26 */ _L26;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L27 */ _L27;
  kcg_int /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L28 */ _L28;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L29 */ _L29;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L31 */ _L31;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L30 */ _L30;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L33 */ _L33;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L35 */ _L35;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L34 */ _L34;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L37 */ _L37;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L36 */ _L36;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L39 */ _L39;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L38 */ _L38;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L41 */ _L41;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L40 */ _L40;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L66 */ _L66;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L65 */ _L65;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L75 */ _L75;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L76 */ _L76;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L77 */ _L77;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L78 */ _L78;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L79 */ _L79;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L80 */ _L80;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L81 */ _L81;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L82 */ _L82;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L84 */ _L84;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L85 */ _L85;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L89 */ _L89;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L90 */ _L90;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L91 */ _L91;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L92 */ _L92;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L93 */ _L93;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L94 */ _L94;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L95 */ _L95;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L96 */ _L96;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L97 */ _L97;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L98 */ _L98;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L99 */ _L99;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L100 */ _L100;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L102 */ _L102;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L103 */ _L103;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L104 */ _L104;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L107 */ _L107;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L108 */ _L108;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L112 */ _L112;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L111 */ _L111;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L114 */ _L114;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L113 */ _L113;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L116 */ _L116;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L115 */ _L115;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L118 */ _L118;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L117 */ _L117;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L119 */ _L119;
  kcg_int /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L120 */ _L120;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L121 */ _L121;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L122 */ _L122;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L123 */ _L123;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L124 */ _L124;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L125 */ _L125;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L126 */ _L126;
} outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
extern void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */LevelDecisionTableActionKind_DataDictionary_Pkg inAction,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inEmergencyBrakeActive */kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC);

extern void CheckLevelExceptions_reset_InformationFilter_Pkg_FirstFilter(
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter *outC);

#endif /* _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

