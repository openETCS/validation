/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
#ifndef _CheckBGInCh_Int_CheckBGInputChannel_Pkg_H_
#define _CheckBGInCh_Int_CheckBGInputChannel_Pkg_H_

#include "kcg_types.h"
#include "Listen_on_BTM_CheckBGInputChannel_Pkg.h"
#include "Listen_on_OBU_CheckBGInputChannel_Pkg.h"
#include "SM_Check_BG_CheckBGInputChannel_Pkg.h"
#include "Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg.h"
#include "BTM_Toolbox_TrainModules.h"
#include "MovementSimulation_Toolbox_BuildingBlocks.h"
#include "Story00A_FirstTest.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::acceleration */ acceleration;
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::initialPosition */ initialPosition;
} inC_CheckBGInCh_Int_CheckBGInputChannel_Pkg;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  outBGchecks_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::checked_BGs */ checked_BGs;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::count_BGs */ count_BGs;
  /* -----------------------   local probes  ------------------------- */
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::dbgVelocity */ dbgVelocity;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::OBU_BGs */ OBU_BGs;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::BTM_BGs */ BTM_BGs;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::count_OBU_BGs */ count_OBU_BGs;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::count_BTM_BGs */ count_BTM_BGs;
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SM_Check_BG_CheckBGInputChannel_Pkg /* 1 */ _4_Context_1;
  outC_Listen_on_BTM_CheckBGInputChannel_Pkg /* 1 */ _3_Context_1;
  outC_Listen_on_OBU_CheckBGInputChannel_Pkg /* 1 */ Context_1;
  outC_Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg /* 2 */ _2_Context_2;
  outC_BTM_Toolbox_TrainModules /* 2 */ _1_Context_2;
  outC_Story00A_FirstTest /* 2 */ Context_2;
  outC_MovementSimulation_Toolbox_BuildingBlocks /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::currentOdometry */ currentOdometry;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L87 */ _L87;
  CompressedPackets_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L80 */ _L80;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L81 */ _L81;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L75 */ _L75;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L67 */ _L67;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L66 */ _L66;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L65 */ _L65;
  sessionStatus_Type_Radio_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L64 */ _L64;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L62 */ _L62;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L60 */ _L60;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L57 */ _L57;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L51 */ _L51;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L52 */ _L52;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L53 */ _L53;
  PositionReportParameter_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L54 */ _L54;
  radioManagementMessage_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L55 */ _L55;
  MSG_Errors_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L56 */ _L56;
  odometry_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L50 */ _L50;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L91 */ _L91;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L90 */ _L90;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L89 */ _L89;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L88 */ _L88;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L94 */ _L94;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L93 */ _L93;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L92 */ _L92;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L96 */ _L96;
  outBGchecks_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L95 */ _L95;
  kcg_int /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L97 */ _L97;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L98 */ _L98;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L125 */ _L125;
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L124 */ _L124;
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L123 */ _L123;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L122 */ _L122;
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L121 */ _L121;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L120 */ _L120;
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L115 */ _L115;
  kcg_real /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L116 */ _L116;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L117 */ _L117;
  odometry_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L118 */ _L118;
  kcg_bool /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L119 */ _L119;
  trainPosition_T_TrainPosition_Types_Pck /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L126 */ _L126;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L128 */ _L128;
  Q_NVLOCACC /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L129 */ _L129;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::CheckBGInCh_Int::_L130 */ _L130;
} outC_CheckBGInCh_Int_CheckBGInputChannel_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGInputChannel_Pkg::CheckBGInCh_Int */
extern void CheckBGInCh_Int_CheckBGInputChannel_Pkg(
  inC_CheckBGInCh_Int_CheckBGInputChannel_Pkg *inC,
  outC_CheckBGInCh_Int_CheckBGInputChannel_Pkg *outC);

extern void CheckBGInCh_Int_reset_CheckBGInputChannel_Pkg(
  outC_CheckBGInCh_Int_CheckBGInputChannel_Pkg *outC);

#endif /* _CheckBGInCh_Int_CheckBGInputChannel_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBGInCh_Int_CheckBGInputChannel_Pkg.h
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

