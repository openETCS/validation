/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

void IsBG_announced_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* 1 */
  isStored_iter_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
void IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */ kcg_bool _2_isAnnounced;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */ Q_LINKORIENTATION _1_q_linkorintation;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */ kcg_bool isAnnounced;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */ Q_LINKORIENTATION q_linkorintation;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L15, storedBGs);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L16, recivedBG_header);
  /* 1 */
  isStored_iter_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L15,
    &outC->_L16,
    &outC->Context_1);
  outC->_L17 = outC->Context_1.index;
  outC->_L18 = outC->Context_1.isStored;
  outC->isStored = outC->_L18;
  outC->IfBlock1_clock = outC->isStored;
  if (outC->IfBlock1_clock) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L1_IfBlock1,
      storedBGs);
  }
  outC->indexLocal = outC->_L17;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = outC->indexLocal;
    if ((0 <= outC->_L3_IfBlock1) & (outC->_L3_IfBlock1 < 8)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L2_IfBlock1,
        &outC->_L1_IfBlock1[outC->_L3_IfBlock1]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L2_IfBlock1,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    outC->_L5_IfBlock1 =
      outC->_L2_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
    _1_q_linkorintation = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = outC->_L2_IfBlock1.infoFromLinking.valid;
    _2_isAnnounced = outC->_L4_IfBlock1;
    outC->isAnnounced = _2_isAnnounced;
    outC->q_linkorintation = _1_q_linkorintation;
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L15_IfBlock1,
      storedBGs);
    outC->_L12_IfBlock1 = outC->indexLocal;
    if ((0 <= outC->_L12_IfBlock1) & (outC->_L12_IfBlock1 < 8)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L13_IfBlock1,
        &outC->_L15_IfBlock1[outC->_L12_IfBlock1]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L13_IfBlock1,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    outC->_L14_IfBlock1 =
      outC->_L13_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
    q_linkorintation = outC->_L14_IfBlock1;
    outC->_L11_IfBlock1 = kcg_false;
    isAnnounced = outC->_L11_IfBlock1;
    outC->isAnnounced = isAnnounced;
    outC->q_linkorintation = q_linkorintation;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsBG_announced_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

