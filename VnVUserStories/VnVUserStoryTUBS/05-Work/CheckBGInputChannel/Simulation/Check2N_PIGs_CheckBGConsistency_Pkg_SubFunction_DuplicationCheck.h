/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 1 */ _6_Context_1;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 2 */ _5_Context_2;
  outC_Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 1 */ _4_Context_1;
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 1 */ _3_Context_1;
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 1 */ Context_1;
  outC_Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 2 */ _2_Context_2;
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 2 */ _1_Context_2;
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L1 */ _L1;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L2 */ _L2;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L3 */ _L3;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L4 */ _L4;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L5 */ _L5;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L7 */ _L7;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L15 */ _L15;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L16 */ _L16;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L17 */ _L17;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L18 */ _L18;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L19 */ _L19;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L21 */ _L21;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L20 */ _L20;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L22 */ _L22;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L24 */ _L24;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L23 */ _L23;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L27 */ _L27;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L26 */ _L26;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L25 */ _L25;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L29 */ _L29;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L28 */ _L28;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L31 */ _L31;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L30 */ _L30;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L33 */ _L33;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L32 */ _L32;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L34 */ _L34;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L35 */ _L35;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L36 */ _L36;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L37 */ _L37;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L38 */ _L38;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L39 */ _L39;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L40 */ _L40;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L41 */ _L41;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L42 */ _L42;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L43 */ _L43;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L44 */ _L44;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::_L45 */ _L45;
} outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs */
extern void Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_1 */N_PIG n_pig_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_2 */N_PIG n_pig_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

extern void Check2N_PIGs_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#endif /* _Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

