/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

void Check2N_PIGs_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  /* 1 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_6_Context_1);
  /* 2 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_5_Context_2);
  /* 1 */
  Dif1Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_4_Context_1);
  /* 1 */
  Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_3_Context_1);
  /* 1 */
  Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_1);
  /* 2 */
  Dif1Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_2_Context_2);
  /* 2 */
  Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_1_Context_2);
  /* 2 */
  Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->Context_2);
}

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs */
void Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_1 */N_PIG n_pig_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_2 */N_PIG n_pig_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L45 = crcCheck_1;
  outC->_L44 = crcCheck_2;
  outC->_L43 = crcCheck_1;
  outC->_L42 = crcCheck_2;
  outC->_L41 = crcCheck_1;
  outC->_L40 = crcCheck_2;
  outC->_L39 = crcCheck_2;
  outC->_L38 = crcCheck_1;
  outC->_L37 = crcCheck_2;
  outC->_L36 = crcCheck_1;
  outC->_L35 = crcCheck_2;
  outC->_L34 = crcCheck_1;
  outC->_L33 = m_dup_1;
  outC->_L32 = m_dup_2;
  outC->_L31 = m_dup_1;
  outC->_L30 = m_dup_2;
  outC->_L29 = m_dup_2;
  outC->_L28 = m_dup_1;
  /* 2 */
  Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L32,
    outC->_L33,
    outC->_L44,
    outC->_L45,
    &outC->Context_2);
  outC->_L27 = outC->Context_2.valid;
  /* 2 */
  Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L30,
    outC->_L31,
    outC->_L42,
    outC->_L43,
    &outC->_1_Context_2);
  outC->_L26 = outC->_1_Context_2.valid;
  /* 2 */
  Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L29,
    outC->_L28,
    outC->_L40,
    outC->_L41,
    &outC->_2_Context_2);
  outC->_L25 = outC->_2_Context_2.valid;
  outC->_L24 = m_dup_2;
  outC->_L23 = m_dup_1;
  /* 1 */
  Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L23,
    outC->_L24,
    outC->_L38,
    outC->_L39,
    &outC->Context_1);
  outC->_L22 = outC->Context_1.valid;
  outC->_L21 = m_dup_2;
  outC->_L20 = m_dup_1;
  outC->_L19 = m_dup_2;
  outC->_L18 = m_dup_1;
  /* 1 */
  Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L20,
    outC->_L21,
    outC->_L36,
    outC->_L37,
    &outC->_3_Context_1);
  outC->_L17 = outC->_3_Context_1.valid;
  outC->_L16 = kcg_false;
  /* 1 */
  Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L18,
    outC->_L19,
    outC->_L34,
    outC->_L35,
    &outC->_4_Context_1);
  outC->_L15 = outC->_4_Context_1.valid;
  outC->_L2 = n_pig_2;
  /* 2 */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(outC->_L2, &outC->_5_Context_2);
  outC->_L4 = outC->_5_Context_2.n_pig2int;
  outC->_L1 = n_pig_1;
  /* 1 */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(outC->_L1, &outC->_6_Context_1);
  outC->_L3 = outC->_6_Context_1.n_pig2int;
  outC->_L5 = outC->_L4 - outC->_L3;
  switch (outC->_L5) {
    case 1 :
      outC->_L7 = outC->_L15;
      break;
    case 2 :
      outC->_L7 = outC->_L17;
      break;
    case 3 :
      outC->_L7 = outC->_L22;
      break;
    case - 1 :
      outC->_L7 = outC->_L25;
      break;
    case - 2 :
      outC->_L7 = outC->_L26;
      break;
    case - 3 :
      outC->_L7 = outC->_L27;
      break;
    
    default :
      outC->_L7 = outC->_L16;
  }
  outC->valid = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

