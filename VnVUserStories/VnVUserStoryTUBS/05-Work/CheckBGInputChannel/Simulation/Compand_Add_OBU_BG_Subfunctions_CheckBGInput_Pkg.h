/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg_H_
#define _Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::Add_Command */ Add_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg /* 2 */ Context_2;
  outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L5 */ _L5;
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L4 */ _L4;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L17 */ _L17;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L18 */ _L18;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L19 */ _L19;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L20 */ _L20;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L21 */ _L21;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L22 */ _L22;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L23 */ _L23;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L24 */ _L24;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L25 */ _L25;
  Metadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L26 */ _L26;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L27 */ _L27;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L28 */ _L28;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L29 */ _L29;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L30 */ _L30;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L31 */ _L31;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L32 */ _L32;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L33 */ _L33;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L34 */ _L34;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L35 */ _L35;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L36 */ _L36;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L37 */ _L37;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L38 */ _L38;
  Metadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L39 */ _L39;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L40 */ _L40;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L41 */ _L41;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L42 */ _L42;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L43 */ _L43;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L45 */ _L45;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L46 */ _L46;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L47 */ _L47;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L57 */ _L57;
  ReceivedMessage_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L58 */ _L58;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L59 */ _L59;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L60 */ _L60;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L61 */ _L61;
  delaytime_T_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L62 */ _L62;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L63 */ _L63;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L64 */ _L64;
  ReceivedMessage_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L65 */ _L65;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L66 */ _L66;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L67 */ _L67;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L68 */ _L68;
  delaytime_T_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L69 */ _L69;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L70 */ _L70;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L71 */ _L71;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L73 */ _L73;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L75 */ _L75;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L76 */ _L76;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L102 */ _L102;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L103 */ _L103;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::_L104 */ _L104;
} outC_Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG */
extern void Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::Stored_BG */checkedBG_CheckBGInputChannel_Pkg *Stored_BG,
  /* Subfunctions_CheckBGInput_Pkg::Compand_Add_OBU_BG::OBU_BG */checkedBG_CheckBGInputChannel_Pkg *OBU_BG,
  outC_Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg *outC);

extern void Compand_Add_OBU_BG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

