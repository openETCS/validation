/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */
#ifndef _InitBG_Subfunctions_H_
#define _InitBG_Subfunctions_H_

#include "kcg_types.h"
#include "Decop_Track_Msg_Subfunctions.h"
#include "Pack_Received_BG_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions::InitBG::out_BG */ out_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Pack_Received_BG_Subfunctions /* 1 */ _1_Context_1;
  outC_Decop_Track_Msg_Subfunctions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Subfunctions::InitBG::_L3 */ _L3;
  kcg_bool /* Subfunctions::InitBG::_L5 */ _L5;
  kcg_bool /* Subfunctions::InitBG::_L163 */ _L163;
  Q_LINK /* Subfunctions::InitBG::_L192 */ _L192;
  M_DUP /* Subfunctions::InitBG::_L191 */ _L191;
  Q_UPDOWN /* Subfunctions::InitBG::_L190 */ _L190;
  kcg_bool /* Subfunctions::InitBG::_L189 */ _L189;
  kcg_bool /* Subfunctions::InitBG::_L188 */ _L188;
  kcg_bool /* Subfunctions::InitBG::_L187 */ _L187;
  MsgSource_T_Common_Types_Pkg /* Subfunctions::InitBG::_L186 */ _L186;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L185 */ _L185;
  kcg_bool /* Subfunctions::InitBG::_L184 */ _L184;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions::InitBG::_L200 */ _L200;
  M_VERSION /* Subfunctions::InitBG::_L201 */ _L201;
  Q_MEDIA /* Subfunctions::InitBG::_L202 */ _L202;
  N_PIG /* Subfunctions::InitBG::_L203 */ _L203;
  N_TOTAL /* Subfunctions::InitBG::_L204 */ _L204;
  M_MCOUNT /* Subfunctions::InitBG::_L205 */ _L205;
  NID_C /* Subfunctions::InitBG::_L206 */ _L206;
  NID_BG /* Subfunctions::InitBG::_L207 */ _L207;
  kcg_bool /* Subfunctions::InitBG::_L208 */ _L208;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L209 */ _L209;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L210 */ _L210;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L211 */ _L211;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L212 */ _L212;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L213 */ _L213;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L214 */ _L214;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions::InitBG::_L215 */ _L215;
  kcg_bool /* Subfunctions::InitBG::_L216 */ _L216;
  kcg_bool /* Subfunctions::InitBG::_L217 */ _L217;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions::InitBG::_L218 */ _L218;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions::InitBG::_L219 */ _L219;
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions::InitBG::_L220 */ _L220;
  kcg_bool /* Subfunctions::InitBG::_L222 */ _L222;
  kcg_bool /* Subfunctions::InitBG::_L223 */ _L223;
  kcg_int /* Subfunctions::InitBG::_L224 */ _L224;
  Q_DIRLRBG /* Subfunctions::InitBG::_L225 */ _L225;
  Q_DIRTRAIN /* Subfunctions::InitBG::_L226 */ _L226;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfunctions::InitBG::_L116 */ _L116;
} outC_InitBG_Subfunctions;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions::InitBG */
extern void InitBG_Subfunctions(
  /* Subfunctions::InitBG::BTM_Input */API_TrackSideInput_T_API_Msg_Pkg *BTM_Input,
  outC_InitBG_Subfunctions *outC);

extern void InitBG_reset_Subfunctions(outC_InitBG_Subfunctions *outC);

#endif /* _InitBG_Subfunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InitBG_Subfunctions.h
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

