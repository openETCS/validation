
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "CheckBGInCh_Int_CheckBGInputChannel_Pkg_type.h"
#include "CheckBGInCh_Int_CheckBGInputChannel_Pkg_mapping.h"

extern ScSimulator * pSimulator;

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
int _SCSIM_BoolEntity_is_active(void* pValue) {
	return *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
}

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
TypeUtils _SCSIM_kcg_real_Utils = {kcg_real_to_string,
	check_kcg_real_string,
	string_to_kcg_real,
	is_kcg_real_allow_double_convertion,
	kcg_real_to_double,
	compare_kcg_real_type,
	get_kcg_real_signature,
	get_kcg_real_filter_utils,
	kcg_real_filter_size,
	kcg_real_filter_values};
TypeUtils _SCSIM_kcg_bool_Utils = {kcg_bool_to_string,
	check_kcg_bool_string,
	string_to_kcg_bool,
	is_kcg_bool_allow_double_convertion,
	kcg_bool_to_double,
	compare_kcg_bool_type,
	get_kcg_bool_signature,
	get_kcg_bool_filter_utils,
	kcg_bool_filter_size,
	kcg_bool_filter_values};
TypeUtils _SCSIM_kcg_char_Utils = {kcg_char_to_string,
	check_kcg_char_string,
	string_to_kcg_char,
	is_kcg_char_allow_double_convertion,
	kcg_char_to_double,
	compare_kcg_char_type,
	get_kcg_char_signature,
	get_kcg_char_filter_utils,
	kcg_char_filter_size,
	kcg_char_filter_values};
TypeUtils _SCSIM_kcg_int_Utils = {kcg_int_to_string,
	check_kcg_int_string,
	string_to_kcg_int,
	is_kcg_int_allow_double_convertion,
	kcg_int_to_double,
	compare_kcg_int_type,
	get_kcg_int_signature,
	get_kcg_int_filter_utils,
	kcg_int_filter_size,
	kcg_int_filter_values};
TypeUtils _SCSIM_struct__17982_Utils = {struct__17982_to_string,
	check_struct__17982_string,
	string_to_struct__17982,
	is_struct__17982_allow_double_convertion,
	0,
	compare_struct__17982_type,
	get_struct__17982_signature,
	get_struct__17982_filter_utils,
	struct__17982_filter_size,
	struct__17982_filter_values};
TypeUtils _SCSIM_struct__17988_Utils = {struct__17988_to_string,
	check_struct__17988_string,
	string_to_struct__17988,
	is_struct__17988_allow_double_convertion,
	0,
	compare_struct__17988_type,
	get_struct__17988_signature,
	get_struct__17988_filter_utils,
	struct__17988_filter_size,
	struct__17988_filter_values};
TypeUtils _SCSIM_struct__17994_Utils = {struct__17994_to_string,
	check_struct__17994_string,
	string_to_struct__17994,
	is_struct__17994_allow_double_convertion,
	0,
	compare_struct__17994_type,
	get_struct__17994_signature,
	get_struct__17994_filter_utils,
	struct__17994_filter_size,
	struct__17994_filter_values};
TypeUtils _SCSIM_struct__18008_Utils = {struct__18008_to_string,
	check_struct__18008_string,
	string_to_struct__18008,
	is_struct__18008_allow_double_convertion,
	0,
	compare_struct__18008_type,
	get_struct__18008_signature,
	get_struct__18008_filter_utils,
	struct__18008_filter_size,
	struct__18008_filter_values};
TypeUtils _SCSIM_array__18017_Utils = {array__18017_to_string,
	check_array__18017_string,
	string_to_array__18017,
	is_array__18017_allow_double_convertion,
	0,
	compare_array__18017_type,
	get_array__18017_signature,
	get_array__18017_filter_utils,
	array__18017_filter_size,
	array__18017_filter_values};
TypeUtils _SCSIM_struct__18020_Utils = {struct__18020_to_string,
	check_struct__18020_string,
	string_to_struct__18020,
	is_struct__18020_allow_double_convertion,
	0,
	compare_struct__18020_type,
	get_struct__18020_signature,
	get_struct__18020_filter_utils,
	struct__18020_filter_size,
	struct__18020_filter_values};
TypeUtils _SCSIM_struct__18027_Utils = {struct__18027_to_string,
	check_struct__18027_string,
	string_to_struct__18027,
	is_struct__18027_allow_double_convertion,
	0,
	compare_struct__18027_type,
	get_struct__18027_signature,
	get_struct__18027_filter_utils,
	struct__18027_filter_size,
	struct__18027_filter_values};
TypeUtils _SCSIM_struct__18033_Utils = {struct__18033_to_string,
	check_struct__18033_string,
	string_to_struct__18033,
	is_struct__18033_allow_double_convertion,
	0,
	compare_struct__18033_type,
	get_struct__18033_signature,
	get_struct__18033_filter_utils,
	struct__18033_filter_size,
	struct__18033_filter_values};
TypeUtils _SCSIM_struct__18043_Utils = {struct__18043_to_string,
	check_struct__18043_string,
	string_to_struct__18043,
	is_struct__18043_allow_double_convertion,
	0,
	compare_struct__18043_type,
	get_struct__18043_signature,
	get_struct__18043_filter_utils,
	struct__18043_filter_size,
	struct__18043_filter_values};
TypeUtils _SCSIM_struct__18061_Utils = {struct__18061_to_string,
	check_struct__18061_string,
	string_to_struct__18061,
	is_struct__18061_allow_double_convertion,
	0,
	compare_struct__18061_type,
	get_struct__18061_signature,
	get_struct__18061_filter_utils,
	struct__18061_filter_size,
	struct__18061_filter_values};
TypeUtils _SCSIM_struct__18067_Utils = {struct__18067_to_string,
	check_struct__18067_string,
	string_to_struct__18067,
	is_struct__18067_allow_double_convertion,
	0,
	compare_struct__18067_type,
	get_struct__18067_signature,
	get_struct__18067_filter_utils,
	struct__18067_filter_size,
	struct__18067_filter_values};
TypeUtils _SCSIM_struct__18078_Utils = {struct__18078_to_string,
	check_struct__18078_string,
	string_to_struct__18078,
	is_struct__18078_allow_double_convertion,
	0,
	compare_struct__18078_type,
	get_struct__18078_signature,
	get_struct__18078_filter_utils,
	struct__18078_filter_size,
	struct__18078_filter_values};
TypeUtils _SCSIM_array__18095_Utils = {array__18095_to_string,
	check_array__18095_string,
	string_to_array__18095,
	is_array__18095_allow_double_convertion,
	0,
	compare_array__18095_type,
	get_array__18095_signature,
	get_array__18095_filter_utils,
	array__18095_filter_size,
	array__18095_filter_values};
TypeUtils _SCSIM_struct__18098_Utils = {struct__18098_to_string,
	check_struct__18098_string,
	string_to_struct__18098,
	is_struct__18098_allow_double_convertion,
	0,
	compare_struct__18098_type,
	get_struct__18098_signature,
	get_struct__18098_filter_utils,
	struct__18098_filter_size,
	struct__18098_filter_values};
TypeUtils _SCSIM_array_int_500_Utils = {array_int_500_to_string,
	check_array_int_500_string,
	string_to_array_int_500,
	is_array_int_500_allow_double_convertion,
	0,
	compare_array_int_500_type,
	get_array_int_500_signature,
	get_array_int_500_filter_utils,
	array_int_500_filter_size,
	array_int_500_filter_values};
TypeUtils _SCSIM_struct__18114_Utils = {struct__18114_to_string,
	check_struct__18114_string,
	string_to_struct__18114,
	is_struct__18114_allow_double_convertion,
	0,
	compare_struct__18114_type,
	get_struct__18114_signature,
	get_struct__18114_filter_utils,
	struct__18114_filter_size,
	struct__18114_filter_values};
TypeUtils _SCSIM_array__18122_Utils = {array__18122_to_string,
	check_array__18122_string,
	string_to_array__18122,
	is_array__18122_allow_double_convertion,
	0,
	compare_array__18122_type,
	get_array__18122_signature,
	get_array__18122_filter_utils,
	array__18122_filter_size,
	array__18122_filter_values};
TypeUtils _SCSIM_struct__18125_Utils = {struct__18125_to_string,
	check_struct__18125_string,
	string_to_struct__18125,
	is_struct__18125_allow_double_convertion,
	0,
	compare_struct__18125_type,
	get_struct__18125_signature,
	get_struct__18125_filter_utils,
	struct__18125_filter_size,
	struct__18125_filter_values};
TypeUtils _SCSIM_struct__18130_Utils = {struct__18130_to_string,
	check_struct__18130_string,
	string_to_struct__18130,
	is_struct__18130_allow_double_convertion,
	0,
	compare_struct__18130_type,
	get_struct__18130_signature,
	get_struct__18130_filter_utils,
	struct__18130_filter_size,
	struct__18130_filter_values};
TypeUtils _SCSIM_struct__18139_Utils = {struct__18139_to_string,
	check_struct__18139_string,
	string_to_struct__18139,
	is_struct__18139_allow_double_convertion,
	0,
	compare_struct__18139_type,
	get_struct__18139_signature,
	get_struct__18139_filter_utils,
	struct__18139_filter_size,
	struct__18139_filter_values};
TypeUtils _SCSIM_struct__18144_Utils = {struct__18144_to_string,
	check_struct__18144_string,
	string_to_struct__18144,
	is_struct__18144_allow_double_convertion,
	0,
	compare_struct__18144_type,
	get_struct__18144_signature,
	get_struct__18144_filter_utils,
	struct__18144_filter_size,
	struct__18144_filter_values};
TypeUtils _SCSIM_array_int_7_Utils = {array_int_7_to_string,
	check_array_int_7_string,
	string_to_array_int_7,
	is_array_int_7_allow_double_convertion,
	0,
	compare_array_int_7_type,
	get_array_int_7_signature,
	get_array_int_7_filter_utils,
	array_int_7_filter_size,
	array_int_7_filter_values};
TypeUtils _SCSIM_struct__18155_Utils = {struct__18155_to_string,
	check_struct__18155_string,
	string_to_struct__18155,
	is_struct__18155_allow_double_convertion,
	0,
	compare_struct__18155_type,
	get_struct__18155_signature,
	get_struct__18155_filter_utils,
	struct__18155_filter_size,
	struct__18155_filter_values};
TypeUtils _SCSIM_array_int_7_33_Utils = {array_int_7_33_to_string,
	check_array_int_7_33_string,
	string_to_array_int_7_33,
	is_array_int_7_33_allow_double_convertion,
	0,
	compare_array_int_7_33_type,
	get_array_int_7_33_signature,
	get_array_int_7_33_filter_utils,
	array_int_7_33_filter_size,
	array_int_7_33_filter_values};
TypeUtils _SCSIM_array_int_231_Utils = {array_int_231_to_string,
	check_array_int_231_string,
	string_to_array_int_231,
	is_array_int_231_allow_double_convertion,
	0,
	compare_array_int_231_type,
	get_array_int_231_signature,
	get_array_int_231_filter_utils,
	array_int_231_filter_size,
	array_int_231_filter_values};
TypeUtils _SCSIM_array__18171_Utils = {array__18171_to_string,
	check_array__18171_string,
	string_to_array__18171,
	is_array__18171_allow_double_convertion,
	0,
	compare_array__18171_type,
	get_array__18171_signature,
	get_array__18171_filter_utils,
	array__18171_filter_size,
	array__18171_filter_values};
TypeUtils _SCSIM_array__18174_Utils = {array__18174_to_string,
	check_array__18174_string,
	string_to_array__18174,
	is_array__18174_allow_double_convertion,
	0,
	compare_array__18174_type,
	get_array__18174_signature,
	get_array__18174_filter_utils,
	array__18174_filter_size,
	array__18174_filter_values};
TypeUtils _SCSIM_struct__18177_Utils = {struct__18177_to_string,
	check_struct__18177_string,
	string_to_struct__18177,
	is_struct__18177_allow_double_convertion,
	0,
	compare_struct__18177_type,
	get_struct__18177_signature,
	get_struct__18177_filter_utils,
	struct__18177_filter_size,
	struct__18177_filter_values};
TypeUtils _SCSIM_struct__18194_Utils = {struct__18194_to_string,
	check_struct__18194_string,
	string_to_struct__18194,
	is_struct__18194_allow_double_convertion,
	0,
	compare_struct__18194_type,
	get_struct__18194_signature,
	get_struct__18194_filter_utils,
	struct__18194_filter_size,
	struct__18194_filter_values};
TypeUtils _SCSIM_struct__18207_Utils = {struct__18207_to_string,
	check_struct__18207_string,
	string_to_struct__18207,
	is_struct__18207_allow_double_convertion,
	0,
	compare_struct__18207_type,
	get_struct__18207_signature,
	get_struct__18207_filter_utils,
	struct__18207_filter_size,
	struct__18207_filter_values};
TypeUtils _SCSIM_struct__18213_Utils = {struct__18213_to_string,
	check_struct__18213_string,
	string_to_struct__18213,
	is_struct__18213_allow_double_convertion,
	0,
	compare_struct__18213_type,
	get_struct__18213_signature,
	get_struct__18213_filter_utils,
	struct__18213_filter_size,
	struct__18213_filter_values};
TypeUtils _SCSIM_struct__18231_Utils = {struct__18231_to_string,
	check_struct__18231_string,
	string_to_struct__18231,
	is_struct__18231_allow_double_convertion,
	0,
	compare_struct__18231_type,
	get_struct__18231_signature,
	get_struct__18231_filter_utils,
	struct__18231_filter_size,
	struct__18231_filter_values};
TypeUtils _SCSIM_struct__18243_Utils = {struct__18243_to_string,
	check_struct__18243_string,
	string_to_struct__18243,
	is_struct__18243_allow_double_convertion,
	0,
	compare_struct__18243_type,
	get_struct__18243_signature,
	get_struct__18243_filter_utils,
	struct__18243_filter_size,
	struct__18243_filter_values};
TypeUtils _SCSIM_struct__18250_Utils = {struct__18250_to_string,
	check_struct__18250_string,
	string_to_struct__18250,
	is_struct__18250_allow_double_convertion,
	0,
	compare_struct__18250_type,
	get_struct__18250_signature,
	get_struct__18250_filter_utils,
	struct__18250_filter_size,
	struct__18250_filter_values};
TypeUtils _SCSIM_struct__18255_Utils = {struct__18255_to_string,
	check_struct__18255_string,
	string_to_struct__18255,
	is_struct__18255_allow_double_convertion,
	0,
	compare_struct__18255_type,
	get_struct__18255_signature,
	get_struct__18255_filter_utils,
	struct__18255_filter_size,
	struct__18255_filter_values};
TypeUtils _SCSIM_struct__18263_Utils = {struct__18263_to_string,
	check_struct__18263_string,
	string_to_struct__18263,
	is_struct__18263_allow_double_convertion,
	0,
	compare_struct__18263_type,
	get_struct__18263_signature,
	get_struct__18263_filter_utils,
	struct__18263_filter_size,
	struct__18263_filter_values};
TypeUtils _SCSIM_struct__18272_Utils = {struct__18272_to_string,
	check_struct__18272_string,
	string_to_struct__18272,
	is_struct__18272_allow_double_convertion,
	0,
	compare_struct__18272_type,
	get_struct__18272_signature,
	get_struct__18272_filter_utils,
	struct__18272_filter_size,
	struct__18272_filter_values};
TypeUtils _SCSIM_struct__18282_Utils = {struct__18282_to_string,
	check_struct__18282_string,
	string_to_struct__18282,
	is_struct__18282_allow_double_convertion,
	0,
	compare_struct__18282_type,
	get_struct__18282_signature,
	get_struct__18282_filter_utils,
	struct__18282_filter_size,
	struct__18282_filter_values};
TypeUtils _SCSIM_struct__18288_Utils = {struct__18288_to_string,
	check_struct__18288_string,
	string_to_struct__18288,
	is_struct__18288_allow_double_convertion,
	0,
	compare_struct__18288_type,
	get_struct__18288_signature,
	get_struct__18288_filter_utils,
	struct__18288_filter_size,
	struct__18288_filter_values};
TypeUtils _SCSIM_struct__18298_Utils = {struct__18298_to_string,
	check_struct__18298_string,
	string_to_struct__18298,
	is_struct__18298_allow_double_convertion,
	0,
	compare_struct__18298_type,
	get_struct__18298_signature,
	get_struct__18298_filter_utils,
	struct__18298_filter_size,
	struct__18298_filter_values};
TypeUtils _SCSIM_struct__18306_Utils = {struct__18306_to_string,
	check_struct__18306_string,
	string_to_struct__18306,
	is_struct__18306_allow_double_convertion,
	0,
	compare_struct__18306_type,
	get_struct__18306_signature,
	get_struct__18306_filter_utils,
	struct__18306_filter_size,
	struct__18306_filter_values};
TypeUtils _SCSIM_array__18311_Utils = {array__18311_to_string,
	check_array__18311_string,
	string_to_array__18311,
	is_array__18311_allow_double_convertion,
	0,
	compare_array__18311_type,
	get_array__18311_signature,
	get_array__18311_filter_utils,
	array__18311_filter_size,
	array__18311_filter_values};
TypeUtils _SCSIM_struct__18314_Utils = {struct__18314_to_string,
	check_struct__18314_string,
	string_to_struct__18314,
	is_struct__18314_allow_double_convertion,
	0,
	compare_struct__18314_type,
	get_struct__18314_signature,
	get_struct__18314_filter_utils,
	struct__18314_filter_size,
	struct__18314_filter_values};
TypeUtils _SCSIM_struct__18327_Utils = {struct__18327_to_string,
	check_struct__18327_string,
	string_to_struct__18327,
	is_struct__18327_allow_double_convertion,
	0,
	compare_struct__18327_type,
	get_struct__18327_signature,
	get_struct__18327_filter_utils,
	struct__18327_filter_size,
	struct__18327_filter_values};
TypeUtils _SCSIM_struct__18334_Utils = {struct__18334_to_string,
	check_struct__18334_string,
	string_to_struct__18334,
	is_struct__18334_allow_double_convertion,
	0,
	compare_struct__18334_type,
	get_struct__18334_signature,
	get_struct__18334_filter_utils,
	struct__18334_filter_size,
	struct__18334_filter_values};
TypeUtils _SCSIM_array__18343_Utils = {array__18343_to_string,
	check_array__18343_string,
	string_to_array__18343,
	is_array__18343_allow_double_convertion,
	0,
	compare_array__18343_type,
	get_array__18343_signature,
	get_array__18343_filter_utils,
	array__18343_filter_size,
	array__18343_filter_values};
TypeUtils _SCSIM_array__18346_Utils = {array__18346_to_string,
	check_array__18346_string,
	string_to_array__18346,
	is_array__18346_allow_double_convertion,
	0,
	compare_array__18346_type,
	get_array__18346_signature,
	get_array__18346_filter_utils,
	array__18346_filter_size,
	array__18346_filter_values};
TypeUtils _SCSIM_array__18349_Utils = {array__18349_to_string,
	check_array__18349_string,
	string_to_array__18349,
	is_array__18349_allow_double_convertion,
	0,
	compare_array__18349_type,
	get_array__18349_signature,
	get_array__18349_filter_utils,
	array__18349_filter_size,
	array__18349_filter_values};
TypeUtils _SCSIM_array__18352_Utils = {array__18352_to_string,
	check_array__18352_string,
	string_to_array__18352,
	is_array__18352_allow_double_convertion,
	0,
	compare_array__18352_type,
	get_array__18352_signature,
	get_array__18352_filter_utils,
	array__18352_filter_size,
	array__18352_filter_values};
TypeUtils _SCSIM_array__18355_Utils = {array__18355_to_string,
	check_array__18355_string,
	string_to_array__18355,
	is_array__18355_allow_double_convertion,
	0,
	compare_array__18355_type,
	get_array__18355_signature,
	get_array__18355_filter_utils,
	array__18355_filter_size,
	array__18355_filter_values};
TypeUtils _SCSIM_struct__18358_Utils = {struct__18358_to_string,
	check_struct__18358_string,
	string_to_struct__18358,
	is_struct__18358_allow_double_convertion,
	0,
	compare_struct__18358_type,
	get_struct__18358_signature,
	get_struct__18358_filter_utils,
	struct__18358_filter_size,
	struct__18358_filter_values};
TypeUtils _SCSIM_array__18365_Utils = {array__18365_to_string,
	check_array__18365_string,
	string_to_array__18365,
	is_array__18365_allow_double_convertion,
	0,
	compare_array__18365_type,
	get_array__18365_signature,
	get_array__18365_filter_utils,
	array__18365_filter_size,
	array__18365_filter_values};
TypeUtils _SCSIM_struct__18368_Utils = {struct__18368_to_string,
	check_struct__18368_string,
	string_to_struct__18368,
	is_struct__18368_allow_double_convertion,
	0,
	compare_struct__18368_type,
	get_struct__18368_signature,
	get_struct__18368_filter_utils,
	struct__18368_filter_size,
	struct__18368_filter_values};
TypeUtils _SCSIM_struct__18376_Utils = {struct__18376_to_string,
	check_struct__18376_string,
	string_to_struct__18376,
	is_struct__18376_allow_double_convertion,
	0,
	compare_struct__18376_type,
	get_struct__18376_signature,
	get_struct__18376_filter_utils,
	struct__18376_filter_size,
	struct__18376_filter_values};
TypeUtils _SCSIM_struct__18383_Utils = {struct__18383_to_string,
	check_struct__18383_string,
	string_to_struct__18383,
	is_struct__18383_allow_double_convertion,
	0,
	compare_struct__18383_type,
	get_struct__18383_signature,
	get_struct__18383_filter_utils,
	struct__18383_filter_size,
	struct__18383_filter_values};
TypeUtils _SCSIM_struct__18391_Utils = {struct__18391_to_string,
	check_struct__18391_string,
	string_to_struct__18391,
	is_struct__18391_allow_double_convertion,
	0,
	compare_struct__18391_type,
	get_struct__18391_signature,
	get_struct__18391_filter_utils,
	struct__18391_filter_size,
	struct__18391_filter_values};
TypeUtils _SCSIM_struct__18402_Utils = {struct__18402_to_string,
	check_struct__18402_string,
	string_to_struct__18402,
	is_struct__18402_allow_double_convertion,
	0,
	compare_struct__18402_type,
	get_struct__18402_signature,
	get_struct__18402_filter_utils,
	struct__18402_filter_size,
	struct__18402_filter_values};
TypeUtils _SCSIM_array_bool_256_Utils = {array_bool_256_to_string,
	check_array_bool_256_string,
	string_to_array_bool_256,
	is_array_bool_256_allow_double_convertion,
	0,
	compare_array_bool_256_type,
	get_array_bool_256_signature,
	get_array_bool_256_filter_utils,
	array_bool_256_filter_size,
	array_bool_256_filter_values};
TypeUtils _SCSIM_array_bool_256_46_Utils = {array_bool_256_46_to_string,
	check_array_bool_256_46_string,
	string_to_array_bool_256_46,
	is_array_bool_256_46_allow_double_convertion,
	0,
	compare_array_bool_256_46_type,
	get_array_bool_256_46_signature,
	get_array_bool_256_46_filter_utils,
	array_bool_256_46_filter_size,
	array_bool_256_46_filter_values};
TypeUtils _SCSIM_struct__18414_Utils = {struct__18414_to_string,
	check_struct__18414_string,
	string_to_struct__18414,
	is_struct__18414_allow_double_convertion,
	0,
	compare_struct__18414_type,
	get_struct__18414_signature,
	get_struct__18414_filter_utils,
	struct__18414_filter_size,
	struct__18414_filter_values};
TypeUtils _SCSIM_struct__18424_Utils = {struct__18424_to_string,
	check_struct__18424_string,
	string_to_struct__18424,
	is_struct__18424_allow_double_convertion,
	0,
	compare_struct__18424_type,
	get_struct__18424_signature,
	get_struct__18424_filter_utils,
	struct__18424_filter_size,
	struct__18424_filter_values};
TypeUtils _SCSIM_array__18432_Utils = {array__18432_to_string,
	check_array__18432_string,
	string_to_array__18432,
	is_array__18432_allow_double_convertion,
	0,
	compare_array__18432_type,
	get_array__18432_signature,
	get_array__18432_filter_utils,
	array__18432_filter_size,
	array__18432_filter_values};
TypeUtils _SCSIM_array__18435_Utils = {array__18435_to_string,
	check_array__18435_string,
	string_to_array__18435,
	is_array__18435_allow_double_convertion,
	0,
	compare_array__18435_type,
	get_array__18435_signature,
	get_array__18435_filter_utils,
	array__18435_filter_size,
	array__18435_filter_values};
TypeUtils _SCSIM_array__18438_Utils = {array__18438_to_string,
	check_array__18438_string,
	string_to_array__18438,
	is_array__18438_allow_double_convertion,
	0,
	compare_array__18438_type,
	get_array__18438_signature,
	get_array__18438_filter_utils,
	array__18438_filter_size,
	array__18438_filter_values};
TypeUtils _SCSIM_array_bool_8_Utils = {array_bool_8_to_string,
	check_array_bool_8_string,
	string_to_array_bool_8,
	is_array_bool_8_allow_double_convertion,
	0,
	compare_array_bool_8_type,
	get_array_bool_8_signature,
	get_array_bool_8_filter_utils,
	array_bool_8_filter_size,
	array_bool_8_filter_values};
TypeUtils _SCSIM_array__18444_Utils = {array__18444_to_string,
	check_array__18444_string,
	string_to_array__18444,
	is_array__18444_allow_double_convertion,
	0,
	compare_array__18444_type,
	get_array__18444_signature,
	get_array__18444_filter_utils,
	array__18444_filter_size,
	array__18444_filter_values};
TypeUtils _SCSIM_array__18447_Utils = {array__18447_to_string,
	check_array__18447_string,
	string_to_array__18447,
	is_array__18447_allow_double_convertion,
	0,
	compare_array__18447_type,
	get_array__18447_signature,
	get_array__18447_filter_utils,
	array__18447_filter_size,
	array__18447_filter_values};
TypeUtils _SCSIM_array_int_500_500_Utils = {array_int_500_500_to_string,
	check_array_int_500_500_string,
	string_to_array_int_500_500,
	is_array_int_500_500_allow_double_convertion,
	0,
	compare_array_int_500_500_type,
	get_array_int_500_500_signature,
	get_array_int_500_500_filter_utils,
	array_int_500_500_filter_size,
	array_int_500_500_filter_values};
TypeUtils _SCSIM_array__18453_Utils = {array__18453_to_string,
	check_array__18453_string,
	string_to_array__18453,
	is_array__18453_allow_double_convertion,
	0,
	compare_array__18453_type,
	get_array__18453_signature,
	get_array__18453_filter_utils,
	array__18453_filter_size,
	array__18453_filter_values};
TypeUtils _SCSIM_array__18456_Utils = {array__18456_to_string,
	check_array__18456_string,
	string_to_array__18456,
	is_array__18456_allow_double_convertion,
	0,
	compare_array__18456_type,
	get_array__18456_signature,
	get_array__18456_filter_utils,
	array__18456_filter_size,
	array__18456_filter_values};
TypeUtils _SCSIM_array__18459_Utils = {array__18459_to_string,
	check_array__18459_string,
	string_to_array__18459,
	is_array__18459_allow_double_convertion,
	0,
	compare_array__18459_type,
	get_array__18459_signature,
	get_array__18459_filter_utils,
	array__18459_filter_size,
	array__18459_filter_values};
TypeUtils _SCSIM_array_bool_30_Utils = {array_bool_30_to_string,
	check_array_bool_30_string,
	string_to_array_bool_30,
	is_array_bool_30_allow_double_convertion,
	0,
	compare_array_bool_30_type,
	get_array_bool_30_signature,
	get_array_bool_30_filter_utils,
	array_bool_30_filter_size,
	array_bool_30_filter_values};
TypeUtils _SCSIM_array_int_8_Utils = {array_int_8_to_string,
	check_array_int_8_string,
	string_to_array_int_8,
	is_array_int_8_allow_double_convertion,
	0,
	compare_array_int_8_type,
	get_array_int_8_signature,
	get_array_int_8_filter_utils,
	array_int_8_filter_size,
	array_int_8_filter_values};
TypeUtils _SCSIM_array_int_30_Utils = {array_int_30_to_string,
	check_array_int_30_string,
	string_to_array_int_30,
	is_array_int_30_allow_double_convertion,
	0,
	compare_array_int_30_type,
	get_array_int_30_signature,
	get_array_int_30_filter_utils,
	array_int_30_filter_size,
	array_int_30_filter_values};
TypeUtils _SCSIM_array_bool_256_46_30_Utils = {array_bool_256_46_30_to_string,
	check_array_bool_256_46_30_string,
	string_to_array_bool_256_46_30,
	is_array_bool_256_46_30_allow_double_convertion,
	0,
	compare_array_bool_256_46_30_type,
	get_array_bool_256_46_30_signature,
	get_array_bool_256_46_30_filter_utils,
	array_bool_256_46_30_filter_size,
	array_bool_256_46_30_filter_values};
TypeUtils _SCSIM_array__18474_Utils = {array__18474_to_string,
	check_array__18474_string,
	string_to_array__18474,
	is_array__18474_allow_double_convertion,
	0,
	compare_array__18474_type,
	get_array__18474_signature,
	get_array__18474_filter_utils,
	array__18474_filter_size,
	array__18474_filter_values};
TypeUtils _SCSIM_array__18477_Utils = {array__18477_to_string,
	check_array__18477_string,
	string_to_array__18477,
	is_array__18477_allow_double_convertion,
	0,
	compare_array__18477_type,
	get_array__18477_signature,
	get_array__18477_filter_utils,
	array__18477_filter_size,
	array__18477_filter_values};
TypeUtils _SCSIM_array__18480_Utils = {array__18480_to_string,
	check_array__18480_string,
	string_to_array__18480,
	is_array__18480_allow_double_convertion,
	0,
	compare_array__18480_type,
	get_array__18480_signature,
	get_array__18480_filter_utils,
	array__18480_filter_size,
	array__18480_filter_values};
TypeUtils _SCSIM_array_int_7_33_231_Utils = {array_int_7_33_231_to_string,
	check_array_int_7_33_231_string,
	string_to_array_int_7_33_231,
	is_array_int_7_33_231_allow_double_convertion,
	0,
	compare_array_int_7_33_231_type,
	get_array_int_7_33_231_signature,
	get_array_int_7_33_231_filter_utils,
	array_int_7_33_231_filter_size,
	array_int_7_33_231_filter_values};
TypeUtils _SCSIM_array_int_264_Utils = {array_int_264_to_string,
	check_array_int_264_string,
	string_to_array_int_264,
	is_array_int_264_allow_double_convertion,
	0,
	compare_array_int_264_type,
	get_array_int_264_signature,
	get_array_int_264_filter_utils,
	array_int_264_filter_size,
	array_int_264_filter_values};
TypeUtils _SCSIM_array_int_4_Utils = {array_int_4_to_string,
	check_array_int_4_string,
	string_to_array_int_4,
	is_array_int_4_allow_double_convertion,
	0,
	compare_array_int_4_type,
	get_array_int_4_signature,
	get_array_int_4_filter_utils,
	array_int_4_filter_size,
	array_int_4_filter_values};
TypeUtils _SCSIM_array_int_1_Utils = {array_int_1_to_string,
	check_array_int_1_string,
	string_to_array_int_1,
	is_array_int_1_allow_double_convertion,
	0,
	compare_array_int_1_type,
	get_array_int_1_signature,
	get_array_int_1_filter_utils,
	array_int_1_filter_size,
	array_int_1_filter_values};
TypeUtils _SCSIM_array_int_5_Utils = {array_int_5_to_string,
	check_array_int_5_string,
	string_to_array_int_5,
	is_array_int_5_allow_double_convertion,
	0,
	compare_array_int_5_type,
	get_array_int_5_signature,
	get_array_int_5_filter_utils,
	array_int_5_filter_size,
	array_int_5_filter_values};
TypeUtils _SCSIM_array_int_236_Utils = {array_int_236_to_string,
	check_array_int_236_string,
	string_to_array_int_236,
	is_array_int_236_allow_double_convertion,
	0,
	compare_array_int_236_type,
	get_array_int_236_signature,
	get_array_int_236_filter_utils,
	array_int_236_filter_size,
	array_int_236_filter_values};
TypeUtils _SCSIM_array__18501_Utils = {array__18501_to_string,
	check_array__18501_string,
	string_to_array__18501,
	is_array__18501_allow_double_convertion,
	0,
	compare_array__18501_type,
	get_array__18501_signature,
	get_array__18501_filter_utils,
	array__18501_filter_size,
	array__18501_filter_values};
TypeUtils _SCSIM_array_bool_10_Utils = {array_bool_10_to_string,
	check_array_bool_10_string,
	string_to_array_bool_10,
	is_array_bool_10_allow_double_convertion,
	0,
	compare_array_bool_10_type,
	get_array_bool_10_signature,
	get_array_bool_10_filter_utils,
	array_bool_10_filter_size,
	array_bool_10_filter_values};
TypeUtils _SCSIM_NID_C_Utils = {NID_C_to_string,
	check_NID_C_string,
	string_to_NID_C,
	is_NID_C_allow_double_convertion,
	NID_C_to_double,
	compare_NID_C_type,
	get_NID_C_signature,
	get_NID_C_filter_utils,
	NID_C_filter_size,
	NID_C_filter_values};
TypeUtils _SCSIM_NID_BG_Utils = {NID_BG_to_string,
	check_NID_BG_string,
	string_to_NID_BG,
	is_NID_BG_allow_double_convertion,
	NID_BG_to_double,
	compare_NID_BG_type,
	get_NID_BG_signature,
	get_NID_BG_filter_utils,
	NID_BG_filter_size,
	NID_BG_filter_values};
TypeUtils _SCSIM_Q_UPDOWN_Utils = {Q_UPDOWN_to_string,
	check_Q_UPDOWN_string,
	string_to_Q_UPDOWN,
	is_Q_UPDOWN_allow_double_convertion,
	Q_UPDOWN_to_double,
	compare_Q_UPDOWN_type,
	get_Q_UPDOWN_signature,
	get_Q_UPDOWN_filter_utils,
	Q_UPDOWN_filter_size,
	Q_UPDOWN_filter_values};
TypeUtils _SCSIM_M_VERSION_Utils = {M_VERSION_to_string,
	check_M_VERSION_string,
	string_to_M_VERSION,
	is_M_VERSION_allow_double_convertion,
	M_VERSION_to_double,
	compare_M_VERSION_type,
	get_M_VERSION_signature,
	get_M_VERSION_filter_utils,
	M_VERSION_filter_size,
	M_VERSION_filter_values};
TypeUtils _SCSIM_Q_MEDIA_Utils = {Q_MEDIA_to_string,
	check_Q_MEDIA_string,
	string_to_Q_MEDIA,
	is_Q_MEDIA_allow_double_convertion,
	Q_MEDIA_to_double,
	compare_Q_MEDIA_type,
	get_Q_MEDIA_signature,
	get_Q_MEDIA_filter_utils,
	Q_MEDIA_filter_size,
	Q_MEDIA_filter_values};
TypeUtils _SCSIM_N_PIG_Utils = {N_PIG_to_string,
	check_N_PIG_string,
	string_to_N_PIG,
	is_N_PIG_allow_double_convertion,
	N_PIG_to_double,
	compare_N_PIG_type,
	get_N_PIG_signature,
	get_N_PIG_filter_utils,
	N_PIG_filter_size,
	N_PIG_filter_values};
TypeUtils _SCSIM_N_TOTAL_Utils = {N_TOTAL_to_string,
	check_N_TOTAL_string,
	string_to_N_TOTAL,
	is_N_TOTAL_allow_double_convertion,
	N_TOTAL_to_double,
	compare_N_TOTAL_type,
	get_N_TOTAL_signature,
	get_N_TOTAL_filter_utils,
	N_TOTAL_filter_size,
	N_TOTAL_filter_values};
TypeUtils _SCSIM_M_DUP_Utils = {M_DUP_to_string,
	check_M_DUP_string,
	string_to_M_DUP,
	is_M_DUP_allow_double_convertion,
	M_DUP_to_double,
	compare_M_DUP_type,
	get_M_DUP_signature,
	get_M_DUP_filter_utils,
	M_DUP_filter_size,
	M_DUP_filter_values};
TypeUtils _SCSIM_M_MCOUNT_Utils = {M_MCOUNT_to_string,
	check_M_MCOUNT_string,
	string_to_M_MCOUNT,
	is_M_MCOUNT_allow_double_convertion,
	M_MCOUNT_to_double,
	compare_M_MCOUNT_type,
	get_M_MCOUNT_signature,
	get_M_MCOUNT_filter_utils,
	M_MCOUNT_filter_size,
	M_MCOUNT_filter_values};
TypeUtils _SCSIM_Q_LINK_Utils = {Q_LINK_to_string,
	check_Q_LINK_string,
	string_to_Q_LINK,
	is_Q_LINK_allow_double_convertion,
	Q_LINK_to_double,
	compare_Q_LINK_type,
	get_Q_LINK_signature,
	get_Q_LINK_filter_utils,
	Q_LINK_filter_size,
	Q_LINK_filter_values};
TypeUtils _SCSIM_NID_PACKET_Utils = {NID_PACKET_to_string,
	check_NID_PACKET_string,
	string_to_NID_PACKET,
	is_NID_PACKET_allow_double_convertion,
	NID_PACKET_to_double,
	compare_NID_PACKET_type,
	get_NID_PACKET_signature,
	get_NID_PACKET_filter_utils,
	NID_PACKET_filter_size,
	NID_PACKET_filter_values};
TypeUtils _SCSIM_Q_DIR_Utils = {Q_DIR_to_string,
	check_Q_DIR_string,
	string_to_Q_DIR,
	is_Q_DIR_allow_double_convertion,
	Q_DIR_to_double,
	compare_Q_DIR_type,
	get_Q_DIR_signature,
	get_Q_DIR_filter_utils,
	Q_DIR_filter_size,
	Q_DIR_filter_values};
TypeUtils _SCSIM_NID_MESSAGE_Utils = {NID_MESSAGE_to_string,
	check_NID_MESSAGE_string,
	string_to_NID_MESSAGE,
	is_NID_MESSAGE_allow_double_convertion,
	NID_MESSAGE_to_double,
	compare_NID_MESSAGE_type,
	get_NID_MESSAGE_signature,
	get_NID_MESSAGE_filter_utils,
	NID_MESSAGE_filter_size,
	NID_MESSAGE_filter_values};
TypeUtils _SCSIM_T_TRAIN_Utils = {T_TRAIN_to_string,
	check_T_TRAIN_string,
	string_to_T_TRAIN,
	is_T_TRAIN_allow_double_convertion,
	T_TRAIN_to_double,
	compare_T_TRAIN_type,
	get_T_TRAIN_signature,
	get_T_TRAIN_filter_utils,
	T_TRAIN_filter_size,
	T_TRAIN_filter_values};
TypeUtils _SCSIM_M_ACK_Utils = {M_ACK_to_string,
	check_M_ACK_string,
	string_to_M_ACK,
	is_M_ACK_allow_double_convertion,
	M_ACK_to_double,
	compare_M_ACK_type,
	get_M_ACK_signature,
	get_M_ACK_filter_utils,
	M_ACK_filter_size,
	M_ACK_filter_values};
TypeUtils _SCSIM_NID_LRBG_Utils = {NID_LRBG_to_string,
	check_NID_LRBG_string,
	string_to_NID_LRBG,
	is_NID_LRBG_allow_double_convertion,
	NID_LRBG_to_double,
	compare_NID_LRBG_type,
	get_NID_LRBG_signature,
	get_NID_LRBG_filter_utils,
	NID_LRBG_filter_size,
	NID_LRBG_filter_values};
TypeUtils _SCSIM_NID_EM_Utils = {NID_EM_to_string,
	check_NID_EM_string,
	string_to_NID_EM,
	is_NID_EM_allow_double_convertion,
	NID_EM_to_double,
	compare_NID_EM_type,
	get_NID_EM_signature,
	get_NID_EM_filter_utils,
	NID_EM_filter_size,
	NID_EM_filter_values};
TypeUtils _SCSIM_Q_SCALE_Utils = {Q_SCALE_to_string,
	check_Q_SCALE_string,
	string_to_Q_SCALE,
	is_Q_SCALE_allow_double_convertion,
	Q_SCALE_to_double,
	compare_Q_SCALE_type,
	get_Q_SCALE_signature,
	get_Q_SCALE_filter_utils,
	Q_SCALE_filter_size,
	Q_SCALE_filter_values};
TypeUtils _SCSIM_D_SR_Utils = {D_SR_to_string,
	check_D_SR_string,
	string_to_D_SR,
	is_D_SR_allow_double_convertion,
	D_SR_to_double,
	compare_D_SR_type,
	get_D_SR_signature,
	get_D_SR_filter_utils,
	D_SR_filter_size,
	D_SR_filter_values};
TypeUtils _SCSIM_D_REF_Utils = {D_REF_to_string,
	check_D_REF_string,
	string_to_D_REF,
	is_D_REF_allow_double_convertion,
	D_REF_to_double,
	compare_D_REF_type,
	get_D_REF_signature,
	get_D_REF_filter_utils,
	D_REF_filter_size,
	D_REF_filter_values};
TypeUtils _SCSIM_D_EMERGENCYSTOP_Utils = {D_EMERGENCYSTOP_to_string,
	check_D_EMERGENCYSTOP_string,
	string_to_D_EMERGENCYSTOP,
	is_D_EMERGENCYSTOP_allow_double_convertion,
	D_EMERGENCYSTOP_to_double,
	compare_D_EMERGENCYSTOP_type,
	get_D_EMERGENCYSTOP_signature,
	get_D_EMERGENCYSTOP_filter_utils,
	D_EMERGENCYSTOP_filter_size,
	D_EMERGENCYSTOP_filter_values};
TypeUtils _SCSIM_M_MODE_Utils = {M_MODE_to_string,
	check_M_MODE_string,
	string_to_M_MODE,
	is_M_MODE_allow_double_convertion,
	M_MODE_to_double,
	compare_M_MODE_type,
	get_M_MODE_signature,
	get_M_MODE_filter_utils,
	M_MODE_filter_size,
	M_MODE_filter_values};
TypeUtils _SCSIM_Q_NVLOCACC_Utils = {Q_NVLOCACC_to_string,
	check_Q_NVLOCACC_string,
	string_to_Q_NVLOCACC,
	is_Q_NVLOCACC_allow_double_convertion,
	Q_NVLOCACC_to_double,
	compare_Q_NVLOCACC_type,
	get_Q_NVLOCACC_signature,
	get_Q_NVLOCACC_filter_utils,
	Q_NVLOCACC_filter_size,
	Q_NVLOCACC_filter_values};
TypeUtils _SCSIM_Q_DIRLRBG_Utils = {Q_DIRLRBG_to_string,
	check_Q_DIRLRBG_string,
	string_to_Q_DIRLRBG,
	is_Q_DIRLRBG_allow_double_convertion,
	Q_DIRLRBG_to_double,
	compare_Q_DIRLRBG_type,
	get_Q_DIRLRBG_signature,
	get_Q_DIRLRBG_filter_utils,
	Q_DIRLRBG_filter_size,
	Q_DIRLRBG_filter_values};
TypeUtils _SCSIM_Q_DIRTRAIN_Utils = {Q_DIRTRAIN_to_string,
	check_Q_DIRTRAIN_string,
	string_to_Q_DIRTRAIN,
	is_Q_DIRTRAIN_allow_double_convertion,
	Q_DIRTRAIN_to_double,
	compare_Q_DIRTRAIN_type,
	get_Q_DIRTRAIN_signature,
	get_Q_DIRTRAIN_filter_utils,
	Q_DIRTRAIN_filter_size,
	Q_DIRTRAIN_filter_values};
TypeUtils _SCSIM_Q_LINKORIENTATION_Utils = {Q_LINKORIENTATION_to_string,
	check_Q_LINKORIENTATION_string,
	string_to_Q_LINKORIENTATION,
	is_Q_LINKORIENTATION_allow_double_convertion,
	Q_LINKORIENTATION_to_double,
	compare_Q_LINKORIENTATION_type,
	get_Q_LINKORIENTATION_signature,
	get_Q_LINKORIENTATION_filter_utils,
	Q_LINKORIENTATION_filter_size,
	Q_LINKORIENTATION_filter_values};
TypeUtils _SCSIM_D_LINK_Utils = {D_LINK_to_string,
	check_D_LINK_string,
	string_to_D_LINK,
	is_D_LINK_allow_double_convertion,
	D_LINK_to_double,
	compare_D_LINK_type,
	get_D_LINK_signature,
	get_D_LINK_filter_utils,
	D_LINK_filter_size,
	D_LINK_filter_values};
TypeUtils _SCSIM_Q_NEWCOUNTRY_Utils = {Q_NEWCOUNTRY_to_string,
	check_Q_NEWCOUNTRY_string,
	string_to_Q_NEWCOUNTRY,
	is_Q_NEWCOUNTRY_allow_double_convertion,
	Q_NEWCOUNTRY_to_double,
	compare_Q_NEWCOUNTRY_type,
	get_Q_NEWCOUNTRY_signature,
	get_Q_NEWCOUNTRY_filter_utils,
	Q_NEWCOUNTRY_filter_size,
	Q_NEWCOUNTRY_filter_values};
TypeUtils _SCSIM_Q_LINKREACTION_Utils = {Q_LINKREACTION_to_string,
	check_Q_LINKREACTION_string,
	string_to_Q_LINKREACTION,
	is_Q_LINKREACTION_allow_double_convertion,
	Q_LINKREACTION_to_double,
	compare_Q_LINKREACTION_type,
	get_Q_LINKREACTION_signature,
	get_Q_LINKREACTION_filter_utils,
	Q_LINKREACTION_filter_size,
	Q_LINKREACTION_filter_values};
TypeUtils _SCSIM_Q_LOCACC_Utils = {Q_LOCACC_to_string,
	check_Q_LOCACC_string,
	string_to_Q_LOCACC,
	is_Q_LOCACC_allow_double_convertion,
	Q_LOCACC_to_double,
	compare_Q_LOCACC_type,
	get_Q_LOCACC_signature,
	get_Q_LOCACC_filter_utils,
	Q_LOCACC_filter_size,
	Q_LOCACC_filter_values};
TypeUtils _SCSIM_Q_DLRBG_Utils = {Q_DLRBG_to_string,
	check_Q_DLRBG_string,
	string_to_Q_DLRBG,
	is_Q_DLRBG_allow_double_convertion,
	Q_DLRBG_to_double,
	compare_Q_DLRBG_type,
	get_Q_DLRBG_signature,
	get_Q_DLRBG_filter_utils,
	Q_DLRBG_filter_size,
	Q_DLRBG_filter_values};
TypeUtils _SCSIM_MetadataTruthtable_T_Utils = {MetadataTruthtable_T_to_string,
	check_MetadataTruthtable_T_string,
	string_to_MetadataTruthtable_T,
	is_MetadataTruthtable_T_allow_double_convertion,
	MetadataTruthtable_T_to_double,
	compare_MetadataTruthtable_T_type,
	get_MetadataTruthtable_T_signature,
	get_MetadataTruthtable_T_filter_utils,
	MetadataTruthtable_T_filter_size,
	MetadataTruthtable_T_filter_values};
TypeUtils _SCSIM_L_PACKET_Utils = {L_PACKET_to_string,
	check_L_PACKET_string,
	string_to_L_PACKET,
	is_L_PACKET_allow_double_convertion,
	L_PACKET_to_double,
	compare_L_PACKET_type,
	get_L_PACKET_signature,
	get_L_PACKET_filter_utils,
	L_PACKET_filter_size,
	L_PACKET_filter_values};
TypeUtils _SCSIM_T_CYCLOC_Utils = {T_CYCLOC_to_string,
	check_T_CYCLOC_string,
	string_to_T_CYCLOC,
	is_T_CYCLOC_allow_double_convertion,
	T_CYCLOC_to_double,
	compare_T_CYCLOC_type,
	get_T_CYCLOC_signature,
	get_T_CYCLOC_filter_utils,
	T_CYCLOC_filter_size,
	T_CYCLOC_filter_values};
TypeUtils _SCSIM_D_CYCLOC_Utils = {D_CYCLOC_to_string,
	check_D_CYCLOC_string,
	string_to_D_CYCLOC,
	is_D_CYCLOC_allow_double_convertion,
	D_CYCLOC_to_double,
	compare_D_CYCLOC_type,
	get_D_CYCLOC_signature,
	get_D_CYCLOC_filter_utils,
	D_CYCLOC_filter_size,
	D_CYCLOC_filter_values};
TypeUtils _SCSIM_M_LOC_Utils = {M_LOC_to_string,
	check_M_LOC_string,
	string_to_M_LOC,
	is_M_LOC_allow_double_convertion,
	M_LOC_to_double,
	compare_M_LOC_type,
	get_M_LOC_signature,
	get_M_LOC_filter_utils,
	M_LOC_filter_size,
	M_LOC_filter_values};
TypeUtils _SCSIM_N_ITER_Utils = {N_ITER_to_string,
	check_N_ITER_string,
	string_to_N_ITER,
	is_N_ITER_allow_double_convertion,
	N_ITER_to_double,
	compare_N_ITER_type,
	get_N_ITER_signature,
	get_N_ITER_filter_utils,
	N_ITER_filter_size,
	N_ITER_filter_values};
TypeUtils _SCSIM_D_LOC_Utils = {D_LOC_to_string,
	check_D_LOC_string,
	string_to_D_LOC,
	is_D_LOC_allow_double_convertion,
	D_LOC_to_double,
	compare_D_LOC_type,
	get_D_LOC_signature,
	get_D_LOC_filter_utils,
	D_LOC_filter_size,
	D_LOC_filter_values};
TypeUtils _SCSIM_Q_LGTLOC_Utils = {Q_LGTLOC_to_string,
	check_Q_LGTLOC_string,
	string_to_Q_LGTLOC,
	is_Q_LGTLOC_allow_double_convertion,
	Q_LGTLOC_to_double,
	compare_Q_LGTLOC_type,
	get_Q_LGTLOC_signature,
	get_Q_LGTLOC_filter_utils,
	Q_LGTLOC_filter_size,
	Q_LGTLOC_filter_values};
TypeUtils _SCSIM_Q_RBC_Utils = {Q_RBC_to_string,
	check_Q_RBC_string,
	string_to_Q_RBC,
	is_Q_RBC_allow_double_convertion,
	Q_RBC_to_double,
	compare_Q_RBC_type,
	get_Q_RBC_signature,
	get_Q_RBC_filter_utils,
	Q_RBC_filter_size,
	Q_RBC_filter_values};
TypeUtils _SCSIM_NID_RBC_Utils = {NID_RBC_to_string,
	check_NID_RBC_string,
	string_to_NID_RBC,
	is_NID_RBC_allow_double_convertion,
	NID_RBC_to_double,
	compare_NID_RBC_type,
	get_NID_RBC_signature,
	get_NID_RBC_filter_utils,
	NID_RBC_filter_size,
	NID_RBC_filter_values};
TypeUtils _SCSIM_NID_RADIO_Utils = {NID_RADIO_to_string,
	check_NID_RADIO_string,
	string_to_NID_RADIO,
	is_NID_RADIO_allow_double_convertion,
	NID_RADIO_to_double,
	compare_NID_RADIO_type,
	get_NID_RADIO_signature,
	get_NID_RADIO_filter_utils,
	NID_RADIO_filter_size,
	NID_RADIO_filter_values};
TypeUtils _SCSIM_Q_SLEEPSESSION_Utils = {Q_SLEEPSESSION_to_string,
	check_Q_SLEEPSESSION_string,
	string_to_Q_SLEEPSESSION,
	is_Q_SLEEPSESSION_allow_double_convertion,
	Q_SLEEPSESSION_to_double,
	compare_Q_SLEEPSESSION_type,
	get_Q_SLEEPSESSION_signature,
	get_Q_SLEEPSESSION_filter_utils,
	Q_SLEEPSESSION_filter_size,
	Q_SLEEPSESSION_filter_values};
TypeUtils _SCSIM_NID_MN_Utils = {NID_MN_to_string,
	check_NID_MN_string,
	string_to_NID_MN,
	is_NID_MN_allow_double_convertion,
	NID_MN_to_double,
	compare_NID_MN_type,
	get_NID_MN_signature,
	get_NID_MN_filter_utils,
	NID_MN_filter_size,
	NID_MN_filter_values};
TypeUtils _SCSIM_M_LEVEL_Utils = {M_LEVEL_to_string,
	check_M_LEVEL_string,
	string_to_M_LEVEL,
	is_M_LEVEL_allow_double_convertion,
	M_LEVEL_to_double,
	compare_M_LEVEL_type,
	get_M_LEVEL_signature,
	get_M_LEVEL_filter_utils,
	M_LEVEL_filter_size,
	M_LEVEL_filter_values};
TypeUtils _SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils = {ReceivedBG_CheckBGInputChannel_Pkg_to_string,
	check_ReceivedBG_CheckBGInputChannel_Pkg_string,
	string_to_ReceivedBG_CheckBGInputChannel_Pkg,
	is_ReceivedBG_CheckBGInputChannel_Pkg_allow_double_convertion,
	ReceivedBG_CheckBGInputChannel_Pkg_to_double,
	compare_ReceivedBG_CheckBGInputChannel_Pkg_type,
	get_ReceivedBG_CheckBGInputChannel_Pkg_signature,
	get_ReceivedBG_CheckBGInputChannel_Pkg_filter_utils,
	ReceivedBG_CheckBGInputChannel_Pkg_filter_size,
	ReceivedBG_CheckBGInputChannel_Pkg_filter_values};
TypeUtils _SCSIM_Completeness_CheckBGInputChannel_Pkg_Utils = {Completeness_CheckBGInputChannel_Pkg_to_string,
	check_Completeness_CheckBGInputChannel_Pkg_string,
	string_to_Completeness_CheckBGInputChannel_Pkg,
	is_Completeness_CheckBGInputChannel_Pkg_allow_double_convertion,
	Completeness_CheckBGInputChannel_Pkg_to_double,
	compare_Completeness_CheckBGInputChannel_Pkg_type,
	get_Completeness_CheckBGInputChannel_Pkg_signature,
	get_Completeness_CheckBGInputChannel_Pkg_filter_utils,
	Completeness_CheckBGInputChannel_Pkg_filter_size,
	Completeness_CheckBGInputChannel_Pkg_filter_values};
TypeUtils _SCSIM_Consistency_CheckBGInputChannel_Pkg_Utils = {Consistency_CheckBGInputChannel_Pkg_to_string,
	check_Consistency_CheckBGInputChannel_Pkg_string,
	string_to_Consistency_CheckBGInputChannel_Pkg,
	is_Consistency_CheckBGInputChannel_Pkg_allow_double_convertion,
	Consistency_CheckBGInputChannel_Pkg_to_double,
	compare_Consistency_CheckBGInputChannel_Pkg_type,
	get_Consistency_CheckBGInputChannel_Pkg_signature,
	get_Consistency_CheckBGInputChannel_Pkg_filter_utils,
	Consistency_CheckBGInputChannel_Pkg_filter_size,
	Consistency_CheckBGInputChannel_Pkg_filter_values};
TypeUtils _SCSIM_ReceivedBGs_CheckBGInputChannel_Pkg_Utils = {ReceivedBGs_CheckBGInputChannel_Pkg_to_string,
	check_ReceivedBGs_CheckBGInputChannel_Pkg_string,
	string_to_ReceivedBGs_CheckBGInputChannel_Pkg,
	is_ReceivedBGs_CheckBGInputChannel_Pkg_allow_double_convertion,
	ReceivedBGs_CheckBGInputChannel_Pkg_to_double,
	compare_ReceivedBGs_CheckBGInputChannel_Pkg_type,
	get_ReceivedBGs_CheckBGInputChannel_Pkg_signature,
	get_ReceivedBGs_CheckBGInputChannel_Pkg_filter_utils,
	ReceivedBGs_CheckBGInputChannel_Pkg_filter_size,
	ReceivedBGs_CheckBGInputChannel_Pkg_filter_values};
TypeUtils _SCSIM_checkedBG_CheckBGInputChannel_Pkg_Utils = {checkedBG_CheckBGInputChannel_Pkg_to_string,
	check_checkedBG_CheckBGInputChannel_Pkg_string,
	string_to_checkedBG_CheckBGInputChannel_Pkg,
	is_checkedBG_CheckBGInputChannel_Pkg_allow_double_convertion,
	checkedBG_CheckBGInputChannel_Pkg_to_double,
	compare_checkedBG_CheckBGInputChannel_Pkg_type,
	get_checkedBG_CheckBGInputChannel_Pkg_signature,
	get_checkedBG_CheckBGInputChannel_Pkg_filter_utils,
	checkedBG_CheckBGInputChannel_Pkg_filter_size,
	checkedBG_CheckBGInputChannel_Pkg_filter_values};
TypeUtils _SCSIM_delaytime_T_CheckBGInputChannel_Pkg_Utils = {delaytime_T_CheckBGInputChannel_Pkg_to_string,
	check_delaytime_T_CheckBGInputChannel_Pkg_string,
	string_to_delaytime_T_CheckBGInputChannel_Pkg,
	is_delaytime_T_CheckBGInputChannel_Pkg_allow_double_convertion,
	delaytime_T_CheckBGInputChannel_Pkg_to_double,
	compare_delaytime_T_CheckBGInputChannel_Pkg_type,
	get_delaytime_T_CheckBGInputChannel_Pkg_signature,
	get_delaytime_T_CheckBGInputChannel_Pkg_filter_utils,
	delaytime_T_CheckBGInputChannel_Pkg_filter_size,
	delaytime_T_CheckBGInputChannel_Pkg_filter_values};
TypeUtils _SCSIM_outBGchecks_CheckBGInputChannel_Pkg_Utils = {outBGchecks_CheckBGInputChannel_Pkg_to_string,
	check_outBGchecks_CheckBGInputChannel_Pkg_string,
	string_to_outBGchecks_CheckBGInputChannel_Pkg,
	is_outBGchecks_CheckBGInputChannel_Pkg_allow_double_convertion,
	outBGchecks_CheckBGInputChannel_Pkg_to_double,
	compare_outBGchecks_CheckBGInputChannel_Pkg_type,
	get_outBGchecks_CheckBGInputChannel_Pkg_signature,
	get_outBGchecks_CheckBGInputChannel_Pkg_filter_utils,
	outBGchecks_CheckBGInputChannel_Pkg_filter_size,
	outBGchecks_CheckBGInputChannel_Pkg_filter_values};
TypeUtils _SCSIM_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils = {BGCollector_T_Receive_TrackSide_Msg_Pkg_to_string,
	check_BGCollector_T_Receive_TrackSide_Msg_Pkg_string,
	string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg,
	is_BGCollector_T_Receive_TrackSide_Msg_Pkg_allow_double_convertion,
	BGCollector_T_Receive_TrackSide_Msg_Pkg_to_double,
	compare_BGCollector_T_Receive_TrackSide_Msg_Pkg_type,
	get_BGCollector_T_Receive_TrackSide_Msg_Pkg_signature,
	get_BGCollector_T_Receive_TrackSide_Msg_Pkg_filter_utils,
	BGCollector_T_Receive_TrackSide_Msg_Pkg_filter_size,
	BGCollector_T_Receive_TrackSide_Msg_Pkg_filter_values};
TypeUtils _SCSIM_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils = {TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_string,
	check_TelegramStore_T_Receive_TrackSide_Msg_Pkg_string,
	string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg,
	is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_allow_double_convertion,
	TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_double,
	compare_TelegramStore_T_Receive_TrackSide_Msg_Pkg_type,
	get_TelegramStore_T_Receive_TrackSide_Msg_Pkg_signature,
	get_TelegramStore_T_Receive_TrackSide_Msg_Pkg_filter_utils,
	TelegramStore_T_Receive_TrackSide_Msg_Pkg_filter_size,
	TelegramStore_T_Receive_TrackSide_Msg_Pkg_filter_values};
TypeUtils _SCSIM_MsgSource_T_Common_Types_Pkg_Utils = {MsgSource_T_Common_Types_Pkg_to_string,
	check_MsgSource_T_Common_Types_Pkg_string,
	string_to_MsgSource_T_Common_Types_Pkg,
	is_MsgSource_T_Common_Types_Pkg_allow_double_convertion,
	MsgSource_T_Common_Types_Pkg_to_double,
	compare_MsgSource_T_Common_Types_Pkg_type,
	get_MsgSource_T_Common_Types_Pkg_signature,
	get_MsgSource_T_Common_Types_Pkg_filter_utils,
	MsgSource_T_Common_Types_Pkg_filter_size,
	MsgSource_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils = {CompressedPackets_T_Common_Types_Pkg_to_string,
	check_CompressedPackets_T_Common_Types_Pkg_string,
	string_to_CompressedPackets_T_Common_Types_Pkg,
	is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion,
	CompressedPackets_T_Common_Types_Pkg_to_double,
	compare_CompressedPackets_T_Common_Types_Pkg_type,
	get_CompressedPackets_T_Common_Types_Pkg_signature,
	get_CompressedPackets_T_Common_Types_Pkg_filter_utils,
	CompressedPackets_T_Common_Types_Pkg_filter_size,
	CompressedPackets_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils = {Metadata_T_Common_Types_Pkg_to_string,
	check_Metadata_T_Common_Types_Pkg_string,
	string_to_Metadata_T_Common_Types_Pkg,
	is_Metadata_T_Common_Types_Pkg_allow_double_convertion,
	Metadata_T_Common_Types_Pkg_to_double,
	compare_Metadata_T_Common_Types_Pkg_type,
	get_Metadata_T_Common_Types_Pkg_signature,
	get_Metadata_T_Common_Types_Pkg_filter_utils,
	Metadata_T_Common_Types_Pkg_filter_size,
	Metadata_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils = {MetadataElement_T_Common_Types_Pkg_to_string,
	check_MetadataElement_T_Common_Types_Pkg_string,
	string_to_MetadataElement_T_Common_Types_Pkg,
	is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion,
	MetadataElement_T_Common_Types_Pkg_to_double,
	compare_MetadataElement_T_Common_Types_Pkg_type,
	get_MetadataElement_T_Common_Types_Pkg_signature,
	get_MetadataElement_T_Common_Types_Pkg_filter_utils,
	MetadataElement_T_Common_Types_Pkg_filter_size,
	MetadataElement_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils = {CompressedPacketData_T_Common_Types_Pkg_to_string,
	check_CompressedPacketData_T_Common_Types_Pkg_string,
	string_to_CompressedPacketData_T_Common_Types_Pkg,
	is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion,
	CompressedPacketData_T_Common_Types_Pkg_to_double,
	compare_CompressedPacketData_T_Common_Types_Pkg_type,
	get_CompressedPacketData_T_Common_Types_Pkg_signature,
	get_CompressedPacketData_T_Common_Types_Pkg_filter_utils,
	CompressedPacketData_T_Common_Types_Pkg_filter_size,
	CompressedPacketData_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_TrackSide_ForCheck_T_Common_Types_Pkg_Utils = {TrackSide_ForCheck_T_Common_Types_Pkg_to_string,
	check_TrackSide_ForCheck_T_Common_Types_Pkg_string,
	string_to_TrackSide_ForCheck_T_Common_Types_Pkg,
	is_TrackSide_ForCheck_T_Common_Types_Pkg_allow_double_convertion,
	TrackSide_ForCheck_T_Common_Types_Pkg_to_double,
	compare_TrackSide_ForCheck_T_Common_Types_Pkg_type,
	get_TrackSide_ForCheck_T_Common_Types_Pkg_signature,
	get_TrackSide_ForCheck_T_Common_Types_Pkg_filter_utils,
	TrackSide_ForCheck_T_Common_Types_Pkg_filter_size,
	TrackSide_ForCheck_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils = {RadioMetadata_T_Common_Types_Pkg_to_string,
	check_RadioMetadata_T_Common_Types_Pkg_string,
	string_to_RadioMetadata_T_Common_Types_Pkg,
	is_RadioMetadata_T_Common_Types_Pkg_allow_double_convertion,
	RadioMetadata_T_Common_Types_Pkg_to_double,
	compare_RadioMetadata_T_Common_Types_Pkg_type,
	get_RadioMetadata_T_Common_Types_Pkg_signature,
	get_RadioMetadata_T_Common_Types_Pkg_filter_utils,
	RadioMetadata_T_Common_Types_Pkg_filter_size,
	RadioMetadata_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_ReceivedMessage_T_Common_Types_Pkg_Utils = {ReceivedMessage_T_Common_Types_Pkg_to_string,
	check_ReceivedMessage_T_Common_Types_Pkg_string,
	string_to_ReceivedMessage_T_Common_Types_Pkg,
	is_ReceivedMessage_T_Common_Types_Pkg_allow_double_convertion,
	ReceivedMessage_T_Common_Types_Pkg_to_double,
	compare_ReceivedMessage_T_Common_Types_Pkg_type,
	get_ReceivedMessage_T_Common_Types_Pkg_signature,
	get_ReceivedMessage_T_Common_Types_Pkg_filter_utils,
	ReceivedMessage_T_Common_Types_Pkg_filter_size,
	ReceivedMessage_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_PositionReportParameter_T_Common_Types_Pkg_Utils = {PositionReportParameter_T_Common_Types_Pkg_to_string,
	check_PositionReportParameter_T_Common_Types_Pkg_string,
	string_to_PositionReportParameter_T_Common_Types_Pkg,
	is_PositionReportParameter_T_Common_Types_Pkg_allow_double_convertion,
	PositionReportParameter_T_Common_Types_Pkg_to_double,
	compare_PositionReportParameter_T_Common_Types_Pkg_type,
	get_PositionReportParameter_T_Common_Types_Pkg_signature,
	get_PositionReportParameter_T_Common_Types_Pkg_filter_utils,
	PositionReportParameter_T_Common_Types_Pkg_filter_size,
	PositionReportParameter_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_radioManagementMessage_T_Common_Types_Pkg_Utils = {radioManagementMessage_T_Common_Types_Pkg_to_string,
	check_radioManagementMessage_T_Common_Types_Pkg_string,
	string_to_radioManagementMessage_T_Common_Types_Pkg,
	is_radioManagementMessage_T_Common_Types_Pkg_allow_double_convertion,
	radioManagementMessage_T_Common_Types_Pkg_to_double,
	compare_radioManagementMessage_T_Common_Types_Pkg_type,
	get_radioManagementMessage_T_Common_Types_Pkg_signature,
	get_radioManagementMessage_T_Common_Types_Pkg_filter_utils,
	radioManagementMessage_T_Common_Types_Pkg_filter_size,
	radioManagementMessage_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_MSG_Errors_T_Common_Types_Pkg_Utils = {MSG_Errors_T_Common_Types_Pkg_to_string,
	check_MSG_Errors_T_Common_Types_Pkg_string,
	string_to_MSG_Errors_T_Common_Types_Pkg,
	is_MSG_Errors_T_Common_Types_Pkg_allow_double_convertion,
	MSG_Errors_T_Common_Types_Pkg_to_double,
	compare_MSG_Errors_T_Common_Types_Pkg_type,
	get_MSG_Errors_T_Common_Types_Pkg_signature,
	get_MSG_Errors_T_Common_Types_Pkg_filter_utils,
	MSG_Errors_T_Common_Types_Pkg_filter_size,
	MSG_Errors_T_Common_Types_Pkg_filter_values};
TypeUtils _SCSIM_centerOfBalisePosition_T_BG_Types_Pkg_Utils = {centerOfBalisePosition_T_BG_Types_Pkg_to_string,
	check_centerOfBalisePosition_T_BG_Types_Pkg_string,
	string_to_centerOfBalisePosition_T_BG_Types_Pkg,
	is_centerOfBalisePosition_T_BG_Types_Pkg_allow_double_convertion,
	centerOfBalisePosition_T_BG_Types_Pkg_to_double,
	compare_centerOfBalisePosition_T_BG_Types_Pkg_type,
	get_centerOfBalisePosition_T_BG_Types_Pkg_signature,
	get_centerOfBalisePosition_T_BG_Types_Pkg_filter_utils,
	centerOfBalisePosition_T_BG_Types_Pkg_filter_size,
	centerOfBalisePosition_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_TelegramArray_T_BG_Types_Pkg_Utils = {TelegramArray_T_BG_Types_Pkg_to_string,
	check_TelegramArray_T_BG_Types_Pkg_string,
	string_to_TelegramArray_T_BG_Types_Pkg,
	is_TelegramArray_T_BG_Types_Pkg_allow_double_convertion,
	TelegramArray_T_BG_Types_Pkg_to_double,
	compare_TelegramArray_T_BG_Types_Pkg_type,
	get_TelegramArray_T_BG_Types_Pkg_signature,
	get_TelegramArray_T_BG_Types_Pkg_filter_utils,
	TelegramArray_T_BG_Types_Pkg_filter_size,
	TelegramArray_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_Telegram_T_BG_Types_Pkg_Utils = {Telegram_T_BG_Types_Pkg_to_string,
	check_Telegram_T_BG_Types_Pkg_string,
	string_to_Telegram_T_BG_Types_Pkg,
	is_Telegram_T_BG_Types_Pkg_allow_double_convertion,
	Telegram_T_BG_Types_Pkg_to_double,
	compare_Telegram_T_BG_Types_Pkg_type,
	get_Telegram_T_BG_Types_Pkg_signature,
	get_Telegram_T_BG_Types_Pkg_filter_utils,
	Telegram_T_BG_Types_Pkg_filter_size,
	Telegram_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils = {TelegramHeader_T_BG_Types_Pkg_to_string,
	check_TelegramHeader_T_BG_Types_Pkg_string,
	string_to_TelegramHeader_T_BG_Types_Pkg,
	is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion,
	TelegramHeader_T_BG_Types_Pkg_to_double,
	compare_TelegramHeader_T_BG_Types_Pkg_type,
	get_TelegramHeader_T_BG_Types_Pkg_signature,
	get_TelegramHeader_T_BG_Types_Pkg_filter_utils,
	TelegramHeader_T_BG_Types_Pkg_filter_size,
	TelegramHeader_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_BG_Message_T_BG_Types_Pkg_Utils = {BG_Message_T_BG_Types_Pkg_to_string,
	check_BG_Message_T_BG_Types_Pkg_string,
	string_to_BG_Message_T_BG_Types_Pkg,
	is_BG_Message_T_BG_Types_Pkg_allow_double_convertion,
	BG_Message_T_BG_Types_Pkg_to_double,
	compare_BG_Message_T_BG_Types_Pkg_type,
	get_BG_Message_T_BG_Types_Pkg_signature,
	get_BG_Message_T_BG_Types_Pkg_filter_utils,
	BG_Message_T_BG_Types_Pkg_filter_size,
	BG_Message_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_BG_Header_T_BG_Types_Pkg_Utils = {BG_Header_T_BG_Types_Pkg_to_string,
	check_BG_Header_T_BG_Types_Pkg_string,
	string_to_BG_Header_T_BG_Types_Pkg,
	is_BG_Header_T_BG_Types_Pkg_allow_double_convertion,
	BG_Header_T_BG_Types_Pkg_to_double,
	compare_BG_Header_T_BG_Types_Pkg_type,
	get_BG_Header_T_BG_Types_Pkg_signature,
	get_BG_Header_T_BG_Types_Pkg_filter_utils,
	BG_Header_T_BG_Types_Pkg_filter_size,
	BG_Header_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_LinkedBG_T_BG_Types_Pkg_Utils = {LinkedBG_T_BG_Types_Pkg_to_string,
	check_LinkedBG_T_BG_Types_Pkg_string,
	string_to_LinkedBG_T_BG_Types_Pkg,
	is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion,
	LinkedBG_T_BG_Types_Pkg_to_double,
	compare_LinkedBG_T_BG_Types_Pkg_type,
	get_LinkedBG_T_BG_Types_Pkg_signature,
	get_LinkedBG_T_BG_Types_Pkg_filter_utils,
	LinkedBG_T_BG_Types_Pkg_filter_size,
	LinkedBG_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_passedBG_T_BG_Types_Pkg_Utils = {passedBG_T_BG_Types_Pkg_to_string,
	check_passedBG_T_BG_Types_Pkg_string,
	string_to_passedBG_T_BG_Types_Pkg,
	is_passedBG_T_BG_Types_Pkg_allow_double_convertion,
	passedBG_T_BG_Types_Pkg_to_double,
	compare_passedBG_T_BG_Types_Pkg_type,
	get_passedBG_T_BG_Types_Pkg_signature,
	get_passedBG_T_BG_Types_Pkg_filter_utils,
	passedBG_T_BG_Types_Pkg_filter_size,
	passedBG_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_LinkedBGs_T_BG_Types_Pkg_Utils = {LinkedBGs_T_BG_Types_Pkg_to_string,
	check_LinkedBGs_T_BG_Types_Pkg_string,
	string_to_LinkedBGs_T_BG_Types_Pkg,
	is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion,
	LinkedBGs_T_BG_Types_Pkg_to_double,
	compare_LinkedBGs_T_BG_Types_Pkg_type,
	get_LinkedBGs_T_BG_Types_Pkg_signature,
	get_LinkedBGs_T_BG_Types_Pkg_filter_utils,
	LinkedBGs_T_BG_Types_Pkg_filter_size,
	LinkedBGs_T_BG_Types_Pkg_filter_values};
TypeUtils _SCSIM_odometry_T_Obu_BasicTypes_Pkg_Utils = {odometry_T_Obu_BasicTypes_Pkg_to_string,
	check_odometry_T_Obu_BasicTypes_Pkg_string,
	string_to_odometry_T_Obu_BasicTypes_Pkg,
	is_odometry_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	odometry_T_Obu_BasicTypes_Pkg_to_double,
	compare_odometry_T_Obu_BasicTypes_Pkg_type,
	get_odometry_T_Obu_BasicTypes_Pkg_signature,
	get_odometry_T_Obu_BasicTypes_Pkg_filter_utils,
	odometry_T_Obu_BasicTypes_Pkg_filter_size,
	odometry_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils = {T_internal_Type_Obu_BasicTypes_Pkg_to_string,
	check_T_internal_Type_Obu_BasicTypes_Pkg_string,
	string_to_T_internal_Type_Obu_BasicTypes_Pkg,
	is_T_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion,
	T_internal_Type_Obu_BasicTypes_Pkg_to_double,
	compare_T_internal_Type_Obu_BasicTypes_Pkg_type,
	get_T_internal_Type_Obu_BasicTypes_Pkg_signature,
	get_T_internal_Type_Obu_BasicTypes_Pkg_filter_utils,
	T_internal_Type_Obu_BasicTypes_Pkg_filter_size,
	T_internal_Type_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils = {OdometryLocations_T_Obu_BasicTypes_Pkg_to_string,
	check_OdometryLocations_T_Obu_BasicTypes_Pkg_string,
	string_to_OdometryLocations_T_Obu_BasicTypes_Pkg,
	is_OdometryLocations_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	OdometryLocations_T_Obu_BasicTypes_Pkg_to_double,
	compare_OdometryLocations_T_Obu_BasicTypes_Pkg_type,
	get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature,
	get_OdometryLocations_T_Obu_BasicTypes_Pkg_filter_utils,
	OdometryLocations_T_Obu_BasicTypes_Pkg_filter_size,
	OdometryLocations_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_L_internal_Type_Obu_BasicTypes_Pkg_Utils = {L_internal_Type_Obu_BasicTypes_Pkg_to_string,
	check_L_internal_Type_Obu_BasicTypes_Pkg_string,
	string_to_L_internal_Type_Obu_BasicTypes_Pkg,
	is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion,
	L_internal_Type_Obu_BasicTypes_Pkg_to_double,
	compare_L_internal_Type_Obu_BasicTypes_Pkg_type,
	get_L_internal_Type_Obu_BasicTypes_Pkg_signature,
	get_L_internal_Type_Obu_BasicTypes_Pkg_filter_utils,
	L_internal_Type_Obu_BasicTypes_Pkg_filter_size,
	L_internal_Type_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils = {OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string,
	check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string,
	string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg,
	is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double,
	compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg_type,
	get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature,
	get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_filter_utils,
	OdometrySpeeds_T_Obu_BasicTypes_Pkg_filter_size,
	OdometrySpeeds_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_V_internal_Type_Obu_BasicTypes_Pkg_Utils = {V_internal_Type_Obu_BasicTypes_Pkg_to_string,
	check_V_internal_Type_Obu_BasicTypes_Pkg_string,
	string_to_V_internal_Type_Obu_BasicTypes_Pkg,
	is_V_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion,
	V_internal_Type_Obu_BasicTypes_Pkg_to_double,
	compare_V_internal_Type_Obu_BasicTypes_Pkg_type,
	get_V_internal_Type_Obu_BasicTypes_Pkg_signature,
	get_V_internal_Type_Obu_BasicTypes_Pkg_filter_utils,
	V_internal_Type_Obu_BasicTypes_Pkg_filter_size,
	V_internal_Type_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils = {A_internal_Type_Obu_BasicTypes_Pkg_to_string,
	check_A_internal_Type_Obu_BasicTypes_Pkg_string,
	string_to_A_internal_Type_Obu_BasicTypes_Pkg,
	is_A_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion,
	A_internal_Type_Obu_BasicTypes_Pkg_to_double,
	compare_A_internal_Type_Obu_BasicTypes_Pkg_type,
	get_A_internal_Type_Obu_BasicTypes_Pkg_signature,
	get_A_internal_Type_Obu_BasicTypes_Pkg_filter_utils,
	A_internal_Type_Obu_BasicTypes_Pkg_filter_size,
	A_internal_Type_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils = {odoMotionState_T_Obu_BasicTypes_Pkg_to_string,
	check_odoMotionState_T_Obu_BasicTypes_Pkg_string,
	string_to_odoMotionState_T_Obu_BasicTypes_Pkg,
	is_odoMotionState_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	odoMotionState_T_Obu_BasicTypes_Pkg_to_double,
	compare_odoMotionState_T_Obu_BasicTypes_Pkg_type,
	get_odoMotionState_T_Obu_BasicTypes_Pkg_signature,
	get_odoMotionState_T_Obu_BasicTypes_Pkg_filter_utils,
	odoMotionState_T_Obu_BasicTypes_Pkg_filter_size,
	odoMotionState_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils = {odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string,
	check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string,
	string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg,
	is_odoMotionDirection_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double,
	compare_odoMotionDirection_T_Obu_BasicTypes_Pkg_type,
	get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature,
	get_odoMotionDirection_T_Obu_BasicTypes_Pkg_filter_utils,
	odoMotionDirection_T_Obu_BasicTypes_Pkg_filter_size,
	odoMotionDirection_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils = {LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string,
	check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string,
	string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg,
	is_LocWithInAcc_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double,
	compare_LocWithInAcc_T_Obu_BasicTypes_Pkg_type,
	get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature,
	get_LocWithInAcc_T_Obu_BasicTypes_Pkg_filter_utils,
	LocWithInAcc_T_Obu_BasicTypes_Pkg_filter_size,
	LocWithInAcc_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_Location_T_Obu_BasicTypes_Pkg_Utils = {Location_T_Obu_BasicTypes_Pkg_to_string,
	check_Location_T_Obu_BasicTypes_Pkg_string,
	string_to_Location_T_Obu_BasicTypes_Pkg,
	is_Location_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	Location_T_Obu_BasicTypes_Pkg_to_double,
	compare_Location_T_Obu_BasicTypes_Pkg_type,
	get_Location_T_Obu_BasicTypes_Pkg_signature,
	get_Location_T_Obu_BasicTypes_Pkg_filter_utils,
	Location_T_Obu_BasicTypes_Pkg_filter_size,
	Location_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_Speed_T_Obu_BasicTypes_Pkg_Utils = {Speed_T_Obu_BasicTypes_Pkg_to_string,
	check_Speed_T_Obu_BasicTypes_Pkg_string,
	string_to_Speed_T_Obu_BasicTypes_Pkg,
	is_Speed_T_Obu_BasicTypes_Pkg_allow_double_convertion,
	Speed_T_Obu_BasicTypes_Pkg_to_double,
	compare_Speed_T_Obu_BasicTypes_Pkg_type,
	get_Speed_T_Obu_BasicTypes_Pkg_signature,
	get_Speed_T_Obu_BasicTypes_Pkg_filter_utils,
	Speed_T_Obu_BasicTypes_Pkg_filter_size,
	Speed_T_Obu_BasicTypes_Pkg_filter_values};
TypeUtils _SCSIM_RadioMessage_T_Radio_Types_Pkg_Utils = {RadioMessage_T_Radio_Types_Pkg_to_string,
	check_RadioMessage_T_Radio_Types_Pkg_string,
	string_to_RadioMessage_T_Radio_Types_Pkg,
	is_RadioMessage_T_Radio_Types_Pkg_allow_double_convertion,
	RadioMessage_T_Radio_Types_Pkg_to_double,
	compare_RadioMessage_T_Radio_Types_Pkg_type,
	get_RadioMessage_T_Radio_Types_Pkg_signature,
	get_RadioMessage_T_Radio_Types_Pkg_filter_utils,
	RadioMessage_T_Radio_Types_Pkg_filter_size,
	RadioMessage_T_Radio_Types_Pkg_filter_values};
TypeUtils _SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils = {Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string,
	check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string,
	string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg,
	is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_allow_double_convertion,
	Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double,
	compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg_type,
	get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature,
	get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_filter_utils,
	Radio_TrackTrain_Header_T_Radio_Types_Pkg_filter_size,
	Radio_TrackTrain_Header_T_Radio_Types_Pkg_filter_values};
TypeUtils _SCSIM_sessionStatus_Type_Radio_Types_Pkg_Utils = {sessionStatus_Type_Radio_Types_Pkg_to_string,
	check_sessionStatus_Type_Radio_Types_Pkg_string,
	string_to_sessionStatus_Type_Radio_Types_Pkg,
	is_sessionStatus_Type_Radio_Types_Pkg_allow_double_convertion,
	sessionStatus_Type_Radio_Types_Pkg_to_double,
	compare_sessionStatus_Type_Radio_Types_Pkg_type,
	get_sessionStatus_Type_Radio_Types_Pkg_signature,
	get_sessionStatus_Type_Radio_Types_Pkg_filter_utils,
	sessionStatus_Type_Radio_Types_Pkg_filter_size,
	sessionStatus_Type_Radio_Types_Pkg_filter_values};
TypeUtils _SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils = {API_TrackSideInput_T_API_Msg_Pkg_to_string,
	check_API_TrackSideInput_T_API_Msg_Pkg_string,
	string_to_API_TrackSideInput_T_API_Msg_Pkg,
	is_API_TrackSideInput_T_API_Msg_Pkg_allow_double_convertion,
	API_TrackSideInput_T_API_Msg_Pkg_to_double,
	compare_API_TrackSideInput_T_API_Msg_Pkg_type,
	get_API_TrackSideInput_T_API_Msg_Pkg_signature,
	get_API_TrackSideInput_T_API_Msg_Pkg_filter_utils,
	API_TrackSideInput_T_API_Msg_Pkg_filter_size,
	API_TrackSideInput_T_API_Msg_Pkg_filter_values};
TypeUtils _SCSIM_API_TelegramHeader_T_API_Msg_Pkg_Utils = {API_TelegramHeader_T_API_Msg_Pkg_to_string,
	check_API_TelegramHeader_T_API_Msg_Pkg_string,
	string_to_API_TelegramHeader_T_API_Msg_Pkg,
	is_API_TelegramHeader_T_API_Msg_Pkg_allow_double_convertion,
	API_TelegramHeader_T_API_Msg_Pkg_to_double,
	compare_API_TelegramHeader_T_API_Msg_Pkg_type,
	get_API_TelegramHeader_T_API_Msg_Pkg_signature,
	get_API_TelegramHeader_T_API_Msg_Pkg_filter_utils,
	API_TelegramHeader_T_API_Msg_Pkg_filter_size,
	API_TelegramHeader_T_API_Msg_Pkg_filter_values};
TypeUtils _SCSIM_API_RadioMsgHeader_T_API_Msg_Pkg_Utils = {API_RadioMsgHeader_T_API_Msg_Pkg_to_string,
	check_API_RadioMsgHeader_T_API_Msg_Pkg_string,
	string_to_API_RadioMsgHeader_T_API_Msg_Pkg,
	is_API_RadioMsgHeader_T_API_Msg_Pkg_allow_double_convertion,
	API_RadioMsgHeader_T_API_Msg_Pkg_to_double,
	compare_API_RadioMsgHeader_T_API_Msg_Pkg_type,
	get_API_RadioMsgHeader_T_API_Msg_Pkg_signature,
	get_API_RadioMsgHeader_T_API_Msg_Pkg_filter_utils,
	API_RadioMsgHeader_T_API_Msg_Pkg_filter_size,
	API_RadioMsgHeader_T_API_Msg_Pkg_filter_values};
TypeUtils _SCSIM_positionedBG_T_TrainPosition_Types_Pck_Utils = {positionedBG_T_TrainPosition_Types_Pck_to_string,
	check_positionedBG_T_TrainPosition_Types_Pck_string,
	string_to_positionedBG_T_TrainPosition_Types_Pck,
	is_positionedBG_T_TrainPosition_Types_Pck_allow_double_convertion,
	positionedBG_T_TrainPosition_Types_Pck_to_double,
	compare_positionedBG_T_TrainPosition_Types_Pck_type,
	get_positionedBG_T_TrainPosition_Types_Pck_signature,
	get_positionedBG_T_TrainPosition_Types_Pck_filter_utils,
	positionedBG_T_TrainPosition_Types_Pck_filter_size,
	positionedBG_T_TrainPosition_Types_Pck_filter_values};
TypeUtils _SCSIM_infoFromLinking_T_TrainPosition_Types_Pck_Utils = {infoFromLinking_T_TrainPosition_Types_Pck_to_string,
	check_infoFromLinking_T_TrainPosition_Types_Pck_string,
	string_to_infoFromLinking_T_TrainPosition_Types_Pck,
	is_infoFromLinking_T_TrainPosition_Types_Pck_allow_double_convertion,
	infoFromLinking_T_TrainPosition_Types_Pck_to_double,
	compare_infoFromLinking_T_TrainPosition_Types_Pck_type,
	get_infoFromLinking_T_TrainPosition_Types_Pck_signature,
	get_infoFromLinking_T_TrainPosition_Types_Pck_filter_utils,
	infoFromLinking_T_TrainPosition_Types_Pck_filter_size,
	infoFromLinking_T_TrainPosition_Types_Pck_filter_values};
TypeUtils _SCSIM_positionedBGs_T_TrainPosition_Types_Pck_Utils = {positionedBGs_T_TrainPosition_Types_Pck_to_string,
	check_positionedBGs_T_TrainPosition_Types_Pck_string,
	string_to_positionedBGs_T_TrainPosition_Types_Pck,
	is_positionedBGs_T_TrainPosition_Types_Pck_allow_double_convertion,
	positionedBGs_T_TrainPosition_Types_Pck_to_double,
	compare_positionedBGs_T_TrainPosition_Types_Pck_type,
	get_positionedBGs_T_TrainPosition_Types_Pck_signature,
	get_positionedBGs_T_TrainPosition_Types_Pck_filter_utils,
	positionedBGs_T_TrainPosition_Types_Pck_filter_size,
	positionedBGs_T_TrainPosition_Types_Pck_filter_values};
TypeUtils _SCSIM_trainPosition_T_TrainPosition_Types_Pck_Utils = {trainPosition_T_TrainPosition_Types_Pck_to_string,
	check_trainPosition_T_TrainPosition_Types_Pck_string,
	string_to_trainPosition_T_TrainPosition_Types_Pck,
	is_trainPosition_T_TrainPosition_Types_Pck_allow_double_convertion,
	trainPosition_T_TrainPosition_Types_Pck_to_double,
	compare_trainPosition_T_TrainPosition_Types_Pck_type,
	get_trainPosition_T_TrainPosition_Types_Pck_signature,
	get_trainPosition_T_TrainPosition_Types_Pck_filter_utils,
	trainPosition_T_TrainPosition_Types_Pck_filter_size,
	trainPosition_T_TrainPosition_Types_Pck_filter_values};
TypeUtils _SCSIM_P58_PositionReportParameters_T_Packet_Types_Pkg_Utils = {P58_PositionReportParameters_T_Packet_Types_Pkg_to_string,
	check_P58_PositionReportParameters_T_Packet_Types_Pkg_string,
	string_to_P58_PositionReportParameters_T_Packet_Types_Pkg,
	is_P58_PositionReportParameters_T_Packet_Types_Pkg_allow_double_convertion,
	P58_PositionReportParameters_T_Packet_Types_Pkg_to_double,
	compare_P58_PositionReportParameters_T_Packet_Types_Pkg_type,
	get_P58_PositionReportParameters_T_Packet_Types_Pkg_signature,
	get_P58_PositionReportParameters_T_Packet_Types_Pkg_filter_utils,
	P58_PositionReportParameters_T_Packet_Types_Pkg_filter_size,
	P58_PositionReportParameters_T_Packet_Types_Pkg_filter_values};
TypeUtils _SCSIM_IterPacket58List_T_Packet_Types_Pkg_Utils = {IterPacket58List_T_Packet_Types_Pkg_to_string,
	check_IterPacket58List_T_Packet_Types_Pkg_string,
	string_to_IterPacket58List_T_Packet_Types_Pkg,
	is_IterPacket58List_T_Packet_Types_Pkg_allow_double_convertion,
	IterPacket58List_T_Packet_Types_Pkg_to_double,
	compare_IterPacket58List_T_Packet_Types_Pkg_type,
	get_IterPacket58List_T_Packet_Types_Pkg_signature,
	get_IterPacket58List_T_Packet_Types_Pkg_filter_utils,
	IterPacket58List_T_Packet_Types_Pkg_filter_size,
	IterPacket58List_T_Packet_Types_Pkg_filter_values};
TypeUtils _SCSIM_IterPacket58_T_Packet_Types_Pkg_Utils = {IterPacket58_T_Packet_Types_Pkg_to_string,
	check_IterPacket58_T_Packet_Types_Pkg_string,
	string_to_IterPacket58_T_Packet_Types_Pkg,
	is_IterPacket58_T_Packet_Types_Pkg_allow_double_convertion,
	IterPacket58_T_Packet_Types_Pkg_to_double,
	compare_IterPacket58_T_Packet_Types_Pkg_type,
	get_IterPacket58_T_Packet_Types_Pkg_signature,
	get_IterPacket58_T_Packet_Types_Pkg_filter_utils,
	IterPacket58_T_Packet_Types_Pkg_filter_size,
	IterPacket58_T_Packet_Types_Pkg_filter_values};
TypeUtils _SCSIM_P42_SessionManagement_T_Packet_Types_Pkg_Utils = {P42_SessionManagement_T_Packet_Types_Pkg_to_string,
	check_P42_SessionManagement_T_Packet_Types_Pkg_string,
	string_to_P42_SessionManagement_T_Packet_Types_Pkg,
	is_P42_SessionManagement_T_Packet_Types_Pkg_allow_double_convertion,
	P42_SessionManagement_T_Packet_Types_Pkg_to_double,
	compare_P42_SessionManagement_T_Packet_Types_Pkg_type,
	get_P42_SessionManagement_T_Packet_Types_Pkg_signature,
	get_P42_SessionManagement_T_Packet_Types_Pkg_filter_utils,
	P42_SessionManagement_T_Packet_Types_Pkg_filter_size,
	P42_SessionManagement_T_Packet_Types_Pkg_filter_values};
TypeUtils _SCSIM_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils = {P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_string,
	check_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_string,
	string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg,
	is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_allow_double_convertion,
	P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_double,
	compare_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_type,
	get_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_signature,
	get_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_filter_utils,
	P45_RadioNetworkRegistration_T_Packet_Types_Pkg_filter_size,
	P45_RadioNetworkRegistration_T_Packet_Types_Pkg_filter_values};
TypeUtils _SCSIM_CompressedBaliseMessage_TM_Utils = {CompressedBaliseMessage_TM_to_string,
	check_CompressedBaliseMessage_TM_string,
	string_to_CompressedBaliseMessage_TM,
	is_CompressedBaliseMessage_TM_allow_double_convertion,
	CompressedBaliseMessage_TM_to_double,
	compare_CompressedBaliseMessage_TM_type,
	get_CompressedBaliseMessage_TM_signature,
	get_CompressedBaliseMessage_TM_filter_utils,
	CompressedBaliseMessage_TM_filter_size,
	CompressedBaliseMessage_TM_filter_values};
TypeUtils _SCSIM_BaliseTelegramHeader_int_T_TM_Utils = {BaliseTelegramHeader_int_T_TM_to_string,
	check_BaliseTelegramHeader_int_T_TM_string,
	string_to_BaliseTelegramHeader_int_T_TM,
	is_BaliseTelegramHeader_int_T_TM_allow_double_convertion,
	BaliseTelegramHeader_int_T_TM_to_double,
	compare_BaliseTelegramHeader_int_T_TM_type,
	get_BaliseTelegramHeader_int_T_TM_signature,
	get_BaliseTelegramHeader_int_T_TM_filter_utils,
	BaliseTelegramHeader_int_T_TM_filter_size,
	BaliseTelegramHeader_int_T_TM_filter_values};
TypeUtils _SCSIM_OrBG_TM_Utils = {OrBG_TM_to_string,
	check_OrBG_TM_string,
	string_to_OrBG_TM,
	is_OrBG_TM_allow_double_convertion,
	OrBG_TM_to_double,
	compare_OrBG_TM_type,
	get_OrBG_TM_signature,
	get_OrBG_TM_filter_utils,
	OrBG_TM_filter_size,
	OrBG_TM_filter_values};
TypeUtils _SCSIM_OrLine_TM_Utils = {OrLine_TM_to_string,
	check_OrLine_TM_string,
	string_to_OrLine_TM,
	is_OrLine_TM_allow_double_convertion,
	OrLine_TM_to_double,
	compare_OrLine_TM_type,
	get_OrLine_TM_signature,
	get_OrLine_TM_filter_utils,
	OrLine_TM_filter_size,
	OrLine_TM_filter_values};
TypeUtils _SCSIM_P005_trackside_int_T_TM_Utils = {P005_trackside_int_T_TM_to_string,
	check_P005_trackside_int_T_TM_string,
	string_to_P005_trackside_int_T_TM,
	is_P005_trackside_int_T_TM_allow_double_convertion,
	P005_trackside_int_T_TM_to_double,
	compare_P005_trackside_int_T_TM_type,
	get_P005_trackside_int_T_TM_signature,
	get_P005_trackside_int_T_TM_filter_utils,
	P005_trackside_int_T_TM_filter_size,
	P005_trackside_int_T_TM_filter_values};
TypeUtils _SCSIM_P005_trackide_sectionlist_T_TM_Utils = {P005_trackide_sectionlist_T_TM_to_string,
	check_P005_trackide_sectionlist_T_TM_string,
	string_to_P005_trackide_sectionlist_T_TM,
	is_P005_trackide_sectionlist_T_TM_allow_double_convertion,
	P005_trackide_sectionlist_T_TM_to_double,
	compare_P005_trackide_sectionlist_T_TM_type,
	get_P005_trackide_sectionlist_T_TM_signature,
	get_P005_trackide_sectionlist_T_TM_filter_utils,
	P005_trackide_sectionlist_T_TM_filter_size,
	P005_trackide_sectionlist_T_TM_filter_values};
TypeUtils _SCSIM_P005_section_int_T_TM_Utils = {P005_section_int_T_TM_to_string,
	check_P005_section_int_T_TM_string,
	string_to_P005_section_int_T_TM,
	is_P005_section_int_T_TM_allow_double_convertion,
	P005_section_int_T_TM_to_double,
	compare_P005_section_int_T_TM_type,
	get_P005_section_int_T_TM_signature,
	get_P005_section_int_T_TM_filter_utils,
	P005_section_int_T_TM_filter_size,
	P005_section_int_T_TM_filter_values};
TypeUtils _SCSIM_P005_sections_array_flat_T_TM_Utils = {P005_sections_array_flat_T_TM_to_string,
	check_P005_sections_array_flat_T_TM_string,
	string_to_P005_sections_array_flat_T_TM,
	is_P005_sections_array_flat_T_TM_allow_double_convertion,
	P005_sections_array_flat_T_TM_to_double,
	compare_P005_sections_array_flat_T_TM_type,
	get_P005_sections_array_flat_T_TM_signature,
	get_P005_sections_array_flat_T_TM_filter_utils,
	P005_sections_array_flat_T_TM_filter_size,
	P005_sections_array_flat_T_TM_filter_values};
TypeUtils _SCSIM_P005_OBU_sectionlist_array_T_TM_Utils = {P005_OBU_sectionlist_array_T_TM_to_string,
	check_P005_OBU_sectionlist_array_T_TM_string,
	string_to_P005_OBU_sectionlist_array_T_TM,
	is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion,
	P005_OBU_sectionlist_array_T_TM_to_double,
	compare_P005_OBU_sectionlist_array_T_TM_type,
	get_P005_OBU_sectionlist_array_T_TM_signature,
	get_P005_OBU_sectionlist_array_T_TM_filter_utils,
	P005_OBU_sectionlist_array_T_TM_filter_size,
	P005_OBU_sectionlist_array_T_TM_filter_values};
TypeUtils _SCSIM_P005_section_array_T_TM_Utils = {P005_section_array_T_TM_to_string,
	check_P005_section_array_T_TM_string,
	string_to_P005_section_array_T_TM,
	is_P005_section_array_T_TM_allow_double_convertion,
	P005_section_array_T_TM_to_double,
	compare_P005_section_array_T_TM_type,
	get_P005_section_array_T_TM_signature,
	get_P005_section_array_T_TM_filter_utils,
	P005_section_array_T_TM_filter_size,
	P005_section_array_T_TM_filter_values};
TypeUtils _SCSIM_P005_OBU_sectionlist_int_T_TM_Utils = {P005_OBU_sectionlist_int_T_TM_to_string,
	check_P005_OBU_sectionlist_int_T_TM_string,
	string_to_P005_OBU_sectionlist_int_T_TM,
	is_P005_OBU_sectionlist_int_T_TM_allow_double_convertion,
	P005_OBU_sectionlist_int_T_TM_to_double,
	compare_P005_OBU_sectionlist_int_T_TM_type,
	get_P005_OBU_sectionlist_int_T_TM_signature,
	get_P005_OBU_sectionlist_int_T_TM_filter_utils,
	P005_OBU_sectionlist_int_T_TM_filter_size,
	P005_OBU_sectionlist_int_T_TM_filter_values};
TypeUtils _SCSIM_BaliseGroupData_TM_Utils = {BaliseGroupData_TM_to_string,
	check_BaliseGroupData_TM_string,
	string_to_BaliseGroupData_TM,
	is_BaliseGroupData_TM_allow_double_convertion,
	BaliseGroupData_TM_to_double,
	compare_BaliseGroupData_TM_type,
	get_BaliseGroupData_TM_signature,
	get_BaliseGroupData_TM_filter_utils,
	BaliseGroupData_TM_filter_size,
	BaliseGroupData_TM_filter_values};
TypeUtils _SCSIM_LevelDecisionTableActionKind_DataDictionary_Pkg_Utils = {LevelDecisionTableActionKind_DataDictionary_Pkg_to_string,
	check_LevelDecisionTableActionKind_DataDictionary_Pkg_string,
	string_to_LevelDecisionTableActionKind_DataDictionary_Pkg,
	is_LevelDecisionTableActionKind_DataDictionary_Pkg_allow_double_convertion,
	LevelDecisionTableActionKind_DataDictionary_Pkg_to_double,
	compare_LevelDecisionTableActionKind_DataDictionary_Pkg_type,
	get_LevelDecisionTableActionKind_DataDictionary_Pkg_signature,
	get_LevelDecisionTableActionKind_DataDictionary_Pkg_filter_utils,
	LevelDecisionTableActionKind_DataDictionary_Pkg_filter_size,
	LevelDecisionTableActionKind_DataDictionary_Pkg_filter_values};
TypeUtils _SCSIM_LevelDecisionTableType_DataDictionary_Pkg_Utils = {LevelDecisionTableType_DataDictionary_Pkg_to_string,
	check_LevelDecisionTableType_DataDictionary_Pkg_string,
	string_to_LevelDecisionTableType_DataDictionary_Pkg,
	is_LevelDecisionTableType_DataDictionary_Pkg_allow_double_convertion,
	LevelDecisionTableType_DataDictionary_Pkg_to_double,
	compare_LevelDecisionTableType_DataDictionary_Pkg_type,
	get_LevelDecisionTableType_DataDictionary_Pkg_signature,
	get_LevelDecisionTableType_DataDictionary_Pkg_filter_utils,
	LevelDecisionTableType_DataDictionary_Pkg_filter_size,
	LevelDecisionTableType_DataDictionary_Pkg_filter_values};
TypeUtils _SCSIM_ModeDecisionTableType_DataDictionary_Pkg_Utils = {ModeDecisionTableType_DataDictionary_Pkg_to_string,
	check_ModeDecisionTableType_DataDictionary_Pkg_string,
	string_to_ModeDecisionTableType_DataDictionary_Pkg,
	is_ModeDecisionTableType_DataDictionary_Pkg_allow_double_convertion,
	ModeDecisionTableType_DataDictionary_Pkg_to_double,
	compare_ModeDecisionTableType_DataDictionary_Pkg_type,
	get_ModeDecisionTableType_DataDictionary_Pkg_signature,
	get_ModeDecisionTableType_DataDictionary_Pkg_filter_utils,
	ModeDecisionTableType_DataDictionary_Pkg_filter_size,
	ModeDecisionTableType_DataDictionary_Pkg_filter_values};
TypeUtils _SCSIM_ModeDecisionTableActionKind_DataDictionary_Pkg_Utils = {ModeDecisionTableActionKind_DataDictionary_Pkg_to_string,
	check_ModeDecisionTableActionKind_DataDictionary_Pkg_string,
	string_to_ModeDecisionTableActionKind_DataDictionary_Pkg,
	is_ModeDecisionTableActionKind_DataDictionary_Pkg_allow_double_convertion,
	ModeDecisionTableActionKind_DataDictionary_Pkg_to_double,
	compare_ModeDecisionTableActionKind_DataDictionary_Pkg_type,
	get_ModeDecisionTableActionKind_DataDictionary_Pkg_signature,
	get_ModeDecisionTableActionKind_DataDictionary_Pkg_filter_utils,
	ModeDecisionTableActionKind_DataDictionary_Pkg_filter_size,
	ModeDecisionTableActionKind_DataDictionary_Pkg_filter_values};
TypeUtils _SCSIM_Buffer_DataDictionary_Pkg_Utils = {Buffer_DataDictionary_Pkg_to_string,
	check_Buffer_DataDictionary_Pkg_string,
	string_to_Buffer_DataDictionary_Pkg,
	is_Buffer_DataDictionary_Pkg_allow_double_convertion,
	Buffer_DataDictionary_Pkg_to_double,
	compare_Buffer_DataDictionary_Pkg_type,
	get_Buffer_DataDictionary_Pkg_signature,
	get_Buffer_DataDictionary_Pkg_filter_utils,
	Buffer_DataDictionary_Pkg_filter_size,
	Buffer_DataDictionary_Pkg_filter_values};
TypeUtils _SCSIM_T_Mode_Level_Level_And_Mode_Types_Pkg_Utils = {T_Mode_Level_Level_And_Mode_Types_Pkg_to_string,
	check_T_Mode_Level_Level_And_Mode_Types_Pkg_string,
	string_to_T_Mode_Level_Level_And_Mode_Types_Pkg,
	is_T_Mode_Level_Level_And_Mode_Types_Pkg_allow_double_convertion,
	T_Mode_Level_Level_And_Mode_Types_Pkg_to_double,
	compare_T_Mode_Level_Level_And_Mode_Types_Pkg_type,
	get_T_Mode_Level_Level_And_Mode_Types_Pkg_signature,
	get_T_Mode_Level_Level_And_Mode_Types_Pkg_filter_utils,
	T_Mode_Level_Level_And_Mode_Types_Pkg_filter_size,
	T_Mode_Level_Level_And_Mode_Types_Pkg_filter_values};
TypeUtils _SCSIM_odometryFactors_T_Toolbox_Utils = {odometryFactors_T_Toolbox_to_string,
	check_odometryFactors_T_Toolbox_string,
	string_to_odometryFactors_T_Toolbox,
	is_odometryFactors_T_Toolbox_allow_double_convertion,
	odometryFactors_T_Toolbox_to_double,
	compare_odometryFactors_T_Toolbox_type,
	get_odometryFactors_T_Toolbox_signature,
	get_odometryFactors_T_Toolbox_filter_utils,
	odometryFactors_T_Toolbox_filter_size,
	odometryFactors_T_Toolbox_filter_values};
TypeUtils _SCSIM_BaliseGroupData_Basics_Utils = {BaliseGroupData_Basics_to_string,
	check_BaliseGroupData_Basics_string,
	string_to_BaliseGroupData_Basics,
	is_BaliseGroupData_Basics_allow_double_convertion,
	BaliseGroupData_Basics_to_double,
	compare_BaliseGroupData_Basics_type,
	get_BaliseGroupData_Basics_signature,
	get_BaliseGroupData_Basics_filter_utils,
	BaliseGroupData_Basics_filter_size,
	BaliseGroupData_Basics_filter_values};
TypeUtils _SCSIM_B_data_internal_T_InfraLib_Utils = {B_data_internal_T_InfraLib_to_string,
	check_B_data_internal_T_InfraLib_string,
	string_to_B_data_internal_T_InfraLib,
	is_B_data_internal_T_InfraLib_allow_double_convertion,
	B_data_internal_T_InfraLib_to_double,
	compare_B_data_internal_T_InfraLib_type,
	get_B_data_internal_T_InfraLib_signature,
	get_B_data_internal_T_InfraLib_filter_utils,
	B_data_internal_T_InfraLib_filter_size,
	B_data_internal_T_InfraLib_filter_values};

/****************************************************************
 ** kcg_real
 ****************************************************************/
struct SimTypeVTable* pSimDoubleVTable;
const char * kcg_real_to_string(const void* pValue) {
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		double value = (double)(*(const kcg_real*)pValue);
		return *(char**)pSimDoubleVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnRealToString((double)(*(const kcg_real*)pValue));
}

int string_to_kcg_real(const char* strValue, void* pValue) {
	double nTemp = 0;
	static double rTemp;
	int nResult;
	if (pSimDoubleVTable != 0 && pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimDoubleVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_real*)pValue = (kcg_real)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToReal(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_real*)pValue = (kcg_real)nTemp;
	return nResult;
}

int compare_kcg_real_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_real rTemp;
	const kcg_real* pCurrent = (const kcg_real*)pValue;
	if (string_to_kcg_real(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_real_allow_double_convertion() {
	if (pSimDoubleVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_real_to_double(double * nValue, const void* pValue) {
	if (pSimDoubleVTable != 0) {
		double value = (double)(*(const kcg_real*)pValue);
		if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimDoubleVTable->m_pfnToType(SptDouble, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimDoubleVTable->m_pfnToType(SptFloat, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimDoubleVTable->m_pfnToType(SptLong, &value));
		else if (pSimDoubleVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimDoubleVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_real*)pValue);
	return 1;
}

const char * get_kcg_real_signature() {
	return "R";
}

int check_kcg_real_string(const char* strValue) {
	static kcg_real rTemp;
	return string_to_kcg_real(strValue, &rTemp);
}


/****************************************************************
 ** kcg_bool
 ****************************************************************/
struct SimTypeVTable* pSimBoolVTable;
const char * kcg_bool_to_string(const void* pValue) {
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
		return *(char**)pSimBoolVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnBoolToString((*(const kcg_bool*)pValue) == kcg_true ? 1 : 0);
}

int string_to_kcg_bool(const char* strValue, void* pValue) {
	int nTemp = 0;
	static SimBool rTemp;
	int nResult;
	if (pSimBoolVTable != 0 && pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimBoolVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((kcg_bool*)pValue) = (rTemp == SbTrue)? kcg_true : kcg_false;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToBool(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_bool*)pValue = nTemp == 1 ? kcg_true : kcg_false;
	return nResult;
}

int compare_kcg_bool_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_bool rTemp;
	const kcg_bool* pCurrent = (const kcg_bool*)pValue;
	if (string_to_kcg_bool(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_bool_allow_double_convertion() {
	if (pSimBoolVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_bool_to_double(double * nValue, const void* pValue) {
	if (pSimBoolVTable != 0) {
		SimBool value = (*(const kcg_bool*)pValue == kcg_true)? SbTrue : SbFalse;
		if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBoolVTable->m_pfnToType(SptDouble, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBoolVTable->m_pfnToType(SptFloat, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBoolVTable->m_pfnToType(SptLong, &value));
		else if (pSimBoolVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBoolVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = *((const kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
	return 1;
}

const char * get_kcg_bool_signature() {
	return "B";
}

int check_kcg_bool_string(const char* strValue) {
	static kcg_bool rTemp;
	return string_to_kcg_bool(strValue, &rTemp);
}


/****************************************************************
 ** kcg_char
 ****************************************************************/
struct SimTypeVTable* pSimCharVTable;
const char * kcg_char_to_string(const void* pValue) {
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		char value = (char)(*(const kcg_char*)pValue);
		return *(char**)pSimCharVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnCharToString((char)(*(const kcg_char*)pValue));
}

int string_to_kcg_char(const char* strValue, void* pValue) {
	char nTemp = 0;
	static char rTemp;
	int nResult;
	if (pSimCharVTable != 0 && pSimCharVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimCharVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_char*)pValue = (kcg_char)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToChar(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_char*)pValue = (kcg_char)nTemp;
	return nResult;
}

int compare_kcg_char_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_char rTemp;
	const kcg_char* pCurrent = (const kcg_char*)pValue;
	if (string_to_kcg_char(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_char_allow_double_convertion() {
	if (pSimCharVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_char_to_double(double * nValue, const void* pValue) {
	if (pSimCharVTable != 0) {
		char value = (char)(*(const kcg_char*)pValue);
		if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCharVTable->m_pfnToType(SptDouble, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCharVTable->m_pfnToType(SptFloat, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCharVTable->m_pfnToType(SptLong, &value));
		else if (pSimCharVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCharVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_char*)pValue);
	return 1;
}

const char * get_kcg_char_signature() {
	return "C";
}

int check_kcg_char_string(const char* strValue) {
	static kcg_char rTemp;
	return string_to_kcg_char(strValue, &rTemp);
}


/****************************************************************
 ** kcg_int
 ****************************************************************/
struct SimTypeVTable* pSimLongVTable;
const char * kcg_int_to_string(const void* pValue) {
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
		long value = (long)(*(const kcg_int*)pValue);
		return *(char**)pSimLongVTable->m_pfnToType(SptString, &value);
	}
	return pSimulator->m_pfnIntToString(*(const int*)pValue);
}

int string_to_kcg_int(const char* strValue, void* pValue) {
	int nTemp = 0;
	static long rTemp;
	int nResult;
	if (pSimLongVTable != 0 && pSimLongVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		nResult = pSimLongVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*(kcg_int*)pValue = (kcg_int)rTemp;
		return nResult;
	}
	nResult = pSimulator->m_pfnStringToInt(strValue, &nTemp);
	if (nResult == 1)
		*(kcg_int*)pValue = (kcg_int)nTemp;
	return nResult;
}

int compare_kcg_int_type(int* pResult, const char* toCompare, const void* pValue) {
	static kcg_int rTemp;
	const kcg_int* pCurrent = (const kcg_int*)pValue;
	if (string_to_kcg_int(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

int is_kcg_int_allow_double_convertion() {
	if (pSimLongVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return 1;
}

int kcg_int_to_double(double * nValue, const void* pValue) {
	if (pSimLongVTable != 0) {
		long value = (long)(*(const kcg_int*)pValue);
		if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLongVTable->m_pfnToType(SptDouble, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLongVTable->m_pfnToType(SptFloat, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLongVTable->m_pfnToType(SptLong, &value));
		else if (pSimLongVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLongVTable->m_pfnToType(SptShort, &value));
		else
			return 0;
		return 1;
	}
	*nValue = (double)*((const kcg_int*)pValue);
	return 1;
}

const char * get_kcg_int_signature() {
	return "I";
}

int check_kcg_int_string(const char* strValue) {
	static kcg_int rTemp;
	return string_to_kcg_int(strValue, &rTemp);
}


/****************************************************************
 ** struct__17982
 ****************************************************************/
static void Fill_struct__17982_StructSimValue(struct__17982 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*level label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->level) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_M_LEVEL_Utils;
	pValues[1].m_pszName = "level";
	/*Mode label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Mode) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_M_MODE_Utils;
	pValues[2].m_pszName = "Mode";
}

const char * struct__17982_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__17982_StructSimValue(((struct__17982*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__17982(const char* strValue, void* pValue) {
	static struct__17982 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__17982(&(rTemp), &(*((struct__17982*)pValue)));
	Fill_struct__17982_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__17982(&(*((struct__17982*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__17982_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__17982_StructSimValue((struct__17982*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__17982_allow_double_convertion() {
	return 0;
}


const char * get_struct__17982_signature() {
	static StructSimValue values[3];
	Fill_struct__17982_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__17982_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__17982_StructSimValue((struct__17982*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__17982_filter_values[3] = {"valid", "level", "Mode"};
int check_struct__17982_string(const char* strValue) {
	static struct__17982 rTemp;
	return string_to_struct__17982(strValue, &rTemp);
}


/****************************************************************
 ** struct__17988
 ****************************************************************/
static void Fill_struct__17988_StructSimValue(struct__17988 * pStruct, StructSimValue * pValues) {
	/*nominal label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->nominal) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "nominal";
	/*d_min label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->d_min) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "d_min";
	/*d_max label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->d_max) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "d_max";
}

const char * struct__17988_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__17988_StructSimValue(((struct__17988*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__17988(const char* strValue, void* pValue) {
	static struct__17988 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__17988(&(rTemp), &(*((struct__17988*)pValue)));
	Fill_struct__17988_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__17988(&(*((struct__17988*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__17988_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__17988_StructSimValue((struct__17988*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__17988_allow_double_convertion() {
	return 0;
}


const char * get_struct__17988_signature() {
	static StructSimValue values[3];
	Fill_struct__17988_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__17988_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__17988_StructSimValue((struct__17988*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__17988_filter_values[3] = {"nominal", "d_min", "d_max"};
int check_struct__17988_string(const char* strValue) {
	static struct__17988 rTemp;
	return string_to_struct__17988(strValue, &rTemp);
}


/****************************************************************
 ** struct__17994
 ****************************************************************/
static void Fill_struct__17994_StructSimValue(struct__17994 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*nid_LRBG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->nid_LRBG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "nid_LRBG";
	/*q_dir label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[2].m_pszName = "q_dir";
	/*q_scale label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->q_scale) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_Q_SCALE_Utils;
	pValues[3].m_pszName = "q_scale";
	/*d_link label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->d_link) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "d_link";
	/*q_newcountry label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->q_newcountry) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_Q_NEWCOUNTRY_Utils;
	pValues[5].m_pszName = "q_newcountry";
	/*nid_c label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_bg";
	/*q_linkorientation label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->q_linkorientation) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_Q_LINKORIENTATION_Utils;
	pValues[8].m_pszName = "q_linkorientation";
	/*q_linkreaction label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->q_linkreaction) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_Q_LINKREACTION_Utils;
	pValues[9].m_pszName = "q_linkreaction";
	/*q_locacc label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->q_locacc) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[10].m_pszName = "q_locacc";
}

const char * struct__17994_to_string(const void* pValue) {
	static StructSimValue values[11];
	Fill_struct__17994_StructSimValue(((struct__17994*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 11);
}

int string_to_struct__17994(const char* strValue, void* pValue) {
	static struct__17994 rTemp;
	int nResult = 0;
	static StructSimValue values[11];
	kcg_copy_struct__17994(&(rTemp), &(*((struct__17994*)pValue)));
	Fill_struct__17994_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 11);
	if (nResult == 1)
		kcg_copy_struct__17994(&(*((struct__17994*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__17994_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[11];
	Fill_struct__17994_StructSimValue((struct__17994*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 11);
}


int is_struct__17994_allow_double_convertion() {
	return 0;
}


const char * get_struct__17994_signature() {
	static StructSimValue values[11];
	Fill_struct__17994_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 11);
}

FilterUtils get_struct__17994_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[11];
	Fill_struct__17994_StructSimValue((struct__17994*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 11, strFilter);
}

const char * struct__17994_filter_values[11] = {"valid", "nid_LRBG", "q_dir", "q_scale", "d_link", "q_newcountry", "nid_c", "nid_bg", "q_linkorientation", "q_linkreaction", "q_locacc"};
int check_struct__17994_string(const char* strValue) {
	static struct__17994 rTemp;
	return string_to_struct__17994(strValue, &rTemp);
}


/****************************************************************
 ** struct__18008
 ****************************************************************/
static void Fill_struct__18008_StructSimValue(struct__18008 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*nid_bg_fromLinkingBG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg_fromLinkingBG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "nid_bg_fromLinkingBG";
	/*nid_c_fromLinkingBG label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->nid_c_fromLinkingBG) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "nid_c_fromLinkingBG";
	/*expectedLocation label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->expectedLocation) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__17988_Utils;
	pValues[3].m_pszName = "expectedLocation";
	/*d_link label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->d_link) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__17988_Utils;
	pValues[4].m_pszName = "d_link";
	/*linkingInfo label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->linkingInfo) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_struct__17994_Utils;
	pValues[5].m_pszName = "linkingInfo";
}

const char * struct__18008_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18008_StructSimValue(((struct__18008*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__18008(const char* strValue, void* pValue) {
	static struct__18008 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__18008(&(rTemp), &(*((struct__18008*)pValue)));
	Fill_struct__18008_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__18008(&(*((struct__18008*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18008_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18008_StructSimValue((struct__18008*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__18008_allow_double_convertion() {
	return 0;
}


const char * get_struct__18008_signature() {
	static StructSimValue values[6];
	Fill_struct__18008_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__18008_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18008_StructSimValue((struct__18008*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__18008_filter_values[6] = {"valid", "nid_bg_fromLinkingBG", "nid_c_fromLinkingBG", "expectedLocation", "d_link", "linkingInfo"};
int check_struct__18008_string(const char* strValue) {
	static struct__18008 rTemp;
	return string_to_struct__18008(strValue, &rTemp);
}


/****************************************************************
 ** array__18017
 ****************************************************************/
void* array__18017_projection(void** pValues, int nIndex) {
	return &((*(array__18017*)pValues)[nIndex]);
}

const char * array__18017_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__17994_to_string, 4, array__18017_projection);
}

int compare_array__18017_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__17994_type , 4, array__18017_projection);
}

int is_array__18017_allow_double_convertion() {
	return 0;
}

int string_to_array__18017(const char* strValue, void* pValue) {
	static array__18017 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__17994, 4, array__18017_projection);
	if (nResult == 1)
		kcg_copy_array__18017(&(*((array__18017*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18017_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__17994_signature, 4);
}

FilterUtils get_array__18017_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__17994_Utils, strFilter, (void**)pValue, 4, array__18017_projection);
}

int check_array__18017_string(const char* strValue) {
	static array__18017 rTemp;
	return string_to_array__18017(strValue, &rTemp);
}


/****************************************************************
 ** struct__18020
 ****************************************************************/
static void Fill_struct__18020_StructSimValue(struct__18020 * pStruct, StructSimValue * pValues) {
	/*v_safeNominal label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->v_safeNominal) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "v_safeNominal";
	/*v_rawNominal label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->v_rawNominal) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "v_rawNominal";
	/*v_lower label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->v_lower) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "v_lower";
	/*v_upper label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->v_upper) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "v_upper";
}

const char * struct__18020_to_string(const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18020_StructSimValue(((struct__18020*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 4);
}

int string_to_struct__18020(const char* strValue, void* pValue) {
	static struct__18020 rTemp;
	int nResult = 0;
	static StructSimValue values[4];
	kcg_copy_struct__18020(&(rTemp), &(*((struct__18020*)pValue)));
	Fill_struct__18020_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 4);
	if (nResult == 1)
		kcg_copy_struct__18020(&(*((struct__18020*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18020_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18020_StructSimValue((struct__18020*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 4);
}


int is_struct__18020_allow_double_convertion() {
	return 0;
}


const char * get_struct__18020_signature() {
	static StructSimValue values[4];
	Fill_struct__18020_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 4);
}

FilterUtils get_struct__18020_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18020_StructSimValue((struct__18020*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 4, strFilter);
}

const char * struct__18020_filter_values[4] = {"v_safeNominal", "v_rawNominal", "v_lower", "v_upper"};
int check_struct__18020_string(const char* strValue) {
	static struct__18020 rTemp;
	return string_to_struct__18020(strValue, &rTemp);
}


/****************************************************************
 ** struct__18027
 ****************************************************************/
static void Fill_struct__18027_StructSimValue(struct__18027 * pStruct, StructSimValue * pValues) {
	/*o_nominal label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->o_nominal) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "o_nominal";
	/*o_min label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->o_min) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "o_min";
	/*o_max label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->o_max) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "o_max";
}

const char * struct__18027_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18027_StructSimValue(((struct__18027*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__18027(const char* strValue, void* pValue) {
	static struct__18027 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__18027(&(rTemp), &(*((struct__18027*)pValue)));
	Fill_struct__18027_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__18027(&(*((struct__18027*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18027_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18027_StructSimValue((struct__18027*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__18027_allow_double_convertion() {
	return 0;
}


const char * get_struct__18027_signature() {
	static StructSimValue values[3];
	Fill_struct__18027_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__18027_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18027_StructSimValue((struct__18027*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__18027_filter_values[3] = {"o_nominal", "o_min", "o_max"};
int check_struct__18027_string(const char* strValue) {
	static struct__18027 rTemp;
	return string_to_struct__18027(strValue, &rTemp);
}


/****************************************************************
 ** struct__18033
 ****************************************************************/
static void Fill_struct__18033_StructSimValue(struct__18033 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*timestamp label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->timestamp) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "timestamp";
	/*odo label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->odo) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_struct__18027_Utils;
	pValues[2].m_pszName = "odo";
	/*speed label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->speed) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18020_Utils;
	pValues[3].m_pszName = "speed";
	/*acceleration label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->acceleration) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "acceleration";
	/*motionState label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->motionState) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils;
	pValues[5].m_pszName = "motionState";
	/*motionDirection label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->motionDirection) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils;
	pValues[6].m_pszName = "motionDirection";
}

const char * struct__18033_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18033_StructSimValue(((struct__18033*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__18033(const char* strValue, void* pValue) {
	static struct__18033 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__18033(&(rTemp), &(*((struct__18033*)pValue)));
	Fill_struct__18033_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__18033(&(*((struct__18033*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18033_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18033_StructSimValue((struct__18033*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__18033_allow_double_convertion() {
	return 0;
}


const char * get_struct__18033_signature() {
	static StructSimValue values[7];
	Fill_struct__18033_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__18033_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18033_StructSimValue((struct__18033*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__18033_filter_values[7] = {"valid", "timestamp", "odo", "speed", "acceleration", "motionState", "motionDirection"};
int check_struct__18033_string(const char* strValue) {
	static struct__18033 rTemp;
	return string_to_struct__18033(strValue, &rTemp);
}


/****************************************************************
 ** struct__18043
 ****************************************************************/
static void Fill_struct__18043_StructSimValue(struct__18043 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*q_updown label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_updown) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_UPDOWN_Utils;
	pValues[1].m_pszName = "q_updown";
	/*m_version label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_M_VERSION_Utils;
	pValues[2].m_pszName = "m_version";
	/*q_media label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->q_media) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_Q_MEDIA_Utils;
	pValues[3].m_pszName = "q_media";
	/*n_total label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->n_total) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_N_TOTAL_Utils;
	pValues[4].m_pszName = "n_total";
	/*m_mcount label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->m_mcount) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "m_mcount";
	/*nid_c label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_bg";
	/*q_link label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_Q_LINK_Utils;
	pValues[8].m_pszName = "q_link";
	/*bgPosition label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->bgPosition) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_struct__18033_Utils;
	pValues[9].m_pszName = "bgPosition";
	/*BG_centerDetectionInaccuraccuracies label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->BG_centerDetectionInaccuraccuracies) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_struct__17988_Utils;
	pValues[10].m_pszName = "BG_centerDetectionInaccuraccuracies";
	/*q_nvlocacc label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->q_nvlocacc) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[11].m_pszName = "q_nvlocacc";
	/*noCoordinateSystemHasBeenAssigned label.*/
	pValues[12].m_pPtr = pStruct != 0 ? &(pStruct->noCoordinateSystemHasBeenAssigned) : 0;
	pValues[12].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[12].m_pszName = "noCoordinateSystemHasBeenAssigned";
	/*trainOrientationToBG label.*/
	pValues[13].m_pPtr = pStruct != 0 ? &(pStruct->trainOrientationToBG) : 0;
	pValues[13].m_pTypeUtils = &_SCSIM_Q_DIRLRBG_Utils;
	pValues[13].m_pszName = "trainOrientationToBG";
	/*trainRunningDirectionToBG label.*/
	pValues[14].m_pPtr = pStruct != 0 ? &(pStruct->trainRunningDirectionToBG) : 0;
	pValues[14].m_pTypeUtils = &_SCSIM_Q_DIRTRAIN_Utils;
	pValues[14].m_pszName = "trainRunningDirectionToBG";
}

const char * struct__18043_to_string(const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__18043_StructSimValue(((struct__18043*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 15);
}

int string_to_struct__18043(const char* strValue, void* pValue) {
	static struct__18043 rTemp;
	int nResult = 0;
	static StructSimValue values[15];
	kcg_copy_struct__18043(&(rTemp), &(*((struct__18043*)pValue)));
	Fill_struct__18043_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 15);
	if (nResult == 1)
		kcg_copy_struct__18043(&(*((struct__18043*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18043_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__18043_StructSimValue((struct__18043*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 15);
}


int is_struct__18043_allow_double_convertion() {
	return 0;
}


const char * get_struct__18043_signature() {
	static StructSimValue values[15];
	Fill_struct__18043_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 15);
}

FilterUtils get_struct__18043_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[15];
	Fill_struct__18043_StructSimValue((struct__18043*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 15, strFilter);
}

const char * struct__18043_filter_values[15] = {"valid", "q_updown", "m_version", "q_media", "n_total", "m_mcount", "nid_c", "nid_bg", "q_link", "bgPosition", "BG_centerDetectionInaccuraccuracies", "q_nvlocacc", "noCoordinateSystemHasBeenAssigned", "trainOrientationToBG", "trainRunningDirectionToBG"};
int check_struct__18043_string(const char* strValue) {
	static struct__18043 rTemp;
	return string_to_struct__18043(strValue, &rTemp);
}


/****************************************************************
 ** struct__18061
 ****************************************************************/
static void Fill_struct__18061_StructSimValue(struct__18061 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*BG_Header label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BG_Header) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__18043_Utils;
	pValues[1].m_pszName = "BG_Header";
	/*linkedBGs label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->linkedBGs) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_array__18017_Utils;
	pValues[2].m_pszName = "linkedBGs";
}

const char * struct__18061_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18061_StructSimValue(((struct__18061*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__18061(const char* strValue, void* pValue) {
	static struct__18061 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__18061(&(rTemp), &(*((struct__18061*)pValue)));
	Fill_struct__18061_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__18061(&(*((struct__18061*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18061_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18061_StructSimValue((struct__18061*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__18061_allow_double_convertion() {
	return 0;
}


const char * get_struct__18061_signature() {
	static StructSimValue values[3];
	Fill_struct__18061_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__18061_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18061_StructSimValue((struct__18061*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__18061_filter_values[3] = {"valid", "BG_Header", "linkedBGs"};
int check_struct__18061_string(const char* strValue) {
	static struct__18061 rTemp;
	return string_to_struct__18061(strValue, &rTemp);
}


/****************************************************************
 ** struct__18067
 ****************************************************************/
static void Fill_struct__18067_StructSimValue(struct__18067 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*nid_c label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "nid_bg";
	/*q_link label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_Q_LINK_Utils;
	pValues[3].m_pszName = "q_link";
	/*location label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->location) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__17988_Utils;
	pValues[4].m_pszName = "location";
	/*seqNoOnTrack label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->seqNoOnTrack) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "seqNoOnTrack";
	/*infoFromLinking label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->infoFromLinking) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_struct__18008_Utils;
	pValues[6].m_pszName = "infoFromLinking";
	/*infoFromPassing label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->infoFromPassing) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_struct__18061_Utils;
	pValues[7].m_pszName = "infoFromPassing";
}

const char * struct__18067_to_string(const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__18067_StructSimValue(((struct__18067*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 8);
}

int string_to_struct__18067(const char* strValue, void* pValue) {
	static struct__18067 rTemp;
	int nResult = 0;
	static StructSimValue values[8];
	kcg_copy_struct__18067(&(rTemp), &(*((struct__18067*)pValue)));
	Fill_struct__18067_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 8);
	if (nResult == 1)
		kcg_copy_struct__18067(&(*((struct__18067*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18067_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__18067_StructSimValue((struct__18067*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 8);
}


int is_struct__18067_allow_double_convertion() {
	return 0;
}


const char * get_struct__18067_signature() {
	static StructSimValue values[8];
	Fill_struct__18067_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 8);
}

FilterUtils get_struct__18067_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[8];
	Fill_struct__18067_StructSimValue((struct__18067*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 8, strFilter);
}

const char * struct__18067_filter_values[8] = {"valid", "nid_c", "nid_bg", "q_link", "location", "seqNoOnTrack", "infoFromLinking", "infoFromPassing"};
int check_struct__18067_string(const char* strValue) {
	static struct__18067 rTemp;
	return string_to_struct__18067(strValue, &rTemp);
}


/****************************************************************
 ** struct__18078
 ****************************************************************/
static void Fill_struct__18078_StructSimValue(struct__18078 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*timestamp label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->timestamp) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "timestamp";
	/*trainPositionIsUnknown label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->trainPositionIsUnknown) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "trainPositionIsUnknown";
	/*noCoordinateSystemHasBeenAssigned label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->noCoordinateSystemHasBeenAssigned) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[3].m_pszName = "noCoordinateSystemHasBeenAssigned";
	/*trainPosition label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->trainPosition) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__17988_Utils;
	pValues[4].m_pszName = "trainPosition";
	/*estimatedFrontEndPosition label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->estimatedFrontEndPosition) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "estimatedFrontEndPosition";
	/*minSafeFrontEndPosition label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->minSafeFrontEndPosition) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "minSafeFrontEndPosition";
	/*maxSafeFrontEndPostion label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->maxSafeFrontEndPostion) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "maxSafeFrontEndPostion";
	/*LRBG label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->LRBG) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_struct__18067_Utils;
	pValues[8].m_pszName = "LRBG";
	/*prvLRBG label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->prvLRBG) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_struct__18067_Utils;
	pValues[9].m_pszName = "prvLRBG";
	/*nominalOrReverseToLRBG label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->nominalOrReverseToLRBG) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_Q_DLRBG_Utils;
	pValues[10].m_pszName = "nominalOrReverseToLRBG";
	/*trainOrientationToLRBG label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->trainOrientationToLRBG) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_Q_DIRLRBG_Utils;
	pValues[11].m_pszName = "trainOrientationToLRBG";
	/*trainRunningDirectionToLRBG label.*/
	pValues[12].m_pPtr = pStruct != 0 ? &(pStruct->trainRunningDirectionToLRBG) : 0;
	pValues[12].m_pTypeUtils = &_SCSIM_Q_DIRTRAIN_Utils;
	pValues[12].m_pszName = "trainRunningDirectionToLRBG";
	/*linkingIsUsedOnboard label.*/
	pValues[13].m_pPtr = pStruct != 0 ? &(pStruct->linkingIsUsedOnboard) : 0;
	pValues[13].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[13].m_pszName = "linkingIsUsedOnboard";
}

const char * struct__18078_to_string(const void* pValue) {
	static StructSimValue values[14];
	Fill_struct__18078_StructSimValue(((struct__18078*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 14);
}

int string_to_struct__18078(const char* strValue, void* pValue) {
	static struct__18078 rTemp;
	int nResult = 0;
	static StructSimValue values[14];
	kcg_copy_struct__18078(&(rTemp), &(*((struct__18078*)pValue)));
	Fill_struct__18078_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 14);
	if (nResult == 1)
		kcg_copy_struct__18078(&(*((struct__18078*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18078_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[14];
	Fill_struct__18078_StructSimValue((struct__18078*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 14);
}


int is_struct__18078_allow_double_convertion() {
	return 0;
}


const char * get_struct__18078_signature() {
	static StructSimValue values[14];
	Fill_struct__18078_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 14);
}

FilterUtils get_struct__18078_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[14];
	Fill_struct__18078_StructSimValue((struct__18078*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 14, strFilter);
}

const char * struct__18078_filter_values[14] = {"valid", "timestamp", "trainPositionIsUnknown", "noCoordinateSystemHasBeenAssigned", "trainPosition", "estimatedFrontEndPosition", "minSafeFrontEndPosition", "maxSafeFrontEndPostion", "LRBG", "prvLRBG", "nominalOrReverseToLRBG", "trainOrientationToLRBG", "trainRunningDirectionToLRBG", "linkingIsUsedOnboard"};
int check_struct__18078_string(const char* strValue) {
	static struct__18078 rTemp;
	return string_to_struct__18078(strValue, &rTemp);
}


/****************************************************************
 ** array__18095
 ****************************************************************/
void* array__18095_projection(void** pValues, int nIndex) {
	return &((*(array__18095*)pValues)[nIndex]);
}

const char * array__18095_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18067_to_string, 8, array__18095_projection);
}

int compare_array__18095_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18067_type , 8, array__18095_projection);
}

int is_array__18095_allow_double_convertion() {
	return 0;
}

int string_to_array__18095(const char* strValue, void* pValue) {
	static array__18095 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18067, 8, array__18095_projection);
	if (nResult == 1)
		kcg_copy_array__18095(&(*((array__18095*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18095_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18067_signature, 8);
}

FilterUtils get_array__18095_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18067_Utils, strFilter, (void**)pValue, 8, array__18095_projection);
}

int check_array__18095_string(const char* strValue) {
	static array__18095 rTemp;
	return string_to_array__18095(strValue, &rTemp);
}


/****************************************************************
 ** struct__18098
 ****************************************************************/
static void Fill_struct__18098_StructSimValue(struct__18098 * pStruct, StructSimValue * pValues) {
	/*q_updown label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->q_updown) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "q_updown";
	/*m_version label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "m_version";
	/*q_media label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_media) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "q_media";
	/*n_pig label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->n_pig) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "n_pig";
	/*n_total label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->n_total) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "n_total";
	/*m_dup label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->m_dup) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "m_dup";
	/*m_mcount label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->m_mcount) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "m_mcount";
	/*nid_c label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "nid_bg";
	/*q_link label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[9].m_pszName = "q_link";
}

const char * struct__18098_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18098_StructSimValue(((struct__18098*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__18098(const char* strValue, void* pValue) {
	static struct__18098 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__18098(&(rTemp), &(*((struct__18098*)pValue)));
	Fill_struct__18098_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__18098(&(*((struct__18098*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18098_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18098_StructSimValue((struct__18098*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__18098_allow_double_convertion() {
	return 0;
}


const char * get_struct__18098_signature() {
	static StructSimValue values[10];
	Fill_struct__18098_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__18098_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18098_StructSimValue((struct__18098*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__18098_filter_values[10] = {"q_updown", "m_version", "q_media", "n_pig", "n_total", "m_dup", "m_mcount", "nid_c", "nid_bg", "q_link"};
int check_struct__18098_string(const char* strValue) {
	static struct__18098 rTemp;
	return string_to_struct__18098(strValue, &rTemp);
}


/****************************************************************
 ** array_int_500
 ****************************************************************/
void* array_int_500_projection(void** pValues, int nIndex) {
	return &((*(array_int_500*)pValues)[nIndex]);
}

const char * array_int_500_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 500, array_int_500_projection);
}

int compare_array_int_500_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 500, array_int_500_projection);
}

int is_array_int_500_allow_double_convertion() {
	return 0;
}

int string_to_array_int_500(const char* strValue, void* pValue) {
	static array_int_500 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 500, array_int_500_projection);
	if (nResult == 1)
		kcg_copy_array_int_500(&(*((array_int_500*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_500_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 500);
}

FilterUtils get_array_int_500_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 500, array_int_500_projection);
}

int check_array_int_500_string(const char* strValue) {
	static array_int_500 rTemp;
	return string_to_array_int_500(strValue, &rTemp);
}


/****************************************************************
 ** struct__18114
 ****************************************************************/
static void Fill_struct__18114_StructSimValue(struct__18114 * pStruct, StructSimValue * pValues) {
	/*nid_packet label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->nid_packet) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "nid_packet";
	/*q_dir label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[1].m_pszName = "q_dir";
	/*valid label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "valid";
	/*startAddress label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->startAddress) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "startAddress";
	/*endAddress label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->endAddress) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "endAddress";
}

const char * struct__18114_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18114_StructSimValue(((struct__18114*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__18114(const char* strValue, void* pValue) {
	static struct__18114 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__18114(&(rTemp), &(*((struct__18114*)pValue)));
	Fill_struct__18114_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__18114(&(*((struct__18114*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18114_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18114_StructSimValue((struct__18114*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__18114_allow_double_convertion() {
	return 0;
}


const char * get_struct__18114_signature() {
	static StructSimValue values[5];
	Fill_struct__18114_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__18114_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18114_StructSimValue((struct__18114*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__18114_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__18114_string(const char* strValue) {
	static struct__18114 rTemp;
	return string_to_struct__18114(strValue, &rTemp);
}


/****************************************************************
 ** array__18122
 ****************************************************************/
void* array__18122_projection(void** pValues, int nIndex) {
	return &((*(array__18122*)pValues)[nIndex]);
}

const char * array__18122_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18114_to_string, 30, array__18122_projection);
}

int compare_array__18122_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18114_type , 30, array__18122_projection);
}

int is_array__18122_allow_double_convertion() {
	return 0;
}

int string_to_array__18122(const char* strValue, void* pValue) {
	static array__18122 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18114, 30, array__18122_projection);
	if (nResult == 1)
		kcg_copy_array__18122(&(*((array__18122*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18122_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18114_signature, 30);
}

FilterUtils get_array__18122_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18114_Utils, strFilter, (void**)pValue, 30, array__18122_projection);
}

int check_array__18122_string(const char* strValue) {
	static array__18122 rTemp;
	return string_to_array__18122(strValue, &rTemp);
}


/****************************************************************
 ** struct__18125
 ****************************************************************/
static void Fill_struct__18125_StructSimValue(struct__18125 * pStruct, StructSimValue * pValues) {
	/*PacketHeaders label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->PacketHeaders) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__18122_Utils;
	pValues[0].m_pszName = "PacketHeaders";
	/*PacketData label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->PacketData) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array_int_500_Utils;
	pValues[1].m_pszName = "PacketData";
}

const char * struct__18125_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18125_StructSimValue(((struct__18125*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__18125(const char* strValue, void* pValue) {
	static struct__18125 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__18125(&(rTemp), &(*((struct__18125*)pValue)));
	Fill_struct__18125_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__18125(&(*((struct__18125*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18125_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18125_StructSimValue((struct__18125*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__18125_allow_double_convertion() {
	return 0;
}


const char * get_struct__18125_signature() {
	static StructSimValue values[2];
	Fill_struct__18125_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__18125_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18125_StructSimValue((struct__18125*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__18125_filter_values[2] = {"PacketHeaders", "PacketData"};
int check_struct__18125_string(const char* strValue) {
	static struct__18125 rTemp;
	return string_to_struct__18125(strValue, &rTemp);
}


/****************************************************************
 ** struct__18130
 ****************************************************************/
static void Fill_struct__18130_StructSimValue(struct__18130 * pStruct, StructSimValue * pValues) {
	/*header label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->header) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__18098_Utils;
	pValues[0].m_pszName = "header";
	/*packets label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__18125_Utils;
	pValues[1].m_pszName = "packets";
	/*engineering_BG_location label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->engineering_BG_location) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "engineering_BG_location";
	/*TrainPos label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->TrainPos) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[3].m_pszName = "TrainPos";
	/*pig_nom_0 label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->pig_nom_0) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "pig_nom_0";
	/*balise_passed label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->balise_passed) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[5].m_pszName = "balise_passed";
}

const char * struct__18130_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18130_StructSimValue(((struct__18130*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__18130(const char* strValue, void* pValue) {
	static struct__18130 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__18130(&(rTemp), &(*((struct__18130*)pValue)));
	Fill_struct__18130_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__18130(&(*((struct__18130*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18130_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18130_StructSimValue((struct__18130*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__18130_allow_double_convertion() {
	return 0;
}


const char * get_struct__18130_signature() {
	static StructSimValue values[6];
	Fill_struct__18130_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__18130_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18130_StructSimValue((struct__18130*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__18130_filter_values[6] = {"header", "packets", "engineering_BG_location", "TrainPos", "pig_nom_0", "balise_passed"};
int check_struct__18130_string(const char* strValue) {
	static struct__18130 rTemp;
	return string_to_struct__18130(strValue, &rTemp);
}


/****************************************************************
 ** struct__18139
 ****************************************************************/
static void Fill_struct__18139_StructSimValue(struct__18139 * pStruct, StructSimValue * pValues) {
	/*Header label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->Header) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__18098_Utils;
	pValues[0].m_pszName = "Header";
	/*Messages label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Messages) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__18125_Utils;
	pValues[1].m_pszName = "Messages";
}

const char * struct__18139_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18139_StructSimValue(((struct__18139*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__18139(const char* strValue, void* pValue) {
	static struct__18139 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__18139(&(rTemp), &(*((struct__18139*)pValue)));
	Fill_struct__18139_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__18139(&(*((struct__18139*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18139_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18139_StructSimValue((struct__18139*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__18139_allow_double_convertion() {
	return 0;
}


const char * get_struct__18139_signature() {
	static StructSimValue values[2];
	Fill_struct__18139_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__18139_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18139_StructSimValue((struct__18139*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__18139_filter_values[2] = {"Header", "Messages"};
int check_struct__18139_string(const char* strValue) {
	static struct__18139 rTemp;
	return string_to_struct__18139(strValue, &rTemp);
}


/****************************************************************
 ** struct__18144
 ****************************************************************/
static void Fill_struct__18144_StructSimValue(struct__18144 * pStruct, StructSimValue * pValues) {
	/*NID_C label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "NID_BG";
	/*Pos label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Pos) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Pos";
	/*Or_BG label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->Or_BG) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_OrBG_TM_Utils;
	pValues[3].m_pszName = "Or_BG";
	/*Or_Line label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Or_Line) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_OrLine_TM_Utils;
	pValues[4].m_pszName = "Or_Line";
}

const char * struct__18144_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18144_StructSimValue(((struct__18144*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__18144(const char* strValue, void* pValue) {
	static struct__18144 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__18144(&(rTemp), &(*((struct__18144*)pValue)));
	Fill_struct__18144_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__18144(&(*((struct__18144*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18144_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18144_StructSimValue((struct__18144*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__18144_allow_double_convertion() {
	return 0;
}


const char * get_struct__18144_signature() {
	static StructSimValue values[5];
	Fill_struct__18144_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__18144_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18144_StructSimValue((struct__18144*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__18144_filter_values[5] = {"NID_C", "NID_BG", "Pos", "Or_BG", "Or_Line"};
int check_struct__18144_string(const char* strValue) {
	static struct__18144 rTemp;
	return string_to_struct__18144(strValue, &rTemp);
}


/****************************************************************
 ** array_int_7
 ****************************************************************/
void* array_int_7_projection(void** pValues, int nIndex) {
	return &((*(array_int_7*)pValues)[nIndex]);
}

const char * array_int_7_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 7, array_int_7_projection);
}

int compare_array_int_7_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 7, array_int_7_projection);
}

int is_array_int_7_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7(const char* strValue, void* pValue) {
	static array_int_7 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 7, array_int_7_projection);
	if (nResult == 1)
		kcg_copy_array_int_7(&(*((array_int_7*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 7);
}

FilterUtils get_array_int_7_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 7, array_int_7_projection);
}

int check_array_int_7_string(const char* strValue) {
	static array_int_7 rTemp;
	return string_to_array_int_7(strValue, &rTemp);
}


/****************************************************************
 ** struct__18155
 ****************************************************************/
static void Fill_struct__18155_StructSimValue(struct__18155 * pStruct, StructSimValue * pValues) {
	/*D_LINK label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->D_LINK) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "D_LINK";
	/*Q_NEWCOUNTRY label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Q_NEWCOUNTRY) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "Q_NEWCOUNTRY";
	/*NID_C label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "NID_BG";
	/*Q_LINKORIENTATION label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKORIENTATION) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "Q_LINKORIENTATION";
	/*Q_LINKREACTION label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKREACTION) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "Q_LINKREACTION";
	/*Q_LOCACC label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->Q_LOCACC) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "Q_LOCACC";
}

const char * struct__18155_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18155_StructSimValue(((struct__18155*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__18155(const char* strValue, void* pValue) {
	static struct__18155 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__18155(&(rTemp), &(*((struct__18155*)pValue)));
	Fill_struct__18155_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__18155(&(*((struct__18155*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18155_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18155_StructSimValue((struct__18155*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__18155_allow_double_convertion() {
	return 0;
}


const char * get_struct__18155_signature() {
	static StructSimValue values[7];
	Fill_struct__18155_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__18155_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18155_StructSimValue((struct__18155*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__18155_filter_values[7] = {"D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC"};
int check_struct__18155_string(const char* strValue) {
	static struct__18155 rTemp;
	return string_to_struct__18155(strValue, &rTemp);
}


/****************************************************************
 ** array_int_7_33
 ****************************************************************/
void* array_int_7_33_projection(void** pValues, int nIndex) {
	return &((*(array_int_7_33*)pValues)[nIndex]);
}

const char * array_int_7_33_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_7_to_string, 33, array_int_7_33_projection);
}

int compare_array_int_7_33_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_7_type , 33, array_int_7_33_projection);
}

int is_array_int_7_33_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7_33(const char* strValue, void* pValue) {
	static array_int_7_33 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_7, 33, array_int_7_33_projection);
	if (nResult == 1)
		kcg_copy_array_int_7_33(&(*((array_int_7_33*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_33_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_7_signature, 33);
}

FilterUtils get_array_int_7_33_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_7_Utils, strFilter, (void**)pValue, 33, array_int_7_33_projection);
}

int check_array_int_7_33_string(const char* strValue) {
	static array_int_7_33 rTemp;
	return string_to_array_int_7_33(strValue, &rTemp);
}


/****************************************************************
 ** array_int_231
 ****************************************************************/
void* array_int_231_projection(void** pValues, int nIndex) {
	return &((*(array_int_231*)pValues)[nIndex]);
}

const char * array_int_231_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 231, array_int_231_projection);
}

int compare_array_int_231_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 231, array_int_231_projection);
}

int is_array_int_231_allow_double_convertion() {
	return 0;
}

int string_to_array_int_231(const char* strValue, void* pValue) {
	static array_int_231 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 231, array_int_231_projection);
	if (nResult == 1)
		kcg_copy_array_int_231(&(*((array_int_231*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_231_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 231);
}

FilterUtils get_array_int_231_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 231, array_int_231_projection);
}

int check_array_int_231_string(const char* strValue) {
	static array_int_231 rTemp;
	return string_to_array_int_231(strValue, &rTemp);
}


/****************************************************************
 ** array__18171
 ****************************************************************/
void* array__18171_projection(void** pValues, int nIndex) {
	return &((*(array__18171*)pValues)[nIndex]);
}

const char * array__18171_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18155_to_string, 33, array__18171_projection);
}

int compare_array__18171_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18155_type , 33, array__18171_projection);
}

int is_array__18171_allow_double_convertion() {
	return 0;
}

int string_to_array__18171(const char* strValue, void* pValue) {
	static array__18171 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18155, 33, array__18171_projection);
	if (nResult == 1)
		kcg_copy_array__18171(&(*((array__18171*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18171_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18155_signature, 33);
}

FilterUtils get_array__18171_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18155_Utils, strFilter, (void**)pValue, 33, array__18171_projection);
}

int check_array__18171_string(const char* strValue) {
	static array__18171 rTemp;
	return string_to_array__18171(strValue, &rTemp);
}


/****************************************************************
 ** array__18174
 ****************************************************************/
void* array__18174_projection(void** pValues, int nIndex) {
	return &((*(array__18174*)pValues)[nIndex]);
}

const char * array__18174_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18155_to_string, 32, array__18174_projection);
}

int compare_array__18174_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18155_type , 32, array__18174_projection);
}

int is_array__18174_allow_double_convertion() {
	return 0;
}

int string_to_array__18174(const char* strValue, void* pValue) {
	static array__18174 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18155, 32, array__18174_projection);
	if (nResult == 1)
		kcg_copy_array__18174(&(*((array__18174*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18174_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18155_signature, 32);
}

FilterUtils get_array__18174_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18155_Utils, strFilter, (void**)pValue, 32, array__18174_projection);
}

int check_array__18174_string(const char* strValue) {
	static array__18174 rTemp;
	return string_to_array__18174(strValue, &rTemp);
}


/****************************************************************
 ** struct__18177
 ****************************************************************/
static void Fill_struct__18177_StructSimValue(struct__18177 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*NID_PACKET label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->NID_PACKET) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "NID_PACKET";
	/*Q_DIR label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Q_DIR) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "Q_DIR";
	/*L_PACKET label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->L_PACKET) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "L_PACKET";
	/*Q_SCALE label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Q_SCALE) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "Q_SCALE";
	/*D_LINK label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->D_LINK) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "D_LINK";
	/*Q_NEWCOUNTRY label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->Q_NEWCOUNTRY) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "Q_NEWCOUNTRY";
	/*NID_C label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->NID_C) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "NID_C";
	/*NID_BG label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->NID_BG) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "NID_BG";
	/*Q_LINKORIENTATION label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKORIENTATION) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[9].m_pszName = "Q_LINKORIENTATION";
	/*Q_LINKREACTION label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->Q_LINKREACTION) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[10].m_pszName = "Q_LINKREACTION";
	/*Q_LOCACC label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->Q_LOCACC) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[11].m_pszName = "Q_LOCACC";
	/*N_ITER label.*/
	pValues[12].m_pPtr = pStruct != 0 ? &(pStruct->N_ITER) : 0;
	pValues[12].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[12].m_pszName = "N_ITER";
	/*SECTIONS label.*/
	pValues[13].m_pPtr = pStruct != 0 ? &(pStruct->SECTIONS) : 0;
	pValues[13].m_pTypeUtils = &_SCSIM_array__18174_Utils;
	pValues[13].m_pszName = "SECTIONS";
}

const char * struct__18177_to_string(const void* pValue) {
	static StructSimValue values[14];
	Fill_struct__18177_StructSimValue(((struct__18177*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 14);
}

int string_to_struct__18177(const char* strValue, void* pValue) {
	static struct__18177 rTemp;
	int nResult = 0;
	static StructSimValue values[14];
	kcg_copy_struct__18177(&(rTemp), &(*((struct__18177*)pValue)));
	Fill_struct__18177_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 14);
	if (nResult == 1)
		kcg_copy_struct__18177(&(*((struct__18177*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18177_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[14];
	Fill_struct__18177_StructSimValue((struct__18177*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 14);
}


int is_struct__18177_allow_double_convertion() {
	return 0;
}


const char * get_struct__18177_signature() {
	static StructSimValue values[14];
	Fill_struct__18177_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 14);
}

FilterUtils get_struct__18177_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[14];
	Fill_struct__18177_StructSimValue((struct__18177*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 14, strFilter);
}

const char * struct__18177_filter_values[14] = {"valid", "NID_PACKET", "Q_DIR", "L_PACKET", "Q_SCALE", "D_LINK", "Q_NEWCOUNTRY", "NID_C", "NID_BG", "Q_LINKORIENTATION", "Q_LINKREACTION", "Q_LOCACC", "N_ITER", "SECTIONS"};
int check_struct__18177_string(const char* strValue) {
	static struct__18177 rTemp;
	return string_to_struct__18177(strValue, &rTemp);
}


/****************************************************************
 ** struct__18194
 ****************************************************************/
static void Fill_struct__18194_StructSimValue(struct__18194 * pStruct, StructSimValue * pValues) {
	/*q_updown label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->q_updown) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_Q_UPDOWN_Utils;
	pValues[0].m_pszName = "q_updown";
	/*m_version label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_M_VERSION_Utils;
	pValues[1].m_pszName = "m_version";
	/*q_media label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_media) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_Q_MEDIA_Utils;
	pValues[2].m_pszName = "q_media";
	/*n_pig label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->n_pig) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_N_PIG_Utils;
	pValues[3].m_pszName = "n_pig";
	/*n_total label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->n_total) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_N_TOTAL_Utils;
	pValues[4].m_pszName = "n_total";
	/*m_dup label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->m_dup) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_M_DUP_Utils;
	pValues[5].m_pszName = "m_dup";
	/*m_mcount label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->m_mcount) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "m_mcount";
	/*nid_c label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_c";
	/*nid_bg label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->nid_bg) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "nid_bg";
	/*q_link label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->q_link) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_Q_LINK_Utils;
	pValues[9].m_pszName = "q_link";
}

const char * struct__18194_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18194_StructSimValue(((struct__18194*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__18194(const char* strValue, void* pValue) {
	static struct__18194 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__18194(&(rTemp), &(*((struct__18194*)pValue)));
	Fill_struct__18194_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__18194(&(*((struct__18194*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18194_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18194_StructSimValue((struct__18194*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__18194_allow_double_convertion() {
	return 0;
}


const char * get_struct__18194_signature() {
	static StructSimValue values[10];
	Fill_struct__18194_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__18194_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18194_StructSimValue((struct__18194*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__18194_filter_values[10] = {"q_updown", "m_version", "q_media", "n_pig", "n_total", "m_dup", "m_mcount", "nid_c", "nid_bg", "q_link"};
int check_struct__18194_string(const char* strValue) {
	static struct__18194 rTemp;
	return string_to_struct__18194(strValue, &rTemp);
}


/****************************************************************
 ** struct__18207
 ****************************************************************/
static void Fill_struct__18207_StructSimValue(struct__18207 * pStruct, StructSimValue * pValues) {
	/*o_nominal label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->o_nominal) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[0].m_pszName = "o_nominal";
	/*o_min label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->o_min) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[1].m_pszName = "o_min";
	/*o_max label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->o_max) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[2].m_pszName = "o_max";
}

const char * struct__18207_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18207_StructSimValue(((struct__18207*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__18207(const char* strValue, void* pValue) {
	static struct__18207 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__18207(&(rTemp), &(*((struct__18207*)pValue)));
	Fill_struct__18207_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__18207(&(*((struct__18207*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18207_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18207_StructSimValue((struct__18207*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__18207_allow_double_convertion() {
	return 0;
}


const char * get_struct__18207_signature() {
	static StructSimValue values[3];
	Fill_struct__18207_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__18207_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18207_StructSimValue((struct__18207*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__18207_filter_values[3] = {"o_nominal", "o_min", "o_max"};
int check_struct__18207_string(const char* strValue) {
	static struct__18207 rTemp;
	return string_to_struct__18207(strValue, &rTemp);
}


/****************************************************************
 ** struct__18213
 ****************************************************************/
static void Fill_struct__18213_StructSimValue(struct__18213 * pStruct, StructSimValue * pValues) {
	/*radioDevice label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->radioDevice) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "radioDevice";
	/*receivedSystemTime label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->receivedSystemTime) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "receivedSystemTime";
	/*nid_message label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->nid_message) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "nid_message";
	/*t_train label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->t_train) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[3].m_pszName = "t_train";
	/*m_ack label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->m_ack) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_M_ACK_Utils;
	pValues[4].m_pszName = "m_ack";
	/*nid_lrbg label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->nid_lrbg) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "nid_lrbg";
	/*t_train_reference label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->t_train_reference) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[6].m_pszName = "t_train_reference";
	/*nid_em label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->nid_em) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "nid_em";
	/*q_scale label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->q_scale) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_Q_SCALE_Utils;
	pValues[8].m_pszName = "q_scale";
	/*d_sr label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->d_sr) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[9].m_pszName = "d_sr";
	/*t_sh_rqst label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->t_sh_rqst) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_kcg_real_Utils;
	pValues[10].m_pszName = "t_sh_rqst";
	/*d_ref label.*/
	pValues[11].m_pPtr = pStruct != 0 ? &(pStruct->d_ref) : 0;
	pValues[11].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[11].m_pszName = "d_ref";
	/*q_dir label.*/
	pValues[12].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[12].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[12].m_pszName = "q_dir";
	/*d_emergencystop label.*/
	pValues[13].m_pPtr = pStruct != 0 ? &(pStruct->d_emergencystop) : 0;
	pValues[13].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[13].m_pszName = "d_emergencystop";
	/*m_version label.*/
	pValues[14].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[14].m_pTypeUtils = &_SCSIM_M_VERSION_Utils;
	pValues[14].m_pszName = "m_version";
}

const char * struct__18213_to_string(const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__18213_StructSimValue(((struct__18213*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 15);
}

int string_to_struct__18213(const char* strValue, void* pValue) {
	static struct__18213 rTemp;
	int nResult = 0;
	static StructSimValue values[15];
	kcg_copy_struct__18213(&(rTemp), &(*((struct__18213*)pValue)));
	Fill_struct__18213_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 15);
	if (nResult == 1)
		kcg_copy_struct__18213(&(*((struct__18213*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18213_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__18213_StructSimValue((struct__18213*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 15);
}


int is_struct__18213_allow_double_convertion() {
	return 0;
}


const char * get_struct__18213_signature() {
	static StructSimValue values[15];
	Fill_struct__18213_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 15);
}

FilterUtils get_struct__18213_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[15];
	Fill_struct__18213_StructSimValue((struct__18213*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 15, strFilter);
}

const char * struct__18213_filter_values[15] = {"radioDevice", "receivedSystemTime", "nid_message", "t_train", "m_ack", "nid_lrbg", "t_train_reference", "nid_em", "q_scale", "d_sr", "t_sh_rqst", "d_ref", "q_dir", "d_emergencystop", "m_version"};
int check_struct__18213_string(const char* strValue) {
	static struct__18213 rTemp;
	return string_to_struct__18213(strValue, &rTemp);
}


/****************************************************************
 ** struct__18231
 ****************************************************************/
static void Fill_struct__18231_StructSimValue(struct__18231 * pStruct, StructSimValue * pValues) {
	/*t_train_reference label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->t_train_reference) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "t_train_reference";
	/*nid_em label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->nid_em) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "nid_em";
	/*q_scale label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_scale) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "q_scale";
	/*d_sr label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->d_sr) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[3].m_pszName = "d_sr";
	/*t_sh_rqst label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->t_sh_rqst) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[4].m_pszName = "t_sh_rqst";
	/*d_ref label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->d_ref) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[5].m_pszName = "d_ref";
	/*q_dir label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[6].m_pszName = "q_dir";
	/*d_emergencystop label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->d_emergencystop) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[7].m_pszName = "d_emergencystop";
	/*m_version label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->m_version) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[8].m_pszName = "m_version";
}

const char * struct__18231_to_string(const void* pValue) {
	static StructSimValue values[9];
	Fill_struct__18231_StructSimValue(((struct__18231*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 9);
}

int string_to_struct__18231(const char* strValue, void* pValue) {
	static struct__18231 rTemp;
	int nResult = 0;
	static StructSimValue values[9];
	kcg_copy_struct__18231(&(rTemp), &(*((struct__18231*)pValue)));
	Fill_struct__18231_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 9);
	if (nResult == 1)
		kcg_copy_struct__18231(&(*((struct__18231*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18231_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[9];
	Fill_struct__18231_StructSimValue((struct__18231*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 9);
}


int is_struct__18231_allow_double_convertion() {
	return 0;
}


const char * get_struct__18231_signature() {
	static StructSimValue values[9];
	Fill_struct__18231_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 9);
}

FilterUtils get_struct__18231_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[9];
	Fill_struct__18231_StructSimValue((struct__18231*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 9, strFilter);
}

const char * struct__18231_filter_values[9] = {"t_train_reference", "nid_em", "q_scale", "d_sr", "t_sh_rqst", "d_ref", "q_dir", "d_emergencystop", "m_version"};
int check_struct__18231_string(const char* strValue) {
	static struct__18231 rTemp;
	return string_to_struct__18231(strValue, &rTemp);
}


/****************************************************************
 ** struct__18243
 ****************************************************************/
static void Fill_struct__18243_StructSimValue(struct__18243 * pStruct, StructSimValue * pValues) {
	/*present label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->present) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "present";
	/*apiConsistencyError label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->apiConsistencyError) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "apiConsistencyError";
	/*Radio_Common_Header label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Radio_Common_Header) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_struct__18213_Utils;
	pValues[2].m_pszName = "Radio_Common_Header";
	/*Radio_MetaData label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->Radio_MetaData) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18231_Utils;
	pValues[3].m_pszName = "Radio_MetaData";
}

const char * struct__18243_to_string(const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18243_StructSimValue(((struct__18243*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 4);
}

int string_to_struct__18243(const char* strValue, void* pValue) {
	static struct__18243 rTemp;
	int nResult = 0;
	static StructSimValue values[4];
	kcg_copy_struct__18243(&(rTemp), &(*((struct__18243*)pValue)));
	Fill_struct__18243_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 4);
	if (nResult == 1)
		kcg_copy_struct__18243(&(*((struct__18243*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18243_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18243_StructSimValue((struct__18243*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 4);
}


int is_struct__18243_allow_double_convertion() {
	return 0;
}


const char * get_struct__18243_signature() {
	static StructSimValue values[4];
	Fill_struct__18243_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 4);
}

FilterUtils get_struct__18243_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18243_StructSimValue((struct__18243*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 4, strFilter);
}

const char * struct__18243_filter_values[4] = {"present", "apiConsistencyError", "Radio_Common_Header", "Radio_MetaData"};
int check_struct__18243_string(const char* strValue) {
	static struct__18243 rTemp;
	return string_to_struct__18243(strValue, &rTemp);
}


/****************************************************************
 ** struct__18250
 ****************************************************************/
static void Fill_struct__18250_StructSimValue(struct__18250 * pStruct, StructSimValue * pValues) {
	/*odometerOfBaliseDetection label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->odometerOfBaliseDetection) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__18033_Utils;
	pValues[0].m_pszName = "odometerOfBaliseDetection";
	/*BG_centerDetectionInaccuraccuracies label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BG_centerDetectionInaccuraccuracies) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__17988_Utils;
	pValues[1].m_pszName = "BG_centerDetectionInaccuraccuracies";
}

const char * struct__18250_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18250_StructSimValue(((struct__18250*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__18250(const char* strValue, void* pValue) {
	static struct__18250 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__18250(&(rTemp), &(*((struct__18250*)pValue)));
	Fill_struct__18250_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__18250(&(*((struct__18250*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18250_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18250_StructSimValue((struct__18250*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__18250_allow_double_convertion() {
	return 0;
}


const char * get_struct__18250_signature() {
	static StructSimValue values[2];
	Fill_struct__18250_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__18250_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18250_StructSimValue((struct__18250*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__18250_filter_values[2] = {"odometerOfBaliseDetection", "BG_centerDetectionInaccuraccuracies"};
int check_struct__18250_string(const char* strValue) {
	static struct__18250 rTemp;
	return string_to_struct__18250(strValue, &rTemp);
}


/****************************************************************
 ** struct__18255
 ****************************************************************/
static void Fill_struct__18255_StructSimValue(struct__18255 * pStruct, StructSimValue * pValues) {
	/*present label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->present) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "present";
	/*checkResult label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->checkResult) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "checkResult";
	/*api_bad_balise_received label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->api_bad_balise_received) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "api_bad_balise_received";
	/*api_header label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->api_header) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18194_Utils;
	pValues[3].m_pszName = "api_header";
	/*centerOfBalisePosition label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->centerOfBalisePosition) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__18250_Utils;
	pValues[4].m_pszName = "centerOfBalisePosition";
}

const char * struct__18255_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18255_StructSimValue(((struct__18255*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__18255(const char* strValue, void* pValue) {
	static struct__18255 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__18255(&(rTemp), &(*((struct__18255*)pValue)));
	Fill_struct__18255_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__18255(&(*((struct__18255*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18255_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18255_StructSimValue((struct__18255*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__18255_allow_double_convertion() {
	return 0;
}


const char * get_struct__18255_signature() {
	static StructSimValue values[5];
	Fill_struct__18255_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__18255_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18255_StructSimValue((struct__18255*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__18255_filter_values[5] = {"present", "checkResult", "api_bad_balise_received", "api_header", "centerOfBalisePosition"};
int check_struct__18255_string(const char* strValue) {
	static struct__18255 rTemp;
	return string_to_struct__18255(strValue, &rTemp);
}


/****************************************************************
 ** struct__18263
 ****************************************************************/
static void Fill_struct__18263_StructSimValue(struct__18263 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*systemTimeMsgReceived label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->systemTimeMsgReceived) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "systemTimeMsgReceived";
	/*msg_type label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->msg_type) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils;
	pValues[2].m_pszName = "msg_type";
	/*btm_msg label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->btm_msg) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18255_Utils;
	pValues[3].m_pszName = "btm_msg";
	/*rtm_msg label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->rtm_msg) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__18243_Utils;
	pValues[4].m_pszName = "rtm_msg";
	/*packets label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_struct__18125_Utils;
	pValues[5].m_pszName = "packets";
}

const char * struct__18263_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18263_StructSimValue(((struct__18263*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__18263(const char* strValue, void* pValue) {
	static struct__18263 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__18263(&(rTemp), &(*((struct__18263*)pValue)));
	Fill_struct__18263_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__18263(&(*((struct__18263*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18263_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18263_StructSimValue((struct__18263*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__18263_allow_double_convertion() {
	return 0;
}


const char * get_struct__18263_signature() {
	static StructSimValue values[6];
	Fill_struct__18263_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__18263_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18263_StructSimValue((struct__18263*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__18263_filter_values[6] = {"valid", "systemTimeMsgReceived", "msg_type", "btm_msg", "rtm_msg", "packets"};
int check_struct__18263_string(const char* strValue) {
	static struct__18263 rTemp;
	return string_to_struct__18263(strValue, &rTemp);
}


/****************************************************************
 ** struct__18272
 ****************************************************************/
static void Fill_struct__18272_StructSimValue(struct__18272 * pStruct, StructSimValue * pValues) {
	/*linkedBGError label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->linkedBGError) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "linkedBGError";
	/*unlinkedBGError label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->unlinkedBGError) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "unlinkedBGError";
	/*BG_versionIncompatible label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->BG_versionIncompatible) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "BG_versionIncompatible";
	/*radioSequenceError label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->radioSequenceError) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[3].m_pszName = "radioSequenceError";
	/*tNvContactError label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->tNvContactError) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[4].m_pszName = "tNvContactError";
	/*otherTimingError label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->otherTimingError) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[5].m_pszName = "otherTimingError";
	/*radioMessageConsistencyError label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->radioMessageConsistencyError) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[6].m_pszName = "radioMessageConsistencyError";
}

const char * struct__18272_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18272_StructSimValue(((struct__18272*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__18272(const char* strValue, void* pValue) {
	static struct__18272 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__18272(&(rTemp), &(*((struct__18272*)pValue)));
	Fill_struct__18272_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__18272(&(*((struct__18272*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18272_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18272_StructSimValue((struct__18272*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__18272_allow_double_convertion() {
	return 0;
}


const char * get_struct__18272_signature() {
	static StructSimValue values[7];
	Fill_struct__18272_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__18272_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18272_StructSimValue((struct__18272*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__18272_filter_values[7] = {"linkedBGError", "unlinkedBGError", "BG_versionIncompatible", "radioSequenceError", "tNvContactError", "otherTimingError", "radioMessageConsistencyError"};
int check_struct__18272_string(const char* strValue) {
	static struct__18272 rTemp;
	return string_to_struct__18272(strValue, &rTemp);
}


/****************************************************************
 ** struct__18282
 ****************************************************************/
static void Fill_struct__18282_StructSimValue(struct__18282 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*q_dir label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[1].m_pszName = "q_dir";
	/*nid_mn label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->nid_mn) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "nid_mn";
}

const char * struct__18282_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18282_StructSimValue(((struct__18282*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__18282(const char* strValue, void* pValue) {
	static struct__18282 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__18282(&(rTemp), &(*((struct__18282*)pValue)));
	Fill_struct__18282_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__18282(&(*((struct__18282*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18282_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18282_StructSimValue((struct__18282*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__18282_allow_double_convertion() {
	return 0;
}


const char * get_struct__18282_signature() {
	static StructSimValue values[3];
	Fill_struct__18282_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__18282_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18282_StructSimValue((struct__18282*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__18282_filter_values[3] = {"valid", "q_dir", "nid_mn"};
int check_struct__18282_string(const char* strValue) {
	static struct__18282 rTemp;
	return string_to_struct__18282(strValue, &rTemp);
}


/****************************************************************
 ** struct__18288
 ****************************************************************/
static void Fill_struct__18288_StructSimValue(struct__18288 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*q_dir label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[1].m_pszName = "q_dir";
	/*q_rbc label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_rbc) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_Q_RBC_Utils;
	pValues[2].m_pszName = "q_rbc";
	/*nid_c label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->nid_c) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "nid_c";
	/*nid_rbc label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->nid_rbc) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "nid_rbc";
	/*nid_radio label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->nid_radio) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "nid_radio";
	/*q_sleepsession label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->q_sleepsession) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_Q_SLEEPSESSION_Utils;
	pValues[6].m_pszName = "q_sleepsession";
}

const char * struct__18288_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18288_StructSimValue(((struct__18288*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__18288(const char* strValue, void* pValue) {
	static struct__18288 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__18288(&(rTemp), &(*((struct__18288*)pValue)));
	Fill_struct__18288_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__18288(&(*((struct__18288*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18288_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18288_StructSimValue((struct__18288*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__18288_allow_double_convertion() {
	return 0;
}


const char * get_struct__18288_signature() {
	static StructSimValue values[7];
	Fill_struct__18288_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__18288_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18288_StructSimValue((struct__18288*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__18288_filter_values[7] = {"valid", "q_dir", "q_rbc", "nid_c", "nid_rbc", "nid_radio", "q_sleepsession"};
int check_struct__18288_string(const char* strValue) {
	static struct__18288 rTemp;
	return string_to_struct__18288(strValue, &rTemp);
}


/****************************************************************
 ** struct__18298
 ****************************************************************/
static void Fill_struct__18298_StructSimValue(struct__18298 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*messageSource label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->messageSource) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils;
	pValues[1].m_pszName = "messageSource";
	/*Radio_Common_Header label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->Radio_Common_Header) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_struct__18213_Utils;
	pValues[2].m_pszName = "Radio_Common_Header";
	/*p42 label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->p42) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18288_Utils;
	pValues[3].m_pszName = "p42";
	/*p45 label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->p45) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__18282_Utils;
	pValues[4].m_pszName = "p45";
}

const char * struct__18298_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18298_StructSimValue(((struct__18298*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__18298(const char* strValue, void* pValue) {
	static struct__18298 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__18298(&(rTemp), &(*((struct__18298*)pValue)));
	Fill_struct__18298_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__18298(&(*((struct__18298*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18298_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18298_StructSimValue((struct__18298*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__18298_allow_double_convertion() {
	return 0;
}


const char * get_struct__18298_signature() {
	static StructSimValue values[5];
	Fill_struct__18298_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__18298_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18298_StructSimValue((struct__18298*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__18298_filter_values[5] = {"valid", "messageSource", "Radio_Common_Header", "p42", "p45"};
int check_struct__18298_string(const char* strValue) {
	static struct__18298 rTemp;
	return string_to_struct__18298(strValue, &rTemp);
}


/****************************************************************
 ** struct__18306
 ****************************************************************/
static void Fill_struct__18306_StructSimValue(struct__18306 * pStruct, StructSimValue * pValues) {
	/*d_loc label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->d_loc) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[0].m_pszName = "d_loc";
	/*q_lgtloc label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->q_lgtloc) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_Q_LGTLOC_Utils;
	pValues[1].m_pszName = "q_lgtloc";
}

const char * struct__18306_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18306_StructSimValue(((struct__18306*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__18306(const char* strValue, void* pValue) {
	static struct__18306 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__18306(&(rTemp), &(*((struct__18306*)pValue)));
	Fill_struct__18306_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__18306(&(*((struct__18306*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18306_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18306_StructSimValue((struct__18306*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__18306_allow_double_convertion() {
	return 0;
}


const char * get_struct__18306_signature() {
	static StructSimValue values[2];
	Fill_struct__18306_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__18306_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__18306_StructSimValue((struct__18306*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__18306_filter_values[2] = {"d_loc", "q_lgtloc"};
int check_struct__18306_string(const char* strValue) {
	static struct__18306 rTemp;
	return string_to_struct__18306(strValue, &rTemp);
}


/****************************************************************
 ** array__18311
 ****************************************************************/
void* array__18311_projection(void** pValues, int nIndex) {
	return &((*(array__18311*)pValues)[nIndex]);
}

const char * array__18311_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18306_to_string, 2, array__18311_projection);
}

int compare_array__18311_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18306_type , 2, array__18311_projection);
}

int is_array__18311_allow_double_convertion() {
	return 0;
}

int string_to_array__18311(const char* strValue, void* pValue) {
	static array__18311 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18306, 2, array__18311_projection);
	if (nResult == 1)
		kcg_copy_array__18311(&(*((array__18311*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18311_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18306_signature, 2);
}

FilterUtils get_array__18311_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18306_Utils, strFilter, (void**)pValue, 2, array__18311_projection);
}

int check_array__18311_string(const char* strValue) {
	static array__18311 rTemp;
	return string_to_array__18311(strValue, &rTemp);
}


/****************************************************************
 ** struct__18314
 ****************************************************************/
static void Fill_struct__18314_StructSimValue(struct__18314 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*nid_packet label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->nid_packet) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "nid_packet";
	/*q_dir label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->q_dir) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_Q_DIR_Utils;
	pValues[2].m_pszName = "q_dir";
	/*l_packet label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->l_packet) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "l_packet";
	/*q_scale label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->q_scale) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_Q_SCALE_Utils;
	pValues[4].m_pszName = "q_scale";
	/*t_cycloc label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->t_cycloc) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "t_cycloc";
	/*d_cycloc label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->d_cycloc) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "d_cycloc";
	/*m_loc label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->m_loc) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_M_LOC_Utils;
	pValues[7].m_pszName = "m_loc";
	/*n_iter label.*/
	pValues[8].m_pPtr = pStruct != 0 ? &(pStruct->n_iter) : 0;
	pValues[8].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[8].m_pszName = "n_iter";
	/*iterPacket58List label.*/
	pValues[9].m_pPtr = pStruct != 0 ? &(pStruct->iterPacket58List) : 0;
	pValues[9].m_pTypeUtils = &_SCSIM_array__18311_Utils;
	pValues[9].m_pszName = "iterPacket58List";
}

const char * struct__18314_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18314_StructSimValue(((struct__18314*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__18314(const char* strValue, void* pValue) {
	static struct__18314 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__18314(&(rTemp), &(*((struct__18314*)pValue)));
	Fill_struct__18314_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__18314(&(*((struct__18314*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18314_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18314_StructSimValue((struct__18314*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__18314_allow_double_convertion() {
	return 0;
}


const char * get_struct__18314_signature() {
	static StructSimValue values[10];
	Fill_struct__18314_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__18314_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__18314_StructSimValue((struct__18314*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__18314_filter_values[10] = {"valid", "nid_packet", "q_dir", "l_packet", "q_scale", "t_cycloc", "d_cycloc", "m_loc", "n_iter", "iterPacket58List"};
int check_struct__18314_string(const char* strValue) {
	static struct__18314 rTemp;
	return string_to_struct__18314(strValue, &rTemp);
}


/****************************************************************
 ** struct__18327
 ****************************************************************/
static void Fill_struct__18327_StructSimValue(struct__18327 * pStruct, StructSimValue * pValues) {
	/*present label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->present) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "present";
	/*nidBG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->nidBG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "nidBG";
	/*bgLocation label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->bgLocation) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "bgLocation";
	/*packet58 label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->packet58) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18314_Utils;
	pValues[3].m_pszName = "packet58";
}

const char * struct__18327_to_string(const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18327_StructSimValue(((struct__18327*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 4);
}

int string_to_struct__18327(const char* strValue, void* pValue) {
	static struct__18327 rTemp;
	int nResult = 0;
	static StructSimValue values[4];
	kcg_copy_struct__18327(&(rTemp), &(*((struct__18327*)pValue)));
	Fill_struct__18327_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 4);
	if (nResult == 1)
		kcg_copy_struct__18327(&(*((struct__18327*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18327_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18327_StructSimValue((struct__18327*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 4);
}


int is_struct__18327_allow_double_convertion() {
	return 0;
}


const char * get_struct__18327_signature() {
	static StructSimValue values[4];
	Fill_struct__18327_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 4);
}

FilterUtils get_struct__18327_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18327_StructSimValue((struct__18327*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 4, strFilter);
}

const char * struct__18327_filter_values[4] = {"present", "nidBG", "bgLocation", "packet58"};
int check_struct__18327_string(const char* strValue) {
	static struct__18327 rTemp;
	return string_to_struct__18327(strValue, &rTemp);
}


/****************************************************************
 ** struct__18334
 ****************************************************************/
static void Fill_struct__18334_StructSimValue(struct__18334 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*source label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->source) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils;
	pValues[1].m_pszName = "source";
	/*radioMetadata label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->radioMetadata) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_struct__18231_Utils;
	pValues[2].m_pszName = "radioMetadata";
	/*BG_Common_Header label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->BG_Common_Header) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18043_Utils;
	pValues[3].m_pszName = "BG_Common_Header";
	/*Radio_Common_Header label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Radio_Common_Header) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__18213_Utils;
	pValues[4].m_pszName = "Radio_Common_Header";
	/*packets label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_struct__18125_Utils;
	pValues[5].m_pszName = "packets";
}

const char * struct__18334_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18334_StructSimValue(((struct__18334*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__18334(const char* strValue, void* pValue) {
	static struct__18334 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__18334(&(rTemp), &(*((struct__18334*)pValue)));
	Fill_struct__18334_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__18334(&(*((struct__18334*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18334_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18334_StructSimValue((struct__18334*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__18334_allow_double_convertion() {
	return 0;
}


const char * get_struct__18334_signature() {
	static StructSimValue values[6];
	Fill_struct__18334_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__18334_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__18334_StructSimValue((struct__18334*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__18334_filter_values[6] = {"valid", "source", "radioMetadata", "BG_Common_Header", "Radio_Common_Header", "packets"};
int check_struct__18334_string(const char* strValue) {
	static struct__18334 rTemp;
	return string_to_struct__18334(strValue, &rTemp);
}


/****************************************************************
 ** array__18343
 ****************************************************************/
void* array__18343_projection(void** pValues, int nIndex) {
	return &((*(array__18343*)pValues)[nIndex]);
}

const char * array__18343_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, ModeDecisionTableActionKind_DataDictionary_Pkg_to_string, 17, array__18343_projection);
}

int compare_array__18343_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_ModeDecisionTableActionKind_DataDictionary_Pkg_type , 17, array__18343_projection);
}

int is_array__18343_allow_double_convertion() {
	return 0;
}

int string_to_array__18343(const char* strValue, void* pValue) {
	static array__18343 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_ModeDecisionTableActionKind_DataDictionary_Pkg, 17, array__18343_projection);
	if (nResult == 1)
		kcg_copy_array__18343(&(*((array__18343*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18343_signature() {
	return pSimulator->m_pfnArraySignature(get_ModeDecisionTableActionKind_DataDictionary_Pkg_signature, 17);
}

FilterUtils get_array__18343_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_ModeDecisionTableActionKind_DataDictionary_Pkg_Utils, strFilter, (void**)pValue, 17, array__18343_projection);
}

int check_array__18343_string(const char* strValue) {
	static array__18343 rTemp;
	return string_to_array__18343(strValue, &rTemp);
}


/****************************************************************
 ** array__18346
 ****************************************************************/
void* array__18346_projection(void** pValues, int nIndex) {
	return &((*(array__18346*)pValues)[nIndex]);
}

const char * array__18346_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__18343_to_string, 256, array__18346_projection);
}

int compare_array__18346_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__18343_type , 256, array__18346_projection);
}

int is_array__18346_allow_double_convertion() {
	return 0;
}

int string_to_array__18346(const char* strValue, void* pValue) {
	static array__18346 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__18343, 256, array__18346_projection);
	if (nResult == 1)
		kcg_copy_array__18346(&(*((array__18346*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18346_signature() {
	return pSimulator->m_pfnArraySignature(get_array__18343_signature, 256);
}

FilterUtils get_array__18346_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__18343_Utils, strFilter, (void**)pValue, 256, array__18346_projection);
}

int check_array__18346_string(const char* strValue) {
	static array__18346 rTemp;
	return string_to_array__18346(strValue, &rTemp);
}


/****************************************************************
 ** array__18349
 ****************************************************************/
void* array__18349_projection(void** pValues, int nIndex) {
	return &((*(array__18349*)pValues)[nIndex]);
}

const char * array__18349_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18334_to_string, 3, array__18349_projection);
}

int compare_array__18349_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18334_type , 3, array__18349_projection);
}

int is_array__18349_allow_double_convertion() {
	return 0;
}

int string_to_array__18349(const char* strValue, void* pValue) {
	static array__18349 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18334, 3, array__18349_projection);
	if (nResult == 1)
		kcg_copy_array__18349(&(*((array__18349*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18349_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18334_signature, 3);
}

FilterUtils get_array__18349_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18334_Utils, strFilter, (void**)pValue, 3, array__18349_projection);
}

int check_array__18349_string(const char* strValue) {
	static array__18349 rTemp;
	return string_to_array__18349(strValue, &rTemp);
}


/****************************************************************
 ** array__18352
 ****************************************************************/
void* array__18352_projection(void** pValues, int nIndex) {
	return &((*(array__18352*)pValues)[nIndex]);
}

const char * array__18352_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, LevelDecisionTableActionKind_DataDictionary_Pkg_to_string, 5, array__18352_projection);
}

int compare_array__18352_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_LevelDecisionTableActionKind_DataDictionary_Pkg_type , 5, array__18352_projection);
}

int is_array__18352_allow_double_convertion() {
	return 0;
}

int string_to_array__18352(const char* strValue, void* pValue) {
	static array__18352 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_LevelDecisionTableActionKind_DataDictionary_Pkg, 5, array__18352_projection);
	if (nResult == 1)
		kcg_copy_array__18352(&(*((array__18352*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18352_signature() {
	return pSimulator->m_pfnArraySignature(get_LevelDecisionTableActionKind_DataDictionary_Pkg_signature, 5);
}

FilterUtils get_array__18352_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_LevelDecisionTableActionKind_DataDictionary_Pkg_Utils, strFilter, (void**)pValue, 5, array__18352_projection);
}

int check_array__18352_string(const char* strValue) {
	static array__18352 rTemp;
	return string_to_array__18352(strValue, &rTemp);
}


/****************************************************************
 ** array__18355
 ****************************************************************/
void* array__18355_projection(void** pValues, int nIndex) {
	return &((*(array__18355*)pValues)[nIndex]);
}

const char * array__18355_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__18352_to_string, 256, array__18355_projection);
}

int compare_array__18355_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__18352_type , 256, array__18355_projection);
}

int is_array__18355_allow_double_convertion() {
	return 0;
}

int string_to_array__18355(const char* strValue, void* pValue) {
	static array__18355 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__18352, 256, array__18355_projection);
	if (nResult == 1)
		kcg_copy_array__18355(&(*((array__18355*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18355_signature() {
	return pSimulator->m_pfnArraySignature(get_array__18352_signature, 256);
}

FilterUtils get_array__18355_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__18352_Utils, strFilter, (void**)pValue, 256, array__18355_projection);
}

int check_array__18355_string(const char* strValue) {
	static array__18355 rTemp;
	return string_to_array__18355(strValue, &rTemp);
}


/****************************************************************
 ** struct__18358
 ****************************************************************/
static void Fill_struct__18358_StructSimValue(struct__18358 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*checkResult label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->checkResult) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "checkResult";
	/*telegramheader label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->telegramheader) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_struct__18194_Utils;
	pValues[2].m_pszName = "telegramheader";
	/*packets label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18125_Utils;
	pValues[3].m_pszName = "packets";
}

const char * struct__18358_to_string(const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18358_StructSimValue(((struct__18358*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 4);
}

int string_to_struct__18358(const char* strValue, void* pValue) {
	static struct__18358 rTemp;
	int nResult = 0;
	static StructSimValue values[4];
	kcg_copy_struct__18358(&(rTemp), &(*((struct__18358*)pValue)));
	Fill_struct__18358_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 4);
	if (nResult == 1)
		kcg_copy_struct__18358(&(*((struct__18358*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18358_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18358_StructSimValue((struct__18358*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 4);
}


int is_struct__18358_allow_double_convertion() {
	return 0;
}


const char * get_struct__18358_signature() {
	static StructSimValue values[4];
	Fill_struct__18358_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 4);
}

FilterUtils get_struct__18358_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18358_StructSimValue((struct__18358*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 4, strFilter);
}

const char * struct__18358_filter_values[4] = {"valid", "checkResult", "telegramheader", "packets"};
int check_struct__18358_string(const char* strValue) {
	static struct__18358 rTemp;
	return string_to_struct__18358(strValue, &rTemp);
}


/****************************************************************
 ** array__18365
 ****************************************************************/
void* array__18365_projection(void** pValues, int nIndex) {
	return &((*(array__18365*)pValues)[nIndex]);
}

const char * array__18365_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18358_to_string, 8, array__18365_projection);
}

int compare_array__18365_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18358_type , 8, array__18365_projection);
}

int is_array__18365_allow_double_convertion() {
	return 0;
}

int string_to_array__18365(const char* strValue, void* pValue) {
	static array__18365 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18358, 8, array__18365_projection);
	if (nResult == 1)
		kcg_copy_array__18365(&(*((array__18365*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18365_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18358_signature, 8);
}

FilterUtils get_array__18365_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18358_Utils, strFilter, (void**)pValue, 8, array__18365_projection);
}

int check_array__18365_string(const char* strValue) {
	static array__18365 rTemp;
	return string_to_array__18365(strValue, &rTemp);
}


/****************************************************************
 ** struct__18368
 ****************************************************************/
static void Fill_struct__18368_StructSimValue(struct__18368 * pStruct, StructSimValue * pValues) {
	/*present label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->present) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "present";
	/*consistencyError label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->consistencyError) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "consistencyError";
	/*header label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->header) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_struct__18213_Utils;
	pValues[2].m_pszName = "header";
	/*radioMetadata label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->radioMetadata) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18231_Utils;
	pValues[3].m_pszName = "radioMetadata";
	/*packets label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__18125_Utils;
	pValues[4].m_pszName = "packets";
}

const char * struct__18368_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18368_StructSimValue(((struct__18368*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__18368(const char* strValue, void* pValue) {
	static struct__18368 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__18368(&(rTemp), &(*((struct__18368*)pValue)));
	Fill_struct__18368_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__18368(&(*((struct__18368*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18368_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18368_StructSimValue((struct__18368*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__18368_allow_double_convertion() {
	return 0;
}


const char * get_struct__18368_signature() {
	static StructSimValue values[5];
	Fill_struct__18368_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__18368_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18368_StructSimValue((struct__18368*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__18368_filter_values[5] = {"present", "consistencyError", "header", "radioMetadata", "packets"};
int check_struct__18368_string(const char* strValue) {
	static struct__18368 rTemp;
	return string_to_struct__18368(strValue, &rTemp);
}


/****************************************************************
 ** struct__18376
 ****************************************************************/
static void Fill_struct__18376_StructSimValue(struct__18376 * pStruct, StructSimValue * pValues) {
	/*present label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->present) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "present";
	/*Telegrams label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->Telegrams) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array__18365_Utils;
	pValues[1].m_pszName = "Telegrams";
	/*numberBalises label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->numberBalises) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "numberBalises";
	/*centerOfBalisePosition label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->centerOfBalisePosition) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18250_Utils;
	pValues[3].m_pszName = "centerOfBalisePosition";
}

const char * struct__18376_to_string(const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18376_StructSimValue(((struct__18376*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 4);
}

int string_to_struct__18376(const char* strValue, void* pValue) {
	static struct__18376 rTemp;
	int nResult = 0;
	static StructSimValue values[4];
	kcg_copy_struct__18376(&(rTemp), &(*((struct__18376*)pValue)));
	Fill_struct__18376_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 4);
	if (nResult == 1)
		kcg_copy_struct__18376(&(*((struct__18376*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18376_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18376_StructSimValue((struct__18376*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 4);
}


int is_struct__18376_allow_double_convertion() {
	return 0;
}


const char * get_struct__18376_signature() {
	static StructSimValue values[4];
	Fill_struct__18376_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 4);
}

FilterUtils get_struct__18376_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[4];
	Fill_struct__18376_StructSimValue((struct__18376*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 4, strFilter);
}

const char * struct__18376_filter_values[4] = {"present", "Telegrams", "numberBalises", "centerOfBalisePosition"};
int check_struct__18376_string(const char* strValue) {
	static struct__18376 rTemp;
	return string_to_struct__18376(strValue, &rTemp);
}


/****************************************************************
 ** struct__18383
 ****************************************************************/
static void Fill_struct__18383_StructSimValue(struct__18383 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*systemTime label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->systemTime) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[1].m_pszName = "systemTime";
	/*msg_type label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->msg_type) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_MsgSource_T_Common_Types_Pkg_Utils;
	pValues[2].m_pszName = "msg_type";
	/*telegramHeaders label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->telegramHeaders) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__18376_Utils;
	pValues[3].m_pszName = "telegramHeaders";
	/*radio_Msg label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->radio_Msg) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__18368_Utils;
	pValues[4].m_pszName = "radio_Msg";
}

const char * struct__18383_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18383_StructSimValue(((struct__18383*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__18383(const char* strValue, void* pValue) {
	static struct__18383 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__18383(&(rTemp), &(*((struct__18383*)pValue)));
	Fill_struct__18383_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__18383(&(*((struct__18383*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18383_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18383_StructSimValue((struct__18383*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__18383_allow_double_convertion() {
	return 0;
}


const char * get_struct__18383_signature() {
	static StructSimValue values[5];
	Fill_struct__18383_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__18383_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18383_StructSimValue((struct__18383*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__18383_filter_values[5] = {"valid", "systemTime", "msg_type", "telegramHeaders", "radio_Msg"};
int check_struct__18383_string(const char* strValue) {
	static struct__18383 rTemp;
	return string_to_struct__18383(strValue, &rTemp);
}


/****************************************************************
 ** struct__18391
 ****************************************************************/
static void Fill_struct__18391_StructSimValue(struct__18391 * pStruct, StructSimValue * pValues) {
	/*badBaliseFlag label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->badBaliseFlag) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "badBaliseFlag";
	/*BGMessageSent label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BGMessageSent) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[1].m_pszName = "BGMessageSent";
	/*C_ID label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->C_ID) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[2].m_pszName = "C_ID";
	/*BG_ID label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->BG_ID) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[3].m_pszName = "BG_ID";
	/*balisePosition label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->balisePosition) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__18250_Utils;
	pValues[4].m_pszName = "balisePosition";
	/*positionFirstContact label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->positionFirstContact) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_struct__18250_Utils;
	pValues[5].m_pszName = "positionFirstContact";
	/*collectedTelegrams label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->collectedTelegrams) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[6].m_pszName = "collectedTelegrams";
	/*totalTelegrams label.*/
	pValues[7].m_pPtr = pStruct != 0 ? &(pStruct->totalTelegrams) : 0;
	pValues[7].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[7].m_pszName = "totalTelegrams";
}

const char * struct__18391_to_string(const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__18391_StructSimValue(((struct__18391*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 8);
}

int string_to_struct__18391(const char* strValue, void* pValue) {
	static struct__18391 rTemp;
	int nResult = 0;
	static StructSimValue values[8];
	kcg_copy_struct__18391(&(rTemp), &(*((struct__18391*)pValue)));
	Fill_struct__18391_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 8);
	if (nResult == 1)
		kcg_copy_struct__18391(&(*((struct__18391*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18391_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[8];
	Fill_struct__18391_StructSimValue((struct__18391*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 8);
}


int is_struct__18391_allow_double_convertion() {
	return 0;
}


const char * get_struct__18391_signature() {
	static StructSimValue values[8];
	Fill_struct__18391_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 8);
}

FilterUtils get_struct__18391_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[8];
	Fill_struct__18391_StructSimValue((struct__18391*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 8, strFilter);
}

const char * struct__18391_filter_values[8] = {"badBaliseFlag", "BGMessageSent", "C_ID", "BG_ID", "balisePosition", "positionFirstContact", "collectedTelegrams", "totalTelegrams"};
int check_struct__18391_string(const char* strValue) {
	static struct__18391 rTemp;
	return string_to_struct__18391(strValue, &rTemp);
}


/****************************************************************
 ** struct__18402
 ****************************************************************/
static void Fill_struct__18402_StructSimValue(struct__18402 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*telegram label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->telegram) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__18358_Utils;
	pValues[1].m_pszName = "telegram";
	/*position label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->position) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_struct__18250_Utils;
	pValues[2].m_pszName = "position";
}

const char * struct__18402_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18402_StructSimValue(((struct__18402*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__18402(const char* strValue, void* pValue) {
	static struct__18402 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__18402(&(rTemp), &(*((struct__18402*)pValue)));
	Fill_struct__18402_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__18402(&(*((struct__18402*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18402_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18402_StructSimValue((struct__18402*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__18402_allow_double_convertion() {
	return 0;
}


const char * get_struct__18402_signature() {
	static StructSimValue values[3];
	Fill_struct__18402_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__18402_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__18402_StructSimValue((struct__18402*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__18402_filter_values[3] = {"valid", "telegram", "position"};
int check_struct__18402_string(const char* strValue) {
	static struct__18402 rTemp;
	return string_to_struct__18402(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_256
 ****************************************************************/
void* array_bool_256_projection(void** pValues, int nIndex) {
	return &((*(array_bool_256*)pValues)[nIndex]);
}

const char * array_bool_256_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_bool_to_string, 256, array_bool_256_projection);
}

int compare_array_bool_256_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_bool_type , 256, array_bool_256_projection);
}

int is_array_bool_256_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_256(const char* strValue, void* pValue) {
	static array_bool_256 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_bool, 256, array_bool_256_projection);
	if (nResult == 1)
		kcg_copy_array_bool_256(&(*((array_bool_256*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_256_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_bool_signature, 256);
}

FilterUtils get_array_bool_256_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_bool_Utils, strFilter, (void**)pValue, 256, array_bool_256_projection);
}

int check_array_bool_256_string(const char* strValue) {
	static array_bool_256 rTemp;
	return string_to_array_bool_256(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_256_46
 ****************************************************************/
void* array_bool_256_46_projection(void** pValues, int nIndex) {
	return &((*(array_bool_256_46*)pValues)[nIndex]);
}

const char * array_bool_256_46_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_bool_256_to_string, 46, array_bool_256_46_projection);
}

int compare_array_bool_256_46_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_bool_256_type , 46, array_bool_256_46_projection);
}

int is_array_bool_256_46_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_256_46(const char* strValue, void* pValue) {
	static array_bool_256_46 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_bool_256, 46, array_bool_256_46_projection);
	if (nResult == 1)
		kcg_copy_array_bool_256_46(&(*((array_bool_256_46*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_256_46_signature() {
	return pSimulator->m_pfnArraySignature(get_array_bool_256_signature, 46);
}

FilterUtils get_array_bool_256_46_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_bool_256_Utils, strFilter, (void**)pValue, 46, array_bool_256_46_projection);
}

int check_array_bool_256_46_string(const char* strValue) {
	static array_bool_256_46 rTemp;
	return string_to_array_bool_256_46(strValue, &rTemp);
}


/****************************************************************
 ** struct__18414
 ****************************************************************/
static void Fill_struct__18414_StructSimValue(struct__18414 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*BG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__18334_Utils;
	pValues[1].m_pszName = "BG";
	/*FromTrack label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->FromTrack) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "FromTrack";
	/*FromOBU label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->FromOBU) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[3].m_pszName = "FromOBU";
	/*CorrectData label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->CorrectData) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[4].m_pszName = "CorrectData";
	/*Delay label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->Delay) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[5].m_pszName = "Delay";
	/*LocDiff label.*/
	pValues[6].m_pPtr = pStruct != 0 ? &(pStruct->LocDiff) : 0;
	pValues[6].m_pTypeUtils = &_SCSIM_struct__18027_Utils;
	pValues[6].m_pszName = "LocDiff";
}

const char * struct__18414_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18414_StructSimValue(((struct__18414*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__18414(const char* strValue, void* pValue) {
	static struct__18414 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__18414(&(rTemp), &(*((struct__18414*)pValue)));
	Fill_struct__18414_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__18414(&(*((struct__18414*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18414_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18414_StructSimValue((struct__18414*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__18414_allow_double_convertion() {
	return 0;
}


const char * get_struct__18414_signature() {
	static StructSimValue values[7];
	Fill_struct__18414_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__18414_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__18414_StructSimValue((struct__18414*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__18414_filter_values[7] = {"valid", "BG", "FromTrack", "FromOBU", "CorrectData", "Delay", "LocDiff"};
int check_struct__18414_string(const char* strValue) {
	static struct__18414 rTemp;
	return string_to_struct__18414(strValue, &rTemp);
}


/****************************************************************
 ** struct__18424
 ****************************************************************/
static void Fill_struct__18424_StructSimValue(struct__18424 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*BG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__18334_Utils;
	pValues[1].m_pszName = "BG";
	/*complete label.*/
	pValues[2].m_pPtr = pStruct != 0 ? &(pStruct->complete) : 0;
	pValues[2].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[2].m_pszName = "complete";
	/*consistent label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->consistent) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[3].m_pszName = "consistent";
	/*TimeStamp label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->TimeStamp) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_kcg_int_Utils;
	pValues[4].m_pszName = "TimeStamp";
}

const char * struct__18424_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18424_StructSimValue(((struct__18424*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__18424(const char* strValue, void* pValue) {
	static struct__18424 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__18424(&(rTemp), &(*((struct__18424*)pValue)));
	Fill_struct__18424_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__18424(&(*((struct__18424*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__18424_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18424_StructSimValue((struct__18424*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__18424_allow_double_convertion() {
	return 0;
}


const char * get_struct__18424_signature() {
	static StructSimValue values[5];
	Fill_struct__18424_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__18424_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__18424_StructSimValue((struct__18424*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__18424_filter_values[5] = {"valid", "BG", "complete", "consistent", "TimeStamp"};
int check_struct__18424_string(const char* strValue) {
	static struct__18424 rTemp;
	return string_to_struct__18424(strValue, &rTemp);
}


/****************************************************************
 ** array__18432
 ****************************************************************/
void* array__18432_projection(void** pValues, int nIndex) {
	return &((*(array__18432*)pValues)[nIndex]);
}

const char * array__18432_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18414_to_string, 10, array__18432_projection);
}

int compare_array__18432_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18414_type , 10, array__18432_projection);
}

int is_array__18432_allow_double_convertion() {
	return 0;
}

int string_to_array__18432(const char* strValue, void* pValue) {
	static array__18432 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18414, 10, array__18432_projection);
	if (nResult == 1)
		kcg_copy_array__18432(&(*((array__18432*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18432_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18414_signature, 10);
}

FilterUtils get_array__18432_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18414_Utils, strFilter, (void**)pValue, 10, array__18432_projection);
}

int check_array__18432_string(const char* strValue) {
	static array__18432 rTemp;
	return string_to_array__18432(strValue, &rTemp);
}


/****************************************************************
 ** array__18435
 ****************************************************************/
void* array__18435_projection(void** pValues, int nIndex) {
	return &((*(array__18435*)pValues)[nIndex]);
}

const char * array__18435_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18424_to_string, 10, array__18435_projection);
}

int compare_array__18435_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18424_type , 10, array__18435_projection);
}

int is_array__18435_allow_double_convertion() {
	return 0;
}

int string_to_array__18435(const char* strValue, void* pValue) {
	static array__18435 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18424, 10, array__18435_projection);
	if (nResult == 1)
		kcg_copy_array__18435(&(*((array__18435*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18435_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18424_signature, 10);
}

FilterUtils get_array__18435_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18424_Utils, strFilter, (void**)pValue, 10, array__18435_projection);
}

int check_array__18435_string(const char* strValue) {
	static array__18435 rTemp;
	return string_to_array__18435(strValue, &rTemp);
}


/****************************************************************
 ** array__18438
 ****************************************************************/
void* array__18438_projection(void** pValues, int nIndex) {
	return &((*(array__18438*)pValues)[nIndex]);
}

const char * array__18438_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, N_PIG_to_string, 8, array__18438_projection);
}

int compare_array__18438_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_N_PIG_type , 8, array__18438_projection);
}

int is_array__18438_allow_double_convertion() {
	return 0;
}

int string_to_array__18438(const char* strValue, void* pValue) {
	static array__18438 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_N_PIG, 8, array__18438_projection);
	if (nResult == 1)
		kcg_copy_array__18438(&(*((array__18438*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18438_signature() {
	return pSimulator->m_pfnArraySignature(get_N_PIG_signature, 8);
}

FilterUtils get_array__18438_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_N_PIG_Utils, strFilter, (void**)pValue, 8, array__18438_projection);
}

int check_array__18438_string(const char* strValue) {
	static array__18438 rTemp;
	return string_to_array__18438(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_8
 ****************************************************************/
void* array_bool_8_projection(void** pValues, int nIndex) {
	return &((*(array_bool_8*)pValues)[nIndex]);
}

const char * array_bool_8_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_bool_to_string, 8, array_bool_8_projection);
}

int compare_array_bool_8_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_bool_type , 8, array_bool_8_projection);
}

int is_array_bool_8_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_8(const char* strValue, void* pValue) {
	static array_bool_8 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_bool, 8, array_bool_8_projection);
	if (nResult == 1)
		kcg_copy_array_bool_8(&(*((array_bool_8*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_8_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_bool_signature, 8);
}

FilterUtils get_array_bool_8_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_bool_Utils, strFilter, (void**)pValue, 8, array_bool_8_projection);
}

int check_array_bool_8_string(const char* strValue) {
	static array_bool_8 rTemp;
	return string_to_array_bool_8(strValue, &rTemp);
}


/****************************************************************
 ** array__18444
 ****************************************************************/
void* array__18444_projection(void** pValues, int nIndex) {
	return &((*(array__18444*)pValues)[nIndex]);
}

const char * array__18444_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18114_to_string, 29, array__18444_projection);
}

int compare_array__18444_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18114_type , 29, array__18444_projection);
}

int is_array__18444_allow_double_convertion() {
	return 0;
}

int string_to_array__18444(const char* strValue, void* pValue) {
	static array__18444 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18114, 29, array__18444_projection);
	if (nResult == 1)
		kcg_copy_array__18444(&(*((array__18444*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18444_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18114_signature, 29);
}

FilterUtils get_array__18444_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18114_Utils, strFilter, (void**)pValue, 29, array__18444_projection);
}

int check_array__18444_string(const char* strValue) {
	static array__18444 rTemp;
	return string_to_array__18444(strValue, &rTemp);
}


/****************************************************************
 ** array__18447
 ****************************************************************/
void* array__18447_projection(void** pValues, int nIndex) {
	return &((*(array__18447*)pValues)[nIndex]);
}

const char * array__18447_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array__18122_to_string, 30, array__18447_projection);
}

int compare_array__18447_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array__18122_type , 30, array__18447_projection);
}

int is_array__18447_allow_double_convertion() {
	return 0;
}

int string_to_array__18447(const char* strValue, void* pValue) {
	static array__18447 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array__18122, 30, array__18447_projection);
	if (nResult == 1)
		kcg_copy_array__18447(&(*((array__18447*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18447_signature() {
	return pSimulator->m_pfnArraySignature(get_array__18122_signature, 30);
}

FilterUtils get_array__18447_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array__18122_Utils, strFilter, (void**)pValue, 30, array__18447_projection);
}

int check_array__18447_string(const char* strValue) {
	static array__18447 rTemp;
	return string_to_array__18447(strValue, &rTemp);
}


/****************************************************************
 ** array_int_500_500
 ****************************************************************/
void* array_int_500_500_projection(void** pValues, int nIndex) {
	return &((*(array_int_500_500*)pValues)[nIndex]);
}

const char * array_int_500_500_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_500_to_string, 500, array_int_500_500_projection);
}

int compare_array_int_500_500_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_500_type , 500, array_int_500_500_projection);
}

int is_array_int_500_500_allow_double_convertion() {
	return 0;
}

int string_to_array_int_500_500(const char* strValue, void* pValue) {
	static array_int_500_500 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_500, 500, array_int_500_500_projection);
	if (nResult == 1)
		kcg_copy_array_int_500_500(&(*((array_int_500_500*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_500_500_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_500_signature, 500);
}

FilterUtils get_array_int_500_500_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_500_Utils, strFilter, (void**)pValue, 500, array_int_500_500_projection);
}

int check_array_int_500_500_string(const char* strValue) {
	static array_int_500_500 rTemp;
	return string_to_array_int_500_500(strValue, &rTemp);
}


/****************************************************************
 ** array__18453
 ****************************************************************/
void* array__18453_projection(void** pValues, int nIndex) {
	return &((*(array__18453*)pValues)[nIndex]);
}

const char * array__18453_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18358_to_string, 7, array__18453_projection);
}

int compare_array__18453_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18358_type , 7, array__18453_projection);
}

int is_array__18453_allow_double_convertion() {
	return 0;
}

int string_to_array__18453(const char* strValue, void* pValue) {
	static array__18453 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18358, 7, array__18453_projection);
	if (nResult == 1)
		kcg_copy_array__18453(&(*((array__18453*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18453_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18358_signature, 7);
}

FilterUtils get_array__18453_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18358_Utils, strFilter, (void**)pValue, 7, array__18453_projection);
}

int check_array__18453_string(const char* strValue) {
	static array__18453 rTemp;
	return string_to_array__18453(strValue, &rTemp);
}


/****************************************************************
 ** array__18456
 ****************************************************************/
void* array__18456_projection(void** pValues, int nIndex) {
	return &((*(array__18456*)pValues)[nIndex]);
}

const char * array__18456_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, Q_DIRTRAIN_to_string, 30, array__18456_projection);
}

int compare_array__18456_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_Q_DIRTRAIN_type , 30, array__18456_projection);
}

int is_array__18456_allow_double_convertion() {
	return 0;
}

int string_to_array__18456(const char* strValue, void* pValue) {
	static array__18456 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_Q_DIRTRAIN, 30, array__18456_projection);
	if (nResult == 1)
		kcg_copy_array__18456(&(*((array__18456*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18456_signature() {
	return pSimulator->m_pfnArraySignature(get_Q_DIRTRAIN_signature, 30);
}

FilterUtils get_array__18456_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_Q_DIRTRAIN_Utils, strFilter, (void**)pValue, 30, array__18456_projection);
}

int check_array__18456_string(const char* strValue) {
	static array__18456 rTemp;
	return string_to_array__18456(strValue, &rTemp);
}


/****************************************************************
 ** array__18459
 ****************************************************************/
void* array__18459_projection(void** pValues, int nIndex) {
	return &((*(array__18459*)pValues)[nIndex]);
}

const char * array__18459_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18078_to_string, 30, array__18459_projection);
}

int compare_array__18459_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18078_type , 30, array__18459_projection);
}

int is_array__18459_allow_double_convertion() {
	return 0;
}

int string_to_array__18459(const char* strValue, void* pValue) {
	static array__18459 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18078, 30, array__18459_projection);
	if (nResult == 1)
		kcg_copy_array__18459(&(*((array__18459*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18459_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18078_signature, 30);
}

FilterUtils get_array__18459_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18078_Utils, strFilter, (void**)pValue, 30, array__18459_projection);
}

int check_array__18459_string(const char* strValue) {
	static array__18459 rTemp;
	return string_to_array__18459(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_30
 ****************************************************************/
void* array_bool_30_projection(void** pValues, int nIndex) {
	return &((*(array_bool_30*)pValues)[nIndex]);
}

const char * array_bool_30_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_bool_to_string, 30, array_bool_30_projection);
}

int compare_array_bool_30_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_bool_type , 30, array_bool_30_projection);
}

int is_array_bool_30_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_30(const char* strValue, void* pValue) {
	static array_bool_30 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_bool, 30, array_bool_30_projection);
	if (nResult == 1)
		kcg_copy_array_bool_30(&(*((array_bool_30*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_30_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_bool_signature, 30);
}

FilterUtils get_array_bool_30_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_bool_Utils, strFilter, (void**)pValue, 30, array_bool_30_projection);
}

int check_array_bool_30_string(const char* strValue) {
	static array_bool_30 rTemp;
	return string_to_array_bool_30(strValue, &rTemp);
}


/****************************************************************
 ** array_int_8
 ****************************************************************/
void* array_int_8_projection(void** pValues, int nIndex) {
	return &((*(array_int_8*)pValues)[nIndex]);
}

const char * array_int_8_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 8, array_int_8_projection);
}

int compare_array_int_8_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 8, array_int_8_projection);
}

int is_array_int_8_allow_double_convertion() {
	return 0;
}

int string_to_array_int_8(const char* strValue, void* pValue) {
	static array_int_8 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 8, array_int_8_projection);
	if (nResult == 1)
		kcg_copy_array_int_8(&(*((array_int_8*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_8_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 8);
}

FilterUtils get_array_int_8_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 8, array_int_8_projection);
}

int check_array_int_8_string(const char* strValue) {
	static array_int_8 rTemp;
	return string_to_array_int_8(strValue, &rTemp);
}


/****************************************************************
 ** array_int_30
 ****************************************************************/
void* array_int_30_projection(void** pValues, int nIndex) {
	return &((*(array_int_30*)pValues)[nIndex]);
}

const char * array_int_30_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 30, array_int_30_projection);
}

int compare_array_int_30_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 30, array_int_30_projection);
}

int is_array_int_30_allow_double_convertion() {
	return 0;
}

int string_to_array_int_30(const char* strValue, void* pValue) {
	static array_int_30 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 30, array_int_30_projection);
	if (nResult == 1)
		kcg_copy_array_int_30(&(*((array_int_30*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_30_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 30);
}

FilterUtils get_array_int_30_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 30, array_int_30_projection);
}

int check_array_int_30_string(const char* strValue) {
	static array_int_30 rTemp;
	return string_to_array_int_30(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_256_46_30
 ****************************************************************/
void* array_bool_256_46_30_projection(void** pValues, int nIndex) {
	return &((*(array_bool_256_46_30*)pValues)[nIndex]);
}

const char * array_bool_256_46_30_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_bool_256_46_to_string, 30, array_bool_256_46_30_projection);
}

int compare_array_bool_256_46_30_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_bool_256_46_type , 30, array_bool_256_46_30_projection);
}

int is_array_bool_256_46_30_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_256_46_30(const char* strValue, void* pValue) {
	static array_bool_256_46_30 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_bool_256_46, 30, array_bool_256_46_30_projection);
	if (nResult == 1)
		kcg_copy_array_bool_256_46_30(&(*((array_bool_256_46_30*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_256_46_30_signature() {
	return pSimulator->m_pfnArraySignature(get_array_bool_256_46_signature, 30);
}

FilterUtils get_array_bool_256_46_30_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_bool_256_46_Utils, strFilter, (void**)pValue, 30, array_bool_256_46_30_projection);
}

int check_array_bool_256_46_30_string(const char* strValue) {
	static array_bool_256_46_30 rTemp;
	return string_to_array_bool_256_46_30(strValue, &rTemp);
}


/****************************************************************
 ** array__18474
 ****************************************************************/
void* array__18474_projection(void** pValues, int nIndex) {
	return &((*(array__18474*)pValues)[nIndex]);
}

const char * array__18474_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, MsgSource_T_Common_Types_Pkg_to_string, 30, array__18474_projection);
}

int compare_array__18474_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_MsgSource_T_Common_Types_Pkg_type , 30, array__18474_projection);
}

int is_array__18474_allow_double_convertion() {
	return 0;
}

int string_to_array__18474(const char* strValue, void* pValue) {
	static array__18474 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_MsgSource_T_Common_Types_Pkg, 30, array__18474_projection);
	if (nResult == 1)
		kcg_copy_array__18474(&(*((array__18474*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18474_signature() {
	return pSimulator->m_pfnArraySignature(get_MsgSource_T_Common_Types_Pkg_signature, 30);
}

FilterUtils get_array__18474_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_MsgSource_T_Common_Types_Pkg_Utils, strFilter, (void**)pValue, 30, array__18474_projection);
}

int check_array__18474_string(const char* strValue) {
	static array__18474 rTemp;
	return string_to_array__18474(strValue, &rTemp);
}


/****************************************************************
 ** array__18477
 ****************************************************************/
void* array__18477_projection(void** pValues, int nIndex) {
	return &((*(array__18477*)pValues)[nIndex]);
}

const char * array__18477_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, M_LEVEL_to_string, 30, array__18477_projection);
}

int compare_array__18477_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_M_LEVEL_type , 30, array__18477_projection);
}

int is_array__18477_allow_double_convertion() {
	return 0;
}

int string_to_array__18477(const char* strValue, void* pValue) {
	static array__18477 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_M_LEVEL, 30, array__18477_projection);
	if (nResult == 1)
		kcg_copy_array__18477(&(*((array__18477*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18477_signature() {
	return pSimulator->m_pfnArraySignature(get_M_LEVEL_signature, 30);
}

FilterUtils get_array__18477_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_M_LEVEL_Utils, strFilter, (void**)pValue, 30, array__18477_projection);
}

int check_array__18477_string(const char* strValue) {
	static array__18477 rTemp;
	return string_to_array__18477(strValue, &rTemp);
}


/****************************************************************
 ** array__18480
 ****************************************************************/
void* array__18480_projection(void** pValues, int nIndex) {
	return &((*(array__18480*)pValues)[nIndex]);
}

const char * array__18480_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, M_MODE_to_string, 30, array__18480_projection);
}

int compare_array__18480_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_M_MODE_type , 30, array__18480_projection);
}

int is_array__18480_allow_double_convertion() {
	return 0;
}

int string_to_array__18480(const char* strValue, void* pValue) {
	static array__18480 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_M_MODE, 30, array__18480_projection);
	if (nResult == 1)
		kcg_copy_array__18480(&(*((array__18480*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18480_signature() {
	return pSimulator->m_pfnArraySignature(get_M_MODE_signature, 30);
}

FilterUtils get_array__18480_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_M_MODE_Utils, strFilter, (void**)pValue, 30, array__18480_projection);
}

int check_array__18480_string(const char* strValue) {
	static array__18480 rTemp;
	return string_to_array__18480(strValue, &rTemp);
}


/****************************************************************
 ** array_int_7_33_231
 ****************************************************************/
void* array_int_7_33_231_projection(void** pValues, int nIndex) {
	return &((*(array_int_7_33_231*)pValues)[nIndex]);
}

const char * array_int_7_33_231_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, array_int_7_33_to_string, 231, array_int_7_33_231_projection);
}

int compare_array_int_7_33_231_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_array_int_7_33_type , 231, array_int_7_33_231_projection);
}

int is_array_int_7_33_231_allow_double_convertion() {
	return 0;
}

int string_to_array_int_7_33_231(const char* strValue, void* pValue) {
	static array_int_7_33_231 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_array_int_7_33, 231, array_int_7_33_231_projection);
	if (nResult == 1)
		kcg_copy_array_int_7_33_231(&(*((array_int_7_33_231*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_7_33_231_signature() {
	return pSimulator->m_pfnArraySignature(get_array_int_7_33_signature, 231);
}

FilterUtils get_array_int_7_33_231_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_array_int_7_33_Utils, strFilter, (void**)pValue, 231, array_int_7_33_231_projection);
}

int check_array_int_7_33_231_string(const char* strValue) {
	static array_int_7_33_231 rTemp;
	return string_to_array_int_7_33_231(strValue, &rTemp);
}


/****************************************************************
 ** array_int_264
 ****************************************************************/
void* array_int_264_projection(void** pValues, int nIndex) {
	return &((*(array_int_264*)pValues)[nIndex]);
}

const char * array_int_264_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 264, array_int_264_projection);
}

int compare_array_int_264_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 264, array_int_264_projection);
}

int is_array_int_264_allow_double_convertion() {
	return 0;
}

int string_to_array_int_264(const char* strValue, void* pValue) {
	static array_int_264 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 264, array_int_264_projection);
	if (nResult == 1)
		kcg_copy_array_int_264(&(*((array_int_264*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_264_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 264);
}

FilterUtils get_array_int_264_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 264, array_int_264_projection);
}

int check_array_int_264_string(const char* strValue) {
	static array_int_264 rTemp;
	return string_to_array_int_264(strValue, &rTemp);
}


/****************************************************************
 ** array_int_4
 ****************************************************************/
void* array_int_4_projection(void** pValues, int nIndex) {
	return &((*(array_int_4*)pValues)[nIndex]);
}

const char * array_int_4_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 4, array_int_4_projection);
}

int compare_array_int_4_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 4, array_int_4_projection);
}

int is_array_int_4_allow_double_convertion() {
	return 0;
}

int string_to_array_int_4(const char* strValue, void* pValue) {
	static array_int_4 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 4, array_int_4_projection);
	if (nResult == 1)
		kcg_copy_array_int_4(&(*((array_int_4*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_4_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 4);
}

FilterUtils get_array_int_4_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 4, array_int_4_projection);
}

int check_array_int_4_string(const char* strValue) {
	static array_int_4 rTemp;
	return string_to_array_int_4(strValue, &rTemp);
}


/****************************************************************
 ** array_int_1
 ****************************************************************/
void* array_int_1_projection(void** pValues, int nIndex) {
	return &((*(array_int_1*)pValues)[nIndex]);
}

const char * array_int_1_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 1, array_int_1_projection);
}

int compare_array_int_1_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 1, array_int_1_projection);
}

int is_array_int_1_allow_double_convertion() {
	return 0;
}

int string_to_array_int_1(const char* strValue, void* pValue) {
	static array_int_1 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 1, array_int_1_projection);
	if (nResult == 1)
		kcg_copy_array_int_1(&(*((array_int_1*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_1_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 1);
}

FilterUtils get_array_int_1_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 1, array_int_1_projection);
}

int check_array_int_1_string(const char* strValue) {
	static array_int_1 rTemp;
	return string_to_array_int_1(strValue, &rTemp);
}


/****************************************************************
 ** array_int_5
 ****************************************************************/
void* array_int_5_projection(void** pValues, int nIndex) {
	return &((*(array_int_5*)pValues)[nIndex]);
}

const char * array_int_5_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 5, array_int_5_projection);
}

int compare_array_int_5_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 5, array_int_5_projection);
}

int is_array_int_5_allow_double_convertion() {
	return 0;
}

int string_to_array_int_5(const char* strValue, void* pValue) {
	static array_int_5 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 5, array_int_5_projection);
	if (nResult == 1)
		kcg_copy_array_int_5(&(*((array_int_5*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_5_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 5);
}

FilterUtils get_array_int_5_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 5, array_int_5_projection);
}

int check_array_int_5_string(const char* strValue) {
	static array_int_5 rTemp;
	return string_to_array_int_5(strValue, &rTemp);
}


/****************************************************************
 ** array_int_236
 ****************************************************************/
void* array_int_236_projection(void** pValues, int nIndex) {
	return &((*(array_int_236*)pValues)[nIndex]);
}

const char * array_int_236_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_int_to_string, 236, array_int_236_projection);
}

int compare_array_int_236_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_int_type , 236, array_int_236_projection);
}

int is_array_int_236_allow_double_convertion() {
	return 0;
}

int string_to_array_int_236(const char* strValue, void* pValue) {
	static array_int_236 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_int, 236, array_int_236_projection);
	if (nResult == 1)
		kcg_copy_array_int_236(&(*((array_int_236*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_int_236_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_int_signature, 236);
}

FilterUtils get_array_int_236_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_int_Utils, strFilter, (void**)pValue, 236, array_int_236_projection);
}

int check_array_int_236_string(const char* strValue) {
	static array_int_236 rTemp;
	return string_to_array_int_236(strValue, &rTemp);
}


/****************************************************************
 ** array__18501
 ****************************************************************/
void* array__18501_projection(void** pValues, int nIndex) {
	return &((*(array__18501*)pValues)[nIndex]);
}

const char * array__18501_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__18155_to_string, 1, array__18501_projection);
}

int compare_array__18501_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__18155_type , 1, array__18501_projection);
}

int is_array__18501_allow_double_convertion() {
	return 0;
}

int string_to_array__18501(const char* strValue, void* pValue) {
	static array__18501 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__18155, 1, array__18501_projection);
	if (nResult == 1)
		kcg_copy_array__18501(&(*((array__18501*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__18501_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__18155_signature, 1);
}

FilterUtils get_array__18501_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__18155_Utils, strFilter, (void**)pValue, 1, array__18501_projection);
}

int check_array__18501_string(const char* strValue) {
	static array__18501 rTemp;
	return string_to_array__18501(strValue, &rTemp);
}


/****************************************************************
 ** array_bool_10
 ****************************************************************/
void* array_bool_10_projection(void** pValues, int nIndex) {
	return &((*(array_bool_10*)pValues)[nIndex]);
}

const char * array_bool_10_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, kcg_bool_to_string, 10, array_bool_10_projection);
}

int compare_array_bool_10_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_kcg_bool_type , 10, array_bool_10_projection);
}

int is_array_bool_10_allow_double_convertion() {
	return 0;
}

int string_to_array_bool_10(const char* strValue, void* pValue) {
	static array_bool_10 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_kcg_bool, 10, array_bool_10_projection);
	if (nResult == 1)
		kcg_copy_array_bool_10(&(*((array_bool_10*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array_bool_10_signature() {
	return pSimulator->m_pfnArraySignature(get_kcg_bool_signature, 10);
}

FilterUtils get_array_bool_10_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_kcg_bool_Utils, strFilter, (void**)pValue, 10, array_bool_10_projection);
}

int check_array_bool_10_string(const char* strValue) {
	static array_bool_10 rTemp;
	return string_to_array_bool_10(strValue, &rTemp);
}


/****************************************************************
 ** NID_C
 ****************************************************************/
struct SimTypeVTable* pSimNID_CVTable;
const char * NID_C_to_string(const void* pValue) {
	if (pSimNID_CVTable != 0 && pSimNID_CVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_CVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_C(const char* strValue, void* pValue) {
	if (pSimNID_CVTable != 0 && pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_C rTemp;
		int nResult = pSimNID_CVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_C*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_C_allow_double_convertion() {
	if (pSimNID_CVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_C_to_double(double * nValue, const void* pValue) {
	if (pSimNID_CVTable != 0) {
		if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_CVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_CVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_CVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_CVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_CVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_C_string(const char* strValue) {
	static NID_C rTemp;
	return string_to_NID_C(strValue, &rTemp);
}


/****************************************************************
 ** NID_BG
 ****************************************************************/
struct SimTypeVTable* pSimNID_BGVTable;
const char * NID_BG_to_string(const void* pValue) {
	if (pSimNID_BGVTable != 0 && pSimNID_BGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_BGVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_BG(const char* strValue, void* pValue) {
	if (pSimNID_BGVTable != 0 && pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_BG rTemp;
		int nResult = pSimNID_BGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_BG*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_BG_allow_double_convertion() {
	if (pSimNID_BGVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_BG_to_double(double * nValue, const void* pValue) {
	if (pSimNID_BGVTable != 0) {
		if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_BGVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_BGVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_BGVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_BGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_BGVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_BG_string(const char* strValue) {
	static NID_BG rTemp;
	return string_to_NID_BG(strValue, &rTemp);
}


/****************************************************************
 ** Q_UPDOWN
 ****************************************************************/
struct SimTypeVTable* pSimQ_UPDOWNVTable;
const char * Q_UPDOWN_to_string(const void* pValue) {
	if (pSimQ_UPDOWNVTable != 0 && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_UPDOWNVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_UPDOWN*)pValue)) {
	case Q_UPDOWN_Down_link_telegram:
		return "Q_UPDOWN_Down_link_telegram";
	case Q_UPDOWN_Up_link_telegram:
		return "Q_UPDOWN_Up_link_telegram";
	default:
		return "?";
	}
}

int string_to_Q_UPDOWN(const char* strValue, void* pValue) {
	if (pSimQ_UPDOWNVTable != 0 && pSimQ_UPDOWNVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_UPDOWN rTemp;		int nResult = pSimQ_UPDOWNVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_UPDOWN*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_UPDOWN_Down_link_telegram") == 0)
		*((Q_UPDOWN*)pValue) = Q_UPDOWN_Down_link_telegram;
	else if(strcmp(strValue, "Q_UPDOWN_Up_link_telegram") == 0)
		*((Q_UPDOWN*)pValue) = Q_UPDOWN_Up_link_telegram;
	else 
		return 0;
	return 1;
}

int is_Q_UPDOWN_allow_double_convertion() {
	return 1;
}


int Q_UPDOWN_to_double(double * nValue, const void* pValue) {
	switch (*((Q_UPDOWN*)pValue)) {
	case Q_UPDOWN_Down_link_telegram:
		*nValue = 0.0;
		break;
	case Q_UPDOWN_Up_link_telegram:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_UPDOWN_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_UPDOWN rTemp;
	const Q_UPDOWN* pCurrent = (const Q_UPDOWN*)pValue;
	if (string_to_Q_UPDOWN(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_UPDOWN_signature() {
	return "E"
		"|Q_UPDOWN_Down_link_telegram"
		"|Q_UPDOWN_Up_link_telegram"
		;
}

int check_Q_UPDOWN_string(const char* strValue) {
	static Q_UPDOWN rTemp;
	return string_to_Q_UPDOWN(strValue, &rTemp);
}


/****************************************************************
 ** M_VERSION
 ****************************************************************/
struct SimTypeVTable* pSimM_VERSIONVTable;
const char * M_VERSION_to_string(const void* pValue) {
	if (pSimM_VERSIONVTable != 0 && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_VERSIONVTable->m_pfnToType(SptString, pValue);
	switch (*((M_VERSION*)pValue)) {
	case M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS:
		return "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS";
	case M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0:
		return "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0";
	case M_VERSION_Version_1_1_introduced_in_SRS_3_3_0:
		return "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0";
	case M_VERSION_Version_2_0_introduced_in_SRS_3_3_0:
		return "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0";
	default:
		return "?";
	}
}

int string_to_M_VERSION(const char* strValue, void* pValue) {
	if (pSimM_VERSIONVTable != 0 && pSimM_VERSIONVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_VERSION rTemp;		int nResult = pSimM_VERSIONVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_VERSION*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
	else if(strcmp(strValue, "M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0;
	else if(strcmp(strValue, "M_VERSION_Version_1_1_introduced_in_SRS_3_3_0") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Version_1_1_introduced_in_SRS_3_3_0;
	else if(strcmp(strValue, "M_VERSION_Version_2_0_introduced_in_SRS_3_3_0") == 0)
		*((M_VERSION*)pValue) = M_VERSION_Version_2_0_introduced_in_SRS_3_3_0;
	else 
		return 0;
	return 1;
}

int is_M_VERSION_allow_double_convertion() {
	return 1;
}


int M_VERSION_to_double(double * nValue, const void* pValue) {
	switch (*((M_VERSION*)pValue)) {
	case M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS:
		*nValue = 0.0;
		break;
	case M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0:
		*nValue = 1.0;
		break;
	case M_VERSION_Version_1_1_introduced_in_SRS_3_3_0:
		*nValue = 2.0;
		break;
	case M_VERSION_Version_2_0_introduced_in_SRS_3_3_0:
		*nValue = 3.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_VERSION_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_VERSION rTemp;
	const M_VERSION* pCurrent = (const M_VERSION*)pValue;
	if (string_to_M_VERSION(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_VERSION_signature() {
	return "E"
		"|M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS"
		"|M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0"
		"|M_VERSION_Version_1_1_introduced_in_SRS_3_3_0"
		"|M_VERSION_Version_2_0_introduced_in_SRS_3_3_0"
		;
}

int check_M_VERSION_string(const char* strValue) {
	static M_VERSION rTemp;
	return string_to_M_VERSION(strValue, &rTemp);
}


/****************************************************************
 ** Q_MEDIA
 ****************************************************************/
struct SimTypeVTable* pSimQ_MEDIAVTable;
const char * Q_MEDIA_to_string(const void* pValue) {
	if (pSimQ_MEDIAVTable != 0 && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_MEDIAVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_MEDIA*)pValue)) {
	case Q_MEDIA_Balise:
		return "Q_MEDIA_Balise";
	case Q_MEDIA_Loop:
		return "Q_MEDIA_Loop";
	default:
		return "?";
	}
}

int string_to_Q_MEDIA(const char* strValue, void* pValue) {
	if (pSimQ_MEDIAVTable != 0 && pSimQ_MEDIAVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_MEDIA rTemp;		int nResult = pSimQ_MEDIAVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_MEDIA*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_MEDIA_Balise") == 0)
		*((Q_MEDIA*)pValue) = Q_MEDIA_Balise;
	else if(strcmp(strValue, "Q_MEDIA_Loop") == 0)
		*((Q_MEDIA*)pValue) = Q_MEDIA_Loop;
	else 
		return 0;
	return 1;
}

int is_Q_MEDIA_allow_double_convertion() {
	return 1;
}


int Q_MEDIA_to_double(double * nValue, const void* pValue) {
	switch (*((Q_MEDIA*)pValue)) {
	case Q_MEDIA_Balise:
		*nValue = 0.0;
		break;
	case Q_MEDIA_Loop:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_MEDIA_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_MEDIA rTemp;
	const Q_MEDIA* pCurrent = (const Q_MEDIA*)pValue;
	if (string_to_Q_MEDIA(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_MEDIA_signature() {
	return "E"
		"|Q_MEDIA_Balise"
		"|Q_MEDIA_Loop"
		;
}

int check_Q_MEDIA_string(const char* strValue) {
	static Q_MEDIA rTemp;
	return string_to_Q_MEDIA(strValue, &rTemp);
}


/****************************************************************
 ** N_PIG
 ****************************************************************/
struct SimTypeVTable* pSimN_PIGVTable;
const char * N_PIG_to_string(const void* pValue) {
	if (pSimN_PIGVTable != 0 && pSimN_PIGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_PIGVTable->m_pfnToType(SptString, pValue);
	switch (*((N_PIG*)pValue)) {
	case N_PIG_I_am_the_1st:
		return "N_PIG_I_am_the_1st";
	case N_PIG_I_am_the_2nd:
		return "N_PIG_I_am_the_2nd";
	case N_PIG_I_am_the_3rd:
		return "N_PIG_I_am_the_3rd";
	case N_PIG_I_am_the_4th:
		return "N_PIG_I_am_the_4th";
	case N_PIG_I_am_the_5th:
		return "N_PIG_I_am_the_5th";
	case N_PIG_I_am_the_6th:
		return "N_PIG_I_am_the_6th";
	case N_PIG_I_am_the_7th:
		return "N_PIG_I_am_the_7th";
	case N_PIG_I_am_the_8th:
		return "N_PIG_I_am_the_8th";
	default:
		return "?";
	}
}

int string_to_N_PIG(const char* strValue, void* pValue) {
	if (pSimN_PIGVTable != 0 && pSimN_PIGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		N_PIG rTemp;		int nResult = pSimN_PIGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_PIG*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "N_PIG_I_am_the_1st") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_1st;
	else if(strcmp(strValue, "N_PIG_I_am_the_2nd") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_2nd;
	else if(strcmp(strValue, "N_PIG_I_am_the_3rd") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_3rd;
	else if(strcmp(strValue, "N_PIG_I_am_the_4th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_4th;
	else if(strcmp(strValue, "N_PIG_I_am_the_5th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_5th;
	else if(strcmp(strValue, "N_PIG_I_am_the_6th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_6th;
	else if(strcmp(strValue, "N_PIG_I_am_the_7th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_7th;
	else if(strcmp(strValue, "N_PIG_I_am_the_8th") == 0)
		*((N_PIG*)pValue) = N_PIG_I_am_the_8th;
	else 
		return 0;
	return 1;
}

int is_N_PIG_allow_double_convertion() {
	return 1;
}


int N_PIG_to_double(double * nValue, const void* pValue) {
	switch (*((N_PIG*)pValue)) {
	case N_PIG_I_am_the_1st:
		*nValue = 0.0;
		break;
	case N_PIG_I_am_the_2nd:
		*nValue = 1.0;
		break;
	case N_PIG_I_am_the_3rd:
		*nValue = 2.0;
		break;
	case N_PIG_I_am_the_4th:
		*nValue = 3.0;
		break;
	case N_PIG_I_am_the_5th:
		*nValue = 4.0;
		break;
	case N_PIG_I_am_the_6th:
		*nValue = 5.0;
		break;
	case N_PIG_I_am_the_7th:
		*nValue = 6.0;
		break;
	case N_PIG_I_am_the_8th:
		*nValue = 7.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_N_PIG_type(int* pResult, const char* toCompare, const void* pValue) {
	static N_PIG rTemp;
	const N_PIG* pCurrent = (const N_PIG*)pValue;
	if (string_to_N_PIG(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_N_PIG_signature() {
	return "E"
		"|N_PIG_I_am_the_1st"
		"|N_PIG_I_am_the_2nd"
		"|N_PIG_I_am_the_3rd"
		"|N_PIG_I_am_the_4th"
		"|N_PIG_I_am_the_5th"
		"|N_PIG_I_am_the_6th"
		"|N_PIG_I_am_the_7th"
		"|N_PIG_I_am_the_8th"
		;
}

int check_N_PIG_string(const char* strValue) {
	static N_PIG rTemp;
	return string_to_N_PIG(strValue, &rTemp);
}


/****************************************************************
 ** N_TOTAL
 ****************************************************************/
struct SimTypeVTable* pSimN_TOTALVTable;
const char * N_TOTAL_to_string(const void* pValue) {
	if (pSimN_TOTALVTable != 0 && pSimN_TOTALVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_TOTALVTable->m_pfnToType(SptString, pValue);
	switch (*((N_TOTAL*)pValue)) {
	case N_TOTAL_1_balise_in_the_group:
		return "N_TOTAL_1_balise_in_the_group";
	case N_TOTAL_2_balises_in_the_group:
		return "N_TOTAL_2_balises_in_the_group";
	case N_TOTAL_3_balises_in_the_group:
		return "N_TOTAL_3_balises_in_the_group";
	case N_TOTAL_4_balises_in_the_group:
		return "N_TOTAL_4_balises_in_the_group";
	case N_TOTAL_5_balises_in_the_group:
		return "N_TOTAL_5_balises_in_the_group";
	case N_TOTAL_6_balises_in_the_group:
		return "N_TOTAL_6_balises_in_the_group";
	case N_TOTAL_7_balises_in_the_group:
		return "N_TOTAL_7_balises_in_the_group";
	case N_TOTAL_8_balises_in_the_group:
		return "N_TOTAL_8_balises_in_the_group";
	default:
		return "?";
	}
}

int string_to_N_TOTAL(const char* strValue, void* pValue) {
	if (pSimN_TOTALVTable != 0 && pSimN_TOTALVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		N_TOTAL rTemp;		int nResult = pSimN_TOTALVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_TOTAL*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "N_TOTAL_1_balise_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_1_balise_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_2_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_2_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_3_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_3_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_4_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_4_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_5_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_5_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_6_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_6_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_7_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_7_balises_in_the_group;
	else if(strcmp(strValue, "N_TOTAL_8_balises_in_the_group") == 0)
		*((N_TOTAL*)pValue) = N_TOTAL_8_balises_in_the_group;
	else 
		return 0;
	return 1;
}

int is_N_TOTAL_allow_double_convertion() {
	return 1;
}


int N_TOTAL_to_double(double * nValue, const void* pValue) {
	switch (*((N_TOTAL*)pValue)) {
	case N_TOTAL_1_balise_in_the_group:
		*nValue = 0.0;
		break;
	case N_TOTAL_2_balises_in_the_group:
		*nValue = 1.0;
		break;
	case N_TOTAL_3_balises_in_the_group:
		*nValue = 2.0;
		break;
	case N_TOTAL_4_balises_in_the_group:
		*nValue = 3.0;
		break;
	case N_TOTAL_5_balises_in_the_group:
		*nValue = 4.0;
		break;
	case N_TOTAL_6_balises_in_the_group:
		*nValue = 5.0;
		break;
	case N_TOTAL_7_balises_in_the_group:
		*nValue = 6.0;
		break;
	case N_TOTAL_8_balises_in_the_group:
		*nValue = 7.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_N_TOTAL_type(int* pResult, const char* toCompare, const void* pValue) {
	static N_TOTAL rTemp;
	const N_TOTAL* pCurrent = (const N_TOTAL*)pValue;
	if (string_to_N_TOTAL(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_N_TOTAL_signature() {
	return "E"
		"|N_TOTAL_1_balise_in_the_group"
		"|N_TOTAL_2_balises_in_the_group"
		"|N_TOTAL_3_balises_in_the_group"
		"|N_TOTAL_4_balises_in_the_group"
		"|N_TOTAL_5_balises_in_the_group"
		"|N_TOTAL_6_balises_in_the_group"
		"|N_TOTAL_7_balises_in_the_group"
		"|N_TOTAL_8_balises_in_the_group"
		;
}

int check_N_TOTAL_string(const char* strValue) {
	static N_TOTAL rTemp;
	return string_to_N_TOTAL(strValue, &rTemp);
}


/****************************************************************
 ** M_DUP
 ****************************************************************/
struct SimTypeVTable* pSimM_DUPVTable;
const char * M_DUP_to_string(const void* pValue) {
	if (pSimM_DUPVTable != 0 && pSimM_DUPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_DUPVTable->m_pfnToType(SptString, pValue);
	switch (*((M_DUP*)pValue)) {
	case M_DUP_No_duplicates:
		return "M_DUP_No_duplicates";
	case _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise:
		return "M_DUP_This_balise_is_a_duplicate_of_the_next_balise";
	case M_DUP_This_balise_is_a_duplicate_of_the_previous_balise:
		return "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise";
	default:
		return "?";
	}
}

int string_to_M_DUP(const char* strValue, void* pValue) {
	if (pSimM_DUPVTable != 0 && pSimM_DUPVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_DUP rTemp;		int nResult = pSimM_DUPVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_DUP*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_DUP_No_duplicates") == 0)
		*((M_DUP*)pValue) = M_DUP_No_duplicates;
	else if(strcmp(strValue, "M_DUP_This_balise_is_a_duplicate_of_the_next_balise") == 0)
		*((M_DUP*)pValue) = _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
	else if(strcmp(strValue, "M_DUP_This_balise_is_a_duplicate_of_the_previous_balise") == 0)
		*((M_DUP*)pValue) = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
	else 
		return 0;
	return 1;
}

int is_M_DUP_allow_double_convertion() {
	return 1;
}


int M_DUP_to_double(double * nValue, const void* pValue) {
	switch (*((M_DUP*)pValue)) {
	case M_DUP_No_duplicates:
		*nValue = 0.0;
		break;
	case _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise:
		*nValue = 1.0;
		break;
	case M_DUP_This_balise_is_a_duplicate_of_the_previous_balise:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_DUP_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_DUP rTemp;
	const M_DUP* pCurrent = (const M_DUP*)pValue;
	if (string_to_M_DUP(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_DUP_signature() {
	return "E"
		"|M_DUP_No_duplicates"
		"|M_DUP_This_balise_is_a_duplicate_of_the_next_balise"
		"|M_DUP_This_balise_is_a_duplicate_of_the_previous_balise"
		;
}

int check_M_DUP_string(const char* strValue) {
	static M_DUP rTemp;
	return string_to_M_DUP(strValue, &rTemp);
}


/****************************************************************
 ** M_MCOUNT
 ****************************************************************/
struct SimTypeVTable* pSimM_MCOUNTVTable;
const char * M_MCOUNT_to_string(const void* pValue) {
	if (pSimM_MCOUNTVTable != 0 && pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_MCOUNTVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_M_MCOUNT(const char* strValue, void* pValue) {
	if (pSimM_MCOUNTVTable != 0 && pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static M_MCOUNT rTemp;
		int nResult = pSimM_MCOUNTVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_MCOUNT*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_M_MCOUNT_allow_double_convertion() {
	if (pSimM_MCOUNTVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int M_MCOUNT_to_double(double * nValue, const void* pValue) {
	if (pSimM_MCOUNTVTable != 0) {
		if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimM_MCOUNTVTable->m_pfnToType(SptLong, pValue));
		else if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimM_MCOUNTVTable->m_pfnToType(SptShort, pValue));
		else if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimM_MCOUNTVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimM_MCOUNTVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimM_MCOUNTVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_M_MCOUNT_string(const char* strValue) {
	static M_MCOUNT rTemp;
	return string_to_M_MCOUNT(strValue, &rTemp);
}


/****************************************************************
 ** Q_LINK
 ****************************************************************/
struct SimTypeVTable* pSimQ_LINKVTable;
const char * Q_LINK_to_string(const void* pValue) {
	if (pSimQ_LINKVTable != 0 && pSimQ_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LINKVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LINK*)pValue)) {
	case Q_LINK_Unlinked:
		return "Q_LINK_Unlinked";
	case Q_LINK_Linked:
		return "Q_LINK_Linked";
	default:
		return "?";
	}
}

int string_to_Q_LINK(const char* strValue, void* pValue) {
	if (pSimQ_LINKVTable != 0 && pSimQ_LINKVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LINK rTemp;		int nResult = pSimQ_LINKVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LINK*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LINK_Unlinked") == 0)
		*((Q_LINK*)pValue) = Q_LINK_Unlinked;
	else if(strcmp(strValue, "Q_LINK_Linked") == 0)
		*((Q_LINK*)pValue) = Q_LINK_Linked;
	else 
		return 0;
	return 1;
}

int is_Q_LINK_allow_double_convertion() {
	return 1;
}


int Q_LINK_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LINK*)pValue)) {
	case Q_LINK_Unlinked:
		*nValue = 0.0;
		break;
	case Q_LINK_Linked:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LINK_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LINK rTemp;
	const Q_LINK* pCurrent = (const Q_LINK*)pValue;
	if (string_to_Q_LINK(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LINK_signature() {
	return "E"
		"|Q_LINK_Unlinked"
		"|Q_LINK_Linked"
		;
}

int check_Q_LINK_string(const char* strValue) {
	static Q_LINK rTemp;
	return string_to_Q_LINK(strValue, &rTemp);
}


/****************************************************************
 ** NID_PACKET
 ****************************************************************/
struct SimTypeVTable* pSimNID_PACKETVTable;
const char * NID_PACKET_to_string(const void* pValue) {
	if (pSimNID_PACKETVTable != 0 && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_PACKETVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_PACKET(const char* strValue, void* pValue) {
	if (pSimNID_PACKETVTable != 0 && pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_PACKET rTemp;
		int nResult = pSimNID_PACKETVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_PACKET*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_PACKET_allow_double_convertion() {
	if (pSimNID_PACKETVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_PACKET_to_double(double * nValue, const void* pValue) {
	if (pSimNID_PACKETVTable != 0) {
		if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_PACKETVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_PACKETVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_PACKETVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_PACKETVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_PACKET_string(const char* strValue) {
	static NID_PACKET rTemp;
	return string_to_NID_PACKET(strValue, &rTemp);
}


/****************************************************************
 ** Q_DIR
 ****************************************************************/
struct SimTypeVTable* pSimQ_DIRVTable;
const char * Q_DIR_to_string(const void* pValue) {
	if (pSimQ_DIRVTable != 0 && pSimQ_DIRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DIRVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DIR*)pValue)) {
	case Q_DIR_Reverse:
		return "Q_DIR_Reverse";
	case Q_DIR_Nominal:
		return "Q_DIR_Nominal";
	case Q_DIR_Both_directions:
		return "Q_DIR_Both_directions";
	default:
		return "?";
	}
}

int string_to_Q_DIR(const char* strValue, void* pValue) {
	if (pSimQ_DIRVTable != 0 && pSimQ_DIRVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DIR rTemp;		int nResult = pSimQ_DIRVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DIR*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DIR_Reverse") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Reverse;
	else if(strcmp(strValue, "Q_DIR_Nominal") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Nominal;
	else if(strcmp(strValue, "Q_DIR_Both_directions") == 0)
		*((Q_DIR*)pValue) = Q_DIR_Both_directions;
	else 
		return 0;
	return 1;
}

int is_Q_DIR_allow_double_convertion() {
	return 1;
}


int Q_DIR_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DIR*)pValue)) {
	case Q_DIR_Reverse:
		*nValue = 0.0;
		break;
	case Q_DIR_Nominal:
		*nValue = 1.0;
		break;
	case Q_DIR_Both_directions:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DIR_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DIR rTemp;
	const Q_DIR* pCurrent = (const Q_DIR*)pValue;
	if (string_to_Q_DIR(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DIR_signature() {
	return "E"
		"|Q_DIR_Reverse"
		"|Q_DIR_Nominal"
		"|Q_DIR_Both_directions"
		;
}

int check_Q_DIR_string(const char* strValue) {
	static Q_DIR rTemp;
	return string_to_Q_DIR(strValue, &rTemp);
}


/****************************************************************
 ** NID_MESSAGE
 ****************************************************************/
struct SimTypeVTable* pSimNID_MESSAGEVTable;
const char * NID_MESSAGE_to_string(const void* pValue) {
	if (pSimNID_MESSAGEVTable != 0 && pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_MESSAGEVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_MESSAGE(const char* strValue, void* pValue) {
	if (pSimNID_MESSAGEVTable != 0 && pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_MESSAGE rTemp;
		int nResult = pSimNID_MESSAGEVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_MESSAGE*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_MESSAGE_allow_double_convertion() {
	if (pSimNID_MESSAGEVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_MESSAGE_to_double(double * nValue, const void* pValue) {
	if (pSimNID_MESSAGEVTable != 0) {
		if (pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_MESSAGEVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_MESSAGEVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_MESSAGEVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_MESSAGEVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_MESSAGEVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_MESSAGE_string(const char* strValue) {
	static NID_MESSAGE rTemp;
	return string_to_NID_MESSAGE(strValue, &rTemp);
}


/****************************************************************
 ** T_TRAIN
 ****************************************************************/
struct SimTypeVTable* pSimT_TRAINVTable;
const char * T_TRAIN_to_string(const void* pValue) {
	if (pSimT_TRAINVTable != 0 && pSimT_TRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimT_TRAINVTable->m_pfnToType(SptString, pValue);
	return kcg_real_to_string(pValue);
}

int string_to_T_TRAIN(const char* strValue, void* pValue) {
	if (pSimT_TRAINVTable != 0 && pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static T_TRAIN rTemp;
		int nResult = pSimT_TRAINVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((T_TRAIN*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_real(strValue, pValue);
}

int is_T_TRAIN_allow_double_convertion() {
	if (pSimT_TRAINVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_real_allow_double_convertion();
}

int T_TRAIN_to_double(double * nValue, const void* pValue) {
	if (pSimT_TRAINVTable != 0) {
		if (pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimT_TRAINVTable->m_pfnToType(SptLong, pValue));
		else if (pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimT_TRAINVTable->m_pfnToType(SptShort, pValue));
		else if (pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimT_TRAINVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimT_TRAINVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimT_TRAINVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_real_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_real_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_T_TRAIN_string(const char* strValue) {
	static T_TRAIN rTemp;
	return string_to_T_TRAIN(strValue, &rTemp);
}


/****************************************************************
 ** M_ACK
 ****************************************************************/
struct SimTypeVTable* pSimM_ACKVTable;
const char * M_ACK_to_string(const void* pValue) {
	if (pSimM_ACKVTable != 0 && pSimM_ACKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_ACKVTable->m_pfnToType(SptString, pValue);
	switch (*((M_ACK*)pValue)) {
	case M_ACK_No_acknowledgement_required:
		return "M_ACK_No_acknowledgement_required";
	case M_ACK_Acknowledgement_required:
		return "M_ACK_Acknowledgement_required";
	default:
		return "?";
	}
}

int string_to_M_ACK(const char* strValue, void* pValue) {
	if (pSimM_ACKVTable != 0 && pSimM_ACKVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_ACK rTemp;		int nResult = pSimM_ACKVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_ACK*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_ACK_No_acknowledgement_required") == 0)
		*((M_ACK*)pValue) = M_ACK_No_acknowledgement_required;
	else if(strcmp(strValue, "M_ACK_Acknowledgement_required") == 0)
		*((M_ACK*)pValue) = M_ACK_Acknowledgement_required;
	else 
		return 0;
	return 1;
}

int is_M_ACK_allow_double_convertion() {
	return 1;
}


int M_ACK_to_double(double * nValue, const void* pValue) {
	switch (*((M_ACK*)pValue)) {
	case M_ACK_No_acknowledgement_required:
		*nValue = 0.0;
		break;
	case M_ACK_Acknowledgement_required:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_ACK_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_ACK rTemp;
	const M_ACK* pCurrent = (const M_ACK*)pValue;
	if (string_to_M_ACK(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_ACK_signature() {
	return "E"
		"|M_ACK_No_acknowledgement_required"
		"|M_ACK_Acknowledgement_required"
		;
}

int check_M_ACK_string(const char* strValue) {
	static M_ACK rTemp;
	return string_to_M_ACK(strValue, &rTemp);
}


/****************************************************************
 ** NID_LRBG
 ****************************************************************/
struct SimTypeVTable* pSimNID_LRBGVTable;
const char * NID_LRBG_to_string(const void* pValue) {
	if (pSimNID_LRBGVTable != 0 && pSimNID_LRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_LRBGVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_LRBG(const char* strValue, void* pValue) {
	if (pSimNID_LRBGVTable != 0 && pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_LRBG rTemp;
		int nResult = pSimNID_LRBGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_LRBG*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_LRBG_allow_double_convertion() {
	if (pSimNID_LRBGVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_LRBG_to_double(double * nValue, const void* pValue) {
	if (pSimNID_LRBGVTable != 0) {
		if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_LRBGVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_LRBGVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_LRBGVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_LRBGVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_LRBGVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_LRBG_string(const char* strValue) {
	static NID_LRBG rTemp;
	return string_to_NID_LRBG(strValue, &rTemp);
}


/****************************************************************
 ** NID_EM
 ****************************************************************/
struct SimTypeVTable* pSimNID_EMVTable;
const char * NID_EM_to_string(const void* pValue) {
	if (pSimNID_EMVTable != 0 && pSimNID_EMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_EMVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_EM(const char* strValue, void* pValue) {
	if (pSimNID_EMVTable != 0 && pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_EM rTemp;
		int nResult = pSimNID_EMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_EM*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_EM_allow_double_convertion() {
	if (pSimNID_EMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_EM_to_double(double * nValue, const void* pValue) {
	if (pSimNID_EMVTable != 0) {
		if (pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_EMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_EMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_EMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_EMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_EMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_EM_string(const char* strValue) {
	static NID_EM rTemp;
	return string_to_NID_EM(strValue, &rTemp);
}


/****************************************************************
 ** Q_SCALE
 ****************************************************************/
struct SimTypeVTable* pSimQ_SCALEVTable;
const char * Q_SCALE_to_string(const void* pValue) {
	if (pSimQ_SCALEVTable != 0 && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_SCALEVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_SCALE*)pValue)) {
	case Q_SCALE_10_cm_scale:
		return "Q_SCALE_10_cm_scale";
	case Q_SCALE_1_m_scale:
		return "Q_SCALE_1_m_scale";
	case Q_SCALE_10_m_scale:
		return "Q_SCALE_10_m_scale";
	default:
		return "?";
	}
}

int string_to_Q_SCALE(const char* strValue, void* pValue) {
	if (pSimQ_SCALEVTable != 0 && pSimQ_SCALEVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_SCALE rTemp;		int nResult = pSimQ_SCALEVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_SCALE*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_SCALE_10_cm_scale") == 0)
		*((Q_SCALE*)pValue) = Q_SCALE_10_cm_scale;
	else if(strcmp(strValue, "Q_SCALE_1_m_scale") == 0)
		*((Q_SCALE*)pValue) = Q_SCALE_1_m_scale;
	else if(strcmp(strValue, "Q_SCALE_10_m_scale") == 0)
		*((Q_SCALE*)pValue) = Q_SCALE_10_m_scale;
	else 
		return 0;
	return 1;
}

int is_Q_SCALE_allow_double_convertion() {
	return 1;
}


int Q_SCALE_to_double(double * nValue, const void* pValue) {
	switch (*((Q_SCALE*)pValue)) {
	case Q_SCALE_10_cm_scale:
		*nValue = 0.0;
		break;
	case Q_SCALE_1_m_scale:
		*nValue = 1.0;
		break;
	case Q_SCALE_10_m_scale:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_SCALE_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_SCALE rTemp;
	const Q_SCALE* pCurrent = (const Q_SCALE*)pValue;
	if (string_to_Q_SCALE(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_SCALE_signature() {
	return "E"
		"|Q_SCALE_10_cm_scale"
		"|Q_SCALE_1_m_scale"
		"|Q_SCALE_10_m_scale"
		;
}

int check_Q_SCALE_string(const char* strValue) {
	static Q_SCALE rTemp;
	return string_to_Q_SCALE(strValue, &rTemp);
}


/****************************************************************
 ** D_SR
 ****************************************************************/
struct SimTypeVTable* pSimD_SRVTable;
const char * D_SR_to_string(const void* pValue) {
	if (pSimD_SRVTable != 0 && pSimD_SRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimD_SRVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_D_SR(const char* strValue, void* pValue) {
	if (pSimD_SRVTable != 0 && pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static D_SR rTemp;
		int nResult = pSimD_SRVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((D_SR*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_D_SR_allow_double_convertion() {
	if (pSimD_SRVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int D_SR_to_double(double * nValue, const void* pValue) {
	if (pSimD_SRVTable != 0) {
		if (pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimD_SRVTable->m_pfnToType(SptLong, pValue));
		else if (pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimD_SRVTable->m_pfnToType(SptShort, pValue));
		else if (pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimD_SRVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimD_SRVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimD_SRVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_D_SR_string(const char* strValue) {
	static D_SR rTemp;
	return string_to_D_SR(strValue, &rTemp);
}


/****************************************************************
 ** D_REF
 ****************************************************************/
struct SimTypeVTable* pSimD_REFVTable;
const char * D_REF_to_string(const void* pValue) {
	if (pSimD_REFVTable != 0 && pSimD_REFVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimD_REFVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_D_REF(const char* strValue, void* pValue) {
	if (pSimD_REFVTable != 0 && pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static D_REF rTemp;
		int nResult = pSimD_REFVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((D_REF*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_D_REF_allow_double_convertion() {
	if (pSimD_REFVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int D_REF_to_double(double * nValue, const void* pValue) {
	if (pSimD_REFVTable != 0) {
		if (pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimD_REFVTable->m_pfnToType(SptLong, pValue));
		else if (pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimD_REFVTable->m_pfnToType(SptShort, pValue));
		else if (pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimD_REFVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimD_REFVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimD_REFVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_D_REF_string(const char* strValue) {
	static D_REF rTemp;
	return string_to_D_REF(strValue, &rTemp);
}


/****************************************************************
 ** D_EMERGENCYSTOP
 ****************************************************************/
struct SimTypeVTable* pSimD_EMERGENCYSTOPVTable;
const char * D_EMERGENCYSTOP_to_string(const void* pValue) {
	if (pSimD_EMERGENCYSTOPVTable != 0 && pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_D_EMERGENCYSTOP(const char* strValue, void* pValue) {
	if (pSimD_EMERGENCYSTOPVTable != 0 && pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static D_EMERGENCYSTOP rTemp;
		int nResult = pSimD_EMERGENCYSTOPVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((D_EMERGENCYSTOP*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_D_EMERGENCYSTOP_allow_double_convertion() {
	if (pSimD_EMERGENCYSTOPVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int D_EMERGENCYSTOP_to_double(double * nValue, const void* pValue) {
	if (pSimD_EMERGENCYSTOPVTable != 0) {
		if (pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptLong, pValue));
		else if (pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptShort, pValue));
		else if (pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimD_EMERGENCYSTOPVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimD_EMERGENCYSTOPVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_D_EMERGENCYSTOP_string(const char* strValue) {
	static D_EMERGENCYSTOP rTemp;
	return string_to_D_EMERGENCYSTOP(strValue, &rTemp);
}


/****************************************************************
 ** M_MODE
 ****************************************************************/
struct SimTypeVTable* pSimM_MODEVTable;
const char * M_MODE_to_string(const void* pValue) {
	if (pSimM_MODEVTable != 0 && pSimM_MODEVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_MODEVTable->m_pfnToType(SptString, pValue);
	switch (*((M_MODE*)pValue)) {
	case M_MODE_Full_Supervision:
		return "M_MODE_Full_Supervision";
	case M_MODE_On_Sight:
		return "M_MODE_On_Sight";
	case M_MODE_Staff_Responsible:
		return "M_MODE_Staff_Responsible";
	case M_MODE_Shunting:
		return "M_MODE_Shunting";
	case M_MODE_Unfitted:
		return "M_MODE_Unfitted";
	case M_MODE_Sleeping:
		return "M_MODE_Sleeping";
	case M_MODE_Stand_By:
		return "M_MODE_Stand_By";
	case M_MODE_Trip:
		return "M_MODE_Trip";
	case M_MODE_Post_Trip:
		return "M_MODE_Post_Trip";
	case M_MODE_System_Failure:
		return "M_MODE_System_Failure";
	case M_MODE_Isolation:
		return "M_MODE_Isolation";
	case M_MODE_Non_Leading:
		return "M_MODE_Non_Leading";
	case M_MODE_Limited_Supervision:
		return "M_MODE_Limited_Supervision";
	case M_MODE_National_System:
		return "M_MODE_National_System";
	case M_MODE_Reversing:
		return "M_MODE_Reversing";
	case M_MODE_Passive_Shunting:
		return "M_MODE_Passive_Shunting";
	case M_MODE_No_Power:
		return "M_MODE_No_Power";
	default:
		return "?";
	}
}

int string_to_M_MODE(const char* strValue, void* pValue) {
	if (pSimM_MODEVTable != 0 && pSimM_MODEVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_MODE rTemp;		int nResult = pSimM_MODEVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_MODE*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_MODE_Full_Supervision") == 0)
		*((M_MODE*)pValue) = M_MODE_Full_Supervision;
	else if(strcmp(strValue, "M_MODE_On_Sight") == 0)
		*((M_MODE*)pValue) = M_MODE_On_Sight;
	else if(strcmp(strValue, "M_MODE_Staff_Responsible") == 0)
		*((M_MODE*)pValue) = M_MODE_Staff_Responsible;
	else if(strcmp(strValue, "M_MODE_Shunting") == 0)
		*((M_MODE*)pValue) = M_MODE_Shunting;
	else if(strcmp(strValue, "M_MODE_Unfitted") == 0)
		*((M_MODE*)pValue) = M_MODE_Unfitted;
	else if(strcmp(strValue, "M_MODE_Sleeping") == 0)
		*((M_MODE*)pValue) = M_MODE_Sleeping;
	else if(strcmp(strValue, "M_MODE_Stand_By") == 0)
		*((M_MODE*)pValue) = M_MODE_Stand_By;
	else if(strcmp(strValue, "M_MODE_Trip") == 0)
		*((M_MODE*)pValue) = M_MODE_Trip;
	else if(strcmp(strValue, "M_MODE_Post_Trip") == 0)
		*((M_MODE*)pValue) = M_MODE_Post_Trip;
	else if(strcmp(strValue, "M_MODE_System_Failure") == 0)
		*((M_MODE*)pValue) = M_MODE_System_Failure;
	else if(strcmp(strValue, "M_MODE_Isolation") == 0)
		*((M_MODE*)pValue) = M_MODE_Isolation;
	else if(strcmp(strValue, "M_MODE_Non_Leading") == 0)
		*((M_MODE*)pValue) = M_MODE_Non_Leading;
	else if(strcmp(strValue, "M_MODE_Limited_Supervision") == 0)
		*((M_MODE*)pValue) = M_MODE_Limited_Supervision;
	else if(strcmp(strValue, "M_MODE_National_System") == 0)
		*((M_MODE*)pValue) = M_MODE_National_System;
	else if(strcmp(strValue, "M_MODE_Reversing") == 0)
		*((M_MODE*)pValue) = M_MODE_Reversing;
	else if(strcmp(strValue, "M_MODE_Passive_Shunting") == 0)
		*((M_MODE*)pValue) = M_MODE_Passive_Shunting;
	else if(strcmp(strValue, "M_MODE_No_Power") == 0)
		*((M_MODE*)pValue) = M_MODE_No_Power;
	else 
		return 0;
	return 1;
}

int is_M_MODE_allow_double_convertion() {
	return 1;
}


int M_MODE_to_double(double * nValue, const void* pValue) {
	switch (*((M_MODE*)pValue)) {
	case M_MODE_Full_Supervision:
		*nValue = 0.0;
		break;
	case M_MODE_On_Sight:
		*nValue = 1.0;
		break;
	case M_MODE_Staff_Responsible:
		*nValue = 2.0;
		break;
	case M_MODE_Shunting:
		*nValue = 3.0;
		break;
	case M_MODE_Unfitted:
		*nValue = 4.0;
		break;
	case M_MODE_Sleeping:
		*nValue = 5.0;
		break;
	case M_MODE_Stand_By:
		*nValue = 6.0;
		break;
	case M_MODE_Trip:
		*nValue = 7.0;
		break;
	case M_MODE_Post_Trip:
		*nValue = 8.0;
		break;
	case M_MODE_System_Failure:
		*nValue = 9.0;
		break;
	case M_MODE_Isolation:
		*nValue = 10.0;
		break;
	case M_MODE_Non_Leading:
		*nValue = 11.0;
		break;
	case M_MODE_Limited_Supervision:
		*nValue = 12.0;
		break;
	case M_MODE_National_System:
		*nValue = 13.0;
		break;
	case M_MODE_Reversing:
		*nValue = 14.0;
		break;
	case M_MODE_Passive_Shunting:
		*nValue = 15.0;
		break;
	case M_MODE_No_Power:
		*nValue = 16.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_MODE_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_MODE rTemp;
	const M_MODE* pCurrent = (const M_MODE*)pValue;
	if (string_to_M_MODE(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_MODE_signature() {
	return "E"
		"|M_MODE_Full_Supervision"
		"|M_MODE_On_Sight"
		"|M_MODE_Staff_Responsible"
		"|M_MODE_Shunting"
		"|M_MODE_Unfitted"
		"|M_MODE_Sleeping"
		"|M_MODE_Stand_By"
		"|M_MODE_Trip"
		"|M_MODE_Post_Trip"
		"|M_MODE_System_Failure"
		"|M_MODE_Isolation"
		"|M_MODE_Non_Leading"
		"|M_MODE_Limited_Supervision"
		"|M_MODE_National_System"
		"|M_MODE_Reversing"
		"|M_MODE_Passive_Shunting"
		"|M_MODE_No_Power"
		;
}

int check_M_MODE_string(const char* strValue) {
	static M_MODE rTemp;
	return string_to_M_MODE(strValue, &rTemp);
}


/****************************************************************
 ** Q_NVLOCACC
 ****************************************************************/
struct SimTypeVTable* pSimQ_NVLOCACCVTable;
const char * Q_NVLOCACC_to_string(const void* pValue) {
	if (pSimQ_NVLOCACCVTable != 0 && pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_NVLOCACCVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_Q_NVLOCACC(const char* strValue, void* pValue) {
	if (pSimQ_NVLOCACCVTable != 0 && pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Q_NVLOCACC rTemp;
		int nResult = pSimQ_NVLOCACCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_NVLOCACC*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_Q_NVLOCACC_allow_double_convertion() {
	if (pSimQ_NVLOCACCVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int Q_NVLOCACC_to_double(double * nValue, const void* pValue) {
	if (pSimQ_NVLOCACCVTable != 0) {
		if (pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimQ_NVLOCACCVTable->m_pfnToType(SptLong, pValue));
		else if (pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimQ_NVLOCACCVTable->m_pfnToType(SptShort, pValue));
		else if (pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimQ_NVLOCACCVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimQ_NVLOCACCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimQ_NVLOCACCVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Q_NVLOCACC_string(const char* strValue) {
	static Q_NVLOCACC rTemp;
	return string_to_Q_NVLOCACC(strValue, &rTemp);
}


/****************************************************************
 ** Q_DIRLRBG
 ****************************************************************/
struct SimTypeVTable* pSimQ_DIRLRBGVTable;
const char * Q_DIRLRBG_to_string(const void* pValue) {
	if (pSimQ_DIRLRBGVTable != 0 && pSimQ_DIRLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DIRLRBGVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DIRLRBG*)pValue)) {
	case Q_DIRLRBG_Reverse:
		return "Q_DIRLRBG_Reverse";
	case Q_DIRLRBG_Nominal:
		return "Q_DIRLRBG_Nominal";
	case Q_DIRLRBG_Unknown:
		return "Q_DIRLRBG_Unknown";
	default:
		return "?";
	}
}

int string_to_Q_DIRLRBG(const char* strValue, void* pValue) {
	if (pSimQ_DIRLRBGVTable != 0 && pSimQ_DIRLRBGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DIRLRBG rTemp;		int nResult = pSimQ_DIRLRBGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DIRLRBG*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DIRLRBG_Reverse") == 0)
		*((Q_DIRLRBG*)pValue) = Q_DIRLRBG_Reverse;
	else if(strcmp(strValue, "Q_DIRLRBG_Nominal") == 0)
		*((Q_DIRLRBG*)pValue) = Q_DIRLRBG_Nominal;
	else if(strcmp(strValue, "Q_DIRLRBG_Unknown") == 0)
		*((Q_DIRLRBG*)pValue) = Q_DIRLRBG_Unknown;
	else 
		return 0;
	return 1;
}

int is_Q_DIRLRBG_allow_double_convertion() {
	return 1;
}


int Q_DIRLRBG_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DIRLRBG*)pValue)) {
	case Q_DIRLRBG_Reverse:
		*nValue = 0.0;
		break;
	case Q_DIRLRBG_Nominal:
		*nValue = 1.0;
		break;
	case Q_DIRLRBG_Unknown:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DIRLRBG_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DIRLRBG rTemp;
	const Q_DIRLRBG* pCurrent = (const Q_DIRLRBG*)pValue;
	if (string_to_Q_DIRLRBG(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DIRLRBG_signature() {
	return "E"
		"|Q_DIRLRBG_Reverse"
		"|Q_DIRLRBG_Nominal"
		"|Q_DIRLRBG_Unknown"
		;
}

int check_Q_DIRLRBG_string(const char* strValue) {
	static Q_DIRLRBG rTemp;
	return string_to_Q_DIRLRBG(strValue, &rTemp);
}


/****************************************************************
 ** Q_DIRTRAIN
 ****************************************************************/
struct SimTypeVTable* pSimQ_DIRTRAINVTable;
const char * Q_DIRTRAIN_to_string(const void* pValue) {
	if (pSimQ_DIRTRAINVTable != 0 && pSimQ_DIRTRAINVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DIRTRAINVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DIRTRAIN*)pValue)) {
	case Q_DIRTRAIN_Reverse:
		return "Q_DIRTRAIN_Reverse";
	case Q_DIRTRAIN_Nominal:
		return "Q_DIRTRAIN_Nominal";
	case Q_DIRTRAIN_Unknown:
		return "Q_DIRTRAIN_Unknown";
	default:
		return "?";
	}
}

int string_to_Q_DIRTRAIN(const char* strValue, void* pValue) {
	if (pSimQ_DIRTRAINVTable != 0 && pSimQ_DIRTRAINVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DIRTRAIN rTemp;		int nResult = pSimQ_DIRTRAINVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DIRTRAIN*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DIRTRAIN_Reverse") == 0)
		*((Q_DIRTRAIN*)pValue) = Q_DIRTRAIN_Reverse;
	else if(strcmp(strValue, "Q_DIRTRAIN_Nominal") == 0)
		*((Q_DIRTRAIN*)pValue) = Q_DIRTRAIN_Nominal;
	else if(strcmp(strValue, "Q_DIRTRAIN_Unknown") == 0)
		*((Q_DIRTRAIN*)pValue) = Q_DIRTRAIN_Unknown;
	else 
		return 0;
	return 1;
}

int is_Q_DIRTRAIN_allow_double_convertion() {
	return 1;
}


int Q_DIRTRAIN_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DIRTRAIN*)pValue)) {
	case Q_DIRTRAIN_Reverse:
		*nValue = 0.0;
		break;
	case Q_DIRTRAIN_Nominal:
		*nValue = 1.0;
		break;
	case Q_DIRTRAIN_Unknown:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DIRTRAIN_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DIRTRAIN rTemp;
	const Q_DIRTRAIN* pCurrent = (const Q_DIRTRAIN*)pValue;
	if (string_to_Q_DIRTRAIN(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DIRTRAIN_signature() {
	return "E"
		"|Q_DIRTRAIN_Reverse"
		"|Q_DIRTRAIN_Nominal"
		"|Q_DIRTRAIN_Unknown"
		;
}

int check_Q_DIRTRAIN_string(const char* strValue) {
	static Q_DIRTRAIN rTemp;
	return string_to_Q_DIRTRAIN(strValue, &rTemp);
}


/****************************************************************
 ** Q_LINKORIENTATION
 ****************************************************************/
struct SimTypeVTable* pSimQ_LINKORIENTATIONVTable;
const char * Q_LINKORIENTATION_to_string(const void* pValue) {
	if (pSimQ_LINKORIENTATIONVTable != 0 && pSimQ_LINKORIENTATIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LINKORIENTATIONVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LINKORIENTATION*)pValue)) {
	case _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction:
		return "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction";
	case Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction:
		return "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction";
	default:
		return "?";
	}
}

int string_to_Q_LINKORIENTATION(const char* strValue, void* pValue) {
	if (pSimQ_LINKORIENTATIONVTable != 0 && pSimQ_LINKORIENTATIONVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LINKORIENTATION rTemp;		int nResult = pSimQ_LINKORIENTATIONVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LINKORIENTATION*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction") == 0)
		*((Q_LINKORIENTATION*)pValue) = _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
	else if(strcmp(strValue, "Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction") == 0)
		*((Q_LINKORIENTATION*)pValue) = Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
	else 
		return 0;
	return 1;
}

int is_Q_LINKORIENTATION_allow_double_convertion() {
	return 1;
}


int Q_LINKORIENTATION_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LINKORIENTATION*)pValue)) {
	case _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction:
		*nValue = 0.0;
		break;
	case Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LINKORIENTATION_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LINKORIENTATION rTemp;
	const Q_LINKORIENTATION* pCurrent = (const Q_LINKORIENTATION*)pValue;
	if (string_to_Q_LINKORIENTATION(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LINKORIENTATION_signature() {
	return "E"
		"|Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction"
		"|Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction"
		;
}

int check_Q_LINKORIENTATION_string(const char* strValue) {
	static Q_LINKORIENTATION rTemp;
	return string_to_Q_LINKORIENTATION(strValue, &rTemp);
}


/****************************************************************
 ** D_LINK
 ****************************************************************/
struct SimTypeVTable* pSimD_LINKVTable;
const char * D_LINK_to_string(const void* pValue) {
	if (pSimD_LINKVTable != 0 && pSimD_LINKVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimD_LINKVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_D_LINK(const char* strValue, void* pValue) {
	if (pSimD_LINKVTable != 0 && pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static D_LINK rTemp;
		int nResult = pSimD_LINKVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((D_LINK*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_D_LINK_allow_double_convertion() {
	if (pSimD_LINKVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int D_LINK_to_double(double * nValue, const void* pValue) {
	if (pSimD_LINKVTable != 0) {
		if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimD_LINKVTable->m_pfnToType(SptLong, pValue));
		else if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimD_LINKVTable->m_pfnToType(SptShort, pValue));
		else if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimD_LINKVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimD_LINKVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimD_LINKVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_D_LINK_string(const char* strValue) {
	static D_LINK rTemp;
	return string_to_D_LINK(strValue, &rTemp);
}


/****************************************************************
 ** Q_NEWCOUNTRY
 ****************************************************************/
struct SimTypeVTable* pSimQ_NEWCOUNTRYVTable;
const char * Q_NEWCOUNTRY_to_string(const void* pValue) {
	if (pSimQ_NEWCOUNTRYVTable != 0 && pSimQ_NEWCOUNTRYVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_NEWCOUNTRYVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_NEWCOUNTRY*)pValue)) {
	case Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows:
		return "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows";
	case Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows:
		return "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows";
	default:
		return "?";
	}
}

int string_to_Q_NEWCOUNTRY(const char* strValue, void* pValue) {
	if (pSimQ_NEWCOUNTRYVTable != 0 && pSimQ_NEWCOUNTRYVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_NEWCOUNTRY rTemp;		int nResult = pSimQ_NEWCOUNTRYVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_NEWCOUNTRY*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows") == 0)
		*((Q_NEWCOUNTRY*)pValue) = Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
	else if(strcmp(strValue, "Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows") == 0)
		*((Q_NEWCOUNTRY*)pValue) = Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows;
	else 
		return 0;
	return 1;
}

int is_Q_NEWCOUNTRY_allow_double_convertion() {
	return 1;
}


int Q_NEWCOUNTRY_to_double(double * nValue, const void* pValue) {
	switch (*((Q_NEWCOUNTRY*)pValue)) {
	case Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows:
		*nValue = 0.0;
		break;
	case Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_NEWCOUNTRY_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_NEWCOUNTRY rTemp;
	const Q_NEWCOUNTRY* pCurrent = (const Q_NEWCOUNTRY*)pValue;
	if (string_to_Q_NEWCOUNTRY(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_NEWCOUNTRY_signature() {
	return "E"
		"|Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows"
		"|Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows"
		;
}

int check_Q_NEWCOUNTRY_string(const char* strValue) {
	static Q_NEWCOUNTRY rTemp;
	return string_to_Q_NEWCOUNTRY(strValue, &rTemp);
}


/****************************************************************
 ** Q_LINKREACTION
 ****************************************************************/
struct SimTypeVTable* pSimQ_LINKREACTIONVTable;
const char * Q_LINKREACTION_to_string(const void* pValue) {
	if (pSimQ_LINKREACTIONVTable != 0 && pSimQ_LINKREACTIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LINKREACTIONVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LINKREACTION*)pValue)) {
	case Q_LINKREACTION_Train_trip:
		return "Q_LINKREACTION_Train_trip";
	case Q_LINKREACTION_Apply_service_brake:
		return "Q_LINKREACTION_Apply_service_brake";
	case Q_LINKREACTION_No_Reaction:
		return "Q_LINKREACTION_No_Reaction";
	default:
		return "?";
	}
}

int string_to_Q_LINKREACTION(const char* strValue, void* pValue) {
	if (pSimQ_LINKREACTIONVTable != 0 && pSimQ_LINKREACTIONVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LINKREACTION rTemp;		int nResult = pSimQ_LINKREACTIONVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LINKREACTION*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LINKREACTION_Train_trip") == 0)
		*((Q_LINKREACTION*)pValue) = Q_LINKREACTION_Train_trip;
	else if(strcmp(strValue, "Q_LINKREACTION_Apply_service_brake") == 0)
		*((Q_LINKREACTION*)pValue) = Q_LINKREACTION_Apply_service_brake;
	else if(strcmp(strValue, "Q_LINKREACTION_No_Reaction") == 0)
		*((Q_LINKREACTION*)pValue) = Q_LINKREACTION_No_Reaction;
	else 
		return 0;
	return 1;
}

int is_Q_LINKREACTION_allow_double_convertion() {
	return 1;
}


int Q_LINKREACTION_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LINKREACTION*)pValue)) {
	case Q_LINKREACTION_Train_trip:
		*nValue = 0.0;
		break;
	case Q_LINKREACTION_Apply_service_brake:
		*nValue = 1.0;
		break;
	case Q_LINKREACTION_No_Reaction:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LINKREACTION_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LINKREACTION rTemp;
	const Q_LINKREACTION* pCurrent = (const Q_LINKREACTION*)pValue;
	if (string_to_Q_LINKREACTION(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LINKREACTION_signature() {
	return "E"
		"|Q_LINKREACTION_Train_trip"
		"|Q_LINKREACTION_Apply_service_brake"
		"|Q_LINKREACTION_No_Reaction"
		;
}

int check_Q_LINKREACTION_string(const char* strValue) {
	static Q_LINKREACTION rTemp;
	return string_to_Q_LINKREACTION(strValue, &rTemp);
}


/****************************************************************
 ** Q_LOCACC
 ****************************************************************/
struct SimTypeVTable* pSimQ_LOCACCVTable;
const char * Q_LOCACC_to_string(const void* pValue) {
	if (pSimQ_LOCACCVTable != 0 && pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LOCACCVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_Q_LOCACC(const char* strValue, void* pValue) {
	if (pSimQ_LOCACCVTable != 0 && pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Q_LOCACC rTemp;
		int nResult = pSimQ_LOCACCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LOCACC*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_Q_LOCACC_allow_double_convertion() {
	if (pSimQ_LOCACCVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int Q_LOCACC_to_double(double * nValue, const void* pValue) {
	if (pSimQ_LOCACCVTable != 0) {
		if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimQ_LOCACCVTable->m_pfnToType(SptLong, pValue));
		else if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimQ_LOCACCVTable->m_pfnToType(SptShort, pValue));
		else if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimQ_LOCACCVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimQ_LOCACCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimQ_LOCACCVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Q_LOCACC_string(const char* strValue) {
	static Q_LOCACC rTemp;
	return string_to_Q_LOCACC(strValue, &rTemp);
}


/****************************************************************
 ** Q_DLRBG
 ****************************************************************/
struct SimTypeVTable* pSimQ_DLRBGVTable;
const char * Q_DLRBG_to_string(const void* pValue) {
	if (pSimQ_DLRBGVTable != 0 && pSimQ_DLRBGVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_DLRBGVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_DLRBG*)pValue)) {
	case Q_DLRBG_Reverse:
		return "Q_DLRBG_Reverse";
	case Q_DLRBG_Nominal:
		return "Q_DLRBG_Nominal";
	case Q_DLRBG_Unknown:
		return "Q_DLRBG_Unknown";
	default:
		return "?";
	}
}

int string_to_Q_DLRBG(const char* strValue, void* pValue) {
	if (pSimQ_DLRBGVTable != 0 && pSimQ_DLRBGVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_DLRBG rTemp;		int nResult = pSimQ_DLRBGVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_DLRBG*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_DLRBG_Reverse") == 0)
		*((Q_DLRBG*)pValue) = Q_DLRBG_Reverse;
	else if(strcmp(strValue, "Q_DLRBG_Nominal") == 0)
		*((Q_DLRBG*)pValue) = Q_DLRBG_Nominal;
	else if(strcmp(strValue, "Q_DLRBG_Unknown") == 0)
		*((Q_DLRBG*)pValue) = Q_DLRBG_Unknown;
	else 
		return 0;
	return 1;
}

int is_Q_DLRBG_allow_double_convertion() {
	return 1;
}


int Q_DLRBG_to_double(double * nValue, const void* pValue) {
	switch (*((Q_DLRBG*)pValue)) {
	case Q_DLRBG_Reverse:
		*nValue = 0.0;
		break;
	case Q_DLRBG_Nominal:
		*nValue = 1.0;
		break;
	case Q_DLRBG_Unknown:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_DLRBG_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_DLRBG rTemp;
	const Q_DLRBG* pCurrent = (const Q_DLRBG*)pValue;
	if (string_to_Q_DLRBG(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_DLRBG_signature() {
	return "E"
		"|Q_DLRBG_Reverse"
		"|Q_DLRBG_Nominal"
		"|Q_DLRBG_Unknown"
		;
}

int check_Q_DLRBG_string(const char* strValue) {
	static Q_DLRBG rTemp;
	return string_to_Q_DLRBG(strValue, &rTemp);
}


/****************************************************************
 ** MetadataTruthtable_T
 ****************************************************************/
struct SimTypeVTable* pSimMetadataTruthtable_TVTable;
const char * MetadataTruthtable_T_to_string(const void* pValue) {
	if (pSimMetadataTruthtable_TVTable != 0 && pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadataTruthtable_TVTable->m_pfnToType(SptString, pValue);
	return array_bool_256_46_to_string(pValue);
}

int string_to_MetadataTruthtable_T(const char* strValue, void* pValue) {
	if (pSimMetadataTruthtable_TVTable != 0 && pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataTruthtable_T rTemp;
		int nResult = pSimMetadataTruthtable_TVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_bool_256_46(&(*((MetadataTruthtable_T*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_bool_256_46(strValue, pValue);
}

int is_MetadataTruthtable_T_allow_double_convertion() {
	if (pSimMetadataTruthtable_TVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_bool_256_46_allow_double_convertion();
}

int MetadataTruthtable_T_to_double(double * nValue, const void* pValue) {
	if (pSimMetadataTruthtable_TVTable != 0) {
		if (pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMetadataTruthtable_TVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMetadataTruthtable_TVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMetadataTruthtable_TVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMetadataTruthtable_TVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMetadataTruthtable_TVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_bool_256_46_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_bool_256_46_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_MetadataTruthtable_T_string(const char* strValue) {
	static MetadataTruthtable_T rTemp;
	return string_to_MetadataTruthtable_T(strValue, &rTemp);
}


/****************************************************************
 ** L_PACKET
 ****************************************************************/
struct SimTypeVTable* pSimL_PACKETVTable;
const char * L_PACKET_to_string(const void* pValue) {
	if (pSimL_PACKETVTable != 0 && pSimL_PACKETVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimL_PACKETVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_L_PACKET(const char* strValue, void* pValue) {
	if (pSimL_PACKETVTable != 0 && pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static L_PACKET rTemp;
		int nResult = pSimL_PACKETVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((L_PACKET*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_L_PACKET_allow_double_convertion() {
	if (pSimL_PACKETVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int L_PACKET_to_double(double * nValue, const void* pValue) {
	if (pSimL_PACKETVTable != 0) {
		if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimL_PACKETVTable->m_pfnToType(SptLong, pValue));
		else if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimL_PACKETVTable->m_pfnToType(SptShort, pValue));
		else if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimL_PACKETVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimL_PACKETVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimL_PACKETVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_L_PACKET_string(const char* strValue) {
	static L_PACKET rTemp;
	return string_to_L_PACKET(strValue, &rTemp);
}


/****************************************************************
 ** T_CYCLOC
 ****************************************************************/
struct SimTypeVTable* pSimT_CYCLOCVTable;
const char * T_CYCLOC_to_string(const void* pValue) {
	if (pSimT_CYCLOCVTable != 0 && pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimT_CYCLOCVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_T_CYCLOC(const char* strValue, void* pValue) {
	if (pSimT_CYCLOCVTable != 0 && pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static T_CYCLOC rTemp;
		int nResult = pSimT_CYCLOCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((T_CYCLOC*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_T_CYCLOC_allow_double_convertion() {
	if (pSimT_CYCLOCVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int T_CYCLOC_to_double(double * nValue, const void* pValue) {
	if (pSimT_CYCLOCVTable != 0) {
		if (pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimT_CYCLOCVTable->m_pfnToType(SptLong, pValue));
		else if (pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimT_CYCLOCVTable->m_pfnToType(SptShort, pValue));
		else if (pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimT_CYCLOCVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimT_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimT_CYCLOCVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_T_CYCLOC_string(const char* strValue) {
	static T_CYCLOC rTemp;
	return string_to_T_CYCLOC(strValue, &rTemp);
}


/****************************************************************
 ** D_CYCLOC
 ****************************************************************/
struct SimTypeVTable* pSimD_CYCLOCVTable;
const char * D_CYCLOC_to_string(const void* pValue) {
	if (pSimD_CYCLOCVTable != 0 && pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimD_CYCLOCVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_D_CYCLOC(const char* strValue, void* pValue) {
	if (pSimD_CYCLOCVTable != 0 && pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static D_CYCLOC rTemp;
		int nResult = pSimD_CYCLOCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((D_CYCLOC*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_D_CYCLOC_allow_double_convertion() {
	if (pSimD_CYCLOCVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int D_CYCLOC_to_double(double * nValue, const void* pValue) {
	if (pSimD_CYCLOCVTable != 0) {
		if (pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimD_CYCLOCVTable->m_pfnToType(SptLong, pValue));
		else if (pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimD_CYCLOCVTable->m_pfnToType(SptShort, pValue));
		else if (pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimD_CYCLOCVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimD_CYCLOCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimD_CYCLOCVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_D_CYCLOC_string(const char* strValue) {
	static D_CYCLOC rTemp;
	return string_to_D_CYCLOC(strValue, &rTemp);
}


/****************************************************************
 ** M_LOC
 ****************************************************************/
struct SimTypeVTable* pSimM_LOCVTable;
const char * M_LOC_to_string(const void* pValue) {
	if (pSimM_LOCVTable != 0 && pSimM_LOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_LOCVTable->m_pfnToType(SptString, pValue);
	switch (*((M_LOC*)pValue)) {
	case M_LOC_Now:
		return "M_LOC_Now";
	case M_LOC_Every_LRBG_compliant_balise_group:
		return "M_LOC_Every_LRBG_compliant_balise_group";
	case M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group:
		return "M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group";
	default:
		return "?";
	}
}

int string_to_M_LOC(const char* strValue, void* pValue) {
	if (pSimM_LOCVTable != 0 && pSimM_LOCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_LOC rTemp;		int nResult = pSimM_LOCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_LOC*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_LOC_Now") == 0)
		*((M_LOC*)pValue) = M_LOC_Now;
	else if(strcmp(strValue, "M_LOC_Every_LRBG_compliant_balise_group") == 0)
		*((M_LOC*)pValue) = M_LOC_Every_LRBG_compliant_balise_group;
	else if(strcmp(strValue, "M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group") == 0)
		*((M_LOC*)pValue) = M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group;
	else 
		return 0;
	return 1;
}

int is_M_LOC_allow_double_convertion() {
	return 1;
}


int M_LOC_to_double(double * nValue, const void* pValue) {
	switch (*((M_LOC*)pValue)) {
	case M_LOC_Now:
		*nValue = 0.0;
		break;
	case M_LOC_Every_LRBG_compliant_balise_group:
		*nValue = 1.0;
		break;
	case M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_LOC_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_LOC rTemp;
	const M_LOC* pCurrent = (const M_LOC*)pValue;
	if (string_to_M_LOC(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_LOC_signature() {
	return "E"
		"|M_LOC_Now"
		"|M_LOC_Every_LRBG_compliant_balise_group"
		"|M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group"
		;
}

int check_M_LOC_string(const char* strValue) {
	static M_LOC rTemp;
	return string_to_M_LOC(strValue, &rTemp);
}


/****************************************************************
 ** N_ITER
 ****************************************************************/
struct SimTypeVTable* pSimN_ITERVTable;
const char * N_ITER_to_string(const void* pValue) {
	if (pSimN_ITERVTable != 0 && pSimN_ITERVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimN_ITERVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_N_ITER(const char* strValue, void* pValue) {
	if (pSimN_ITERVTable != 0 && pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static N_ITER rTemp;
		int nResult = pSimN_ITERVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((N_ITER*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_N_ITER_allow_double_convertion() {
	if (pSimN_ITERVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int N_ITER_to_double(double * nValue, const void* pValue) {
	if (pSimN_ITERVTable != 0) {
		if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimN_ITERVTable->m_pfnToType(SptLong, pValue));
		else if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimN_ITERVTable->m_pfnToType(SptShort, pValue));
		else if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimN_ITERVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimN_ITERVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimN_ITERVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_N_ITER_string(const char* strValue) {
	static N_ITER rTemp;
	return string_to_N_ITER(strValue, &rTemp);
}


/****************************************************************
 ** D_LOC
 ****************************************************************/
struct SimTypeVTable* pSimD_LOCVTable;
const char * D_LOC_to_string(const void* pValue) {
	if (pSimD_LOCVTable != 0 && pSimD_LOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimD_LOCVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_D_LOC(const char* strValue, void* pValue) {
	if (pSimD_LOCVTable != 0 && pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static D_LOC rTemp;
		int nResult = pSimD_LOCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((D_LOC*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_D_LOC_allow_double_convertion() {
	if (pSimD_LOCVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int D_LOC_to_double(double * nValue, const void* pValue) {
	if (pSimD_LOCVTable != 0) {
		if (pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimD_LOCVTable->m_pfnToType(SptLong, pValue));
		else if (pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimD_LOCVTable->m_pfnToType(SptShort, pValue));
		else if (pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimD_LOCVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimD_LOCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimD_LOCVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_D_LOC_string(const char* strValue) {
	static D_LOC rTemp;
	return string_to_D_LOC(strValue, &rTemp);
}


/****************************************************************
 ** Q_LGTLOC
 ****************************************************************/
struct SimTypeVTable* pSimQ_LGTLOCVTable;
const char * Q_LGTLOC_to_string(const void* pValue) {
	if (pSimQ_LGTLOCVTable != 0 && pSimQ_LGTLOCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_LGTLOCVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_LGTLOC*)pValue)) {
	case Q_LGTLOC_Min_safe_rear_end:
		return "Q_LGTLOC_Min_safe_rear_end";
	case Q_LGTLOC_Max_safe_front_end:
		return "Q_LGTLOC_Max_safe_front_end";
	default:
		return "?";
	}
}

int string_to_Q_LGTLOC(const char* strValue, void* pValue) {
	if (pSimQ_LGTLOCVTable != 0 && pSimQ_LGTLOCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_LGTLOC rTemp;		int nResult = pSimQ_LGTLOCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_LGTLOC*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_LGTLOC_Min_safe_rear_end") == 0)
		*((Q_LGTLOC*)pValue) = Q_LGTLOC_Min_safe_rear_end;
	else if(strcmp(strValue, "Q_LGTLOC_Max_safe_front_end") == 0)
		*((Q_LGTLOC*)pValue) = Q_LGTLOC_Max_safe_front_end;
	else 
		return 0;
	return 1;
}

int is_Q_LGTLOC_allow_double_convertion() {
	return 1;
}


int Q_LGTLOC_to_double(double * nValue, const void* pValue) {
	switch (*((Q_LGTLOC*)pValue)) {
	case Q_LGTLOC_Min_safe_rear_end:
		*nValue = 0.0;
		break;
	case Q_LGTLOC_Max_safe_front_end:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_LGTLOC_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_LGTLOC rTemp;
	const Q_LGTLOC* pCurrent = (const Q_LGTLOC*)pValue;
	if (string_to_Q_LGTLOC(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_LGTLOC_signature() {
	return "E"
		"|Q_LGTLOC_Min_safe_rear_end"
		"|Q_LGTLOC_Max_safe_front_end"
		;
}

int check_Q_LGTLOC_string(const char* strValue) {
	static Q_LGTLOC rTemp;
	return string_to_Q_LGTLOC(strValue, &rTemp);
}


/****************************************************************
 ** Q_RBC
 ****************************************************************/
struct SimTypeVTable* pSimQ_RBCVTable;
const char * Q_RBC_to_string(const void* pValue) {
	if (pSimQ_RBCVTable != 0 && pSimQ_RBCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_RBCVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_RBC*)pValue)) {
	case Q_RBC_Terminate_communication_session:
		return "Q_RBC_Terminate_communication_session";
	case Q_RBC_Establish_communication_session:
		return "Q_RBC_Establish_communication_session";
	default:
		return "?";
	}
}

int string_to_Q_RBC(const char* strValue, void* pValue) {
	if (pSimQ_RBCVTable != 0 && pSimQ_RBCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_RBC rTemp;		int nResult = pSimQ_RBCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_RBC*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_RBC_Terminate_communication_session") == 0)
		*((Q_RBC*)pValue) = Q_RBC_Terminate_communication_session;
	else if(strcmp(strValue, "Q_RBC_Establish_communication_session") == 0)
		*((Q_RBC*)pValue) = Q_RBC_Establish_communication_session;
	else 
		return 0;
	return 1;
}

int is_Q_RBC_allow_double_convertion() {
	return 1;
}


int Q_RBC_to_double(double * nValue, const void* pValue) {
	switch (*((Q_RBC*)pValue)) {
	case Q_RBC_Terminate_communication_session:
		*nValue = 0.0;
		break;
	case Q_RBC_Establish_communication_session:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_RBC_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_RBC rTemp;
	const Q_RBC* pCurrent = (const Q_RBC*)pValue;
	if (string_to_Q_RBC(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_RBC_signature() {
	return "E"
		"|Q_RBC_Terminate_communication_session"
		"|Q_RBC_Establish_communication_session"
		;
}

int check_Q_RBC_string(const char* strValue) {
	static Q_RBC rTemp;
	return string_to_Q_RBC(strValue, &rTemp);
}


/****************************************************************
 ** NID_RBC
 ****************************************************************/
struct SimTypeVTable* pSimNID_RBCVTable;
const char * NID_RBC_to_string(const void* pValue) {
	if (pSimNID_RBCVTable != 0 && pSimNID_RBCVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_RBCVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_RBC(const char* strValue, void* pValue) {
	if (pSimNID_RBCVTable != 0 && pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_RBC rTemp;
		int nResult = pSimNID_RBCVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_RBC*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_RBC_allow_double_convertion() {
	if (pSimNID_RBCVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_RBC_to_double(double * nValue, const void* pValue) {
	if (pSimNID_RBCVTable != 0) {
		if (pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_RBCVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_RBCVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_RBCVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_RBCVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_RBCVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_RBC_string(const char* strValue) {
	static NID_RBC rTemp;
	return string_to_NID_RBC(strValue, &rTemp);
}


/****************************************************************
 ** NID_RADIO
 ****************************************************************/
struct SimTypeVTable* pSimNID_RADIOVTable;
const char * NID_RADIO_to_string(const void* pValue) {
	if (pSimNID_RADIOVTable != 0 && pSimNID_RADIOVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_RADIOVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_RADIO(const char* strValue, void* pValue) {
	if (pSimNID_RADIOVTable != 0 && pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_RADIO rTemp;
		int nResult = pSimNID_RADIOVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_RADIO*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_RADIO_allow_double_convertion() {
	if (pSimNID_RADIOVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_RADIO_to_double(double * nValue, const void* pValue) {
	if (pSimNID_RADIOVTable != 0) {
		if (pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_RADIOVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_RADIOVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_RADIOVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_RADIOVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_RADIOVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_RADIO_string(const char* strValue) {
	static NID_RADIO rTemp;
	return string_to_NID_RADIO(strValue, &rTemp);
}


/****************************************************************
 ** Q_SLEEPSESSION
 ****************************************************************/
struct SimTypeVTable* pSimQ_SLEEPSESSIONVTable;
const char * Q_SLEEPSESSION_to_string(const void* pValue) {
	if (pSimQ_SLEEPSESSIONVTable != 0 && pSimQ_SLEEPSESSIONVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimQ_SLEEPSESSIONVTable->m_pfnToType(SptString, pValue);
	switch (*((Q_SLEEPSESSION*)pValue)) {
	case Q_SLEEPSESSION_Ignore_session_establishment_order:
		return "Q_SLEEPSESSION_Ignore_session_establishment_order";
	case Q_SLEEPSESSION_Execute_session_establishment_order:
		return "Q_SLEEPSESSION_Execute_session_establishment_order";
	default:
		return "?";
	}
}

int string_to_Q_SLEEPSESSION(const char* strValue, void* pValue) {
	if (pSimQ_SLEEPSESSIONVTable != 0 && pSimQ_SLEEPSESSIONVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		Q_SLEEPSESSION rTemp;		int nResult = pSimQ_SLEEPSESSIONVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Q_SLEEPSESSION*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Q_SLEEPSESSION_Ignore_session_establishment_order") == 0)
		*((Q_SLEEPSESSION*)pValue) = Q_SLEEPSESSION_Ignore_session_establishment_order;
	else if(strcmp(strValue, "Q_SLEEPSESSION_Execute_session_establishment_order") == 0)
		*((Q_SLEEPSESSION*)pValue) = Q_SLEEPSESSION_Execute_session_establishment_order;
	else 
		return 0;
	return 1;
}

int is_Q_SLEEPSESSION_allow_double_convertion() {
	return 1;
}


int Q_SLEEPSESSION_to_double(double * nValue, const void* pValue) {
	switch (*((Q_SLEEPSESSION*)pValue)) {
	case Q_SLEEPSESSION_Ignore_session_establishment_order:
		*nValue = 0.0;
		break;
	case Q_SLEEPSESSION_Execute_session_establishment_order:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_Q_SLEEPSESSION_type(int* pResult, const char* toCompare, const void* pValue) {
	static Q_SLEEPSESSION rTemp;
	const Q_SLEEPSESSION* pCurrent = (const Q_SLEEPSESSION*)pValue;
	if (string_to_Q_SLEEPSESSION(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_Q_SLEEPSESSION_signature() {
	return "E"
		"|Q_SLEEPSESSION_Ignore_session_establishment_order"
		"|Q_SLEEPSESSION_Execute_session_establishment_order"
		;
}

int check_Q_SLEEPSESSION_string(const char* strValue) {
	static Q_SLEEPSESSION rTemp;
	return string_to_Q_SLEEPSESSION(strValue, &rTemp);
}


/****************************************************************
 ** NID_MN
 ****************************************************************/
struct SimTypeVTable* pSimNID_MNVTable;
const char * NID_MN_to_string(const void* pValue) {
	if (pSimNID_MNVTable != 0 && pSimNID_MNVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimNID_MNVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_NID_MN(const char* strValue, void* pValue) {
	if (pSimNID_MNVTable != 0 && pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static NID_MN rTemp;
		int nResult = pSimNID_MNVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((NID_MN*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_NID_MN_allow_double_convertion() {
	if (pSimNID_MNVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int NID_MN_to_double(double * nValue, const void* pValue) {
	if (pSimNID_MNVTable != 0) {
		if (pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimNID_MNVTable->m_pfnToType(SptLong, pValue));
		else if (pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimNID_MNVTable->m_pfnToType(SptShort, pValue));
		else if (pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimNID_MNVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimNID_MNVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimNID_MNVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_NID_MN_string(const char* strValue) {
	static NID_MN rTemp;
	return string_to_NID_MN(strValue, &rTemp);
}


/****************************************************************
 ** M_LEVEL
 ****************************************************************/
struct SimTypeVTable* pSimM_LEVELVTable;
const char * M_LEVEL_to_string(const void* pValue) {
	if (pSimM_LEVELVTable != 0 && pSimM_LEVELVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimM_LEVELVTable->m_pfnToType(SptString, pValue);
	switch (*((M_LEVEL*)pValue)) {
	case M_LEVEL_Level_0:
		return "M_LEVEL_Level_0";
	case M_LEVEL_Level_NTC_specified_by_NID_NTC:
		return "M_LEVEL_Level_NTC_specified_by_NID_NTC";
	case M_LEVEL_Level_1:
		return "M_LEVEL_Level_1";
	case M_LEVEL_Level_2:
		return "M_LEVEL_Level_2";
	case M_LEVEL_Level_3:
		return "M_LEVEL_Level_3";
	default:
		return "?";
	}
}

int string_to_M_LEVEL(const char* strValue, void* pValue) {
	if (pSimM_LEVELVTable != 0 && pSimM_LEVELVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		M_LEVEL rTemp;		int nResult = pSimM_LEVELVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((M_LEVEL*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "M_LEVEL_Level_0") == 0)
		*((M_LEVEL*)pValue) = M_LEVEL_Level_0;
	else if(strcmp(strValue, "M_LEVEL_Level_NTC_specified_by_NID_NTC") == 0)
		*((M_LEVEL*)pValue) = M_LEVEL_Level_NTC_specified_by_NID_NTC;
	else if(strcmp(strValue, "M_LEVEL_Level_1") == 0)
		*((M_LEVEL*)pValue) = M_LEVEL_Level_1;
	else if(strcmp(strValue, "M_LEVEL_Level_2") == 0)
		*((M_LEVEL*)pValue) = M_LEVEL_Level_2;
	else if(strcmp(strValue, "M_LEVEL_Level_3") == 0)
		*((M_LEVEL*)pValue) = M_LEVEL_Level_3;
	else 
		return 0;
	return 1;
}

int is_M_LEVEL_allow_double_convertion() {
	return 1;
}


int M_LEVEL_to_double(double * nValue, const void* pValue) {
	switch (*((M_LEVEL*)pValue)) {
	case M_LEVEL_Level_0:
		*nValue = 0.0;
		break;
	case M_LEVEL_Level_NTC_specified_by_NID_NTC:
		*nValue = 1.0;
		break;
	case M_LEVEL_Level_1:
		*nValue = 2.0;
		break;
	case M_LEVEL_Level_2:
		*nValue = 3.0;
		break;
	case M_LEVEL_Level_3:
		*nValue = 4.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_M_LEVEL_type(int* pResult, const char* toCompare, const void* pValue) {
	static M_LEVEL rTemp;
	const M_LEVEL* pCurrent = (const M_LEVEL*)pValue;
	if (string_to_M_LEVEL(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_M_LEVEL_signature() {
	return "E"
		"|M_LEVEL_Level_0"
		"|M_LEVEL_Level_NTC_specified_by_NID_NTC"
		"|M_LEVEL_Level_1"
		"|M_LEVEL_Level_2"
		"|M_LEVEL_Level_3"
		;
}

int check_M_LEVEL_string(const char* strValue) {
	static M_LEVEL rTemp;
	return string_to_M_LEVEL(strValue, &rTemp);
}


/****************************************************************
 ** ReceivedBG_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimReceivedBG_CheckBGInputChannel_PkgVTable;
const char * ReceivedBG_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != 0 && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18424_to_string(pValue);
}

int string_to_ReceivedBG_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != 0 && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ReceivedBG_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18424(&(*((ReceivedBG_CheckBGInputChannel_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18424(strValue, pValue);
}

int is_ReceivedBG_CheckBGInputChannel_Pkg_allow_double_convertion() {
	if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18424_allow_double_convertion();
}

int ReceivedBG_CheckBGInputChannel_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != 0) {
		if (pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18424_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18424_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_ReceivedBG_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static ReceivedBG_CheckBGInputChannel_Pkg rTemp;
	return string_to_ReceivedBG_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Completeness_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompleteness_CheckBGInputChannel_PkgVTable;
const char * Completeness_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimCompleteness_CheckBGInputChannel_PkgVTable != 0 && pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return kcg_bool_to_string(pValue);
}

int string_to_Completeness_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimCompleteness_CheckBGInputChannel_PkgVTable != 0 && pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Completeness_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Completeness_CheckBGInputChannel_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_bool(strValue, pValue);
}

int is_Completeness_CheckBGInputChannel_Pkg_allow_double_convertion() {
	if (pSimCompleteness_CheckBGInputChannel_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_bool_allow_double_convertion();
}

int Completeness_CheckBGInputChannel_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimCompleteness_CheckBGInputChannel_PkgVTable != 0) {
		if (pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompleteness_CheckBGInputChannel_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_bool_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_bool_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Completeness_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static Completeness_CheckBGInputChannel_Pkg rTemp;
	return string_to_Completeness_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Consistency_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimConsistency_CheckBGInputChannel_PkgVTable;
const char * Consistency_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimConsistency_CheckBGInputChannel_PkgVTable != 0 && pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return kcg_bool_to_string(pValue);
}

int string_to_Consistency_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimConsistency_CheckBGInputChannel_PkgVTable != 0 && pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Consistency_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Consistency_CheckBGInputChannel_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_bool(strValue, pValue);
}

int is_Consistency_CheckBGInputChannel_Pkg_allow_double_convertion() {
	if (pSimConsistency_CheckBGInputChannel_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_bool_allow_double_convertion();
}

int Consistency_CheckBGInputChannel_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimConsistency_CheckBGInputChannel_PkgVTable != 0) {
		if (pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimConsistency_CheckBGInputChannel_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_bool_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_bool_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Consistency_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static Consistency_CheckBGInputChannel_Pkg rTemp;
	return string_to_Consistency_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** ReceivedBGs_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimReceivedBGs_CheckBGInputChannel_PkgVTable;
const char * ReceivedBGs_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != 0 && pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18435_to_string(pValue);
}

int string_to_ReceivedBGs_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != 0 && pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ReceivedBGs_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18435(&(*((ReceivedBGs_CheckBGInputChannel_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18435(strValue, pValue);
}

int is_ReceivedBGs_CheckBGInputChannel_Pkg_allow_double_convertion() {
	if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18435_allow_double_convertion();
}

int ReceivedBGs_CheckBGInputChannel_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != 0) {
		if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18435_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18435_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_ReceivedBGs_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static ReceivedBGs_CheckBGInputChannel_Pkg rTemp;
	return string_to_ReceivedBGs_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** checkedBG_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimcheckedBG_CheckBGInputChannel_PkgVTable;
const char * checkedBG_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != 0 && pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18414_to_string(pValue);
}

int string_to_checkedBG_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != 0 && pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static checkedBG_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18414(&(*((checkedBG_CheckBGInputChannel_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18414(strValue, pValue);
}

int is_checkedBG_CheckBGInputChannel_Pkg_allow_double_convertion() {
	if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18414_allow_double_convertion();
}

int checkedBG_CheckBGInputChannel_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimcheckedBG_CheckBGInputChannel_PkgVTable != 0) {
		if (pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimcheckedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18414_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18414_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_checkedBG_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static checkedBG_CheckBGInputChannel_Pkg rTemp;
	return string_to_checkedBG_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** delaytime_T_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimdelaytime_T_CheckBGInputChannel_PkgVTable;
const char * delaytime_T_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != 0 && pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_delaytime_T_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != 0 && pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static delaytime_T_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((delaytime_T_CheckBGInputChannel_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_delaytime_T_CheckBGInputChannel_Pkg_allow_double_convertion() {
	if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int delaytime_T_CheckBGInputChannel_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable != 0) {
		if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimdelaytime_T_CheckBGInputChannel_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_delaytime_T_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static delaytime_T_CheckBGInputChannel_Pkg rTemp;
	return string_to_delaytime_T_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** outBGchecks_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimoutBGchecks_CheckBGInputChannel_PkgVTable;
const char * outBGchecks_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != 0 && pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18432_to_string(pValue);
}

int string_to_outBGchecks_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != 0 && pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static outBGchecks_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18432(&(*((outBGchecks_CheckBGInputChannel_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18432(strValue, pValue);
}

int is_outBGchecks_CheckBGInputChannel_Pkg_allow_double_convertion() {
	if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18432_allow_double_convertion();
}

int outBGchecks_CheckBGInputChannel_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable != 0) {
		if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimoutBGchecks_CheckBGInputChannel_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18432_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18432_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_outBGchecks_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static outBGchecks_CheckBGInputChannel_Pkg rTemp;
	return string_to_outBGchecks_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** BGCollector_T_Receive_TrackSide_Msg_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable;
const char * BGCollector_T_Receive_TrackSide_Msg_Pkg_to_string(const void* pValue) {
	if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != 0 && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18391_to_string(pValue);
}

int string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != 0 && pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BGCollector_T_Receive_TrackSide_Msg_Pkg rTemp;
		int nResult = pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18391(&(*((BGCollector_T_Receive_TrackSide_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18391(strValue, pValue);
}

int is_BGCollector_T_Receive_TrackSide_Msg_Pkg_allow_double_convertion() {
	if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18391_allow_double_convertion();
}

int BGCollector_T_Receive_TrackSide_Msg_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable != 0) {
		if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBGCollector_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18391_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18391_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BGCollector_T_Receive_TrackSide_Msg_Pkg_string(const char* strValue) {
	static BGCollector_T_Receive_TrackSide_Msg_Pkg rTemp;
	return string_to_BGCollector_T_Receive_TrackSide_Msg_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** TelegramStore_T_Receive_TrackSide_Msg_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable;
const char * TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_string(const void* pValue) {
	if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != 0 && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18402_to_string(pValue);
}

int string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != 0 && pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TelegramStore_T_Receive_TrackSide_Msg_Pkg rTemp;
		int nResult = pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18402(&(*((TelegramStore_T_Receive_TrackSide_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18402(strValue, pValue);
}

int is_TelegramStore_T_Receive_TrackSide_Msg_Pkg_allow_double_convertion() {
	if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18402_allow_double_convertion();
}

int TelegramStore_T_Receive_TrackSide_Msg_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable != 0) {
		if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTelegramStore_T_Receive_TrackSide_Msg_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18402_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18402_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TelegramStore_T_Receive_TrackSide_Msg_Pkg_string(const char* strValue) {
	static TelegramStore_T_Receive_TrackSide_Msg_Pkg rTemp;
	return string_to_TelegramStore_T_Receive_TrackSide_Msg_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** MsgSource_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMsgSource_T_Common_Types_PkgVTable;
const char * MsgSource_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMsgSource_T_Common_Types_PkgVTable != 0 && pSimMsgSource_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMsgSource_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	switch (*((MsgSource_T_Common_Types_Pkg*)pValue)) {
	case msrc_undefined_Common_Types_Pkg:
		return "Common_Types_Pkg::msrc_undefined";
	case msrc_Euroradio_Common_Types_Pkg:
		return "Common_Types_Pkg::msrc_Euroradio";
	case msrc_Eurobalise_Common_Types_Pkg:
		return "Common_Types_Pkg::msrc_Eurobalise";
	case msrc_RadioInfillUnit_Common_Types_Pkg:
		return "Common_Types_Pkg::msrc_RadioInfillUnit";
	case msrc_OBU_Common_Types_Pkg:
		return "Common_Types_Pkg::msrc_OBU";
	default:
		return "?";
	}
}

int string_to_MsgSource_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMsgSource_T_Common_Types_PkgVTable != 0 && pSimMsgSource_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		MsgSource_T_Common_Types_Pkg rTemp;		int nResult = pSimMsgSource_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((MsgSource_T_Common_Types_Pkg*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "msrc_undefined") == 0 || strcmp(strValue, "Common_Types_Pkg::msrc_undefined") == 0)
		*((MsgSource_T_Common_Types_Pkg*)pValue) = msrc_undefined_Common_Types_Pkg;
	else if(strcmp(strValue, "msrc_Euroradio") == 0 || strcmp(strValue, "Common_Types_Pkg::msrc_Euroradio") == 0)
		*((MsgSource_T_Common_Types_Pkg*)pValue) = msrc_Euroradio_Common_Types_Pkg;
	else if(strcmp(strValue, "msrc_Eurobalise") == 0 || strcmp(strValue, "Common_Types_Pkg::msrc_Eurobalise") == 0)
		*((MsgSource_T_Common_Types_Pkg*)pValue) = msrc_Eurobalise_Common_Types_Pkg;
	else if(strcmp(strValue, "msrc_RadioInfillUnit") == 0 || strcmp(strValue, "Common_Types_Pkg::msrc_RadioInfillUnit") == 0)
		*((MsgSource_T_Common_Types_Pkg*)pValue) = msrc_RadioInfillUnit_Common_Types_Pkg;
	else if(strcmp(strValue, "msrc_OBU") == 0 || strcmp(strValue, "Common_Types_Pkg::msrc_OBU") == 0)
		*((MsgSource_T_Common_Types_Pkg*)pValue) = msrc_OBU_Common_Types_Pkg;
	else 
		return 0;
	return 1;
}

int is_MsgSource_T_Common_Types_Pkg_allow_double_convertion() {
	return 1;
}


int MsgSource_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	switch (*((MsgSource_T_Common_Types_Pkg*)pValue)) {
	case msrc_undefined_Common_Types_Pkg:
		*nValue = 0.0;
		break;
	case msrc_Euroradio_Common_Types_Pkg:
		*nValue = 1.0;
		break;
	case msrc_Eurobalise_Common_Types_Pkg:
		*nValue = 2.0;
		break;
	case msrc_RadioInfillUnit_Common_Types_Pkg:
		*nValue = 3.0;
		break;
	case msrc_OBU_Common_Types_Pkg:
		*nValue = 4.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_MsgSource_T_Common_Types_Pkg_type(int* pResult, const char* toCompare, const void* pValue) {
	static MsgSource_T_Common_Types_Pkg rTemp;
	const MsgSource_T_Common_Types_Pkg* pCurrent = (const MsgSource_T_Common_Types_Pkg*)pValue;
	if (string_to_MsgSource_T_Common_Types_Pkg(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_MsgSource_T_Common_Types_Pkg_signature() {
	return "E"
		"|Common_Types_Pkg::msrc_undefined"
		"|Common_Types_Pkg::msrc_Euroradio"
		"|Common_Types_Pkg::msrc_Eurobalise"
		"|Common_Types_Pkg::msrc_RadioInfillUnit"
		"|Common_Types_Pkg::msrc_OBU"
		;
}

int check_MsgSource_T_Common_Types_Pkg_string(const char* strValue) {
	static MsgSource_T_Common_Types_Pkg rTemp;
	return string_to_MsgSource_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPackets_T_Common_Types_PkgVTable;
const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18125_to_string(pValue);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPackets_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18125(&(*((CompressedPackets_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18125(strValue, pValue);
}

int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18125_allow_double_convertion();
}

int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0) {
		if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18125_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18125_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPackets_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPackets_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadata_T_Common_Types_PkgVTable;
const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18122_to_string(pValue);
}

int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Metadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18122(&(*((Metadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18122(strValue, pValue);
}

int is_Metadata_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18122_allow_double_convertion();
}

int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0) {
		if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18122_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18122_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Metadata_T_Common_Types_Pkg_string(const char* strValue) {
	static Metadata_T_Common_Types_Pkg rTemp;
	return string_to_Metadata_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMetadataElement_T_Common_Types_PkgVTable;
const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18114_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18114(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18114(strValue, pValue);
}

int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18114_allow_double_convertion();
}

int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0) {
		if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18114_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18114_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue) {
	static MetadataElement_T_Common_Types_Pkg rTemp;
	return string_to_MetadataElement_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPacketData_T_Common_Types_PkgVTable;
const char * CompressedPacketData_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0 && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array_int_500_to_string(pValue);
}

int string_to_CompressedPacketData_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0 && pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPacketData_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_500(&(*((CompressedPacketData_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_500(strValue, pValue);
}

int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_500_allow_double_convertion();
}

int CompressedPacketData_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedPacketData_T_Common_Types_PkgVTable != 0) {
		if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedPacketData_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_500_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_500_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedPacketData_T_Common_Types_Pkg_string(const char* strValue) {
	static CompressedPacketData_T_Common_Types_Pkg rTemp;
	return string_to_CompressedPacketData_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** TrackSide_ForCheck_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimTrackSide_ForCheck_T_Common_Types_PkgVTable;
const char * TrackSide_ForCheck_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != 0 && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18383_to_string(pValue);
}

int string_to_TrackSide_ForCheck_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != 0 && pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TrackSide_ForCheck_T_Common_Types_Pkg rTemp;
		int nResult = pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18383(&(*((TrackSide_ForCheck_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18383(strValue, pValue);
}

int is_TrackSide_ForCheck_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18383_allow_double_convertion();
}

int TrackSide_ForCheck_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable != 0) {
		if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTrackSide_ForCheck_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18383_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18383_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TrackSide_ForCheck_T_Common_Types_Pkg_string(const char* strValue) {
	static TrackSide_ForCheck_T_Common_Types_Pkg rTemp;
	return string_to_TrackSide_ForCheck_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** RadioMetadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimRadioMetadata_T_Common_Types_PkgVTable;
const char * RadioMetadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimRadioMetadata_T_Common_Types_PkgVTable != 0 && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18231_to_string(pValue);
}

int string_to_RadioMetadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimRadioMetadata_T_Common_Types_PkgVTable != 0 && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static RadioMetadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18231(&(*((RadioMetadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18231(strValue, pValue);
}

int is_RadioMetadata_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimRadioMetadata_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18231_allow_double_convertion();
}

int RadioMetadata_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimRadioMetadata_T_Common_Types_PkgVTable != 0) {
		if (pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18231_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18231_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_RadioMetadata_T_Common_Types_Pkg_string(const char* strValue) {
	static RadioMetadata_T_Common_Types_Pkg rTemp;
	return string_to_RadioMetadata_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** ReceivedMessage_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimReceivedMessage_T_Common_Types_PkgVTable;
const char * ReceivedMessage_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimReceivedMessage_T_Common_Types_PkgVTable != 0 && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18334_to_string(pValue);
}

int string_to_ReceivedMessage_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimReceivedMessage_T_Common_Types_PkgVTable != 0 && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ReceivedMessage_T_Common_Types_Pkg rTemp;
		int nResult = pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18334(&(*((ReceivedMessage_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18334(strValue, pValue);
}

int is_ReceivedMessage_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimReceivedMessage_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18334_allow_double_convertion();
}

int ReceivedMessage_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimReceivedMessage_T_Common_Types_PkgVTable != 0) {
		if (pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18334_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18334_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_ReceivedMessage_T_Common_Types_Pkg_string(const char* strValue) {
	static ReceivedMessage_T_Common_Types_Pkg rTemp;
	return string_to_ReceivedMessage_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** PositionReportParameter_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimPositionReportParameter_T_Common_Types_PkgVTable;
const char * PositionReportParameter_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimPositionReportParameter_T_Common_Types_PkgVTable != 0 && pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18327_to_string(pValue);
}

int string_to_PositionReportParameter_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimPositionReportParameter_T_Common_Types_PkgVTable != 0 && pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static PositionReportParameter_T_Common_Types_Pkg rTemp;
		int nResult = pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18327(&(*((PositionReportParameter_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18327(strValue, pValue);
}

int is_PositionReportParameter_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimPositionReportParameter_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18327_allow_double_convertion();
}

int PositionReportParameter_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimPositionReportParameter_T_Common_Types_PkgVTable != 0) {
		if (pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimPositionReportParameter_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18327_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18327_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_PositionReportParameter_T_Common_Types_Pkg_string(const char* strValue) {
	static PositionReportParameter_T_Common_Types_Pkg rTemp;
	return string_to_PositionReportParameter_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** radioManagementMessage_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimradioManagementMessage_T_Common_Types_PkgVTable;
const char * radioManagementMessage_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimradioManagementMessage_T_Common_Types_PkgVTable != 0 && pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18298_to_string(pValue);
}

int string_to_radioManagementMessage_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimradioManagementMessage_T_Common_Types_PkgVTable != 0 && pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static radioManagementMessage_T_Common_Types_Pkg rTemp;
		int nResult = pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18298(&(*((radioManagementMessage_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18298(strValue, pValue);
}

int is_radioManagementMessage_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimradioManagementMessage_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18298_allow_double_convertion();
}

int radioManagementMessage_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimradioManagementMessage_T_Common_Types_PkgVTable != 0) {
		if (pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimradioManagementMessage_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18298_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18298_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_radioManagementMessage_T_Common_Types_Pkg_string(const char* strValue) {
	static radioManagementMessage_T_Common_Types_Pkg rTemp;
	return string_to_radioManagementMessage_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** MSG_Errors_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimMSG_Errors_T_Common_Types_PkgVTable;
const char * MSG_Errors_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimMSG_Errors_T_Common_Types_PkgVTable != 0 && pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18272_to_string(pValue);
}

int string_to_MSG_Errors_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMSG_Errors_T_Common_Types_PkgVTable != 0 && pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MSG_Errors_T_Common_Types_Pkg rTemp;
		int nResult = pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18272(&(*((MSG_Errors_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18272(strValue, pValue);
}

int is_MSG_Errors_T_Common_Types_Pkg_allow_double_convertion() {
	if (pSimMSG_Errors_T_Common_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18272_allow_double_convertion();
}

int MSG_Errors_T_Common_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimMSG_Errors_T_Common_Types_PkgVTable != 0) {
		if (pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimMSG_Errors_T_Common_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18272_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18272_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_MSG_Errors_T_Common_Types_Pkg_string(const char* strValue) {
	static MSG_Errors_T_Common_Types_Pkg rTemp;
	return string_to_MSG_Errors_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** centerOfBalisePosition_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimcenterOfBalisePosition_T_BG_Types_PkgVTable;
const char * centerOfBalisePosition_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != 0 && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18250_to_string(pValue);
}

int string_to_centerOfBalisePosition_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != 0 && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static centerOfBalisePosition_T_BG_Types_Pkg rTemp;
		int nResult = pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18250(&(*((centerOfBalisePosition_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18250(strValue, pValue);
}

int is_centerOfBalisePosition_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18250_allow_double_convertion();
}

int centerOfBalisePosition_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != 0) {
		if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18250_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18250_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_centerOfBalisePosition_T_BG_Types_Pkg_string(const char* strValue) {
	static centerOfBalisePosition_T_BG_Types_Pkg rTemp;
	return string_to_centerOfBalisePosition_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** TelegramArray_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimTelegramArray_T_BG_Types_PkgVTable;
const char * TelegramArray_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimTelegramArray_T_BG_Types_PkgVTable != 0 && pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18365_to_string(pValue);
}

int string_to_TelegramArray_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimTelegramArray_T_BG_Types_PkgVTable != 0 && pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TelegramArray_T_BG_Types_Pkg rTemp;
		int nResult = pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18365(&(*((TelegramArray_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18365(strValue, pValue);
}

int is_TelegramArray_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimTelegramArray_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18365_allow_double_convertion();
}

int TelegramArray_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimTelegramArray_T_BG_Types_PkgVTable != 0) {
		if (pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTelegramArray_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18365_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18365_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TelegramArray_T_BG_Types_Pkg_string(const char* strValue) {
	static TelegramArray_T_BG_Types_Pkg rTemp;
	return string_to_TelegramArray_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Telegram_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimTelegram_T_BG_Types_PkgVTable;
const char * Telegram_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimTelegram_T_BG_Types_PkgVTable != 0 && pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTelegram_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18358_to_string(pValue);
}

int string_to_Telegram_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimTelegram_T_BG_Types_PkgVTable != 0 && pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Telegram_T_BG_Types_Pkg rTemp;
		int nResult = pSimTelegram_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18358(&(*((Telegram_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18358(strValue, pValue);
}

int is_Telegram_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimTelegram_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18358_allow_double_convertion();
}

int Telegram_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimTelegram_T_BG_Types_PkgVTable != 0) {
		if (pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTelegram_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTelegram_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTelegram_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTelegram_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTelegram_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18358_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18358_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Telegram_T_BG_Types_Pkg_string(const char* strValue) {
	static Telegram_T_BG_Types_Pkg rTemp;
	return string_to_Telegram_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimTelegramHeader_T_BG_Types_PkgVTable;
const char * TelegramHeader_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0 && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18194_to_string(pValue);
}

int string_to_TelegramHeader_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0 && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TelegramHeader_T_BG_Types_Pkg rTemp;
		int nResult = pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18194(&(*((TelegramHeader_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18194(strValue, pValue);
}

int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18194_allow_double_convertion();
}

int TelegramHeader_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0) {
		if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18194_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18194_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TelegramHeader_T_BG_Types_Pkg_string(const char* strValue) {
	static TelegramHeader_T_BG_Types_Pkg rTemp;
	return string_to_TelegramHeader_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** BG_Message_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimBG_Message_T_BG_Types_PkgVTable;
const char * BG_Message_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimBG_Message_T_BG_Types_PkgVTable != 0 && pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBG_Message_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18376_to_string(pValue);
}

int string_to_BG_Message_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimBG_Message_T_BG_Types_PkgVTable != 0 && pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BG_Message_T_BG_Types_Pkg rTemp;
		int nResult = pSimBG_Message_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18376(&(*((BG_Message_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18376(strValue, pValue);
}

int is_BG_Message_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimBG_Message_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18376_allow_double_convertion();
}

int BG_Message_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimBG_Message_T_BG_Types_PkgVTable != 0) {
		if (pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBG_Message_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBG_Message_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBG_Message_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBG_Message_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBG_Message_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18376_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18376_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BG_Message_T_BG_Types_Pkg_string(const char* strValue) {
	static BG_Message_T_BG_Types_Pkg rTemp;
	return string_to_BG_Message_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** BG_Header_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimBG_Header_T_BG_Types_PkgVTable;
const char * BG_Header_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimBG_Header_T_BG_Types_PkgVTable != 0 && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18043_to_string(pValue);
}

int string_to_BG_Header_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimBG_Header_T_BG_Types_PkgVTable != 0 && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BG_Header_T_BG_Types_Pkg rTemp;
		int nResult = pSimBG_Header_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18043(&(*((BG_Header_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18043(strValue, pValue);
}

int is_BG_Header_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimBG_Header_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18043_allow_double_convertion();
}

int BG_Header_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimBG_Header_T_BG_Types_PkgVTable != 0) {
		if (pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18043_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18043_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BG_Header_T_BG_Types_Pkg_string(const char* strValue) {
	static BG_Header_T_BG_Types_Pkg rTemp;
	return string_to_BG_Header_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** LinkedBG_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLinkedBG_T_BG_Types_PkgVTable;
const char * LinkedBG_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0 && pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__17994_to_string(pValue);
}

int string_to_LinkedBG_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0 && pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LinkedBG_T_BG_Types_Pkg rTemp;
		int nResult = pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__17994(&(*((LinkedBG_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__17994(strValue, pValue);
}

int is_LinkedBG_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__17994_allow_double_convertion();
}

int LinkedBG_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimLinkedBG_T_BG_Types_PkgVTable != 0) {
		if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLinkedBG_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__17994_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__17994_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LinkedBG_T_BG_Types_Pkg_string(const char* strValue) {
	static LinkedBG_T_BG_Types_Pkg rTemp;
	return string_to_LinkedBG_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** passedBG_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimpassedBG_T_BG_Types_PkgVTable;
const char * passedBG_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimpassedBG_T_BG_Types_PkgVTable != 0 && pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimpassedBG_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18061_to_string(pValue);
}

int string_to_passedBG_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimpassedBG_T_BG_Types_PkgVTable != 0 && pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static passedBG_T_BG_Types_Pkg rTemp;
		int nResult = pSimpassedBG_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18061(&(*((passedBG_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18061(strValue, pValue);
}

int is_passedBG_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimpassedBG_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18061_allow_double_convertion();
}

int passedBG_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimpassedBG_T_BG_Types_PkgVTable != 0) {
		if (pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimpassedBG_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimpassedBG_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimpassedBG_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimpassedBG_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimpassedBG_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18061_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18061_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_passedBG_T_BG_Types_Pkg_string(const char* strValue) {
	static passedBG_T_BG_Types_Pkg rTemp;
	return string_to_passedBG_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** LinkedBGs_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLinkedBGs_T_BG_Types_PkgVTable;
const char * LinkedBGs_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0 && pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18017_to_string(pValue);
}

int string_to_LinkedBGs_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0 && pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LinkedBGs_T_BG_Types_Pkg rTemp;
		int nResult = pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18017(&(*((LinkedBGs_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18017(strValue, pValue);
}

int is_LinkedBGs_T_BG_Types_Pkg_allow_double_convertion() {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18017_allow_double_convertion();
}

int LinkedBGs_T_BG_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimLinkedBGs_T_BG_Types_PkgVTable != 0) {
		if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLinkedBGs_T_BG_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18017_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18017_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LinkedBGs_T_BG_Types_Pkg_string(const char* strValue) {
	static LinkedBGs_T_BG_Types_Pkg rTemp;
	return string_to_LinkedBGs_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** odometry_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimodometry_T_Obu_BasicTypes_PkgVTable;
const char * odometry_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimodometry_T_Obu_BasicTypes_PkgVTable != 0 && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18033_to_string(pValue);
}

int string_to_odometry_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimodometry_T_Obu_BasicTypes_PkgVTable != 0 && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static odometry_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18033(&(*((odometry_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18033(strValue, pValue);
}

int is_odometry_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimodometry_T_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18033_allow_double_convertion();
}

int odometry_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimodometry_T_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18033_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18033_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_odometry_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static odometry_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_odometry_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimT_internal_Type_Obu_BasicTypes_PkgVTable;
const char * T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static T_internal_Type_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((T_internal_Type_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_T_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int T_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimT_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static T_internal_Type_Obu_BasicTypes_Pkg rTemp;
	return string_to_T_internal_Type_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable;
const char * OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != 0 && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18027_to_string(pValue);
}

int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != 0 && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static OdometryLocations_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18027(&(*((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18027(strValue, pValue);
}

int is_OdometryLocations_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18027_allow_double_convertion();
}

int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18027_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18027_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_OdometryLocations_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static OdometryLocations_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimL_internal_Type_Obu_BasicTypes_PkgVTable;
const char * L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static L_internal_Type_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((L_internal_Type_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int L_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimL_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static L_internal_Type_Obu_BasicTypes_Pkg rTemp;
	return string_to_L_internal_Type_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable;
const char * OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != 0 && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18020_to_string(pValue);
}

int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != 0 && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static OdometrySpeeds_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18020(&(*((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18020(strValue, pValue);
}

int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18020_allow_double_convertion();
}

int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18020_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18020_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static OdometrySpeeds_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimV_internal_Type_Obu_BasicTypes_PkgVTable;
const char * V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static V_internal_Type_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((V_internal_Type_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_V_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int V_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimV_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static V_internal_Type_Obu_BasicTypes_Pkg rTemp;
	return string_to_V_internal_Type_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** A_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimA_internal_Type_Obu_BasicTypes_PkgVTable;
const char * A_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return kcg_int_to_string(pValue);
}

int string_to_A_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != 0 && pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static A_internal_Type_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((A_internal_Type_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_kcg_int(strValue, pValue);
}

int is_A_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_kcg_int_allow_double_convertion();
}

int A_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimA_internal_Type_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_kcg_int_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_kcg_int_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_A_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static A_internal_Type_Obu_BasicTypes_Pkg rTemp;
	return string_to_A_internal_Type_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** odoMotionState_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimodoMotionState_T_Obu_BasicTypes_PkgVTable;
const char * odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != 0 && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	switch (*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue)) {
	case noMotion_Obu_BasicTypes_Pkg:
		return "Obu_BasicTypes_Pkg::noMotion";
	case Motion_Obu_BasicTypes_Pkg:
		return "Obu_BasicTypes_Pkg::Motion";
	default:
		return "?";
	}
}

int string_to_odoMotionState_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimodoMotionState_T_Obu_BasicTypes_PkgVTable != 0 && pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		odoMotionState_T_Obu_BasicTypes_Pkg rTemp;		int nResult = pSimodoMotionState_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "noMotion") == 0 || strcmp(strValue, "Obu_BasicTypes_Pkg::noMotion") == 0)
		*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue) = noMotion_Obu_BasicTypes_Pkg;
	else if(strcmp(strValue, "Motion") == 0 || strcmp(strValue, "Obu_BasicTypes_Pkg::Motion") == 0)
		*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue) = Motion_Obu_BasicTypes_Pkg;
	else 
		return 0;
	return 1;
}

int is_odoMotionState_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	return 1;
}


int odoMotionState_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	switch (*((odoMotionState_T_Obu_BasicTypes_Pkg*)pValue)) {
	case noMotion_Obu_BasicTypes_Pkg:
		*nValue = 0.0;
		break;
	case Motion_Obu_BasicTypes_Pkg:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_odoMotionState_T_Obu_BasicTypes_Pkg_type(int* pResult, const char* toCompare, const void* pValue) {
	static odoMotionState_T_Obu_BasicTypes_Pkg rTemp;
	const odoMotionState_T_Obu_BasicTypes_Pkg* pCurrent = (const odoMotionState_T_Obu_BasicTypes_Pkg*)pValue;
	if (string_to_odoMotionState_T_Obu_BasicTypes_Pkg(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_odoMotionState_T_Obu_BasicTypes_Pkg_signature() {
	return "E"
		"|Obu_BasicTypes_Pkg::noMotion"
		"|Obu_BasicTypes_Pkg::Motion"
		;
}

int check_odoMotionState_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static odoMotionState_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_odoMotionState_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** odoMotionDirection_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable;
const char * odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != 0 && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	switch (*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue)) {
	case unknownDirection_Obu_BasicTypes_Pkg:
		return "Obu_BasicTypes_Pkg::unknownDirection";
	case cabAFirst_Obu_BasicTypes_Pkg:
		return "Obu_BasicTypes_Pkg::cabAFirst";
	case cabBFirst_Obu_BasicTypes_Pkg:
		return "Obu_BasicTypes_Pkg::cabBFirst";
	default:
		return "?";
	}
}

int string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable != 0 && pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		odoMotionDirection_T_Obu_BasicTypes_Pkg rTemp;		int nResult = pSimodoMotionDirection_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "unknownDirection") == 0 || strcmp(strValue, "Obu_BasicTypes_Pkg::unknownDirection") == 0)
		*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue) = unknownDirection_Obu_BasicTypes_Pkg;
	else if(strcmp(strValue, "cabAFirst") == 0 || strcmp(strValue, "Obu_BasicTypes_Pkg::cabAFirst") == 0)
		*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue) = cabAFirst_Obu_BasicTypes_Pkg;
	else if(strcmp(strValue, "cabBFirst") == 0 || strcmp(strValue, "Obu_BasicTypes_Pkg::cabBFirst") == 0)
		*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue) = cabBFirst_Obu_BasicTypes_Pkg;
	else 
		return 0;
	return 1;
}

int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	return 1;
}


int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	switch (*((odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue)) {
	case unknownDirection_Obu_BasicTypes_Pkg:
		*nValue = 0.0;
		break;
	case cabAFirst_Obu_BasicTypes_Pkg:
		*nValue = 1.0;
		break;
	case cabBFirst_Obu_BasicTypes_Pkg:
		*nValue = 2.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_odoMotionDirection_T_Obu_BasicTypes_Pkg_type(int* pResult, const char* toCompare, const void* pValue) {
	static odoMotionDirection_T_Obu_BasicTypes_Pkg rTemp;
	const odoMotionDirection_T_Obu_BasicTypes_Pkg* pCurrent = (const odoMotionDirection_T_Obu_BasicTypes_Pkg*)pValue;
	if (string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature() {
	return "E"
		"|Obu_BasicTypes_Pkg::unknownDirection"
		"|Obu_BasicTypes_Pkg::cabAFirst"
		"|Obu_BasicTypes_Pkg::cabBFirst"
		;
}

int check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static odoMotionDirection_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable;
const char * LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != 0 && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__17988_to_string(pValue);
}

int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != 0 && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LocWithInAcc_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__17988(&(*((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__17988(strValue, pValue);
}

int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__17988_allow_double_convertion();
}

int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__17988_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__17988_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static LocWithInAcc_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Location_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLocation_T_Obu_BasicTypes_PkgVTable;
const char * Location_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimLocation_T_Obu_BasicTypes_PkgVTable != 0 && pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return L_internal_Type_Obu_BasicTypes_Pkg_to_string(pValue);
}

int string_to_Location_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimLocation_T_Obu_BasicTypes_PkgVTable != 0 && pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Location_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Location_T_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_L_internal_Type_Obu_BasicTypes_Pkg(strValue, pValue);
}

int is_Location_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimLocation_T_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
}

int Location_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimLocation_T_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLocation_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_L_internal_Type_Obu_BasicTypes_Pkg_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_L_internal_Type_Obu_BasicTypes_Pkg_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Location_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static Location_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_Location_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Speed_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimSpeed_T_Obu_BasicTypes_PkgVTable;
const char * Speed_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != 0 && pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return V_internal_Type_Obu_BasicTypes_Pkg_to_string(pValue);
}

int string_to_Speed_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != 0 && pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Speed_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((Speed_T_Obu_BasicTypes_Pkg*)pValue) = rTemp;
		return nResult;
	}
	return string_to_V_internal_Type_Obu_BasicTypes_Pkg(strValue, pValue);
}

int is_Speed_T_Obu_BasicTypes_Pkg_allow_double_convertion() {
	if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_V_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
}

int Speed_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimSpeed_T_Obu_BasicTypes_PkgVTable != 0) {
		if (pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimSpeed_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_V_internal_Type_Obu_BasicTypes_Pkg_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_V_internal_Type_Obu_BasicTypes_Pkg_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Speed_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static Speed_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_Speed_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** RadioMessage_T_Radio_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimRadioMessage_T_Radio_Types_PkgVTable;
const char * RadioMessage_T_Radio_Types_Pkg_to_string(const void* pValue) {
	if (pSimRadioMessage_T_Radio_Types_PkgVTable != 0 && pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18368_to_string(pValue);
}

int string_to_RadioMessage_T_Radio_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimRadioMessage_T_Radio_Types_PkgVTable != 0 && pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static RadioMessage_T_Radio_Types_Pkg rTemp;
		int nResult = pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18368(&(*((RadioMessage_T_Radio_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18368(strValue, pValue);
}

int is_RadioMessage_T_Radio_Types_Pkg_allow_double_convertion() {
	if (pSimRadioMessage_T_Radio_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18368_allow_double_convertion();
}

int RadioMessage_T_Radio_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimRadioMessage_T_Radio_Types_PkgVTable != 0) {
		if (pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimRadioMessage_T_Radio_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18368_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18368_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_RadioMessage_T_Radio_Types_Pkg_string(const char* strValue) {
	static RadioMessage_T_Radio_Types_Pkg rTemp;
	return string_to_RadioMessage_T_Radio_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;
const char * Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void* pValue) {
	if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != 0 && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18213_to_string(pValue);
}

int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != 0 && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Radio_TrackTrain_Header_T_Radio_Types_Pkg rTemp;
		int nResult = pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18213(&(*((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18213(strValue, pValue);
}

int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_allow_double_convertion() {
	if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18213_allow_double_convertion();
}

int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != 0) {
		if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18213_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18213_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char* strValue) {
	static Radio_TrackTrain_Header_T_Radio_Types_Pkg rTemp;
	return string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** sessionStatus_Type_Radio_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimsessionStatus_Type_Radio_Types_PkgVTable;
const char * sessionStatus_Type_Radio_Types_Pkg_to_string(const void* pValue) {
	if (pSimsessionStatus_Type_Radio_Types_PkgVTable != 0 && pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue);
	switch (*((sessionStatus_Type_Radio_Types_Pkg*)pValue)) {
	case morc_st_inactive_Radio_Types_Pkg:
		return "Radio_Types_Pkg::morc_st_inactive";
	case morc_st_establishing_Radio_Types_Pkg:
		return "Radio_Types_Pkg::morc_st_establishing";
	case morc_st_maintaining_Radio_Types_Pkg:
		return "Radio_Types_Pkg::morc_st_maintaining";
	case morc_st_terminating_Radio_Types_Pkg:
		return "Radio_Types_Pkg::morc_st_terminating";
	default:
		return "?";
	}
}

int string_to_sessionStatus_Type_Radio_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimsessionStatus_Type_Radio_Types_PkgVTable != 0 && pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		sessionStatus_Type_Radio_Types_Pkg rTemp;		int nResult = pSimsessionStatus_Type_Radio_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((sessionStatus_Type_Radio_Types_Pkg*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "morc_st_inactive") == 0 || strcmp(strValue, "Radio_Types_Pkg::morc_st_inactive") == 0)
		*((sessionStatus_Type_Radio_Types_Pkg*)pValue) = morc_st_inactive_Radio_Types_Pkg;
	else if(strcmp(strValue, "morc_st_establishing") == 0 || strcmp(strValue, "Radio_Types_Pkg::morc_st_establishing") == 0)
		*((sessionStatus_Type_Radio_Types_Pkg*)pValue) = morc_st_establishing_Radio_Types_Pkg;
	else if(strcmp(strValue, "morc_st_maintaining") == 0 || strcmp(strValue, "Radio_Types_Pkg::morc_st_maintaining") == 0)
		*((sessionStatus_Type_Radio_Types_Pkg*)pValue) = morc_st_maintaining_Radio_Types_Pkg;
	else if(strcmp(strValue, "morc_st_terminating") == 0 || strcmp(strValue, "Radio_Types_Pkg::morc_st_terminating") == 0)
		*((sessionStatus_Type_Radio_Types_Pkg*)pValue) = morc_st_terminating_Radio_Types_Pkg;
	else 
		return 0;
	return 1;
}

int is_sessionStatus_Type_Radio_Types_Pkg_allow_double_convertion() {
	return 1;
}


int sessionStatus_Type_Radio_Types_Pkg_to_double(double * nValue, const void* pValue) {
	switch (*((sessionStatus_Type_Radio_Types_Pkg*)pValue)) {
	case morc_st_inactive_Radio_Types_Pkg:
		*nValue = 0.0;
		break;
	case morc_st_establishing_Radio_Types_Pkg:
		*nValue = 1.0;
		break;
	case morc_st_maintaining_Radio_Types_Pkg:
		*nValue = 2.0;
		break;
	case morc_st_terminating_Radio_Types_Pkg:
		*nValue = 3.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_sessionStatus_Type_Radio_Types_Pkg_type(int* pResult, const char* toCompare, const void* pValue) {
	static sessionStatus_Type_Radio_Types_Pkg rTemp;
	const sessionStatus_Type_Radio_Types_Pkg* pCurrent = (const sessionStatus_Type_Radio_Types_Pkg*)pValue;
	if (string_to_sessionStatus_Type_Radio_Types_Pkg(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_sessionStatus_Type_Radio_Types_Pkg_signature() {
	return "E"
		"|Radio_Types_Pkg::morc_st_inactive"
		"|Radio_Types_Pkg::morc_st_establishing"
		"|Radio_Types_Pkg::morc_st_maintaining"
		"|Radio_Types_Pkg::morc_st_terminating"
		;
}

int check_sessionStatus_Type_Radio_Types_Pkg_string(const char* strValue) {
	static sessionStatus_Type_Radio_Types_Pkg rTemp;
	return string_to_sessionStatus_Type_Radio_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** API_TrackSideInput_T_API_Msg_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimAPI_TrackSideInput_T_API_Msg_PkgVTable;
const char * API_TrackSideInput_T_API_Msg_Pkg_to_string(const void* pValue) {
	if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != 0 && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18263_to_string(pValue);
}

int string_to_API_TrackSideInput_T_API_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != 0 && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static API_TrackSideInput_T_API_Msg_Pkg rTemp;
		int nResult = pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18263(&(*((API_TrackSideInput_T_API_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18263(strValue, pValue);
}

int is_API_TrackSideInput_T_API_Msg_Pkg_allow_double_convertion() {
	if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18263_allow_double_convertion();
}

int API_TrackSideInput_T_API_Msg_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != 0) {
		if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18263_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18263_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_API_TrackSideInput_T_API_Msg_Pkg_string(const char* strValue) {
	static API_TrackSideInput_T_API_Msg_Pkg rTemp;
	return string_to_API_TrackSideInput_T_API_Msg_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** API_TelegramHeader_T_API_Msg_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimAPI_TelegramHeader_T_API_Msg_PkgVTable;
const char * API_TelegramHeader_T_API_Msg_Pkg_to_string(const void* pValue) {
	if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != 0 && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18255_to_string(pValue);
}

int string_to_API_TelegramHeader_T_API_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != 0 && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static API_TelegramHeader_T_API_Msg_Pkg rTemp;
		int nResult = pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18255(&(*((API_TelegramHeader_T_API_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18255(strValue, pValue);
}

int is_API_TelegramHeader_T_API_Msg_Pkg_allow_double_convertion() {
	if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18255_allow_double_convertion();
}

int API_TelegramHeader_T_API_Msg_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != 0) {
		if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18255_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18255_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_API_TelegramHeader_T_API_Msg_Pkg_string(const char* strValue) {
	static API_TelegramHeader_T_API_Msg_Pkg rTemp;
	return string_to_API_TelegramHeader_T_API_Msg_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** API_RadioMsgHeader_T_API_Msg_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable;
const char * API_RadioMsgHeader_T_API_Msg_Pkg_to_string(const void* pValue) {
	if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != 0 && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18243_to_string(pValue);
}

int string_to_API_RadioMsgHeader_T_API_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != 0 && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static API_RadioMsgHeader_T_API_Msg_Pkg rTemp;
		int nResult = pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18243(&(*((API_RadioMsgHeader_T_API_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18243(strValue, pValue);
}

int is_API_RadioMsgHeader_T_API_Msg_Pkg_allow_double_convertion() {
	if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18243_allow_double_convertion();
}

int API_RadioMsgHeader_T_API_Msg_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != 0) {
		if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18243_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18243_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_API_RadioMsgHeader_T_API_Msg_Pkg_string(const char* strValue) {
	static API_RadioMsgHeader_T_API_Msg_Pkg rTemp;
	return string_to_API_RadioMsgHeader_T_API_Msg_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** positionedBG_T_TrainPosition_Types_Pck
 ****************************************************************/
struct SimTypeVTable* pSimpositionedBG_T_TrainPosition_Types_PckVTable;
const char * positionedBG_T_TrainPosition_Types_Pck_to_string(const void* pValue) {
	if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != 0 && pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue);
	return struct__18067_to_string(pValue);
}

int string_to_positionedBG_T_TrainPosition_Types_Pck(const char* strValue, void* pValue) {
	if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != 0 && pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static positionedBG_T_TrainPosition_Types_Pck rTemp;
		int nResult = pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18067(&(*((positionedBG_T_TrainPosition_Types_Pck*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18067(strValue, pValue);
}

int is_positionedBG_T_TrainPosition_Types_Pck_allow_double_convertion() {
	if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18067_allow_double_convertion();
}

int positionedBG_T_TrainPosition_Types_Pck_to_double(double * nValue, const void* pValue) {
	if (pSimpositionedBG_T_TrainPosition_Types_PckVTable != 0) {
		if (pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnToType(SptLong, pValue));
		else if (pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnToType(SptShort, pValue));
		else if (pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimpositionedBG_T_TrainPosition_Types_PckVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18067_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18067_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_positionedBG_T_TrainPosition_Types_Pck_string(const char* strValue) {
	static positionedBG_T_TrainPosition_Types_Pck rTemp;
	return string_to_positionedBG_T_TrainPosition_Types_Pck(strValue, &rTemp);
}


/****************************************************************
 ** infoFromLinking_T_TrainPosition_Types_Pck
 ****************************************************************/
struct SimTypeVTable* pSiminfoFromLinking_T_TrainPosition_Types_PckVTable;
const char * infoFromLinking_T_TrainPosition_Types_Pck_to_string(const void* pValue) {
	if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != 0 && pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue);
	return struct__18008_to_string(pValue);
}

int string_to_infoFromLinking_T_TrainPosition_Types_Pck(const char* strValue, void* pValue) {
	if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != 0 && pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static infoFromLinking_T_TrainPosition_Types_Pck rTemp;
		int nResult = pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18008(&(*((infoFromLinking_T_TrainPosition_Types_Pck*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18008(strValue, pValue);
}

int is_infoFromLinking_T_TrainPosition_Types_Pck_allow_double_convertion() {
	if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18008_allow_double_convertion();
}

int infoFromLinking_T_TrainPosition_Types_Pck_to_double(double * nValue, const void* pValue) {
	if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable != 0) {
		if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnToType(SptLong, pValue));
		else if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnToType(SptShort, pValue));
		else if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnToType(SptDouble, pValue));
		else if (pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSiminfoFromLinking_T_TrainPosition_Types_PckVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18008_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18008_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_infoFromLinking_T_TrainPosition_Types_Pck_string(const char* strValue) {
	static infoFromLinking_T_TrainPosition_Types_Pck rTemp;
	return string_to_infoFromLinking_T_TrainPosition_Types_Pck(strValue, &rTemp);
}


/****************************************************************
 ** positionedBGs_T_TrainPosition_Types_Pck
 ****************************************************************/
struct SimTypeVTable* pSimpositionedBGs_T_TrainPosition_Types_PckVTable;
const char * positionedBGs_T_TrainPosition_Types_Pck_to_string(const void* pValue) {
	if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != 0 && pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue);
	return array__18095_to_string(pValue);
}

int string_to_positionedBGs_T_TrainPosition_Types_Pck(const char* strValue, void* pValue) {
	if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != 0 && pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static positionedBGs_T_TrainPosition_Types_Pck rTemp;
		int nResult = pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18095(&(*((positionedBGs_T_TrainPosition_Types_Pck*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18095(strValue, pValue);
}

int is_positionedBGs_T_TrainPosition_Types_Pck_allow_double_convertion() {
	if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18095_allow_double_convertion();
}

int positionedBGs_T_TrainPosition_Types_Pck_to_double(double * nValue, const void* pValue) {
	if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable != 0) {
		if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnToType(SptLong, pValue));
		else if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnToType(SptShort, pValue));
		else if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimpositionedBGs_T_TrainPosition_Types_PckVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18095_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18095_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_positionedBGs_T_TrainPosition_Types_Pck_string(const char* strValue) {
	static positionedBGs_T_TrainPosition_Types_Pck rTemp;
	return string_to_positionedBGs_T_TrainPosition_Types_Pck(strValue, &rTemp);
}


/****************************************************************
 ** trainPosition_T_TrainPosition_Types_Pck
 ****************************************************************/
struct SimTypeVTable* pSimtrainPosition_T_TrainPosition_Types_PckVTable;
const char * trainPosition_T_TrainPosition_Types_Pck_to_string(const void* pValue) {
	if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != 0 && pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnToType(SptString, pValue);
	return struct__18078_to_string(pValue);
}

int string_to_trainPosition_T_TrainPosition_Types_Pck(const char* strValue, void* pValue) {
	if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != 0 && pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static trainPosition_T_TrainPosition_Types_Pck rTemp;
		int nResult = pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18078(&(*((trainPosition_T_TrainPosition_Types_Pck*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18078(strValue, pValue);
}

int is_trainPosition_T_TrainPosition_Types_Pck_allow_double_convertion() {
	if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18078_allow_double_convertion();
}

int trainPosition_T_TrainPosition_Types_Pck_to_double(double * nValue, const void* pValue) {
	if (pSimtrainPosition_T_TrainPosition_Types_PckVTable != 0) {
		if (pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnToType(SptLong, pValue));
		else if (pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnToType(SptShort, pValue));
		else if (pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimtrainPosition_T_TrainPosition_Types_PckVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18078_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18078_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_trainPosition_T_TrainPosition_Types_Pck_string(const char* strValue) {
	static trainPosition_T_TrainPosition_Types_Pck rTemp;
	return string_to_trainPosition_T_TrainPosition_Types_Pck(strValue, &rTemp);
}


/****************************************************************
 ** P58_PositionReportParameters_T_Packet_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable;
const char * P58_PositionReportParameters_T_Packet_Types_Pkg_to_string(const void* pValue) {
	if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != 0 && pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18314_to_string(pValue);
}

int string_to_P58_PositionReportParameters_T_Packet_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != 0 && pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P58_PositionReportParameters_T_Packet_Types_Pkg rTemp;
		int nResult = pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18314(&(*((P58_PositionReportParameters_T_Packet_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18314(strValue, pValue);
}

int is_P58_PositionReportParameters_T_Packet_Types_Pkg_allow_double_convertion() {
	if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18314_allow_double_convertion();
}

int P58_PositionReportParameters_T_Packet_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable != 0) {
		if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP58_PositionReportParameters_T_Packet_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18314_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18314_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P58_PositionReportParameters_T_Packet_Types_Pkg_string(const char* strValue) {
	static P58_PositionReportParameters_T_Packet_Types_Pkg rTemp;
	return string_to_P58_PositionReportParameters_T_Packet_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** IterPacket58List_T_Packet_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimIterPacket58List_T_Packet_Types_PkgVTable;
const char * IterPacket58List_T_Packet_Types_Pkg_to_string(const void* pValue) {
	if (pSimIterPacket58List_T_Packet_Types_PkgVTable != 0 && pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18311_to_string(pValue);
}

int string_to_IterPacket58List_T_Packet_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimIterPacket58List_T_Packet_Types_PkgVTable != 0 && pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static IterPacket58List_T_Packet_Types_Pkg rTemp;
		int nResult = pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18311(&(*((IterPacket58List_T_Packet_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18311(strValue, pValue);
}

int is_IterPacket58List_T_Packet_Types_Pkg_allow_double_convertion() {
	if (pSimIterPacket58List_T_Packet_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18311_allow_double_convertion();
}

int IterPacket58List_T_Packet_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimIterPacket58List_T_Packet_Types_PkgVTable != 0) {
		if (pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimIterPacket58List_T_Packet_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18311_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18311_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_IterPacket58List_T_Packet_Types_Pkg_string(const char* strValue) {
	static IterPacket58List_T_Packet_Types_Pkg rTemp;
	return string_to_IterPacket58List_T_Packet_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** IterPacket58_T_Packet_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimIterPacket58_T_Packet_Types_PkgVTable;
const char * IterPacket58_T_Packet_Types_Pkg_to_string(const void* pValue) {
	if (pSimIterPacket58_T_Packet_Types_PkgVTable != 0 && pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18306_to_string(pValue);
}

int string_to_IterPacket58_T_Packet_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimIterPacket58_T_Packet_Types_PkgVTable != 0 && pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static IterPacket58_T_Packet_Types_Pkg rTemp;
		int nResult = pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18306(&(*((IterPacket58_T_Packet_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18306(strValue, pValue);
}

int is_IterPacket58_T_Packet_Types_Pkg_allow_double_convertion() {
	if (pSimIterPacket58_T_Packet_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18306_allow_double_convertion();
}

int IterPacket58_T_Packet_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimIterPacket58_T_Packet_Types_PkgVTable != 0) {
		if (pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimIterPacket58_T_Packet_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18306_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18306_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_IterPacket58_T_Packet_Types_Pkg_string(const char* strValue) {
	static IterPacket58_T_Packet_Types_Pkg rTemp;
	return string_to_IterPacket58_T_Packet_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** P42_SessionManagement_T_Packet_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimP42_SessionManagement_T_Packet_Types_PkgVTable;
const char * P42_SessionManagement_T_Packet_Types_Pkg_to_string(const void* pValue) {
	if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != 0 && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18288_to_string(pValue);
}

int string_to_P42_SessionManagement_T_Packet_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != 0 && pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P42_SessionManagement_T_Packet_Types_Pkg rTemp;
		int nResult = pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18288(&(*((P42_SessionManagement_T_Packet_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18288(strValue, pValue);
}

int is_P42_SessionManagement_T_Packet_Types_Pkg_allow_double_convertion() {
	if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18288_allow_double_convertion();
}

int P42_SessionManagement_T_Packet_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable != 0) {
		if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP42_SessionManagement_T_Packet_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18288_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18288_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P42_SessionManagement_T_Packet_Types_Pkg_string(const char* strValue) {
	static P42_SessionManagement_T_Packet_Types_Pkg rTemp;
	return string_to_P42_SessionManagement_T_Packet_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** P45_RadioNetworkRegistration_T_Packet_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable;
const char * P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_string(const void* pValue) {
	if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != 0 && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__18282_to_string(pValue);
}

int string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != 0 && pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P45_RadioNetworkRegistration_T_Packet_Types_Pkg rTemp;
		int nResult = pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18282(&(*((P45_RadioNetworkRegistration_T_Packet_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18282(strValue, pValue);
}

int is_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_allow_double_convertion() {
	if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18282_allow_double_convertion();
}

int P45_RadioNetworkRegistration_T_Packet_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable != 0) {
		if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP45_RadioNetworkRegistration_T_Packet_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18282_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18282_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_string(const char* strValue) {
	static P45_RadioNetworkRegistration_T_Packet_Types_Pkg rTemp;
	return string_to_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** CompressedBaliseMessage_TM
 ****************************************************************/
struct SimTypeVTable* pSimCompressedBaliseMessage_TMVTable;
const char * CompressedBaliseMessage_TM_to_string(const void* pValue) {
	if (pSimCompressedBaliseMessage_TMVTable != 0 && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptString, pValue);
	return struct__18139_to_string(pValue);
}

int string_to_CompressedBaliseMessage_TM(const char* strValue, void* pValue) {
	if (pSimCompressedBaliseMessage_TMVTable != 0 && pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedBaliseMessage_TM rTemp;
		int nResult = pSimCompressedBaliseMessage_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18139(&(*((CompressedBaliseMessage_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18139(strValue, pValue);
}

int is_CompressedBaliseMessage_TM_allow_double_convertion() {
	if (pSimCompressedBaliseMessage_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18139_allow_double_convertion();
}

int CompressedBaliseMessage_TM_to_double(double * nValue, const void* pValue) {
	if (pSimCompressedBaliseMessage_TMVTable != 0) {
		if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimCompressedBaliseMessage_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimCompressedBaliseMessage_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18139_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18139_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_CompressedBaliseMessage_TM_string(const char* strValue) {
	static CompressedBaliseMessage_TM rTemp;
	return string_to_CompressedBaliseMessage_TM(strValue, &rTemp);
}


/****************************************************************
 ** BaliseTelegramHeader_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimBaliseTelegramHeader_int_T_TMVTable;
const char * BaliseTelegramHeader_int_T_TM_to_string(const void* pValue) {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0 && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__18098_to_string(pValue);
}

int string_to_BaliseTelegramHeader_int_T_TM(const char* strValue, void* pValue) {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0 && pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BaliseTelegramHeader_int_T_TM rTemp;
		int nResult = pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18098(&(*((BaliseTelegramHeader_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18098(strValue, pValue);
}

int is_BaliseTelegramHeader_int_T_TM_allow_double_convertion() {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18098_allow_double_convertion();
}

int BaliseTelegramHeader_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimBaliseTelegramHeader_int_T_TMVTable != 0) {
		if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBaliseTelegramHeader_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18098_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18098_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BaliseTelegramHeader_int_T_TM_string(const char* strValue) {
	static BaliseTelegramHeader_int_T_TM rTemp;
	return string_to_BaliseTelegramHeader_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** OrBG_TM
 ****************************************************************/
struct SimTypeVTable* pSimOrBG_TMVTable;
const char * OrBG_TM_to_string(const void* pValue) {
	if (pSimOrBG_TMVTable != 0 && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimOrBG_TMVTable->m_pfnToType(SptString, pValue);
	switch (*((OrBG_TM*)pValue)) {
	case Amsterdam_TM:
		return "TM::Amsterdam";
	case Utrecht_TM:
		return "TM::Utrecht";
	default:
		return "?";
	}
}

int string_to_OrBG_TM(const char* strValue, void* pValue) {
	if (pSimOrBG_TMVTable != 0 && pSimOrBG_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		OrBG_TM rTemp;		int nResult = pSimOrBG_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((OrBG_TM*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Amsterdam") == 0 || strcmp(strValue, "TM::Amsterdam") == 0)
		*((OrBG_TM*)pValue) = Amsterdam_TM;
	else if(strcmp(strValue, "Utrecht") == 0 || strcmp(strValue, "TM::Utrecht") == 0)
		*((OrBG_TM*)pValue) = Utrecht_TM;
	else 
		return 0;
	return 1;
}

int is_OrBG_TM_allow_double_convertion() {
	return 1;
}


int OrBG_TM_to_double(double * nValue, const void* pValue) {
	switch (*((OrBG_TM*)pValue)) {
	case Amsterdam_TM:
		*nValue = 0.0;
		break;
	case Utrecht_TM:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_OrBG_TM_type(int* pResult, const char* toCompare, const void* pValue) {
	static OrBG_TM rTemp;
	const OrBG_TM* pCurrent = (const OrBG_TM*)pValue;
	if (string_to_OrBG_TM(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_OrBG_TM_signature() {
	return "E"
		"|TM::Amsterdam"
		"|TM::Utrecht"
		;
}

int check_OrBG_TM_string(const char* strValue) {
	static OrBG_TM rTemp;
	return string_to_OrBG_TM(strValue, &rTemp);
}


/****************************************************************
 ** OrLine_TM
 ****************************************************************/
struct SimTypeVTable* pSimOrLine_TMVTable;
const char * OrLine_TM_to_string(const void* pValue) {
	if (pSimOrLine_TMVTable != 0 && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimOrLine_TMVTable->m_pfnToType(SptString, pValue);
	switch (*((OrLine_TM*)pValue)) {
	case N_TM:
		return "TM::N";
	case Z_TM:
		return "TM::Z";
	default:
		return "?";
	}
}

int string_to_OrLine_TM(const char* strValue, void* pValue) {
	if (pSimOrLine_TMVTable != 0 && pSimOrLine_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		OrLine_TM rTemp;		int nResult = pSimOrLine_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((OrLine_TM*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "N") == 0 || strcmp(strValue, "TM::N") == 0)
		*((OrLine_TM*)pValue) = N_TM;
	else if(strcmp(strValue, "Z") == 0 || strcmp(strValue, "TM::Z") == 0)
		*((OrLine_TM*)pValue) = Z_TM;
	else 
		return 0;
	return 1;
}

int is_OrLine_TM_allow_double_convertion() {
	return 1;
}


int OrLine_TM_to_double(double * nValue, const void* pValue) {
	switch (*((OrLine_TM*)pValue)) {
	case N_TM:
		*nValue = 0.0;
		break;
	case Z_TM:
		*nValue = 1.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_OrLine_TM_type(int* pResult, const char* toCompare, const void* pValue) {
	static OrLine_TM rTemp;
	const OrLine_TM* pCurrent = (const OrLine_TM*)pValue;
	if (string_to_OrLine_TM(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_OrLine_TM_signature() {
	return "E"
		"|TM::N"
		"|TM::Z"
		;
}

int check_OrLine_TM_string(const char* strValue) {
	static OrLine_TM rTemp;
	return string_to_OrLine_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_trackside_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackside_int_T_TMVTable;
const char * P005_trackside_int_T_TM_to_string(const void* pValue) {
	if (pSimP005_trackside_int_T_TMVTable != 0 && pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__18177_to_string(pValue);
}

int string_to_P005_trackside_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackside_int_T_TMVTable != 0 && pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackside_int_T_TM rTemp;
		int nResult = pSimP005_trackside_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18177(&(*((P005_trackside_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18177(strValue, pValue);
}

int is_P005_trackside_int_T_TM_allow_double_convertion() {
	if (pSimP005_trackside_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18177_allow_double_convertion();
}

int P005_trackside_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_trackside_int_T_TMVTable != 0) {
		if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_trackside_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_trackside_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18177_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18177_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackside_int_T_TM_string(const char* strValue) {
	static P005_trackside_int_T_TM rTemp;
	return string_to_P005_trackside_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_trackide_sectionlist_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_trackide_sectionlist_T_TMVTable;
const char * P005_trackide_sectionlist_T_TM_to_string(const void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0 && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__18174_to_string(pValue);
}

int string_to_P005_trackide_sectionlist_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0 && pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_trackide_sectionlist_T_TM rTemp;
		int nResult = pSimP005_trackide_sectionlist_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18174(&(*((P005_trackide_sectionlist_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18174(strValue, pValue);
}

int is_P005_trackide_sectionlist_T_TM_allow_double_convertion() {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18174_allow_double_convertion();
}

int P005_trackide_sectionlist_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_trackide_sectionlist_T_TMVTable != 0) {
		if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_trackide_sectionlist_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_trackide_sectionlist_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18174_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18174_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_trackide_sectionlist_T_TM_string(const char* strValue) {
	static P005_trackide_sectionlist_T_TM rTemp;
	return string_to_P005_trackide_sectionlist_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_section_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_section_int_T_TMVTable;
const char * P005_section_int_T_TM_to_string(const void* pValue) {
	if (pSimP005_section_int_T_TMVTable != 0 && pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_section_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return struct__18155_to_string(pValue);
}

int string_to_P005_section_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_section_int_T_TMVTable != 0 && pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_section_int_T_TM rTemp;
		int nResult = pSimP005_section_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18155(&(*((P005_section_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18155(strValue, pValue);
}

int is_P005_section_int_T_TM_allow_double_convertion() {
	if (pSimP005_section_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18155_allow_double_convertion();
}

int P005_section_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_section_int_T_TMVTable != 0) {
		if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_section_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_section_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18155_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18155_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_section_int_T_TM_string(const char* strValue) {
	static P005_section_int_T_TM rTemp;
	return string_to_P005_section_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_sections_array_flat_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_sections_array_flat_T_TMVTable;
const char * P005_sections_array_flat_T_TM_to_string(const void* pValue) {
	if (pSimP005_sections_array_flat_T_TMVTable != 0 && pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_231_to_string(pValue);
}

int string_to_P005_sections_array_flat_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_sections_array_flat_T_TMVTable != 0 && pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_sections_array_flat_T_TM rTemp;
		int nResult = pSimP005_sections_array_flat_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_231(&(*((P005_sections_array_flat_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_231(strValue, pValue);
}

int is_P005_sections_array_flat_T_TM_allow_double_convertion() {
	if (pSimP005_sections_array_flat_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_231_allow_double_convertion();
}

int P005_sections_array_flat_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_sections_array_flat_T_TMVTable != 0) {
		if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_sections_array_flat_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_sections_array_flat_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_231_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_231_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_sections_array_flat_T_TM_string(const char* strValue) {
	static P005_sections_array_flat_T_TM rTemp;
	return string_to_P005_sections_array_flat_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_array_T_TMVTable;
const char * P005_OBU_sectionlist_array_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0 && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_7_33_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_array_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0 && pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_array_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7_33(&(*((P005_OBU_sectionlist_array_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7_33(strValue, pValue);
}

int is_P005_OBU_sectionlist_array_T_TM_allow_double_convertion() {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_7_33_allow_double_convertion();
}

int P005_OBU_sectionlist_array_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_OBU_sectionlist_array_T_TMVTable != 0) {
		if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_OBU_sectionlist_array_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_7_33_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_33_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_array_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_array_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_array_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_section_array_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_section_array_T_TMVTable;
const char * P005_section_array_T_TM_to_string(const void* pValue) {
	if (pSimP005_section_array_T_TMVTable != 0 && pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_section_array_T_TMVTable->m_pfnToType(SptString, pValue);
	return array_int_7_to_string(pValue);
}

int string_to_P005_section_array_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_section_array_T_TMVTable != 0 && pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_section_array_T_TM rTemp;
		int nResult = pSimP005_section_array_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array_int_7(&(*((P005_section_array_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array_int_7(strValue, pValue);
}

int is_P005_section_array_T_TM_allow_double_convertion() {
	if (pSimP005_section_array_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array_int_7_allow_double_convertion();
}

int P005_section_array_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_section_array_T_TMVTable != 0) {
		if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_section_array_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_section_array_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array_int_7_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array_int_7_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_section_array_T_TM_string(const char* strValue) {
	static P005_section_array_T_TM rTemp;
	return string_to_P005_section_array_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM
 ****************************************************************/
struct SimTypeVTable* pSimP005_OBU_sectionlist_int_T_TMVTable;
const char * P005_OBU_sectionlist_int_T_TM_to_string(const void* pValue) {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0 && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptString, pValue);
	return array__18171_to_string(pValue);
}

int string_to_P005_OBU_sectionlist_int_T_TM(const char* strValue, void* pValue) {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0 && pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static P005_OBU_sectionlist_int_T_TM rTemp;
		int nResult = pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18171(&(*((P005_OBU_sectionlist_int_T_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18171(strValue, pValue);
}

int is_P005_OBU_sectionlist_int_T_TM_allow_double_convertion() {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18171_allow_double_convertion();
}

int P005_OBU_sectionlist_int_T_TM_to_double(double * nValue, const void* pValue) {
	if (pSimP005_OBU_sectionlist_int_T_TMVTable != 0) {
		if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimP005_OBU_sectionlist_int_T_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18171_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18171_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_P005_OBU_sectionlist_int_T_TM_string(const char* strValue) {
	static P005_OBU_sectionlist_int_T_TM rTemp;
	return string_to_P005_OBU_sectionlist_int_T_TM(strValue, &rTemp);
}


/****************************************************************
 ** BaliseGroupData_TM
 ****************************************************************/
struct SimTypeVTable* pSimBaliseGroupData_TMVTable;
const char * BaliseGroupData_TM_to_string(const void* pValue) {
	if (pSimBaliseGroupData_TMVTable != 0 && pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBaliseGroupData_TMVTable->m_pfnToType(SptString, pValue);
	return struct__18144_to_string(pValue);
}

int string_to_BaliseGroupData_TM(const char* strValue, void* pValue) {
	if (pSimBaliseGroupData_TMVTable != 0 && pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BaliseGroupData_TM rTemp;
		int nResult = pSimBaliseGroupData_TMVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18144(&(*((BaliseGroupData_TM*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18144(strValue, pValue);
}

int is_BaliseGroupData_TM_allow_double_convertion() {
	if (pSimBaliseGroupData_TMVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18144_allow_double_convertion();
}

int BaliseGroupData_TM_to_double(double * nValue, const void* pValue) {
	if (pSimBaliseGroupData_TMVTable != 0) {
		if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBaliseGroupData_TMVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBaliseGroupData_TMVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18144_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18144_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BaliseGroupData_TM_string(const char* strValue) {
	static BaliseGroupData_TM rTemp;
	return string_to_BaliseGroupData_TM(strValue, &rTemp);
}


/****************************************************************
 ** LevelDecisionTableActionKind_DataDictionary_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable;
const char * LevelDecisionTableActionKind_DataDictionary_Pkg_to_string(const void* pValue) {
	if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable != 0 && pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue);
	switch (*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue)) {
	case LD_Invalid_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_Invalid";
	case LD_Accept_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_Accept";
	case LD_Reject_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_Reject";
	case LD_NotRelevant_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_NotRelevant";
	case LD_StoreIfPendingL1Transition_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_StoreIfPendingL1Transition";
	case LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_StoreIfPendingL2L3Transition";
	case LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_RejectIfPendingAckOfTrainData";
	case LD_DUMMY1_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_DUMMY1";
	case LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_RejectIfEmergencyBrakeActive";
	case LD_StoreIfPendingNTCTransition_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_StoreIfPendingNTCTransition";
	case LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_RejectIfNoPendingNTCTransition";
	case LD_DUMMY2_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_DUMMY2";
	case LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_RejectIfNoL2L3TransitionStored";
	case LD_DUMMY3_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_DUMMY3";
	case LD_DUMMY4_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_DUMMY4";
	case LD_DUMMY5_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_DUMMY5";
	case LD_DUMMY6_DataDictionary_Pkg:
		return "DataDictionary_Pkg::LD_DUMMY6";
	default:
		return "?";
	}
}

int string_to_LevelDecisionTableActionKind_DataDictionary_Pkg(const char* strValue, void* pValue) {
	if (pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable != 0 && pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		LevelDecisionTableActionKind_DataDictionary_Pkg rTemp;		int nResult = pSimLevelDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "LD_Invalid") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_Invalid") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_Invalid_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_Accept") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_Accept") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_Accept_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_Reject") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_Reject") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_Reject_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_NotRelevant") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_NotRelevant") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_NotRelevant_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_StoreIfPendingL1Transition") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_StoreIfPendingL1Transition") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_StoreIfPendingL1Transition_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_StoreIfPendingL2L3Transition") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_StoreIfPendingL2L3Transition") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_RejectIfPendingAckOfTrainData") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_RejectIfPendingAckOfTrainData") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_DUMMY1") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_DUMMY1") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_DUMMY1_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_RejectIfEmergencyBrakeActive") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_RejectIfEmergencyBrakeActive") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_StoreIfPendingNTCTransition") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_StoreIfPendingNTCTransition") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_StoreIfPendingNTCTransition_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_RejectIfNoPendingNTCTransition") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_RejectIfNoPendingNTCTransition") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_DUMMY2") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_DUMMY2") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_DUMMY2_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_RejectIfNoL2L3TransitionStored") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_RejectIfNoL2L3TransitionStored") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_DUMMY3") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_DUMMY3") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_DUMMY3_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_DUMMY4") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_DUMMY4") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_DUMMY4_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_DUMMY5") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_DUMMY5") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_DUMMY5_DataDictionary_Pkg;
	else if(strcmp(strValue, "LD_DUMMY6") == 0 || strcmp(strValue, "DataDictionary_Pkg::LD_DUMMY6") == 0)
		*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue) = LD_DUMMY6_DataDictionary_Pkg;
	else 
		return 0;
	return 1;
}

int is_LevelDecisionTableActionKind_DataDictionary_Pkg_allow_double_convertion() {
	return 1;
}


int LevelDecisionTableActionKind_DataDictionary_Pkg_to_double(double * nValue, const void* pValue) {
	switch (*((LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue)) {
	case LD_Invalid_DataDictionary_Pkg:
		*nValue = 0.0;
		break;
	case LD_Accept_DataDictionary_Pkg:
		*nValue = 1.0;
		break;
	case LD_Reject_DataDictionary_Pkg:
		*nValue = 2.0;
		break;
	case LD_NotRelevant_DataDictionary_Pkg:
		*nValue = 3.0;
		break;
	case LD_StoreIfPendingL1Transition_DataDictionary_Pkg:
		*nValue = 4.0;
		break;
	case LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg:
		*nValue = 5.0;
		break;
	case LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg:
		*nValue = 6.0;
		break;
	case LD_DUMMY1_DataDictionary_Pkg:
		*nValue = 7.0;
		break;
	case LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg:
		*nValue = 8.0;
		break;
	case LD_StoreIfPendingNTCTransition_DataDictionary_Pkg:
		*nValue = 9.0;
		break;
	case LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg:
		*nValue = 10.0;
		break;
	case LD_DUMMY2_DataDictionary_Pkg:
		*nValue = 11.0;
		break;
	case LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg:
		*nValue = 12.0;
		break;
	case LD_DUMMY3_DataDictionary_Pkg:
		*nValue = 13.0;
		break;
	case LD_DUMMY4_DataDictionary_Pkg:
		*nValue = 14.0;
		break;
	case LD_DUMMY5_DataDictionary_Pkg:
		*nValue = 15.0;
		break;
	case LD_DUMMY6_DataDictionary_Pkg:
		*nValue = 16.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_LevelDecisionTableActionKind_DataDictionary_Pkg_type(int* pResult, const char* toCompare, const void* pValue) {
	static LevelDecisionTableActionKind_DataDictionary_Pkg rTemp;
	const LevelDecisionTableActionKind_DataDictionary_Pkg* pCurrent = (const LevelDecisionTableActionKind_DataDictionary_Pkg*)pValue;
	if (string_to_LevelDecisionTableActionKind_DataDictionary_Pkg(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_LevelDecisionTableActionKind_DataDictionary_Pkg_signature() {
	return "E"
		"|DataDictionary_Pkg::LD_Invalid"
		"|DataDictionary_Pkg::LD_Accept"
		"|DataDictionary_Pkg::LD_Reject"
		"|DataDictionary_Pkg::LD_NotRelevant"
		"|DataDictionary_Pkg::LD_StoreIfPendingL1Transition"
		"|DataDictionary_Pkg::LD_StoreIfPendingL2L3Transition"
		"|DataDictionary_Pkg::LD_RejectIfPendingAckOfTrainData"
		"|DataDictionary_Pkg::LD_DUMMY1"
		"|DataDictionary_Pkg::LD_RejectIfEmergencyBrakeActive"
		"|DataDictionary_Pkg::LD_StoreIfPendingNTCTransition"
		"|DataDictionary_Pkg::LD_RejectIfNoPendingNTCTransition"
		"|DataDictionary_Pkg::LD_DUMMY2"
		"|DataDictionary_Pkg::LD_RejectIfNoL2L3TransitionStored"
		"|DataDictionary_Pkg::LD_DUMMY3"
		"|DataDictionary_Pkg::LD_DUMMY4"
		"|DataDictionary_Pkg::LD_DUMMY5"
		"|DataDictionary_Pkg::LD_DUMMY6"
		;
}

int check_LevelDecisionTableActionKind_DataDictionary_Pkg_string(const char* strValue) {
	static LevelDecisionTableActionKind_DataDictionary_Pkg rTemp;
	return string_to_LevelDecisionTableActionKind_DataDictionary_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** LevelDecisionTableType_DataDictionary_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimLevelDecisionTableType_DataDictionary_PkgVTable;
const char * LevelDecisionTableType_DataDictionary_Pkg_to_string(const void* pValue) {
	if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != 0 && pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18355_to_string(pValue);
}

int string_to_LevelDecisionTableType_DataDictionary_Pkg(const char* strValue, void* pValue) {
	if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != 0 && pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LevelDecisionTableType_DataDictionary_Pkg rTemp;
		int nResult = pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18355(&(*((LevelDecisionTableType_DataDictionary_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18355(strValue, pValue);
}

int is_LevelDecisionTableType_DataDictionary_Pkg_allow_double_convertion() {
	if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18355_allow_double_convertion();
}

int LevelDecisionTableType_DataDictionary_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimLevelDecisionTableType_DataDictionary_PkgVTable != 0) {
		if (pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimLevelDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18355_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18355_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LevelDecisionTableType_DataDictionary_Pkg_string(const char* strValue) {
	static LevelDecisionTableType_DataDictionary_Pkg rTemp;
	return string_to_LevelDecisionTableType_DataDictionary_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** ModeDecisionTableType_DataDictionary_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimModeDecisionTableType_DataDictionary_PkgVTable;
const char * ModeDecisionTableType_DataDictionary_Pkg_to_string(const void* pValue) {
	if (pSimModeDecisionTableType_DataDictionary_PkgVTable != 0 && pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18346_to_string(pValue);
}

int string_to_ModeDecisionTableType_DataDictionary_Pkg(const char* strValue, void* pValue) {
	if (pSimModeDecisionTableType_DataDictionary_PkgVTable != 0 && pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ModeDecisionTableType_DataDictionary_Pkg rTemp;
		int nResult = pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18346(&(*((ModeDecisionTableType_DataDictionary_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18346(strValue, pValue);
}

int is_ModeDecisionTableType_DataDictionary_Pkg_allow_double_convertion() {
	if (pSimModeDecisionTableType_DataDictionary_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18346_allow_double_convertion();
}

int ModeDecisionTableType_DataDictionary_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimModeDecisionTableType_DataDictionary_PkgVTable != 0) {
		if (pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimModeDecisionTableType_DataDictionary_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18346_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18346_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_ModeDecisionTableType_DataDictionary_Pkg_string(const char* strValue) {
	static ModeDecisionTableType_DataDictionary_Pkg rTemp;
	return string_to_ModeDecisionTableType_DataDictionary_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** ModeDecisionTableActionKind_DataDictionary_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimModeDecisionTableActionKind_DataDictionary_PkgVTable;
const char * ModeDecisionTableActionKind_DataDictionary_Pkg_to_string(const void* pValue) {
	if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable != 0 && pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue);
	switch (*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue)) {
	case Accept_DataDictionary_Pkg:
		return "DataDictionary_Pkg::Accept";
	case Reject_DataDictionary_Pkg:
		return "DataDictionary_Pkg::Reject";
	case NotRelevant_DataDictionary_Pkg:
		return "DataDictionary_Pkg::NotRelevant";
	case IfCabActive_DataDictionary_Pkg:
		return "DataDictionary_Pkg::IfCabActive";
	case IfTrainDataStored_DataDictionary_Pkg:
		return "DataDictionary_Pkg::IfTrainDataStored";
	case IfFollowingExitTRMode_DataDictionary_Pkg:
		return "DataDictionary_Pkg::IfFollowingExitTRMode";
	default:
		return "?";
	}
}

int string_to_ModeDecisionTableActionKind_DataDictionary_Pkg(const char* strValue, void* pValue) {
	if (pSimModeDecisionTableActionKind_DataDictionary_PkgVTable != 0 && pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		ModeDecisionTableActionKind_DataDictionary_Pkg rTemp;		int nResult = pSimModeDecisionTableActionKind_DataDictionary_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue) = rTemp;
		return nResult;
	}
	if(strcmp(strValue, "Accept") == 0 || strcmp(strValue, "DataDictionary_Pkg::Accept") == 0)
		*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue) = Accept_DataDictionary_Pkg;
	else if(strcmp(strValue, "Reject") == 0 || strcmp(strValue, "DataDictionary_Pkg::Reject") == 0)
		*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue) = Reject_DataDictionary_Pkg;
	else if(strcmp(strValue, "NotRelevant") == 0 || strcmp(strValue, "DataDictionary_Pkg::NotRelevant") == 0)
		*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue) = NotRelevant_DataDictionary_Pkg;
	else if(strcmp(strValue, "IfCabActive") == 0 || strcmp(strValue, "DataDictionary_Pkg::IfCabActive") == 0)
		*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue) = IfCabActive_DataDictionary_Pkg;
	else if(strcmp(strValue, "IfTrainDataStored") == 0 || strcmp(strValue, "DataDictionary_Pkg::IfTrainDataStored") == 0)
		*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue) = IfTrainDataStored_DataDictionary_Pkg;
	else if(strcmp(strValue, "IfFollowingExitTRMode") == 0 || strcmp(strValue, "DataDictionary_Pkg::IfFollowingExitTRMode") == 0)
		*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue) = IfFollowingExitTRMode_DataDictionary_Pkg;
	else 
		return 0;
	return 1;
}

int is_ModeDecisionTableActionKind_DataDictionary_Pkg_allow_double_convertion() {
	return 1;
}


int ModeDecisionTableActionKind_DataDictionary_Pkg_to_double(double * nValue, const void* pValue) {
	switch (*((ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue)) {
	case Accept_DataDictionary_Pkg:
		*nValue = 0.0;
		break;
	case Reject_DataDictionary_Pkg:
		*nValue = 1.0;
		break;
	case NotRelevant_DataDictionary_Pkg:
		*nValue = 2.0;
		break;
	case IfCabActive_DataDictionary_Pkg:
		*nValue = 3.0;
		break;
	case IfTrainDataStored_DataDictionary_Pkg:
		*nValue = 4.0;
		break;
	case IfFollowingExitTRMode_DataDictionary_Pkg:
		*nValue = 5.0;
		break;
	default:
		return 0;
	}
	return 1;
}


int compare_ModeDecisionTableActionKind_DataDictionary_Pkg_type(int* pResult, const char* toCompare, const void* pValue) {
	static ModeDecisionTableActionKind_DataDictionary_Pkg rTemp;
	const ModeDecisionTableActionKind_DataDictionary_Pkg* pCurrent = (const ModeDecisionTableActionKind_DataDictionary_Pkg*)pValue;
	if (string_to_ModeDecisionTableActionKind_DataDictionary_Pkg(toCompare, &rTemp) == 0)
		return 0;
	if (*pCurrent > rTemp)
		*pResult = 1;
	else if (*pCurrent < rTemp)
		*pResult = -1;
	else
		*pResult = 0;
	return 1;
}

const char * get_ModeDecisionTableActionKind_DataDictionary_Pkg_signature() {
	return "E"
		"|DataDictionary_Pkg::Accept"
		"|DataDictionary_Pkg::Reject"
		"|DataDictionary_Pkg::NotRelevant"
		"|DataDictionary_Pkg::IfCabActive"
		"|DataDictionary_Pkg::IfTrainDataStored"
		"|DataDictionary_Pkg::IfFollowingExitTRMode"
		;
}

int check_ModeDecisionTableActionKind_DataDictionary_Pkg_string(const char* strValue) {
	static ModeDecisionTableActionKind_DataDictionary_Pkg rTemp;
	return string_to_ModeDecisionTableActionKind_DataDictionary_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Buffer_DataDictionary_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimBuffer_DataDictionary_PkgVTable;
const char * Buffer_DataDictionary_Pkg_to_string(const void* pValue) {
	if (pSimBuffer_DataDictionary_PkgVTable != 0 && pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBuffer_DataDictionary_PkgVTable->m_pfnToType(SptString, pValue);
	return array__18349_to_string(pValue);
}

int string_to_Buffer_DataDictionary_Pkg(const char* strValue, void* pValue) {
	if (pSimBuffer_DataDictionary_PkgVTable != 0 && pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Buffer_DataDictionary_Pkg rTemp;
		int nResult = pSimBuffer_DataDictionary_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__18349(&(*((Buffer_DataDictionary_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__18349(strValue, pValue);
}

int is_Buffer_DataDictionary_Pkg_allow_double_convertion() {
	if (pSimBuffer_DataDictionary_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_array__18349_allow_double_convertion();
}

int Buffer_DataDictionary_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimBuffer_DataDictionary_PkgVTable != 0) {
		if (pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBuffer_DataDictionary_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBuffer_DataDictionary_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBuffer_DataDictionary_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBuffer_DataDictionary_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBuffer_DataDictionary_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_array__18349_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__18349_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Buffer_DataDictionary_Pkg_string(const char* strValue) {
	static Buffer_DataDictionary_Pkg rTemp;
	return string_to_Buffer_DataDictionary_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** T_Mode_Level_Level_And_Mode_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable;
const char * T_Mode_Level_Level_And_Mode_Types_Pkg_to_string(const void* pValue) {
	if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != 0 && pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__17982_to_string(pValue);
}

int string_to_T_Mode_Level_Level_And_Mode_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != 0 && pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static T_Mode_Level_Level_And_Mode_Types_Pkg rTemp;
		int nResult = pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__17982(&(*((T_Mode_Level_Level_And_Mode_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__17982(strValue, pValue);
}

int is_T_Mode_Level_Level_And_Mode_Types_Pkg_allow_double_convertion() {
	if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__17982_allow_double_convertion();
}

int T_Mode_Level_Level_And_Mode_Types_Pkg_to_double(double * nValue, const void* pValue) {
	if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable != 0) {
		if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnToType(SptLong, pValue));
		else if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnToType(SptShort, pValue));
		else if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimT_Mode_Level_Level_And_Mode_Types_PkgVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__17982_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__17982_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_T_Mode_Level_Level_And_Mode_Types_Pkg_string(const char* strValue) {
	static T_Mode_Level_Level_And_Mode_Types_Pkg rTemp;
	return string_to_T_Mode_Level_Level_And_Mode_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** odometryFactors_T_Toolbox
 ****************************************************************/
struct SimTypeVTable* pSimodometryFactors_T_ToolboxVTable;
const char * odometryFactors_T_Toolbox_to_string(const void* pValue) {
	if (pSimodometryFactors_T_ToolboxVTable != 0 && pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimodometryFactors_T_ToolboxVTable->m_pfnToType(SptString, pValue);
	return struct__18207_to_string(pValue);
}

int string_to_odometryFactors_T_Toolbox(const char* strValue, void* pValue) {
	if (pSimodometryFactors_T_ToolboxVTable != 0 && pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static odometryFactors_T_Toolbox rTemp;
		int nResult = pSimodometryFactors_T_ToolboxVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18207(&(*((odometryFactors_T_Toolbox*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18207(strValue, pValue);
}

int is_odometryFactors_T_Toolbox_allow_double_convertion() {
	if (pSimodometryFactors_T_ToolboxVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18207_allow_double_convertion();
}

int odometryFactors_T_Toolbox_to_double(double * nValue, const void* pValue) {
	if (pSimodometryFactors_T_ToolboxVTable != 0) {
		if (pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimodometryFactors_T_ToolboxVTable->m_pfnToType(SptLong, pValue));
		else if (pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimodometryFactors_T_ToolboxVTable->m_pfnToType(SptShort, pValue));
		else if (pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimodometryFactors_T_ToolboxVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimodometryFactors_T_ToolboxVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimodometryFactors_T_ToolboxVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18207_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18207_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_odometryFactors_T_Toolbox_string(const char* strValue) {
	static odometryFactors_T_Toolbox rTemp;
	return string_to_odometryFactors_T_Toolbox(strValue, &rTemp);
}


/****************************************************************
 ** BaliseGroupData_Basics
 ****************************************************************/
struct SimTypeVTable* pSimBaliseGroupData_BasicsVTable;
const char * BaliseGroupData_Basics_to_string(const void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0 && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptString, pValue);
	return struct__18144_to_string(pValue);
}

int string_to_BaliseGroupData_Basics(const char* strValue, void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0 && pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BaliseGroupData_Basics rTemp;
		int nResult = pSimBaliseGroupData_BasicsVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18144(&(*((BaliseGroupData_Basics*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18144(strValue, pValue);
}

int is_BaliseGroupData_Basics_allow_double_convertion() {
	if (pSimBaliseGroupData_BasicsVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18144_allow_double_convertion();
}

int BaliseGroupData_Basics_to_double(double * nValue, const void* pValue) {
	if (pSimBaliseGroupData_BasicsVTable != 0) {
		if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptLong, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptShort, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimBaliseGroupData_BasicsVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimBaliseGroupData_BasicsVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18144_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18144_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BaliseGroupData_Basics_string(const char* strValue) {
	static BaliseGroupData_Basics rTemp;
	return string_to_BaliseGroupData_Basics(strValue, &rTemp);
}


/****************************************************************
 ** B_data_internal_T_InfraLib
 ****************************************************************/
struct SimTypeVTable* pSimB_data_internal_T_InfraLibVTable;
const char * B_data_internal_T_InfraLib_to_string(const void* pValue) {
	if (pSimB_data_internal_T_InfraLibVTable != 0 && pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptString, pValue);
	return struct__18130_to_string(pValue);
}

int string_to_B_data_internal_T_InfraLib(const char* strValue, void* pValue) {
	if (pSimB_data_internal_T_InfraLibVTable != 0 && pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static B_data_internal_T_InfraLib rTemp;
		int nResult = pSimB_data_internal_T_InfraLibVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__18130(&(*((B_data_internal_T_InfraLib*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__18130(strValue, pValue);
}

int is_B_data_internal_T_InfraLib_allow_double_convertion() {
	if (pSimB_data_internal_T_InfraLibVTable != 0) {
		int nConvertionAllowed = 0;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1;
		nConvertionAllowed |= pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1;
		return nConvertionAllowed;
	}
	return is_struct__18130_allow_double_convertion();
}

int B_data_internal_T_InfraLib_to_double(double * nValue, const void* pValue) {
	if (pSimB_data_internal_T_InfraLibVTable != 0) {
		if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptLong) == 1)
			*nValue = (double)(*(long*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptLong, pValue));
		else if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptShort) == 1)
			*nValue = (double)(*(int*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptShort, pValue));
		else if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptDouble) == 1)
			*nValue = (*(double*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptDouble, pValue));
		else if (pSimB_data_internal_T_InfraLibVTable->m_pfnGetConvInfo(SptNone, SptFloat) == 1)
			*nValue = (double)(*(float*)pSimB_data_internal_T_InfraLibVTable->m_pfnToType(SptFloat, pValue));
		else
			return 0;
		return 1;
	}
	if (_SCSIM_struct__18130_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__18130_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_B_data_internal_T_InfraLib_string(const char* strValue) {
	static B_data_internal_T_InfraLib rTemp;
	return string_to_B_data_internal_T_InfraLib(strValue, &rTemp);
}


