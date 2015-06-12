/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_
#define _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_

#include "kcg_types.h"
#include "validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIRTRAIN /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionToBG */ trainRunningDirectionToBG;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPositionKnown */ trainPositionKnown;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::mandatoryVariableQ_DIR */ mandatoryVariableQ_DIR;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::msgSrc */ msgSrc;
  NID_MESSAGE /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::nid_message */ nid_message;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inputValid */ inputValid;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outputValid */ outputValid;
  CompressedPackets_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::tmpPackets */ tmpPackets;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L6 */ _L6;
  array__18122 /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L7 */ _L7;
  array__18456 /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L8 */ _L8;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L9 */ _L9;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L10 */ _L10;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L17 */ _L17;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L16 */ _L16;
  RadioMetadata_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L15 */ _L15;
  BG_Header_T_BG_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L14 */ _L14;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L13 */ _L13;
  CompressedPackets_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L12 */ _L12;
  trainPosition_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L18 */ _L18;
  array__18459 /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L19 */ _L19;
  Q_DIRTRAIN /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L24 */ _L24;
  Q_DIRTRAIN /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L25 */ _L25;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L43 */ _L43;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L42 */ _L42;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L41 */ _L41;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L40 */ _L40;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L39 */ _L39;
  Q_DIRTRAIN /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L38 */ _L38;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L36 */ _L36;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L35 */ _L35;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L34 */ _L34;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L33 */ _L33;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L32 */ _L32;
  Q_DIRTRAIN /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L31 */ _L31;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L29 */ _L29;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L28 */ _L28;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L27 */ _L27;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L44 */ _L44;
  NID_MESSAGE /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L45 */ _L45;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L46 */ _L46;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L47 */ _L47;
  Q_DIR /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L48 */ _L48;
  Q_DIRTRAIN /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L49 */ _L49;
  Q_DIRTRAIN /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L50 */ _L50;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L51 */ _L51;
  NID_MESSAGE /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L52 */ _L52;
  kcg_int /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L53 */ _L53;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L54 */ _L54;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L55 */ _L55;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L56 */ _L56;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L57 */ _L57;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L60 */ _L60;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L62 */ _L62;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L63 */ _L63;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L64 */ _L64;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L67 */ _L67;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L66 */ _L66;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L65 */ _L65;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L68 */ _L68;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L69 */ _L69;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L72 */ _L72;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L71 */ _L71;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L70 */ _L70;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L73 */ _L73;
  NID_MESSAGE /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L76 */ _L76;
  kcg_int /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L75 */ _L75;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L74 */ _L74;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L77 */ _L77;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L78 */ _L78;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L79 */ _L79;
  array_bool_30 /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L80 */ _L80;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L81 */ _L81;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L82 */ _L82;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L83 */ _L83;
  array_bool_30 /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L84 */ _L84;
  CompressedPackets_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L98 */ _L98;
  CompressedPackets_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L99 */ _L99;
  CompressedPackets_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L100 */ _L100;
} outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
extern void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionFromBG */Q_DIRTRAIN trainRunningDirectionFromBG,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::LRBGKnown */kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::coordinateSystemAssigned */kcg_bool coordinateSystemAssigned,
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC);

extern void validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC);

#endif /* _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

