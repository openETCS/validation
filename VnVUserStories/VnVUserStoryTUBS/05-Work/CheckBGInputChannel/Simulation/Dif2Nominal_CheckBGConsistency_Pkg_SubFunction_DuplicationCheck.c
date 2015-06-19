/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

void Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal */
void Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L38 = crcCheck_2;
  outC->_L29 = m_dup_2;
  outC->_L27 = M_DUP_No_duplicates;
  outC->_L28 = outC->_L29 == outC->_L27;
  outC->_L39 = outC->_L38 & outC->_L28;
  outC->_L37 = crcCheck_2;
  outC->_L36 = crcCheck_2;
  outC->_L35 = crcCheck_1;
  outC->_L19 = m_dup_1;
  outC->_L23 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L24 = outC->_L19 == outC->_L23;
  outC->_L32 = m_dup_2;
  outC->_L30 = _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L31 = outC->_L32 == outC->_L30;
  outC->_L33 = outC->_L39 | outC->_L31;
  outC->_L34 = outC->_L24 & outC->_L33;
  outC->_L26 = M_DUP_No_duplicates;
  outC->_L3 = m_dup_1;
  outC->_L7 = M_DUP_No_duplicates;
  outC->_L4 = outC->_L3 == outC->_L7;
  outC->_L5 = m_dup_2;
  outC->_L9 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L6 = outC->_L5 == outC->_L9;
  outC->_L10 = outC->_L4 & outC->_L6 & outC->_L35 & outC->_L36;
  outC->_L14 = m_dup_1;
  outC->_L13 = _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L17 = outC->_L14 == outC->_L13;
  outC->_L11 = m_dup_2;
  outC->_L15 = outC->_L11 == outC->_L26;
  outC->_L12 = outC->_L17 & outC->_L15 & outC->_L37;
  outC->_L25 = outC->_L10 | outC->_L12 | outC->_L34;
  outC->valid = outC->_L25;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

