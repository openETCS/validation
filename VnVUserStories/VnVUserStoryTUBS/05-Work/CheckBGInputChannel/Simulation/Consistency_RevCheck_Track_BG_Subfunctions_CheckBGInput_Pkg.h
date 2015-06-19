/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg_H_
#define _Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"
#include "Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg.h"
#include "Pack_Received_BG_Subfunctions_CheckBGInput_Pkg.h"
#include "Decop_Received_BG_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::out_BG */ out_BG;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::Warning_unexspected_Balise */ Warning_unexspected_Balise;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Pack_Received_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ _3_Context_1;
  outC_Decop_Received_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ _2_Context_1;
  outC_CAST_Int_to_N_PIG_TM_conversions /* 1 */ _1_Context_1;
  outC_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  outC_CAST_Int_to_N_PIG_TM_conversions /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::TimeStamp */ TimeStamp;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::Msg_valid */ Msg_valid;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::MsgSource */ MsgSource;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::RadioMeta */ RadioMeta;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::RadioHeader */ RadioHeader;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::CompressedPackets */ CompressedPackets;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::BG_present */ BG_present;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::q_updown */ q_updown;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::m_version */ m_version;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::q_media */ q_media;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::n_total */ n_total;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::m_mcount */ m_mcount;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::nid_c */ nid_c;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::nid_bg */ nid_bg;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::q_link */ q_link;
  Q_DIRLRBG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::q_dirlrbg */ q_dirlrbg;
  Q_DIRTRAIN /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::q_dirtrain */ q_dirtrain;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::assignedcoordination */ assignedcoordination;
  Q_NVLOCACC /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::q_nvlocacc */ q_nvlocacc;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::odo_time */ odo_time;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::odo_loc */ odo_loc;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::odo_speed */ odo_speed;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::odo_acc */ odo_acc;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::odo_motion */ odo_motion;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::odo_dir */ odo_dir;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::odo_locinacc */ odo_locinacc;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L163 */ _L163;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L192 */ _L192;
  M_DUP /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L191 */ _L191;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L190 */ _L190;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L189 */ _L189;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L188 */ _L188;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L187 */ _L187;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L186 */ _L186;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L185 */ _L185;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L184 */ _L184;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L200 */ _L200;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L201 */ _L201;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L202 */ _L202;
  N_PIG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L203 */ _L203;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L204 */ _L204;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L205 */ _L205;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L206 */ _L206;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L207 */ _L207;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L208 */ _L208;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L209 */ _L209;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L210 */ _L210;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L211 */ _L211;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L212 */ _L212;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L213 */ _L213;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L214 */ _L214;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L215 */ _L215;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L216 */ _L216;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L217 */ _L217;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L218 */ _L218;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L219 */ _L219;
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L220 */ _L220;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L222 */ _L222;
  API_TrackSideInput_T_API_Msg_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L116 */ _L116;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L257 */ _L257;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L256 */ _L256;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L255 */ _L255;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L254 */ _L254;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L253 */ _L253;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L252 */ _L252;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L251 */ _L251;
  Q_NVLOCACC /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L250 */ _L250;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L249 */ _L249;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L248 */ _L248;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L247 */ _L247;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L246 */ _L246;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L245 */ _L245;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L244 */ _L244;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L243 */ _L243;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L242 */ _L242;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L241 */ _L241;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L240 */ _L240;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L239 */ _L239;
  Q_DIRLRBG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L238 */ _L238;
  Q_DIRTRAIN /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L237 */ _L237;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L236 */ _L236;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L235 */ _L235;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L234 */ _L234;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L233 */ _L233;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L232 */ _L232;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L231 */ _L231;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L230 */ _L230;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L229 */ _L229;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L228 */ _L228;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L261 */ _L261;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L262 */ _L262;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L263 */ _L263;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L264 */ _L264;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L265 */ _L265;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L273 */ _L273;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L280 */ _L280;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L279 */ _L279;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L278 */ _L278;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L277 */ _L277;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L276 */ _L276;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L281 */ _L281;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L282 */ _L282;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L283 */ _L283;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L284 */ _L284;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L285 */ _L285;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L286 */ _L286;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L288 */ _L288;
  RadioMetadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L290 */ _L290;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L291 */ _L291;
  CompressedPackets_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L292 */ _L292;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L293 */ _L293;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L294 */ _L294;
  M_VERSION /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L295 */ _L295;
  Q_MEDIA /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L296 */ _L296;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L297 */ _L297;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L298 */ _L298;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L299 */ _L299;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L300 */ _L300;
  N_TOTAL /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L301 */ _L301;
  Q_DIRLRBG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L314 */ _L314;
  Q_DIRTRAIN /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L315 */ _L315;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L316 */ _L316;
  Q_NVLOCACC /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L317 */ _L317;
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L328 */ _L328;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L329 */ _L329;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L330 */ _L330;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L331 */ _L331;
  N_PIG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L332 */ _L332;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L334 */ _L334;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L335 */ _L335;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L336 */ _L336;
  A_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L337 */ _L337;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L338 */ _L338;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L339 */ _L339;
  odoMotionState_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L340 */ _L340;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L343 */ _L343;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L342 */ _L342;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L341 */ _L341;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L345 */ _L345;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L346 */ _L346;
  N_PIG /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::_L347 */ _L347;
} outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG */
extern void Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::BTM_Input */API_TrackSideInput_T_API_Msg_Pkg *BTM_Input,
  /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::last_Balise */ReceivedBG_CheckBGInputChannel_Pkg *last_Balise,
  /* Subfunctions_CheckBGInput_Pkg::Consistency_RevCheck_Track_BG::Expected_Balise_n_pig */kcg_int Expected_Balise_n_pig,
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg *outC);

extern void Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

