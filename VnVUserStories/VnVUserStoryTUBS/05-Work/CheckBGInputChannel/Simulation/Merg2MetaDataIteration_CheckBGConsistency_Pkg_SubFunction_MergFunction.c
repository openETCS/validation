/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void Merg2MetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */
    Merg2MetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_1[i]);
  }
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration */
void Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::metaData */Metadata_T_Common_Types_Pkg *metaData,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::telegram */Telegram_T_BG_Types_Pkg *telegram,
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_int i1;
  Metadata_T_Common_Types_Pkg tmp;
  kcg_int i;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, telegram);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->_L18.packets.PacketHeaders);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L12, metaData);
  for (i1 = 0; i1 < 30; i1++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L17[i1], &outC->_L19);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L11, &outC->_L12);
  for (i = 0; i < 30; i++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&tmp, &outC->_L11);
    /* 1 */
    Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      i,
      &tmp,
      &outC->_L17[i],
      &outC->Context_1[i]);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->_L11,
      &outC->Context_1[i].metadata_out);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->mergedMetaData, &outC->_L11);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

