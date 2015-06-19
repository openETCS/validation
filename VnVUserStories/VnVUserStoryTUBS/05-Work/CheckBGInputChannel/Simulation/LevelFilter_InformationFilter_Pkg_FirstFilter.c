/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"

void LevelFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  /* 1 */
  CheckLevelExceptions_reset_InformationFilter_Pkg_FirstFilter(
    &outC->_2_Context_1);
  /* 1 */ MapLevelToColumn_reset_InformationFilter_Pkg(&outC->_1_Context_1);
  /* 1 */ MapPacketIdToRow_reset_InformationFilter_Pkg(&outC->Context_1);
}

/* InformationFilter_Pkg::FirstFilter::LevelFilter */
void LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */MsgSource_T_Common_Types_Pkg inPacketOrigin,
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  kcg_bool noname;
  
  outC->_L25 = inPacketOrigin;
  outC->_L14 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L11 = outC->_L25 == outC->_L14;
  kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(
    &outC->_L5,
    (LevelDecisionTableType_DataDictionary_Pkg *)
      &LevelDecisionTableFromRBC_DataDictionary_Pkg);
  outC->_L18 = inPacketId;
  /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(outC->_L18, &outC->Context_1);
  outC->_L17 = outC->Context_1.outRow;
  outC->row = outC->_L17;
  outC->_L21 = outC->row;
  outC->_L2 = inLevel;
  /* 1 */
  MapLevelToColumn_InformationFilter_Pkg(outC->_L2, &outC->_1_Context_1);
  outC->_L22 = outC->_1_Context_1.outColumn;
  outC->column = outC->_L22;
  outC->_L24 = outC->column;
  if ((0 <= outC->_L21) & (outC->_L21 < 256) & ((0 <= outC->_L24) &
      (outC->_L24 < 5))) {
    outC->_L6 = outC->_L5[outC->_L21][outC->_L24];
  }
  else {
    outC->_L6 = LD_Invalid_DataDictionary_Pkg;
  }
  kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(
    &outC->_L4,
    (LevelDecisionTableType_DataDictionary_Pkg *)
      &LevelDecisionTableFromBalise_DataDictionary_Pkg);
  outC->_L20 = outC->row;
  outC->_L23 = outC->column;
  if ((0 <= outC->_L20) & (outC->_L20 < 256) & ((0 <= outC->_L23) &
      (outC->_L23 < 5))) {
    outC->_L3 = outC->_L4[outC->_L20][outC->_L23];
  }
  else {
    outC->_L3 = LD_Invalid_DataDictionary_Pkg;
  }
  if (outC->_L11) {
    outC->_L10 = outC->_L6;
  }
  else {
    outC->_L10 = outC->_L3;
  }
  outC->_L26 = kcg_false;
  outC->_L27 = 0;
  /* 1 */
  CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
    outC->_L10,
    outC->_L26,
    outC->_L26,
    outC->_L26,
    outC->_L26,
    outC->_L27,
    outC->_L26,
    &outC->_2_Context_1);
  outC->_L16 = outC->_2_Context_1.outAccept;
  outC->_L28 = outC->_2_Context_1.outStoreInTransitionBuffer;
  noname = outC->_L28;
  outC->outPacketAccept = outC->_L16;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

