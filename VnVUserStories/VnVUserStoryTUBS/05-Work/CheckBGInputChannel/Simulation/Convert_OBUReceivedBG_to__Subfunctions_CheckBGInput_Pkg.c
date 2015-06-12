/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg.h"

void Convert_OBUReceivedBG_to__reset_Subfunctions_CheckBGInput_Pkg(
  outC_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg *outC)
{
  /* 1 */
  Decop_OutputMessage_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_1);
}

/* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG */
void Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::OBU_Received */ReceivedBG_CheckBGInputChannel_Pkg *OBU_Received,
  outC_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg *outC)
{
  kcg_bool noname;
  MsgSource_T_Common_Types_Pkg _1_noname;
  kcg_bool _2_noname;
  Q_UPDOWN _3_noname;
  kcg_int _4_noname;
  M_MCOUNT _5_noname;
  NID_C _6_noname;
  NID_BG _7_noname;
  Metadata_T_Common_Types_Pkg _8_noname;
  Q_LINK _9_noname;
  
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->_L1, OBU_Received);
  outC->_L7 = outC->_L1.TimeStamp;
  outC->_L6 = outC->_L1.consistent;
  outC->_L5 = outC->_L1.complete;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L4, &outC->_L1.BG);
  outC->_L3 = outC->_L1.valid;
  outC->_L8 = kcg_false;
  outC->_L9 = kcg_true;
  outC->_L10 = outC->_L5 & outC->_L6;
  outC->_L28 = - outC->_L7;
  /* 1 */
  Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg(
    &outC->_L4,
    &outC->Context_1);
  outC->_L11 = outC->Context_1.valid;
  outC->_L12 = outC->Context_1.Source;
  outC->_L13 = outC->Context_1.validBG;
  outC->_L14 = outC->Context_1.UPDOWN;
  outC->_L15 = outC->Context_1.TOTAL;
  outC->_L16 = outC->Context_1.MCOUNT;
  outC->_L17 = outC->Context_1.NIDC;
  outC->_L18 = outC->Context_1.NIDBG;
  outC->_L19 = outC->Context_1.LINK;
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L20,
    &outC->Context_1.PacketHeader);
  outC->_L21 = outC->Context_1.LocNominal;
  outC->_L22 = outC->Context_1.LocMin;
  outC->_L23 = outC->Context_1.LocMax;
  outC->_L25 = - outC->_L21;
  outC->_L26 = - outC->_L22;
  outC->_L27 = - outC->_L23;
  outC->_L24.o_nominal = outC->_L25;
  outC->_L24.o_min = outC->_L26;
  outC->_L24.o_max = outC->_L27;
  outC->_L2.valid = outC->_L3;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2.BG, &outC->_L4);
  outC->_L2.FromTrack = outC->_L8;
  outC->_L2.FromOBU = outC->_L9;
  outC->_L2.CorrectData = outC->_L10;
  outC->_L2.Delay = outC->_L28;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L2.LocDiff,
    &outC->_L24);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->checkedBG, &outC->_L2);
  _9_noname = outC->_L19;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_8_noname, &outC->_L20);
  _7_noname = outC->_L18;
  _6_noname = outC->_L17;
  _5_noname = outC->_L16;
  _4_noname = outC->_L15;
  _3_noname = outC->_L14;
  _2_noname = outC->_L13;
  _1_noname = outC->_L12;
  noname = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

