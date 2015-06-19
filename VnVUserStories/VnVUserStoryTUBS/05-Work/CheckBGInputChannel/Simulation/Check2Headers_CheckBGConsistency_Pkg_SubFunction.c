/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Headers_CheckBGConsistency_Pkg_SubFunction.h"

void Check2Headers_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* 1 */
  Check2N_PIGs_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    &outC->_1_Context_1);
  /* 2 */
  CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_2);
  /* 1 */
  CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::Check2Headers */
void Check2Headers_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_1 */TelegramHeader_T_BG_Types_Pkg *header_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_1 */kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_2 */TelegramHeader_T_BG_Types_Pkg *header_2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_2 */kcg_bool crcCheck_2,
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC)
{
  M_MCOUNT noname;
  M_MCOUNT _1_noname;
  
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L1, header_1);
  outC->_L4 = outC->_L1.q_link;
  outC->_L5 = outC->_L1.nid_bg;
  outC->_L6 = outC->_L1.nid_c;
  outC->_L7 = outC->_L1.m_mcount;
  outC->_L8 = outC->_L1.m_dup;
  outC->_L9 = outC->_L1.n_total;
  outC->_L10 = outC->_L1.n_pig;
  outC->_L11 = outC->_L1.q_media;
  outC->_L12 = outC->_L1.m_version;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L3, header_2);
  outC->_L23 = outC->_L3.q_link;
  outC->_L22 = outC->_L3.nid_bg;
  outC->_L21 = outC->_L3.nid_c;
  outC->_L20 = outC->_L3.m_mcount;
  outC->_L19 = outC->_L3.m_dup;
  outC->_L18 = outC->_L3.n_total;
  outC->_L17 = outC->_L3.n_pig;
  outC->_L16 = outC->_L3.q_media;
  outC->_L15 = outC->_L3.m_version;
  outC->_L41 = crcCheck_2;
  outC->_L40 = crcCheck_1;
  /* 1 */
  CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L1,
    &outC->Context_1);
  outC->_L32 = outC->Context_1.isConsistent;
  outC->_L13 = outC->_L1.q_updown;
  outC->_L14 = outC->_L3.q_updown;
  outC->_L24 = outC->_L13 == outC->_L14;
  outC->_L25 = outC->_L12 == outC->_L15;
  outC->_L26 = outC->_L11 == outC->_L16;
  outC->_L30 = outC->_L9 == outC->_L18;
  outC->_L29 = outC->_L6 == outC->_L21;
  outC->_L28 = outC->_L5 == outC->_L22;
  outC->_L27 = outC->_L4 == outC->_L23;
  /* 2 */
  CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L3,
    &outC->Context_2);
  outC->_L33 = outC->Context_2.isConsistent;
  outC->n_pig_1 = outC->_L10;
  outC->_L37 = outC->n_pig_1;
  outC->m_dup_1 = outC->_L8;
  outC->_L35 = outC->m_dup_1;
  outC->n_pig_2 = outC->_L17;
  outC->_L38 = outC->n_pig_2;
  outC->m_dup_2 = outC->_L19;
  outC->_L36 = outC->m_dup_2;
  /* 1 */
  Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
    outC->_L37,
    outC->_L35,
    outC->_L38,
    outC->_L36,
    outC->_L40,
    outC->_L41,
    &outC->_1_Context_1);
  outC->_L39 = outC->_1_Context_1.valid;
  outC->_L31 = outC->_L32 & outC->_L24 & outC->_L25 & outC->_L26 & outC->_L30 &
    outC->_L29 & outC->_L28 & outC->_L27 & outC->_L33 & outC->_L39;
  outC->isConsistent = outC->_L31;
  _1_noname = outC->_L7;
  noname = outC->_L20;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Check2Headers_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

