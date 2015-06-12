/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _FIFO_InformationFilter_Pkg_Common_6_H_
#define _FIFO_InformationFilter_Pkg_Common_6_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::FIFO::outData */ outData;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::outValid */ outValid;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::size */ size;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L20 */ _L20_IfBlock1;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::l_size */ l_size;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::next_entry */ next_entry;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::FIFO::buffer */ buffer;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::entry */ entry;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L32 */ _L32;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L50 */ _L50;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* math::Min::_L21 */ _L21_1;
  kcg_int /* math::Min::_L22 */ _L22_1;
  kcg_int /* math::Min::_L24 */ _L24_1;
  kcg_bool /* math::Min::_L25 */ _L25_1;
  kcg_int /* math::Min::Mi_Output */ Mi_Output_1;
  kcg_int /* math::Min::I2 */ I2_1;
  kcg_int /* math::Min::I1 */ I1_1;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L21 */ _L21_IfBlock1;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L19 */ _L19_IfBlock1;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L18 */ _L18_IfBlock1;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L14 */ _L14_IfBlock1;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L9 */ _L9_IfBlock1;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L8 */ _L8_IfBlock1;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L1 */ _L1_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::FIFO::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::IfBlock1 */ IfBlock1_clock;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::FIFO::_L18 */ _L18;
  Buffer_DataDictionary_Pkg /* InformationFilter_Pkg::Common::FIFO::_L19 */ _L19;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L22 */ _L22;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L23 */ _L23;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L25 */ _L25;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L26 */ _L26;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L27 */ _L27;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L28 */ _L28;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L30 */ _L30;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L31 */ _L31;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L33 */ _L33;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L38 */ _L38;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L40 */ _L40;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L44 */ _L44;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L45 */ _L45;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L47 */ _L47;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L49 */ _L49;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L51 */ _L51;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L52 */ _L52;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L53 */ _L53;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L55 */ _L55;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L56 */ _L56;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L57 */ _L57;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L59 */ _L59;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L60 */ _L60;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L61 */ _L61;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L62 */ _L62;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L63 */ _L63;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L64 */ _L64;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L66 */ _L66;
  kcg_bool /* InformationFilter_Pkg::Common::FIFO::_L67 */ _L67;
  ReceivedMessage_T_Common_Types_Pkg /* InformationFilter_Pkg::Common::FIFO::_L68 */ _L68;
  kcg_int /* InformationFilter_Pkg::Common::FIFO::_L69 */ _L69;
} outC_FIFO_InformationFilter_Pkg_Common_6;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::FIFO */
extern void FIFO_InformationFilter_Pkg_Common_6(
  /* InformationFilter_Pkg::Common::FIFO::inData */ReceivedMessage_T_Common_Types_Pkg *inData,
  /* InformationFilter_Pkg::Common::FIFO::inValid */kcg_bool inValid,
  /* InformationFilter_Pkg::Common::FIFO::inReady */kcg_bool inReady,
  outC_FIFO_InformationFilter_Pkg_Common_6 *outC);

extern void FIFO_reset_InformationFilter_Pkg_Common_6(
  outC_FIFO_InformationFilter_Pkg_Common_6 *outC);

#endif /* _FIFO_InformationFilter_Pkg_Common_6_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FIFO_InformationFilter_Pkg_Common_6.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

