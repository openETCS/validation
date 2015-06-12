/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L7 */ _L7;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L6 */ _L6;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L5 */ _L5;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L4 */ _L4;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L3 */ _L3;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L9 */ _L9;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L10 */ _L10;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L17 */ _L17;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L15 */ _L15;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L14 */ _L14;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L13 */ _L13;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L12 */ _L12;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L11 */ _L11;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L24 */ _L24;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L23 */ _L23;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L19 */ _L19;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L25 */ _L25;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L26 */ _L26;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L29 */ _L29;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L28 */ _L28;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L27 */ _L27;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L32 */ _L32;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L31 */ _L31;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L30 */ _L30;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L33 */ _L33;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L34 */ _L34;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L35 */ _L35;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L36 */ _L36;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L37 */ _L37;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L38 */ _L38;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L39 */ _L39;
} outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal */
extern void Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

extern void Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#endif /* _Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

