/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _C_P027V1_tracksim_compr_o_TM_conversions_baseline2_H_
#define _C_P027V1_tracksim_compr_o_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_compressed */ P027V1_sections_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_DeterminePacketSizeInt_TM_lib_internal /* 1 */ _1_Context_1;
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::p_size */ p_size;
  P027V1_section_int_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L204 */ _L204;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L206 */ _L206;
  array_int_432 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L209 */ _L209;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L212 */ _L212;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L213 */ _L213;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L336 */ _L336;
  P027V1_trackside_qdifflist_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L217 */ _L217;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L216 */ _L216;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L215 */ _L215;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L214 */ _L214;
  array_int_4 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L373 */ _L373;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L383 */ _L383;
  array_int_68 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L385 */ _L385;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L387 */ _L387;
  Q_DIR /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L422 */ _L422;
  kcg_bool /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L423 */ _L423;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L424 */ _L424;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L425 */ _L425;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L426 */ _L426;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L429 */ _L429;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L430 */ _L430;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L431 */ _L431;
} outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section */
extern void C_P027V1_tracksim_compr_o_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::i */ kcg_int i1,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_from_track */ P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::meta_first_section_in */ kcg_int meta_first_section_in,
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P027V1_tracksim_compr_o_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_tracksim_compr_o_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _C_P027V1_tracksim_compr_o_TM_conversions_baseline2_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_compr_o_TM_conversions_baseline2.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

