/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Listen_on_OBU_CheckBGInputChannel_Pkg.h"

void Listen_on_OBU_reset_CheckBGInputChannel_Pkg(
  outC_Listen_on_OBU_CheckBGInputChannel_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CheckBGInputChannel_Pkg::Listen_on_OBU */
void Listen_on_OBU_CheckBGInputChannel_Pkg(
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::Cons_outputMessage */ReceivedMessage_T_Common_Types_Pkg *Cons_outputMessage,
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  outC_Listen_on_OBU_CheckBGInputChannel_Pkg *outC)
{
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_TR_SM3 _7_SM3_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ kcg_bool _6_SM3_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_ST_SM3 _5_SM3_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::count_OBU_BGs */ kcg_int _4_count_OBU_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BG */ ReceivedBG_CheckBGInputChannel_Pkg _3_out_OBU_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_new_OBU_BG */ kcg_bool _2_out_new_OBU_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg _1_out_OBU_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_TR_SM3 SM3_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ kcg_bool SM3_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_ST_SM3 SM3_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::count_OBU_BGs */ kcg_int count_OBU_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BG */ ReceivedBG_CheckBGInputChannel_Pkg out_OBU_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_new_OBU_BG */ kcg_bool out_new_OBU_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg out_OBU_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_TR_SM3 _10_SM3_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ kcg_bool _9_SM3_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_ST_SM3 _8_SM3_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Wait */ kcg_bool br_1_guard_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_TR_SM3 SM3_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ kcg_bool SM3_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ SSM_ST_SM3 SM3_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3::Receive_outputMessage */ kcg_bool br_1_guard_SM3_Receive_outputMessage;
  MsgSource_T_Common_Types_Pkg noname;
  RadioMetadata_T_Common_Types_Pkg _11_noname;
  BG_Header_T_BG_Types_Pkg _12_noname;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg _13_noname;
  CompressedPackets_T_Common_Types_Pkg _14_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::count_OBU_BGs */ kcg_int last_count_OBU_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BG */ ReceivedBG_CheckBGInputChannel_Pkg last_out_OBU_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_new_OBU_BG */ kcg_bool last_out_new_OBU_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::out_OBU_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg last_out_OBU_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ kcg_bool SM3_reset_sel;
  /* CheckBGInputChannel_Pkg::Listen_on_OBU::SM3 */ kcg_bool SM3_reset_prv;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, Cons_outputMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L26,
    &outC->_L1.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L25,
    &outC->_L1.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L24, &outC->_L1.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L23,
    &outC->_L1.radioMetadata);
  outC->_L22 = outC->_L1.source;
  if (outC->init) {
    last_count_OBU_BGs = - 1;
  }
  else {
    last_count_OBU_BGs = outC->count_OBU_BGs;
  }
  if (outC->init) {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_out_OBU_BG,
      (ReceivedBG_CheckBGInputChannel_Pkg *)
        &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_out_OBU_BG,
      &outC->out_OBU_BG);
  }
  if (outC->init) {
    last_out_new_OBU_BG = kcg_false;
  }
  else {
    last_out_new_OBU_BG = outC->out_new_OBU_BG;
  }
  if (outC->init) {
    kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
      &last_out_OBU_BGs,
      (ReceivedBGs_CheckBGInputChannel_Pkg *)
        &c_emptyReceivedBGs_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
      &last_out_OBU_BGs,
      &outC->out_OBU_BGs);
  }
  outC->_L21 = outC->_L1.valid;
  outC->Cons_outMsg_valid = outC->_L21;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_14_noname, &outC->_L26);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_13_noname, &outC->_L25);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_12_noname, &outC->_L24);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_11_noname, &outC->_L23);
  noname = outC->_L22;
  if (outC->init) {
    outC->SM3_state_sel = SSM_st_Wait_SM3;
  }
  else {
    outC->SM3_state_sel = outC->SM3_state_nxt;
  }
  switch (outC->SM3_state_sel) {
    case SSM_st_Wait_SM3 :
      br_1_guard_SM3_Wait = outC->Cons_outMsg_valid;
      if (br_1_guard_SM3_Wait) {
        _8_SM3_state_act = SSM_st_Receive_outputMessage_SM3;
      }
      else {
        _8_SM3_state_act = SSM_st_Wait_SM3;
      }
      outC->SM3_state_act = _8_SM3_state_act;
      break;
    case SSM_st_Receive_outputMessage_SM3 :
      br_1_guard_SM3_Receive_outputMessage = !outC->Cons_outMsg_valid;
      if (br_1_guard_SM3_Receive_outputMessage) {
        SM3_state_act = SSM_st_Wait_SM3;
      }
      else {
        SM3_state_act = SSM_st_Receive_outputMessage_SM3;
      }
      outC->SM3_state_act = SM3_state_act;
      break;
    
  }
  switch (outC->SM3_state_act) {
    case SSM_st_Wait_SM3 :
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &_1_out_OBU_BGs,
        &last_out_OBU_BGs);
      break;
    
  }
  switch (outC->SM3_state_sel) {
    case SSM_st_Wait_SM3 :
      if (br_1_guard_SM3_Wait) {
        _10_SM3_fired_strong = SSM_TR_Wait_1_SM3;
      }
      else {
        _10_SM3_fired_strong = SSM_TR_no_trans_SM3;
      }
      outC->SM3_fired_strong = _10_SM3_fired_strong;
      break;
    case SSM_st_Receive_outputMessage_SM3 :
      if (br_1_guard_SM3_Receive_outputMessage) {
        SM3_fired_strong = SSM_TR_Receive_outputMessage_1_SM3;
      }
      else {
        SM3_fired_strong = SSM_TR_no_trans_SM3;
      }
      outC->SM3_fired_strong = SM3_fired_strong;
      break;
    
  }
  switch (outC->SM3_state_act) {
    case SSM_st_Wait_SM3 :
      _7_SM3_fired = outC->SM3_fired_strong;
      _6_SM3_reset_nxt = kcg_false;
      _5_SM3_state_nxt = SSM_st_Wait_SM3;
      outC->_L4_SM3_Wait = kcg_false;
      _2_out_new_OBU_BG = outC->_L4_SM3_Wait;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->_L3_SM3_Wait,
        (ReceivedBG_CheckBGInputChannel_Pkg *)
          &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &_3_out_OBU_BG,
        &outC->_L3_SM3_Wait);
      outC->_L2_SM3_Wait = last_count_OBU_BGs;
      _4_count_OBU_BGs = outC->_L2_SM3_Wait;
      outC->SM3_fired = _7_SM3_fired;
      break;
    case SSM_st_Receive_outputMessage_SM3 :
      SM3_fired = outC->SM3_fired_strong;
      SM3_reset_nxt = kcg_false;
      SM3_state_nxt = SSM_st_Receive_outputMessage_SM3;
      outC->_L38_SM3_Receive_outputMessage = last_count_OBU_BGs;
      outC->_L6_SM3_Receive_outputMessage = 1;
      outC->_L5_SM3_Receive_outputMessage =
        outC->_L38_SM3_Receive_outputMessage +
        outC->_L6_SM3_Receive_outputMessage;
      count_OBU_BGs = outC->_L5_SM3_Receive_outputMessage;
      outC->_L37_SM3_Receive_outputMessage = SystemTime;
      outC->_L24_SM3_Receive_outputMessage = kcg_true;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L8_SM3_Receive_outputMessage,
        Cons_outputMessage);
      outC->_L30_SM3_Receive_outputMessage.valid =
        outC->_L24_SM3_Receive_outputMessage;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L30_SM3_Receive_outputMessage.BG,
        &outC->_L8_SM3_Receive_outputMessage);
      outC->_L30_SM3_Receive_outputMessage.complete =
        outC->_L24_SM3_Receive_outputMessage;
      outC->_L30_SM3_Receive_outputMessage.consistent =
        outC->_L24_SM3_Receive_outputMessage;
      outC->_L30_SM3_Receive_outputMessage.TimeStamp =
        outC->_L37_SM3_Receive_outputMessage;
      outC->_L10_SM3_Receive_outputMessage =
        outC->_L30_SM3_Receive_outputMessage.valid;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &out_OBU_BG,
        &outC->_L30_SM3_Receive_outputMessage);
      out_new_OBU_BG = outC->_L10_SM3_Receive_outputMessage;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L2_SM3_Receive_outputMessage,
        &last_out_OBU_BGs);
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L1_SM3_Receive_outputMessage,
        &outC->_L2_SM3_Receive_outputMessage);
      if ((0 <= count_OBU_BGs) & (count_OBU_BGs < 10)) {
        kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
          &outC->_L1_SM3_Receive_outputMessage[count_OBU_BGs],
          &outC->_L30_SM3_Receive_outputMessage);
      }
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &out_OBU_BGs,
        &outC->_L1_SM3_Receive_outputMessage);
      outC->SM3_fired = SM3_fired;
      break;
    
  }
  if (outC->init) {
    SM3_reset_sel = kcg_false;
  }
  else {
    SM3_reset_sel = outC->SM3_reset_nxt;
  }
  switch (outC->SM3_state_act) {
    case SSM_st_Wait_SM3 :
      outC->SM3_reset_nxt = _6_SM3_reset_nxt;
      outC->SM3_state_nxt = _5_SM3_state_nxt;
      outC->count_OBU_BGs = _4_count_OBU_BGs;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->out_OBU_BG,
        &_3_out_OBU_BG);
      outC->out_new_OBU_BG = _2_out_new_OBU_BG;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->out_OBU_BGs,
        &_1_out_OBU_BGs);
      break;
    case SSM_st_Receive_outputMessage_SM3 :
      outC->SM3_reset_nxt = SM3_reset_nxt;
      outC->SM3_state_nxt = SM3_state_nxt;
      outC->count_OBU_BGs = count_OBU_BGs;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->out_OBU_BG,
        &out_OBU_BG);
      outC->out_new_OBU_BG = out_new_OBU_BG;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->out_OBU_BGs,
        &out_OBU_BGs);
      break;
    
  }
  switch (outC->SM3_state_sel) {
    case SSM_st_Wait_SM3 :
      _9_SM3_reset_act = br_1_guard_SM3_Wait;
      break;
    case SSM_st_Receive_outputMessage_SM3 :
      SM3_reset_act = br_1_guard_SM3_Receive_outputMessage;
      break;
    
  }
  if (outC->init) {
    SM3_reset_prv = kcg_false;
  }
  else {
    SM3_reset_prv = outC->SM3_reset_act;
  }
  switch (outC->SM3_state_sel) {
    case SSM_st_Wait_SM3 :
      outC->SM3_reset_act = _9_SM3_reset_act;
      break;
    case SSM_st_Receive_outputMessage_SM3 :
      outC->SM3_reset_act = SM3_reset_act;
      break;
    
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Listen_on_OBU_CheckBGInputChannel_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

