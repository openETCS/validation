/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _C_P072V1_tracksim_compr_TM_conversions_baseline2_H_
#define _C_P072V1_tracksim_compr_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P072V1_tracksim_compr::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P072V1_tracksim_compr::P005_compressed */ P005_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_DeterminePacketSizeInt_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _2_else_clock_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ error_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_11_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_13_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_14_IfBlock1;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::p_size */ p_size;
  P072V1_trackside_int_T_TM_baseline2 /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L204 */ _L204;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L206 */ _L206;
  array_int_228 /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L209 */ _L209;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L212 */ _L212;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L213 */ _L213;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L336 */ _L336;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L219 */ _L219;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L218 */ _L218;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L217 */ _L217;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L216 */ _L216;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L215 */ _L215;
  kcg_bool /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L214 */ _L214;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L371 */ _L371;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L370 */ _L370;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L369 */ _L369;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L368 */ _L368;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L367 */ _L367;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L366 */ _L366;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L365 */ _L365;
  array_int_17 /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L373 */ _L373;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L378 */ _L378;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L379 */ _L379;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L383 */ _L383;
  array_int_272 /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L384 */ _L384;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L387 */ _L387;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L392 */ _L392;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L391 */ _L391;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L390 */ _L390;
  kcg_int /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L389 */ _L389;
  X_TEXT_trackside_T_TM /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L388 */ _L388;
  Q_DIR /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L393 */ _L393;
} outC_C_P072V1_tracksim_compr_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P072V1_tracksim_compr */
extern void C_P072V1_tracksim_compr_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P072V1_tracksim_compr::P072_from_track */ P072V1_trackside_int_T_TM_baseline2 *P072_from_track,
  outC_C_P072V1_tracksim_compr_TM_conversions_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P072V1_tracksim_compr_reset_TM_conversions_baseline2(
  outC_C_P072V1_tracksim_compr_TM_conversions_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P072V1_tracksim_compr_init_TM_conversions_baseline2(
  outC_C_P072V1_tracksim_compr_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _C_P072V1_tracksim_compr_TM_conversions_baseline2_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_P072V1_tracksim_compr_TM_conversions_baseline2.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

