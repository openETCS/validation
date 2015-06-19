/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_InformationFilter_Pkg_Common_6.h"

void FIFO_reset_InformationFilter_Pkg_Common_6(
  outC_FIFO_InformationFilter_Pkg_Common_6 *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* InformationFilter_Pkg::Common::FIFO */
void FIFO_InformationFilter_Pkg_Common_6(
  /* InformationFilter_Pkg::Common::FIFO::inData */ReceivedMessage_T_Common_Types_Pkg *inData,
  /* InformationFilter_Pkg::Common::FIFO::inValid */kcg_bool inValid,
  /* InformationFilter_Pkg::Common::FIFO::inReady */kcg_bool inReady,
  outC_FIFO_InformationFilter_Pkg_Common_6 *outC)
{
  /* InformationFilter_Pkg::Common::FIFO::next_entry */ kcg_int _2_next_entry;
  /* InformationFilter_Pkg::Common::FIFO::buffer */ Buffer_DataDictionary_Pkg _1_buffer;
  /* InformationFilter_Pkg::Common::FIFO::next_entry */ kcg_int next_entry;
  /* InformationFilter_Pkg::Common::FIFO::buffer */ Buffer_DataDictionary_Pkg buffer;
  /* InformationFilter_Pkg::Common::FIFO::entry */ kcg_int last_entry;
  /* InformationFilter_Pkg::Common::FIFO::buffer */ Buffer_DataDictionary_Pkg last_buffer;
  /* InformationFilter_Pkg::Common::FIFO::next_entry */ kcg_int last_next_entry;
  /* InformationFilter_Pkg::Common::FIFO::l_size */ kcg_int last_l_size;
  
  outC->_L40 = 6;
  outC->I2_1 = outC->_L40;
  if (outC->init) {
    last_entry = 0;
  }
  else {
    last_entry = outC->entry;
  }
  if (outC->init) {
    kcg_copy_Buffer_DataDictionary_Pkg(
      &last_buffer,
      (Buffer_DataDictionary_Pkg *) &INIT_BUFFER_Config_Pkg);
  }
  else {
    kcg_copy_Buffer_DataDictionary_Pkg(&last_buffer, &outC->buffer);
  }
  if (outC->init) {
    last_next_entry = 0;
  }
  else {
    last_next_entry = outC->next_entry;
  }
  if (outC->init) {
    last_l_size = 0;
  }
  else {
    last_l_size = outC->l_size;
  }
  if (outC->init) {
    outC->_L38 = 0;
  }
  else {
    outC->_L38 = outC->_L32;
  }
  outC->I1_1 = outC->_L38;
  outC->_L21_1 = outC->I1_1;
  outC->_L22_1 = outC->I2_1;
  outC->_L25_1 = outC->_L21_1 <= outC->_L22_1;
  if (outC->_L25_1) {
    outC->_L24_1 = outC->_L21_1;
  }
  else {
    outC->_L24_1 = outC->_L22_1;
  }
  outC->Mi_Output_1 = outC->_L24_1;
  outC->_L45 = outC->Mi_Output_1;
  outC->l_size = outC->_L45;
  outC->_L69 = outC->l_size;
  outC->size = outC->_L69;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L68,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  outC->_L67 = kcg_false;
  outC->_L66 = inReady & (outC->l_size > 0);
  outC->_L63 = kcg_true;
  if (outC->_L66) {
    outC->_L64 = outC->_L63;
  }
  else {
    outC->_L64 = outC->_L67;
  }
  outC->outValid = outC->_L64;
  outC->_L62 = 0;
  outC->_L61 = 1;
  outC->_L60 = 0;
  outC->_L59 = 1;
  outC->_L57 = inValid & (outC->l_size == 3);
  outC->_L56 = inReady & (outC->l_size > 0);
  if (outC->_L57) {
    outC->_L55 = outC->_L61;
  }
  else {
    outC->_L55 = outC->_L62;
  }
  if (outC->init) {
    outC->_L49 = 0;
  }
  else {
    outC->_L49 = outC->_L50;
  }
  outC->entry = outC->_L49;
  outC->_L52 = outC->entry;
  if (outC->_L56) {
    outC->_L47 = outC->_L59;
  }
  else {
    outC->_L47 = outC->_L60;
  }
  outC->_L53 = outC->_L52 + outC->_L47 + outC->_L55;
  outC->_L51 = 6;
  outC->_L50 = outC->_L53 % outC->_L51;
  outC->_L44 = inReady & (outC->l_size > 0);
  outC->_L33 = outC->l_size;
  outC->_L27 = inValid;
  outC->_L25 = 1;
  outC->_L26 = 0;
  if (outC->_L27) {
    outC->_L23 = outC->_L25;
  }
  else {
    outC->_L23 = outC->_L26;
  }
  outC->_L30 = - 1;
  outC->_L31 = 0;
  if (outC->_L44) {
    outC->_L28 = outC->_L30;
  }
  else {
    outC->_L28 = outC->_L31;
  }
  outC->_L32 = outC->_L33 + outC->_L23 + outC->_L28;
  outC->_L22 = outC->entry;
  outC->IfBlock1_clock = inValid;
  if (outC->IfBlock1_clock) {
    kcg_copy_Buffer_DataDictionary_Pkg(
      &outC->_L19_IfBlock1,
      (Buffer_DataDictionary_Pkg *) &INIT_BUFFER_Config_Pkg);
    if (outC->init1) {
      kcg_copy_Buffer_DataDictionary_Pkg(
        &outC->_L18_IfBlock1,
        &outC->_L19_IfBlock1);
    }
    else {
      kcg_copy_Buffer_DataDictionary_Pkg(
        &outC->_L18_IfBlock1,
        &outC->_L4_IfBlock1);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2_IfBlock1, inData);
    if (outC->init1) {
      outC->_L14_IfBlock1 = 0;
    }
    else {
      outC->_L14_IfBlock1 = outC->_L20_IfBlock1;
    }
    _2_next_entry = outC->_L14_IfBlock1;
    outC->_L9_IfBlock1 = _2_next_entry;
    kcg_copy_Buffer_DataDictionary_Pkg(
      &outC->_L1_IfBlock1,
      &outC->_L18_IfBlock1);
    if ((0 <= outC->_L9_IfBlock1) & (outC->_L9_IfBlock1 < 3)) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L1_IfBlock1[outC->_L9_IfBlock1],
        &outC->_L2_IfBlock1);
    }
    kcg_copy_Buffer_DataDictionary_Pkg(&_1_buffer, &outC->_L1_IfBlock1);
    kcg_copy_Buffer_DataDictionary_Pkg(&outC->buffer, &_1_buffer);
  }
  else {
    kcg_copy_Buffer_DataDictionary_Pkg(&buffer, &last_buffer);
    kcg_copy_Buffer_DataDictionary_Pkg(&outC->buffer, &buffer);
  }
  kcg_copy_Buffer_DataDictionary_Pkg(&outC->_L19, &outC->buffer);
  if ((0 <= outC->_L22) & (outC->_L22 < 3)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L18,
      &outC->_L19[outC->_L22]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L18, &outC->_L68);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outData, &outC->_L18);
  if (outC->IfBlock1_clock) {
    outC->_L21_IfBlock1 = 6;
    outC->_L8_IfBlock1 = _2_next_entry + 1;
    outC->_L20_IfBlock1 = outC->_L8_IfBlock1 % outC->_L21_IfBlock1;
    kcg_copy_Buffer_DataDictionary_Pkg(&outC->_L4_IfBlock1, &_1_buffer);
    outC->next_entry = _2_next_entry;
  }
  else {
    next_entry = last_next_entry;
    outC->next_entry = next_entry;
  }
  outC->init = kcg_false;
  if (outC->IfBlock1_clock) {
    outC->init1 = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_InformationFilter_Pkg_Common_6.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

