/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Root2_VerReTrackMsg_VerReTrackMsg_Pkg_H_
#define _Root2_VerReTrackMsg_VerReTrackMsg_Pkg_H_

#include "kcg_types.h"
#include "Input_Multiplexer_VerReTrackMsg_Pkg.h"
#include "Input_MultiplexerInit_VerReTrackMsg_Pkg.h"
#include "BTM_Toolbox_TrainModules.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"
#include "FilterTrackMsg_Subfuction_Enhancements_Pkg.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::TestDriver */ TestDriver;
  kcg_int /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::TestStory */ TestStory;
} inC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::ready */ ready;
  BG_Message_T_BG_Types_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::BG_Message_Array */ BG_Message_Array;
  /* -----------------------   local probes  ------------------------- */
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::dbgVelocity */ dbgVelocity;
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg /* 1 */ _4_Context_1;
  outC_FilterTrackMsg_Subfuction_Enhancements_Pkg /* 2 */ _3_Context_2;
  outC_BTM_Toolbox_TrainModules /* 2 */ _2_Context_2;
  outC_Input_Multiplexer_VerReTrackMsg_Pkg /* 1 */ Context_1;
  outC_PHYSICS_MovementSimulation_Toolbox_Physics /* 2 */ _1_Context_2;
  outC_Input_MultiplexerInit_VerReTrackMsg_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::currentPosition */ currentPosition;
  odometry_T_Obu_BasicTypes_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::currentOdometry */ currentOdometry;
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L39 */ _L39;
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L40 */ _L40;
  T_internal_Type_Obu_BasicTypes_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L41 */ _L41;
  odometry_T_Obu_BasicTypes_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L42 */ _L42;
  kcg_bool /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L43 */ _L43;
  kcg_bool /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L38 */ _L38;
  API_TrackSideInput_T_API_Msg_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L37 */ _L37;
  API_TrackSideInput_T_API_Msg_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L36 */ _L36;
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L31 */ _L31;
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L32 */ _L32;
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L33 */ _L33;
  kcg_int /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L34 */ _L34;
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L35 */ _L35;
  kcg_real /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L30 */ _L30;
  kcg_int /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L28 */ _L28;
  kcg_int /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L27 */ _L27;
  kcg_bool /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L25 */ _L25;
  CompressedPackets_T_Common_Types_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L22 */ _L22;
  TelegramHeader_T_BG_Types_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L23 */ _L23;
  kcg_bool /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L24 */ _L24;
  T_internal_Type_Obu_BasicTypes_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L21 */ _L21;
  TrackSide_ForCheck_T_Common_Types_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L44 */ _L44;
  kcg_bool /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L46 */ _L46;
  T_internal_Type_Obu_BasicTypes_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L47 */ _L47;
  MsgSource_T_Common_Types_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L48 */ _L48;
  BG_Message_T_BG_Types_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L49 */ _L49;
  RadioMessage_T_Radio_Types_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L50 */ _L50;
  kcg_bool /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L45 */ _L45;
  odometry_T_Obu_BasicTypes_Pkg /* VerReTrackMsg_Pkg::Root2_VerReTrackMsg::_L51 */ _L51;
} outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* VerReTrackMsg_Pkg::Root2_VerReTrackMsg */
extern void Root2_VerReTrackMsg_VerReTrackMsg_Pkg(
  inC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *inC,
  outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Root2_VerReTrackMsg_reset_VerReTrackMsg_Pkg(
  outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Root2_VerReTrackMsg_init_VerReTrackMsg_Pkg(
  outC_Root2_VerReTrackMsg_VerReTrackMsg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Root2_VerReTrackMsg_VerReTrackMsg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Root2_VerReTrackMsg_VerReTrackMsg_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

