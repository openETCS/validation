/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MessageBuffer_InformationFilter_Pkg.h"

void MessageBuffer_reset_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  /* 1 */ FIFO_reset_InformationFilter_Pkg_Common_6(&outC->Context_1);
}

/* InformationFilter_Pkg::MessageBuffer */
void MessageBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromTrain */ReceivedMessage_T_Common_Types_Pkg *inMessageFromTrain,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromBuffer */ReceivedMessage_T_Common_Types_Pkg *inMessageFromBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromBufferValid */kcg_bool inMessageFromBufferValid,
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  kcg_int noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L11, inMessageFromTrain);
  outC->_L14 = outC->_L11.valid;
  outC->_L12 = inMessageFromBufferValid;
  outC->_L13 = !outC->_L12;
  /* 1 */
  FIFO_InformationFilter_Pkg_Common_6(
    &outC->_L11,
    outC->_L14,
    outC->_L13,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_1.outData);
  outC->_L3 = outC->Context_1.outValid;
  outC->_L15 = outC->Context_1.size;
  noname = outC->_L15;
  outC->_L10 = kcg_true;
  outC->_L9 = inMessageFromBufferValid;
  if (outC->_L9) {
    outC->_L8 = outC->_L10;
  }
  else {
    outC->_L8 = outC->_L3;
  }
  outC->_L6 = inMessageFromBufferValid;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L4, inMessageFromBuffer);
  if (outC->_L6) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L7, &outC->_L2);
  }
  outC->outMessageValid = outC->_L8;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MessageBuffer_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

