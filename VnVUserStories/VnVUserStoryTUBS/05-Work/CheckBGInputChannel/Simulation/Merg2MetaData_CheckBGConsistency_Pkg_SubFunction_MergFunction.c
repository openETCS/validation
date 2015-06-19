/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void Merg2MetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  /* 1 */
  ShiftAddress_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_1);
  /* 3 */
  FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_3);
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData */
void Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::ind */kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::acc */Metadata_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_in */Metadata_T_Common_Types_Pkg *metadata_in,
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */ Metadata_T_Common_Types_Pkg _1_metadata_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */ Metadata_T_Common_Types_Pkg metadata_out;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L12, acc);
  outC->_L11 = outC->_L12[0].nid_packet;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L14, metadata_in);
  outC->_L16 = outC->_L14[0].nid_packet;
  outC->_L17 = outC->_L11 == outC->_L16;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L22, acc);
  outC->_L19 = outC->_L22[0].q_dir;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L18, metadata_in);
  outC->_L21 = outC->_L18[0].q_dir;
  outC->_L20 = outC->_L19 == outC->_L21;
  outC->_L23 = outC->_L17 & outC->_L20;
  outC->dup = outC->_L23;
  outC->IfBlock1_clock = outC->dup;
  if (outC->IfBlock1_clock) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1_IfBlock1, acc);
    kcg_copy_Metadata_T_Common_Types_Pkg(&_1_metadata_out, &outC->_L1_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->metadata_out, &_1_metadata_out);
  }
  else {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L14_IfBlock1, metadata_in);
    outC->_L13_IfBlock1 = ind;
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L18_IfBlock1,
      (MetadataElement_T_Common_Types_Pkg *)
        &cMetaDataElement_CheckBGConsistency_Pkg);
    if ((0 <= outC->_L13_IfBlock1) & (outC->_L13_IfBlock1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L11_IfBlock1,
        &outC->_L14_IfBlock1[outC->_L13_IfBlock1]);
    }
    else {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L11_IfBlock1,
        &outC->_L18_IfBlock1);
    }
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L19_IfBlock1, acc);
    /* 3 */
    FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->_L19_IfBlock1,
      &outC->Context_3);
    outC->_L15_IfBlock1 = outC->Context_3.index;
    outC->_L20_IfBlock1 = outC->Context_3.endAddress;
    /* 1 */
    ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->_L11_IfBlock1,
      outC->_L20_IfBlock1,
      &outC->Context_1);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L26_IfBlock1,
      &outC->Context_1.metaData_Out);
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L12_IfBlock1, acc);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->_L16_IfBlock1,
      &outC->_L12_IfBlock1);
    if ((0 <= outC->_L15_IfBlock1) & (outC->_L15_IfBlock1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L16_IfBlock1[outC->_L15_IfBlock1],
        &outC->_L26_IfBlock1);
    }
    kcg_copy_Metadata_T_Common_Types_Pkg(&metadata_out, &outC->_L16_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->metadata_out, &metadata_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

