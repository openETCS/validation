/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _BTM_Toolbox_TrainModules_H_
#define _BTM_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Toolbox::TrainModules::BTM::TrackMessage */ TrackMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ODO_doLocInacc_Toolbox_Functions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Toolbox::TrainModules::BTM::_L4 */ _L4;
  API_TelegramHeader_T_API_Msg_Pkg /* Toolbox::TrainModules::BTM::_L5 */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::BTM::_L6 */ _L6;
  kcg_bool /* Toolbox::TrainModules::BTM::_L16 */ _L16;
  kcg_bool /* Toolbox::TrainModules::BTM::_L17 */ _L17;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::BTM::_L18 */ _L18;
  centerOfBalisePosition_T_BG_Types_Pkg /* Toolbox::TrainModules::BTM::_L20 */ _L20;
  NID_C /* Toolbox::TrainModules::BTM::_L22 */ _L22;
  kcg_bool /* Toolbox::TrainModules::BTM::_L23 */ _L23;
  kcg_int /* Toolbox::TrainModules::BTM::_L24 */ _L24;
  MsgSource_T_Common_Types_Pkg /* Toolbox::TrainModules::BTM::_L25 */ _L25;
  MsgSource_T_Common_Types_Pkg /* Toolbox::TrainModules::BTM::_L26 */ _L26;
  MsgSource_T_Common_Types_Pkg /* Toolbox::TrainModules::BTM::_L27 */ _L27;
  TelegramHeader_T_BG_Types_Pkg /* Toolbox::TrainModules::BTM::_L28 */ _L28;
  TelegramHeader_T_BG_Types_Pkg /* Toolbox::TrainModules::BTM::_L29 */ _L29;
  CompressedPackets_T_Common_Types_Pkg /* Toolbox::TrainModules::BTM::_L30 */ _L30;
  API_RadioMsgHeader_T_API_Msg_Pkg /* Toolbox::TrainModules::BTM::_L32 */ _L32;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Toolbox::TrainModules::BTM::_L33 */ _L33;
  kcg_int /* Toolbox::TrainModules::BTM::_L34 */ _L34;
  kcg_int /* Toolbox::TrainModules::BTM::_L35 */ _L35;
} outC_BTM_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::BTM */
extern void BTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::BTM::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::BTM::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Toolbox::TrainModules::BTM::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::BTM::TelegramHeader */TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  outC_BTM_Toolbox_TrainModules *outC);

extern void BTM_reset_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC);

#endif /* _BTM_Toolbox_TrainModules_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BTM_Toolbox_TrainModules.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

