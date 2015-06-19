/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"

void SecondFilter_reset_InformationFilter_Pkg_SecondFilter(
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC)
{
}

/* InformationFilter_Pkg::SecondFilter::SecondFilter */
void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC)
{
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool _2_outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool _1_outStoreInTransitionBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool _3_outStoreInTransitionBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool _4_outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool _10_outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool _9_outStoreInTransitionBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool _11_outStoreInTransitionBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool _12_outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool _13_outStoreInTransitionBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool _14_outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool _8_outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool _7_outStoreInTransitionBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool _5_outStoreInTransitionBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool _6_outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool outMessageAccepted;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool outStoreInTransitionBuffer;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L14, inMessage);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L27,
    &outC->_L14.Radio_Common_Header);
  outC->_L29 = outC->_L27.nid_message;
  outC->messageId = outC->_L29;
  outC->_L28 = outC->_L27.radioDevice;
  outC->radioDevice = outC->_L28;
  outC->_L24 = outC->_L14.source;
  outC->_L26 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L25 = outC->_L24 == outC->_L26;
  outC->isFromRBC = outC->_L25;
  outC->IfBlock1_clock = outC->isFromRBC;
  if (outC->IfBlock1_clock) {
    outC->_L6_IfBlock1 = outC->radioDevice;
    outC->_L3_IfBlock1 = inSupervisingDevice;
    outC->_L4_IfBlock1 = outC->_L6_IfBlock1 == outC->_L3_IfBlock1;
    outC->isFromSupervisingRBC_IfBlock1 = outC->_L4_IfBlock1;
    outC->IfBlock2_clock_IfBlock1 = !outC->isFromSupervisingRBC_IfBlock1;
    if (outC->IfBlock2_clock_IfBlock1) {
      outC->_L7_IfBlock1_IfBlock2 = outC->messageId;
      outC->_L6_IfBlock1_IfBlock2 = kcg_false;
      outC->_L5_IfBlock1_IfBlock2 = kcg_true;
      switch (outC->_L7_IfBlock1_IfBlock2) {
        case 18 :
          outC->_L4_IfBlock1_IfBlock2 = outC->_L5_IfBlock1_IfBlock2;
          break;
        
        default :
          outC->_L4_IfBlock1_IfBlock2 = outC->_L6_IfBlock1_IfBlock2;
      }
      outC->messagesToReject_IfBlock1_IfBlock2 = outC->_L4_IfBlock1_IfBlock2;
      outC->IfBlock3_clock_IfBlock1_IfBlock2 =
        !outC->messagesToReject_IfBlock1_IfBlock2;
      if (outC->IfBlock3_clock_IfBlock1_IfBlock2) {
        outC->_L12_IfBlock1_IfBlock2_IfBlock3 = outC->messageId;
        outC->_L7_IfBlock1_IfBlock2_IfBlock3 = kcg_true;
        outC->_L8_IfBlock1_IfBlock2_IfBlock3 = kcg_true;
        outC->_L9_IfBlock1_IfBlock2_IfBlock3 = kcg_true;
        outC->_L10_IfBlock1_IfBlock2_IfBlock3 = kcg_false;
        switch (outC->_L12_IfBlock1_IfBlock2_IfBlock3) {
          case 8 :
            outC->_L5_IfBlock1_IfBlock2_IfBlock3 =
              outC->_L7_IfBlock1_IfBlock2_IfBlock3;
            break;
          case 38 :
            outC->_L5_IfBlock1_IfBlock2_IfBlock3 =
              outC->_L8_IfBlock1_IfBlock2_IfBlock3;
            break;
          case 39 :
            outC->_L5_IfBlock1_IfBlock2_IfBlock3 =
              outC->_L9_IfBlock1_IfBlock2_IfBlock3;
            break;
          
          default :
            outC->_L5_IfBlock1_IfBlock2_IfBlock3 =
              outC->_L10_IfBlock1_IfBlock2_IfBlock3;
        }
        outC->_L11_IfBlock1_IfBlock2_IfBlock3 =
          !outC->_L5_IfBlock1_IfBlock2_IfBlock3;
        outC->messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 =
          outC->_L11_IfBlock1_IfBlock2_IfBlock3;
        outC->IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3 =
          outC->messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3;
        if (outC->IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3) {
          outC->_L2_IfBlock1_IfBlock2_IfBlock3_IfBlock4 = kcg_false;
          _14_outMessageAccepted =
            outC->_L2_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
          outC->_L1_IfBlock1_IfBlock2_IfBlock3_IfBlock4 = kcg_true;
          _13_outStoreInTransitionBuffer =
            outC->_L1_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
          _10_outMessageAccepted = _14_outMessageAccepted;
          _9_outStoreInTransitionBuffer = _13_outStoreInTransitionBuffer;
        }
        else {
          _11_outStoreInTransitionBuffer = kcg_false;
          _12_outMessageAccepted = kcg_true;
          _10_outMessageAccepted = _12_outMessageAccepted;
          _9_outStoreInTransitionBuffer = _11_outStoreInTransitionBuffer;
        }
        _6_outMessageAccepted = _10_outMessageAccepted;
        _5_outStoreInTransitionBuffer = _9_outStoreInTransitionBuffer;
      }
      else {
        _7_outStoreInTransitionBuffer = kcg_false;
        outC->_L1_IfBlock1_IfBlock2_IfBlock3 = kcg_false;
        _8_outMessageAccepted = outC->_L1_IfBlock1_IfBlock2_IfBlock3;
        _6_outMessageAccepted = _8_outMessageAccepted;
        _5_outStoreInTransitionBuffer = _7_outStoreInTransitionBuffer;
      }
      _2_outMessageAccepted = _6_outMessageAccepted;
      _1_outStoreInTransitionBuffer = _5_outStoreInTransitionBuffer;
    }
    else {
      _3_outStoreInTransitionBuffer = kcg_false;
      _4_outMessageAccepted = kcg_true;
      _2_outMessageAccepted = _4_outMessageAccepted;
      _1_outStoreInTransitionBuffer = _3_outStoreInTransitionBuffer;
    }
    outC->outMessageAccepted = _2_outMessageAccepted;
    outC->outStoreInTransitionBuffer = _1_outStoreInTransitionBuffer;
  }
  else {
    outStoreInTransitionBuffer = kcg_false;
    outMessageAccepted = kcg_true;
    outC->outMessageAccepted = outMessageAccepted;
    outC->outStoreInTransitionBuffer = outStoreInTransitionBuffer;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SecondFilter_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

