/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Listen_on_OBU_CheckBGInputChannel_Pkg_H_
#define _Listen_on_OBU_CheckBGInputChannel_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BGs */ out_OBU_BGs;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_new_OBU_BG */ out_new_OBU_BG;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BG */ out_OBU_BG;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_OBU::count_OBU_BGs */ count_OBU_BGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM3 /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SM3_state_nxt;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SM3_reset_act;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SM3_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Wait::_L4 */ _L4_SM3_Wait;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Wait::_L3 */ _L3_SM3_Wait;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Wait::_L2 */ _L2_SM3_Wait;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L38 */ _L38_SM3_Receive_outputMessage;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L37 */ _L37_SM3_Receive_outputMessage;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L30 */ _L30_SM3_Receive_outputMessage;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L24 */ _L24_SM3_Receive_outputMessage;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L10 */ _L10_SM3_Receive_outputMessage;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L8 */ _L8_SM3_Receive_outputMessage;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L6 */ _L6_SM3_Receive_outputMessage;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L5 */ _L5_SM3_Receive_outputMessage;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L2 */ _L2_SM3_Receive_outputMessage;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage::_L1 */ _L1_SM3_Receive_outputMessage;
  SSM_ST_SM3 /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SM3_state_sel;
  SSM_ST_SM3 /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SM3_state_act;
  SSM_TR_SM3 /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SM3_fired_strong;
  SSM_TR_SM3 /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SM3_fired;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::Cons_outMsg_valid */ Cons_outMsg_valid;
  ReceivedMessage_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::_L26 */ _L26;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::_L25 */ _L25;
  BG_Header_T_BG_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::_L24 */ _L24;
  RadioMetadata_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::_L23 */ _L23;
  MsgSource_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_OBU::_L22 */ _L22;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_OBU::_L21 */ _L21;
} outC_Listen_on_OBU_CheckBGInputChannel_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGInputChannel_Pkg::Listen_on_OBU */
extern void Listen_on_OBU_CheckBGInputChannel_Pkg(
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::Cons_outputMessage */ReceivedMessage_T_Common_Types_Pkg *Cons_outputMessage,
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  outC_Listen_on_OBU_CheckBGInputChannel_Pkg *outC);

extern void Listen_on_OBU_reset_CheckBGInputChannel_Pkg(
  outC_Listen_on_OBU_CheckBGInputChannel_Pkg *outC);

#endif /* _Listen_on_OBU_CheckBGInputChannel_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Listen_on_OBU_CheckBGInputChannel_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

