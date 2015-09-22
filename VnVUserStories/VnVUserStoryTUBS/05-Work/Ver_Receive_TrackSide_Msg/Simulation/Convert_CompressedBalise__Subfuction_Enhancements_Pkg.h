/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Convert_CompressedBalise__Subfuction_Enhancements_Pkg_H_
#define _Convert_CompressedBalise__Subfuction_Enhancements_Pkg_H_

#include "kcg_types.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::out_CompressedPackets */ out_CompressedPackets;
  TelegramHeader_T_BG_Types_Pkg /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::out_TelegramHeader */ out_TelegramHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CASTLIB_BaliseHeaders_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::_L1 */ _L1;
  BaliseTelegramHeader_int_T_TM /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::_L4 */ _L4;
  TelegramHeader_T_BG_Types_Pkg /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::_L5 */ _L5;
} outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader */
extern void Convert_CompressedBalise__Subfuction_Enhancements_Pkg(
  /* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader::in_CompressedBaliseMessage */ CompressedBaliseMessage_TM *in_CompressedBaliseMessage,
  outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Convert_CompressedBalise__reset_Subfuction_Enhancements_Pkg(
  outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Convert_CompressedBalise__init_Subfuction_Enhancements_Pkg(
  outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Convert_CompressedBalise__Subfuction_Enhancements_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Convert_CompressedBalise__Subfuction_Enhancements_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

