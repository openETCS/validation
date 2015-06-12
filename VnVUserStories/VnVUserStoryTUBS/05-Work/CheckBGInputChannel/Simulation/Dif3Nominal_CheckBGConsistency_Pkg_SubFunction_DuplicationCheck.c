/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

void Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal */
void Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_1 */M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_2 */M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC)
{
  outC->_L36 = crcCheck_2;
  outC->_L35 = crcCheck_1;
  outC->_L3 = m_dup_1;
  outC->_L7 = _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
  outC->_L4 = outC->_L3 == outC->_L7;
  outC->_L5 = m_dup_2;
  outC->_L9 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
  outC->_L6 = outC->_L5 == outC->_L9;
  outC->_L10 = outC->_L4 & outC->_L6 & outC->_L35 & outC->_L36;
  outC->valid = outC->_L10;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

