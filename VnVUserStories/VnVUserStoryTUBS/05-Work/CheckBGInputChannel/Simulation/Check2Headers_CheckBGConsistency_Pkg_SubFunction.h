/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Check2Headers_CheckBGConsistency_Pkg_SubFunction_H_
#define _Check2Headers_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"
#include "Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::isConsistent */ isConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 1 */ _1_Context_1;
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction /* 2 */ Context_2;
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::m_dup_1 */ m_dup_1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::n_pig_1 */ n_pig_1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::n_pig_2 */ n_pig_2;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::m_dup_2 */ m_dup_2;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L1 */ _L1;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L3 */ _L3;
  Q_UPDOWN /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L13 */ _L13;
  M_VERSION /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L12 */ _L12;
  Q_MEDIA /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L11 */ _L11;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L10 */ _L10;
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L9 */ _L9;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L8 */ _L8;
  M_MCOUNT /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L7 */ _L7;
  NID_C /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L6 */ _L6;
  NID_BG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L5 */ _L5;
  Q_LINK /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L4 */ _L4;
  Q_UPDOWN /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L14 */ _L14;
  M_VERSION /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L15 */ _L15;
  Q_MEDIA /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L16 */ _L16;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L17 */ _L17;
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L18 */ _L18;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L19 */ _L19;
  M_MCOUNT /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L20 */ _L20;
  NID_C /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L21 */ _L21;
  NID_BG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L22 */ _L22;
  Q_LINK /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L23 */ _L23;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L24 */ _L24;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L25 */ _L25;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L26 */ _L26;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L27 */ _L27;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L28 */ _L28;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L29 */ _L29;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L30 */ _L30;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L31 */ _L31;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L32 */ _L32;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L33 */ _L33;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L35 */ _L35;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L36 */ _L36;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L37 */ _L37;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L38 */ _L38;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L39 */ _L39;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L40 */ _L40;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::_L41 */ _L41;
} outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::Check2Headers */
extern void Check2Headers_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_1 */TelegramHeader_T_BG_Types_Pkg *header_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_2 */TelegramHeader_T_BG_Types_Pkg *header_2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC);

extern void Check2Headers_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _Check2Headers_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Check2Headers_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

