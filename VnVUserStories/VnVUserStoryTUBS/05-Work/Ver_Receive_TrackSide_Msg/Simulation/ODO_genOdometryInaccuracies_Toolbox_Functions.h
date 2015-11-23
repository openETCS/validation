/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _ODO_genOdometryInaccuracies_Toolbox_Functions_H_
#define _ODO_genOdometryInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryLocations */ odometryLocations;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L1 */ _L1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L8 */ _L8;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L16 */ _L16;
  kcg_int /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L17 */ _L17;
  kcg_int /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L18 */ _L18;
  kcg_int /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L19 */ _L19;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L20 */ _L20;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L21 */ _L21;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L22 */ _L22;
  odometryFactors_T_Toolbox /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L33 */ _L33;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L36 */ _L36;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L35 */ _L35;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L34 */ _L34;
} outC_ODO_genOdometryInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genOdometryInaccuracies */
extern void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */ L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */ odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ODO_genOdometryInaccuracies_init_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ODO_genOdometryInaccuracies_Toolbox_Functions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

