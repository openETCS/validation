/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"

void ThirdFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */
    SetValidFlag_reset_InformationFilter_Pkg_Common(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 30; i++) {
    /* 2 */
    ModeFilter_reset_InformationFilter_Pkg_ThirdFilter(&outC->Context_2[i]);
  }
  for (i = 0; i < 30; i++) {
    /* 1 */ GetPacketId_reset_InformationFilter_Pkg_Common(&outC->Context_1[i]);
  }
}

/* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
void ThirdFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inModus */M_MODE inModus,
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L11, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L29,
    &outC->_L11.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L30,
    &outC->_L11.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L21, &outC->_L11.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L20,
    &outC->_L11.radioMetadata);
  outC->_L19 = outC->_L11.source;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L53, &outC->_L29.PacketHeaders);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->packets, &outC->_L29);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L33, &outC->packets);
  outC->_L24 = inModus;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L23[i3] = outC->_L24;
  }
  for (i2 = 0; i2 < 30; i2++) {
    /* 1 */
    GetPacketId_InformationFilter_Pkg_Common(
      &outC->_L53[i2],
      &outC->Context_1[i2]);
    outC->_L12[i2] = outC->Context_1[i2].outPacketId;
  }
  for (i1 = 0; i1 < 30; i1++) {
    /* 2 */
    ModeFilter_InformationFilter_Pkg_ThirdFilter(
      outC->_L23[i1],
      outC->_L12[i1],
      &outC->Context_2[i1]);
    outC->_L10[i1] = outC->Context_2[i1].outPacketAccept;
  }
  for (i = 0; i < 30; i++) {
    /* 1 */
    SetValidFlag_InformationFilter_Pkg_Common(
      outC->_L10[i],
      &outC->_L53[i],
      &outC->_1_Context_1[i]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L13[i],
      &outC->_1_Context_1[i].outPacket);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L52, &outC->_L33);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->_L52.PacketHeaders,
      &outC->_L13);
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->radio_header,
    &outC->_L30);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L32,
    &outC->radio_header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->bg_header, &outC->_L21);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L31, &outC->bg_header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->radio_metadata, &outC->_L20);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L27, &outC->radio_metadata);
  outC->source = outC->_L19;
  outC->_L26 = outC->source;
  outC->_L18 = outC->_L11.valid;
  outC->valid = outC->_L18;
  outC->_L25 = outC->valid;
  outC->_L22.valid = outC->_L25;
  outC->_L22.source = outC->_L26;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L22.radioMetadata,
    &outC->_L27);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L22.BG_Common_Header, &outC->_L31);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L22.Radio_Common_Header,
    &outC->_L32);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L22.packets,
    &outC->_L52);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L22);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ThirdFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

