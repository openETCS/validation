/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _InitInconBG_Subfunctions_CheckBGInput_Pkg_H_
#define _InitInconBG_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg.h"
#include "Pack_Received_BG_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::out_BG */ out_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Pack_Received_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ _1_Context_1;
  outC_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L3 */ _L3;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L5 */ _L5;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L163 */ _L163;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L192 */ _L192;
  M_DUP /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L191 */ _L191;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L190 */ _L190;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L189 */ _L189;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L188 */ _L188;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L187 */ _L187;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L186 */ _L186;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L185 */ _L185;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L184 */ _L184;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L200 */ _L200;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L201 */ _L201;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L202 */ _L202;
  N_PIG /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L203 */ _L203;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L204 */ _L204;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L205 */ _L205;
  NID_C /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L206 */ _L206;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L207 */ _L207;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L208 */ _L208;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L209 */ _L209;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L210 */ _L210;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L211 */ _L211;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L212 */ _L212;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L213 */ _L213;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L214 */ _L214;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L215 */ _L215;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L216 */ _L216;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L217 */ _L217;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L218 */ _L218;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L219 */ _L219;
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L220 */ _L220;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L222 */ _L222;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L223 */ _L223;
  Q_NVLOCACC /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L224 */ _L224;
  Q_DIRLRBG /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L225 */ _L225;
  Q_DIRTRAIN /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L226 */ _L226;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfunctions_CheckBGInput_Pkg::InitInconBG::_L116 */ _L116;
} outC_InitInconBG_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::InitInconBG */
extern void InitInconBG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::InitInconBG::BTM_Input */API_TrackSideInput_T_API_Msg_Pkg *BTM_Input,
  outC_InitInconBG_Subfunctions_CheckBGInput_Pkg *outC);

extern void InitInconBG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_InitInconBG_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _InitInconBG_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InitInconBG_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

