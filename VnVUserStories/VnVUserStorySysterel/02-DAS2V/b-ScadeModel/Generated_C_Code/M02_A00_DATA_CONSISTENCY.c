/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M02_A00_DATA_CONSISTENCY.h"

/* M02_A00_DATA_CONSISTENCY */
void M02_A00_DATA_CONSISTENCY(
  /* M02_A00_DATA_CONSISTENCY::M_OS_AREA_BTM */s_os_area *M_OS_AREA_BTM,
  /* M02_A00_DATA_CONSISTENCY::M_GEO_POS_INFO_BTM */s_geo_pos_info *M_GEO_POS_INFO_BTM,
  /* M02_A00_DATA_CONSISTENCY::M_OS_AREA_RADIO */s_os_area *M_OS_AREA_RADIO,
  /* M02_A00_DATA_CONSISTENCY::M_GEO_POS_INFO_RADIO */s_geo_pos_info *M_GEO_POS_INFO_RADIO,
  /* M02_A00_DATA_CONSISTENCY::M_LEVEL_ETCS */enum_level_etcs M_LEVEL_ETCS,
  /* M02_A00_DATA_CONSISTENCY::M_OS_AREA */s_os_area *M_OS_AREA,
  /* M02_A00_DATA_CONSISTENCY::M_GEO_POS_INFO */s_geo_pos_info *M_GEO_POS_INFO)
{
  /* M02_A00_DATA_CONSISTENCY::_L15 */ kcg_bool _L15;
  /* M02_A00_DATA_CONSISTENCY::_L35 */ kcg_bool _L35;
  
  _L35 = (M_LEVEL_ETCS == LEVEL_NTC) | (M_LEVEL_ETCS == LEVEL_0) |
    (M_LEVEL_ETCS == LEVEL_1);
  _L15 = (M_LEVEL_ETCS == LEVEL_2) | (M_LEVEL_ETCS == LEVEL_3);
  if (_L35) {
    kcg_copy_s_geo_pos_info(M_GEO_POS_INFO, M_GEO_POS_INFO_BTM);
    kcg_copy_s_os_area(M_OS_AREA, M_OS_AREA_BTM);
  }
  else if (_L15) {
    kcg_copy_s_geo_pos_info(M_GEO_POS_INFO, M_GEO_POS_INFO_RADIO);
    kcg_copy_s_os_area(M_OS_AREA, M_OS_AREA_RADIO);
  }
  else {
    kcg_copy_s_geo_pos_info(
      M_GEO_POS_INFO,
      (s_geo_pos_info *) &K_GEO_POS_INFO_DEF);
    kcg_copy_s_os_area(M_OS_AREA, (s_os_area *) &K_OS_AREA_DEF);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M02_A00_DATA_CONSISTENCY.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

