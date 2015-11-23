/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _ODO_genSpeedInaccuracies_Toolbox_Functions_H_
#define _ODO_genSpeedInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometrySpeeds */ odometrySpeeds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L12 */ _L12;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L11 */ _L11;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L8 */ _L8;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L7 */ _L7;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L6 */ _L6;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L2 */ _L2;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L1 */ _L1;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L13 */ _L13;
  odometryFactors_T_Toolbox /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L14 */ _L14;
  Speed_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L15 */ _L15;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L16 */ _L16;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L17 */ _L17;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L18 */ _L18;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L21 */ _L21;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L20 */ _L20;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L19 */ _L19;
} outC_ODO_genSpeedInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genSpeedInaccuracies */
extern void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */ Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */ odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ODO_genSpeedInaccuracies_init_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ODO_genSpeedInaccuracies_Toolbox_Functions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

