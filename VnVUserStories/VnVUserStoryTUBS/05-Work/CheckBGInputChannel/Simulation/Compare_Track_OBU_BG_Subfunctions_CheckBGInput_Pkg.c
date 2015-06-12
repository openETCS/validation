/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg.h"

void Compare_Track_OBU_BG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* 1 */
  Decop_OutputMessage_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_1);
  /* 2 */
  Decop_OutputMessage_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_2);
}

/* Subfunctions_CheckBGInput_Pkg::Compare_Track_OBU_BG */
void Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Compare_Track_OBU_BG::Track_BG */checkedBG_CheckBGInputChannel_Pkg *Track_BG,
  /* Subfunctions_CheckBGInput_Pkg::Compare_Track_OBU_BG::OBU_BG */checkedBG_CheckBGInputChannel_Pkg *OBU_BG,
  outC_Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg *outC)
{
  Q_UPDOWN noname;
  Metadata_T_Common_Types_Pkg _1_noname;
  Q_LINK _2_noname;
  kcg_int _3_noname;
  M_MCOUNT _4_noname;
  NID_C _5_noname;
  Q_UPDOWN _6_noname;
  kcg_int _7_noname;
  M_MCOUNT _8_noname;
  NID_C _9_noname;
  Metadata_T_Common_Types_Pkg _10_noname;
  Q_LINK _11_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _12_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _13_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _14_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _15_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _16_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _17_noname;
  
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L4, Track_BG);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L63,
    &outC->_L4.LocDiff);
  outC->_L62 = outC->_L4.Delay;
  outC->_L61 = outC->_L4.CorrectData;
  outC->_L60 = outC->_L4.FromOBU;
  outC->_L59 = outC->_L4.FromTrack;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L58, &outC->_L4.BG);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L5, OBU_BG);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L70,
    &outC->_L5.LocDiff);
  outC->_L69 = outC->_L5.Delay;
  outC->_L68 = outC->_L5.CorrectData;
  outC->_L67 = outC->_L5.FromOBU;
  outC->_L66 = outC->_L5.FromTrack;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L65, &outC->_L5.BG);
  outC->_L93 = outC->_L63.o_max;
  outC->_L92 = outC->_L63.o_min;
  outC->_L99 = outC->_L70.o_max;
  outC->_L98 = outC->_L70.o_min;
  /* 2 */
  Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg(
    &outC->_L65,
    &outC->Context_2);
  outC->_L30 = outC->Context_2.valid;
  outC->_L31 = outC->Context_2.Source;
  outC->_L32 = outC->Context_2.validBG;
  outC->_L33 = outC->Context_2.UPDOWN;
  outC->_L34 = outC->Context_2.TOTAL;
  outC->_L35 = outC->Context_2.MCOUNT;
  outC->_L36 = outC->Context_2.NIDC;
  outC->_L37 = outC->Context_2.NIDBG;
  outC->_L38 = outC->Context_2.LINK;
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L39,
    &outC->Context_2.PacketHeader);
  outC->_L40 = outC->Context_2.LocNominal;
  outC->_L41 = outC->Context_2.LocMin;
  outC->_L42 = outC->Context_2.LocMax;
  _17_noname = outC->_L42;
  _16_noname = outC->_L41;
  _15_noname = outC->_L40;
  /* 1 */
  Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg(
    &outC->_L58,
    &outC->Context_1);
  outC->_L17 = outC->Context_1.valid;
  outC->_L18 = outC->Context_1.Source;
  outC->_L19 = outC->Context_1.validBG;
  outC->_L20 = outC->Context_1.UPDOWN;
  outC->_L21 = outC->Context_1.TOTAL;
  outC->_L22 = outC->Context_1.MCOUNT;
  outC->_L23 = outC->Context_1.NIDC;
  outC->_L24 = outC->Context_1.NIDBG;
  outC->_L25 = outC->Context_1.LINK;
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L26,
    &outC->Context_1.PacketHeader);
  outC->_L27 = outC->Context_1.LocNominal;
  outC->_L28 = outC->Context_1.LocMin;
  outC->_L29 = outC->Context_1.LocMax;
  _14_noname = outC->_L27;
  _13_noname = outC->_L29;
  _12_noname = outC->_L28;
  outC->_L101 = outC->_L93 + outC->_L99;
  outC->_L100 = outC->_L92 + outC->_L98;
  outC->_L97 = outC->_L70.o_nominal;
  outC->_L91 = outC->_L63.o_nominal;
  outC->_L80 = outC->_L91 + outC->_L97;
  _11_noname = outC->_L25;
  outC->_L79 = outC->_L62 + outC->_L69;
  outC->_L76 = outC->_L60 | outC->_L67;
  outC->_L75 = outC->_L59 | outC->_L66;
  outC->_L57 = outC->_L4.valid;
  outC->_L64 = outC->_L5.valid;
  outC->_L71 = outC->_L57 == outC->_L64;
  outC->_L43 = outC->_L17 == outC->_L30;
  outC->_L45 = outC->_L18 == outC->_L31;
  outC->_L46 = outC->_L19 == outC->_L32;
  outC->_L47 = outC->_L24 == outC->_L37;
  outC->_L73 = outC->_L71 & outC->_L43 & outC->_L45 & outC->_L46 & outC->_L47;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->OBU_Received_BG,
    &outC->_L65);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L72,
    &outC->OBU_Received_BG);
  outC->_L56.o_nominal = outC->_L80;
  outC->_L56.o_min = outC->_L100;
  outC->_L56.o_max = outC->_L101;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_10_noname, &outC->_L26);
  _9_noname = outC->_L23;
  _8_noname = outC->_L22;
  _7_noname = outC->_L21;
  _6_noname = outC->_L20;
  _5_noname = outC->_L36;
  _4_noname = outC->_L35;
  _3_noname = outC->_L34;
  _2_noname = outC->_L38;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_1_noname, &outC->_L39);
  noname = outC->_L33;
  outC->_L48 = kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L58,
      &outC->_L65);
  outC->_L49 = outC->_L61 == outC->_L68;
  outC->_L51 = outC->_L48 & outC->_L49;
  outC->_L44.valid = outC->_L73;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L44.BG, &outC->_L72);
  outC->_L44.FromTrack = outC->_L75;
  outC->_L44.FromOBU = outC->_L76;
  outC->_L44.CorrectData = outC->_L51;
  outC->_L44.Delay = outC->_L79;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L44.LocDiff,
    &outC->_L56);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->Compared_BG, &outC->_L44);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

