/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::mergedPackets */ mergedPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L16 */ _L16;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L15 */ _L15;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L14 */ _L14;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L13 */ _L13;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L12 */ _L12;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L11 */ _L11;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L10 */ _L10;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L9 */ _L9;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L8 */ _L8;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L7 */ _L7;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L6 */ _L6;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L5 */ _L5;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L4 */ _L4;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L3 */ _L3;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L2 */ _L2;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L1 */ _L1;
} outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList */
extern void Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::ind */kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::acc */CompressedPacketData_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::lastvalidAddress */CompressedPacketData_T_Common_Types_Pkg *lastvalidAddress,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::compressedPacketIn */CompressedPacketData_T_Common_Types_Pkg *compressedPacketIn,
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void Merg2PacketsList_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

