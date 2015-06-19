/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::valid */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L7 */ _L7;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L6 */ _L6;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L5 */ _L5;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L4 */ _L4;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L3 */ _L3;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L9 */ _L9;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L10 */ _L10;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L35 */ _L35;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::_L36 */ _L36;
} outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal */
extern void Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

extern void Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#endif /* _Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

