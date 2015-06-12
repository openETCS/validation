/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction_H_
#define _CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::isConsistent */ isConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* 1 */ _1_Context_1;
  outC_N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L13 */ _L13;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L29 */ _L29;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L30 */ _L30;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L33 */ _L33;
  Q_UPDOWN /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L43 */ _L43;
  M_VERSION /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L42 */ _L42;
  Q_MEDIA /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L41 */ _L41;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L40 */ _L40;
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L39 */ _L39;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L38 */ _L38;
  M_MCOUNT /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L37 */ _L37;
  NID_C /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L36 */ _L36;
  NID_BG /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L35 */ _L35;
  Q_LINK /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L34 */ _L34;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L44 */ _L44;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L45 */ _L45;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L46 */ _L46;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L47 */ _L47;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L48 */ _L48;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L49 */ _L49;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L50 */ _L50;
} outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader */
extern void CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC);

extern void CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

