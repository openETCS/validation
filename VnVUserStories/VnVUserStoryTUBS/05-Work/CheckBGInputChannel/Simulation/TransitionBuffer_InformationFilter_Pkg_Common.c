/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg_Common.h"

void TransitionBuffer_reset_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  outC->init = kcg_true;
  /* 1 */ count_down_reset_digital(&outC->_1_Context_1);
  /* 1 */ _6_FIFO_reset_InformationFilter_Pkg_Common_3(&outC->Context_1);
}

/* InformationFilter_Pkg::Common::TransitionBuffer */
void TransitionBuffer_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inFlushMessages */kcg_bool inFlushMessages,
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  if (outC->init) {
    outC->_L15 = 0;
  }
  else {
    outC->_L15 = outC->_L10;
  }
  outC->messagesToFlush = outC->_L15;
  outC->_L14 = outC->messagesToFlush > 0;
  outC->_L13 = kcg_false;
  outC->_L12 = kcg_true;
  if (outC->_L14) {
    outC->_L11 = outC->_L12;
  }
  else {
    outC->_L11 = outC->_L13;
  }
  outC->_L5 = inFlushMessages;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L3, inMessage);
  outC->_L4 = inStoreMessage;
  /* 1 */
  _6_FIFO_InformationFilter_Pkg_Common_3(
    &outC->_L3,
    outC->_L4,
    outC->_L11,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1,
    &outC->Context_1.outData);
  outC->_L2 = outC->Context_1.outValid;
  outC->_L6 = outC->Context_1.size;
  /* 1 */ count_down_digital(outC->_L5, outC->_L6, &outC->_1_Context_1);
  outC->_L10 = outC->_1_Context_1.cpt;
  outC->outMessageAvailable = outC->_L2;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L1);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransitionBuffer_InformationFilter_Pkg_Common.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

