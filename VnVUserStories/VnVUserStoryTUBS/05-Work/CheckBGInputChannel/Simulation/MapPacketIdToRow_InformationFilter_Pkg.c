/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"

void MapPacketIdToRow_reset_InformationFilter_Pkg(
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC)
{
}

/* InformationFilter_Pkg::MapPacketIdToRow */
void MapPacketIdToRow_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MapPacketIdToRow::inPacketId */kcg_int inPacketId,
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC)
{
  outC->_L1 = inPacketId;
  outC->outRow = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MapPacketIdToRow_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

