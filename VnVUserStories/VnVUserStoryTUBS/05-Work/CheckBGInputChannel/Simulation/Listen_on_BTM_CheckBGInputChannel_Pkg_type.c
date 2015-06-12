
#include <stdlib.h>
#include "SmuTypes.h"
#include "kcg_types.h"
#include "Listen_on_BTM_CheckBGInputChannel_Pkg_type.h"
#include "Listen_on_BTM_CheckBGInputChannel_Pkg_mapping.h"

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
TypeUtils _SCSIM_struct__2603_Utils = {struct__2603_to_string,
	check_struct__2603_string,
	string_to_struct__2603,
	is_struct__2603_allow_double_convertion,
	0,
	compare_struct__2603_type,
	get_struct__2603_signature,
	get_struct__2603_filter_utils,
	struct__2603_filter_size,
	struct__2603_filter_values};
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
TypeUtils _SCSIM_struct__2624_Utils = {struct__2624_to_string,
	check_struct__2624_string,
	string_to_struct__2624,
	is_struct__2624_allow_double_convertion,
	0,
	compare_struct__2624_type,
	get_struct__2624_signature,
	get_struct__2624_filter_utils,
	struct__2624_filter_size,
	struct__2624_filter_values};
TypeUtils _SCSIM_array__2632_Utils = {array__2632_to_string,
	check_array__2632_string,
	string_to_array__2632,
	is_array__2632_allow_double_convertion,
	0,
	compare_array__2632_type,
	get_array__2632_signature,
	get_array__2632_filter_utils,
	array__2632_filter_size,
	array__2632_filter_values};
TypeUtils _SCSIM_struct__2635_Utils = {struct__2635_to_string,
	check_struct__2635_string,
	string_to_struct__2635,
	is_struct__2635_allow_double_convertion,
	0,
	compare_struct__2635_type,
	get_struct__2635_signature,
	get_struct__2635_filter_utils,
	struct__2635_filter_size,
	struct__2635_filter_values};
TypeUtils _SCSIM_struct__2640_Utils = {struct__2640_to_string,
	check_struct__2640_string,
	string_to_struct__2640,
	is_struct__2640_allow_double_convertion,
	0,
	compare_struct__2640_type,
	get_struct__2640_signature,
	get_struct__2640_filter_utils,
	struct__2640_filter_size,
	struct__2640_filter_values};
TypeUtils _SCSIM_struct__2652_Utils = {struct__2652_to_string,
	check_struct__2652_string,
	string_to_struct__2652,
	is_struct__2652_allow_double_convertion,
	0,
	compare_struct__2652_type,
	get_struct__2652_signature,
	get_struct__2652_filter_utils,
	struct__2652_filter_size,
	struct__2652_filter_values};
TypeUtils _SCSIM_struct__2658_Utils = {struct__2658_to_string,
	check_struct__2658_string,
	string_to_struct__2658,
	is_struct__2658_allow_double_convertion,
	0,
	compare_struct__2658_type,
	get_struct__2658_signature,
	get_struct__2658_filter_utils,
	struct__2658_filter_size,
	struct__2658_filter_values};
TypeUtils _SCSIM_struct__2665_Utils = {struct__2665_to_string,
	check_struct__2665_string,
	string_to_struct__2665,
	is_struct__2665_allow_double_convertion,
	0,
	compare_struct__2665_type,
	get_struct__2665_signature,
	get_struct__2665_filter_utils,
	struct__2665_filter_size,
	struct__2665_filter_values};
TypeUtils _SCSIM_struct__2671_Utils = {struct__2671_to_string,
	check_struct__2671_string,
	string_to_struct__2671,
	is_struct__2671_allow_double_convertion,
	0,
	compare_struct__2671_type,
	get_struct__2671_signature,
	get_struct__2671_filter_utils,
	struct__2671_filter_size,
	struct__2671_filter_values};
TypeUtils _SCSIM_struct__2678_Utils = {struct__2678_to_string,
	check_struct__2678_string,
	string_to_struct__2678,
	is_struct__2678_allow_double_convertion,
	0,
	compare_struct__2678_type,
	get_struct__2678_signature,
	get_struct__2678_filter_utils,
	struct__2678_filter_size,
	struct__2678_filter_values};
TypeUtils _SCSIM_struct__2688_Utils = {struct__2688_to_string,
	check_struct__2688_string,
	string_to_struct__2688,
	is_struct__2688_allow_double_convertion,
	0,
	compare_struct__2688_type,
	get_struct__2688_signature,
	get_struct__2688_filter_utils,
	struct__2688_filter_size,
	struct__2688_filter_values};
TypeUtils _SCSIM_struct__2693_Utils = {struct__2693_to_string,
	check_struct__2693_string,
	string_to_struct__2693,
	is_struct__2693_allow_double_convertion,
	0,
	compare_struct__2693_type,
	get_struct__2693_signature,
	get_struct__2693_filter_utils,
	struct__2693_filter_size,
	struct__2693_filter_values};
TypeUtils _SCSIM_struct__2706_Utils = {struct__2706_to_string,
	check_struct__2706_string,
	string_to_struct__2706,
	is_struct__2706_allow_double_convertion,
	0,
	compare_struct__2706_type,
	get_struct__2706_signature,
	get_struct__2706_filter_utils,
	struct__2706_filter_size,
	struct__2706_filter_values};
TypeUtils _SCSIM_struct__2714_Utils = {struct__2714_to_string,
	check_struct__2714_string,
	string_to_struct__2714,
	is_struct__2714_allow_double_convertion,
	0,
	compare_struct__2714_type,
	get_struct__2714_signature,
	get_struct__2714_filter_utils,
	struct__2714_filter_size,
	struct__2714_filter_values};
TypeUtils _SCSIM_struct__2723_Utils = {struct__2723_to_string,
	check_struct__2723_string,
	string_to_struct__2723,
	is_struct__2723_allow_double_convertion,
	0,
	compare_struct__2723_type,
	get_struct__2723_signature,
	get_struct__2723_filter_utils,
	struct__2723_filter_size,
	struct__2723_filter_values};
TypeUtils _SCSIM_struct__2741_Utils = {struct__2741_to_string,
	check_struct__2741_string,
	string_to_struct__2741,
	is_struct__2741_allow_double_convertion,
	0,
	compare_struct__2741_type,
	get_struct__2741_signature,
	get_struct__2741_filter_utils,
	struct__2741_filter_size,
	struct__2741_filter_values};
TypeUtils _SCSIM_struct__2750_Utils = {struct__2750_to_string,
	check_struct__2750_string,
	string_to_struct__2750,
	is_struct__2750_allow_double_convertion,
	0,
	compare_struct__2750_type,
	get_struct__2750_signature,
	get_struct__2750_filter_utils,
	struct__2750_filter_size,
	struct__2750_filter_values};
TypeUtils _SCSIM_array__2758_Utils = {array__2758_to_string,
	check_array__2758_string,
	string_to_array__2758,
	is_array__2758_allow_double_convertion,
	0,
	compare_array__2758_type,
	get_array__2758_signature,
	get_array__2758_filter_utils,
	array__2758_filter_size,
	array__2758_filter_values};
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
 ** struct__2603
 ****************************************************************/
static void Fill_struct__2603_StructSimValue(struct__2603 * pStruct, StructSimValue * pValues) {
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

const char * struct__2603_to_string(const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__2603_StructSimValue(((struct__2603*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 15);
}

int string_to_struct__2603(const char* strValue, void* pValue) {
	static struct__2603 rTemp;
	int nResult = 0;
	static StructSimValue values[15];
	kcg_copy_struct__2603(&(rTemp), &(*((struct__2603*)pValue)));
	Fill_struct__2603_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 15);
	if (nResult == 1)
		kcg_copy_struct__2603(&(*((struct__2603*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2603_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__2603_StructSimValue((struct__2603*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 15);
}


int is_struct__2603_allow_double_convertion() {
	return 0;
}


const char * get_struct__2603_signature() {
	static StructSimValue values[15];
	Fill_struct__2603_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 15);
}

FilterUtils get_struct__2603_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[15];
	Fill_struct__2603_StructSimValue((struct__2603*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 15, strFilter);
}

const char * struct__2603_filter_values[15] = {"radioDevice", "receivedSystemTime", "nid_message", "t_train", "m_ack", "nid_lrbg", "t_train_reference", "nid_em", "q_scale", "d_sr", "t_sh_rqst", "d_ref", "q_dir", "d_emergencystop", "m_version"};
int check_struct__2603_string(const char* strValue) {
	static struct__2603 rTemp;
	return string_to_struct__2603(strValue, &rTemp);
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
 ** struct__2624
 ****************************************************************/
static void Fill_struct__2624_StructSimValue(struct__2624 * pStruct, StructSimValue * pValues) {
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

const char * struct__2624_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2624_StructSimValue(((struct__2624*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__2624(const char* strValue, void* pValue) {
	static struct__2624 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__2624(&(rTemp), &(*((struct__2624*)pValue)));
	Fill_struct__2624_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__2624(&(*((struct__2624*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2624_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2624_StructSimValue((struct__2624*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__2624_allow_double_convertion() {
	return 0;
}


const char * get_struct__2624_signature() {
	static StructSimValue values[5];
	Fill_struct__2624_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__2624_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2624_StructSimValue((struct__2624*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__2624_filter_values[5] = {"nid_packet", "q_dir", "valid", "startAddress", "endAddress"};
int check_struct__2624_string(const char* strValue) {
	static struct__2624 rTemp;
	return string_to_struct__2624(strValue, &rTemp);
}


/****************************************************************
 ** array__2632
 ****************************************************************/
void* array__2632_projection(void** pValues, int nIndex) {
	return &((*(array__2632*)pValues)[nIndex]);
}

const char * array__2632_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__2624_to_string, 30, array__2632_projection);
}

int compare_array__2632_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__2624_type , 30, array__2632_projection);
}

int is_array__2632_allow_double_convertion() {
	return 0;
}

int string_to_array__2632(const char* strValue, void* pValue) {
	static array__2632 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__2624, 30, array__2632_projection);
	if (nResult == 1)
		kcg_copy_array__2632(&(*((array__2632*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__2632_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__2624_signature, 30);
}

FilterUtils get_array__2632_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__2624_Utils, strFilter, (void**)pValue, 30, array__2632_projection);
}

int check_array__2632_string(const char* strValue) {
	static array__2632 rTemp;
	return string_to_array__2632(strValue, &rTemp);
}


/****************************************************************
 ** struct__2635
 ****************************************************************/
static void Fill_struct__2635_StructSimValue(struct__2635 * pStruct, StructSimValue * pValues) {
	/*PacketHeaders label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->PacketHeaders) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_array__2632_Utils;
	pValues[0].m_pszName = "PacketHeaders";
	/*PacketData label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->PacketData) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_array_int_500_Utils;
	pValues[1].m_pszName = "PacketData";
}

const char * struct__2635_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__2635_StructSimValue(((struct__2635*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__2635(const char* strValue, void* pValue) {
	static struct__2635 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__2635(&(rTemp), &(*((struct__2635*)pValue)));
	Fill_struct__2635_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__2635(&(*((struct__2635*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2635_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__2635_StructSimValue((struct__2635*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__2635_allow_double_convertion() {
	return 0;
}


const char * get_struct__2635_signature() {
	static StructSimValue values[2];
	Fill_struct__2635_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__2635_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__2635_StructSimValue((struct__2635*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__2635_filter_values[2] = {"PacketHeaders", "PacketData"};
int check_struct__2635_string(const char* strValue) {
	static struct__2635 rTemp;
	return string_to_struct__2635(strValue, &rTemp);
}


/****************************************************************
 ** struct__2640
 ****************************************************************/
static void Fill_struct__2640_StructSimValue(struct__2640 * pStruct, StructSimValue * pValues) {
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

const char * struct__2640_to_string(const void* pValue) {
	static StructSimValue values[9];
	Fill_struct__2640_StructSimValue(((struct__2640*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 9);
}

int string_to_struct__2640(const char* strValue, void* pValue) {
	static struct__2640 rTemp;
	int nResult = 0;
	static StructSimValue values[9];
	kcg_copy_struct__2640(&(rTemp), &(*((struct__2640*)pValue)));
	Fill_struct__2640_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 9);
	if (nResult == 1)
		kcg_copy_struct__2640(&(*((struct__2640*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2640_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[9];
	Fill_struct__2640_StructSimValue((struct__2640*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 9);
}


int is_struct__2640_allow_double_convertion() {
	return 0;
}


const char * get_struct__2640_signature() {
	static StructSimValue values[9];
	Fill_struct__2640_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 9);
}

FilterUtils get_struct__2640_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[9];
	Fill_struct__2640_StructSimValue((struct__2640*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 9, strFilter);
}

const char * struct__2640_filter_values[9] = {"t_train_reference", "nid_em", "q_scale", "d_sr", "t_sh_rqst", "d_ref", "q_dir", "d_emergencystop", "m_version"};
int check_struct__2640_string(const char* strValue) {
	static struct__2640 rTemp;
	return string_to_struct__2640(strValue, &rTemp);
}


/****************************************************************
 ** struct__2652
 ****************************************************************/
static void Fill_struct__2652_StructSimValue(struct__2652 * pStruct, StructSimValue * pValues) {
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

const char * struct__2652_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__2652_StructSimValue(((struct__2652*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__2652(const char* strValue, void* pValue) {
	static struct__2652 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__2652(&(rTemp), &(*((struct__2652*)pValue)));
	Fill_struct__2652_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__2652(&(*((struct__2652*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2652_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__2652_StructSimValue((struct__2652*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__2652_allow_double_convertion() {
	return 0;
}


const char * get_struct__2652_signature() {
	static StructSimValue values[3];
	Fill_struct__2652_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__2652_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__2652_StructSimValue((struct__2652*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__2652_filter_values[3] = {"nominal", "d_min", "d_max"};
int check_struct__2652_string(const char* strValue) {
	static struct__2652 rTemp;
	return string_to_struct__2652(strValue, &rTemp);
}


/****************************************************************
 ** struct__2658
 ****************************************************************/
static void Fill_struct__2658_StructSimValue(struct__2658 * pStruct, StructSimValue * pValues) {
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

const char * struct__2658_to_string(const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__2658_StructSimValue(((struct__2658*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 4);
}

int string_to_struct__2658(const char* strValue, void* pValue) {
	static struct__2658 rTemp;
	int nResult = 0;
	static StructSimValue values[4];
	kcg_copy_struct__2658(&(rTemp), &(*((struct__2658*)pValue)));
	Fill_struct__2658_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 4);
	if (nResult == 1)
		kcg_copy_struct__2658(&(*((struct__2658*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2658_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__2658_StructSimValue((struct__2658*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 4);
}


int is_struct__2658_allow_double_convertion() {
	return 0;
}


const char * get_struct__2658_signature() {
	static StructSimValue values[4];
	Fill_struct__2658_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 4);
}

FilterUtils get_struct__2658_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[4];
	Fill_struct__2658_StructSimValue((struct__2658*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 4, strFilter);
}

const char * struct__2658_filter_values[4] = {"v_safeNominal", "v_rawNominal", "v_lower", "v_upper"};
int check_struct__2658_string(const char* strValue) {
	static struct__2658 rTemp;
	return string_to_struct__2658(strValue, &rTemp);
}


/****************************************************************
 ** struct__2665
 ****************************************************************/
static void Fill_struct__2665_StructSimValue(struct__2665 * pStruct, StructSimValue * pValues) {
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

const char * struct__2665_to_string(const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__2665_StructSimValue(((struct__2665*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 3);
}

int string_to_struct__2665(const char* strValue, void* pValue) {
	static struct__2665 rTemp;
	int nResult = 0;
	static StructSimValue values[3];
	kcg_copy_struct__2665(&(rTemp), &(*((struct__2665*)pValue)));
	Fill_struct__2665_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 3);
	if (nResult == 1)
		kcg_copy_struct__2665(&(*((struct__2665*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2665_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[3];
	Fill_struct__2665_StructSimValue((struct__2665*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 3);
}


int is_struct__2665_allow_double_convertion() {
	return 0;
}


const char * get_struct__2665_signature() {
	static StructSimValue values[3];
	Fill_struct__2665_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 3);
}

FilterUtils get_struct__2665_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[3];
	Fill_struct__2665_StructSimValue((struct__2665*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 3, strFilter);
}

const char * struct__2665_filter_values[3] = {"o_nominal", "o_min", "o_max"};
int check_struct__2665_string(const char* strValue) {
	static struct__2665 rTemp;
	return string_to_struct__2665(strValue, &rTemp);
}


/****************************************************************
 ** struct__2671
 ****************************************************************/
static void Fill_struct__2671_StructSimValue(struct__2671 * pStruct, StructSimValue * pValues) {
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
	pValues[2].m_pTypeUtils = &_SCSIM_struct__2603_Utils;
	pValues[2].m_pszName = "Radio_Common_Header";
	/*Radio_MetaData label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->Radio_MetaData) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__2640_Utils;
	pValues[3].m_pszName = "Radio_MetaData";
}

const char * struct__2671_to_string(const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__2671_StructSimValue(((struct__2671*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 4);
}

int string_to_struct__2671(const char* strValue, void* pValue) {
	static struct__2671 rTemp;
	int nResult = 0;
	static StructSimValue values[4];
	kcg_copy_struct__2671(&(rTemp), &(*((struct__2671*)pValue)));
	Fill_struct__2671_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 4);
	if (nResult == 1)
		kcg_copy_struct__2671(&(*((struct__2671*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2671_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[4];
	Fill_struct__2671_StructSimValue((struct__2671*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 4);
}


int is_struct__2671_allow_double_convertion() {
	return 0;
}


const char * get_struct__2671_signature() {
	static StructSimValue values[4];
	Fill_struct__2671_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 4);
}

FilterUtils get_struct__2671_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[4];
	Fill_struct__2671_StructSimValue((struct__2671*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 4, strFilter);
}

const char * struct__2671_filter_values[4] = {"present", "apiConsistencyError", "Radio_Common_Header", "Radio_MetaData"};
int check_struct__2671_string(const char* strValue) {
	static struct__2671 rTemp;
	return string_to_struct__2671(strValue, &rTemp);
}


/****************************************************************
 ** struct__2678
 ****************************************************************/
static void Fill_struct__2678_StructSimValue(struct__2678 * pStruct, StructSimValue * pValues) {
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
	pValues[2].m_pTypeUtils = &_SCSIM_struct__2665_Utils;
	pValues[2].m_pszName = "odo";
	/*speed label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->speed) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__2658_Utils;
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

const char * struct__2678_to_string(const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__2678_StructSimValue(((struct__2678*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 7);
}

int string_to_struct__2678(const char* strValue, void* pValue) {
	static struct__2678 rTemp;
	int nResult = 0;
	static StructSimValue values[7];
	kcg_copy_struct__2678(&(rTemp), &(*((struct__2678*)pValue)));
	Fill_struct__2678_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 7);
	if (nResult == 1)
		kcg_copy_struct__2678(&(*((struct__2678*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2678_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[7];
	Fill_struct__2678_StructSimValue((struct__2678*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 7);
}


int is_struct__2678_allow_double_convertion() {
	return 0;
}


const char * get_struct__2678_signature() {
	static StructSimValue values[7];
	Fill_struct__2678_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 7);
}

FilterUtils get_struct__2678_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[7];
	Fill_struct__2678_StructSimValue((struct__2678*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 7, strFilter);
}

const char * struct__2678_filter_values[7] = {"valid", "timestamp", "odo", "speed", "acceleration", "motionState", "motionDirection"};
int check_struct__2678_string(const char* strValue) {
	static struct__2678 rTemp;
	return string_to_struct__2678(strValue, &rTemp);
}


/****************************************************************
 ** struct__2688
 ****************************************************************/
static void Fill_struct__2688_StructSimValue(struct__2688 * pStruct, StructSimValue * pValues) {
	/*odometerOfBaliseDetection label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->odometerOfBaliseDetection) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_struct__2678_Utils;
	pValues[0].m_pszName = "odometerOfBaliseDetection";
	/*BG_centerDetectionInaccuraccuracies label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BG_centerDetectionInaccuraccuracies) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__2652_Utils;
	pValues[1].m_pszName = "BG_centerDetectionInaccuraccuracies";
}

const char * struct__2688_to_string(const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__2688_StructSimValue(((struct__2688*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 2);
}

int string_to_struct__2688(const char* strValue, void* pValue) {
	static struct__2688 rTemp;
	int nResult = 0;
	static StructSimValue values[2];
	kcg_copy_struct__2688(&(rTemp), &(*((struct__2688*)pValue)));
	Fill_struct__2688_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 2);
	if (nResult == 1)
		kcg_copy_struct__2688(&(*((struct__2688*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2688_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[2];
	Fill_struct__2688_StructSimValue((struct__2688*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 2);
}


int is_struct__2688_allow_double_convertion() {
	return 0;
}


const char * get_struct__2688_signature() {
	static StructSimValue values[2];
	Fill_struct__2688_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 2);
}

FilterUtils get_struct__2688_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[2];
	Fill_struct__2688_StructSimValue((struct__2688*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 2, strFilter);
}

const char * struct__2688_filter_values[2] = {"odometerOfBaliseDetection", "BG_centerDetectionInaccuraccuracies"};
int check_struct__2688_string(const char* strValue) {
	static struct__2688 rTemp;
	return string_to_struct__2688(strValue, &rTemp);
}


/****************************************************************
 ** struct__2693
 ****************************************************************/
static void Fill_struct__2693_StructSimValue(struct__2693 * pStruct, StructSimValue * pValues) {
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

const char * struct__2693_to_string(const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__2693_StructSimValue(((struct__2693*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 10);
}

int string_to_struct__2693(const char* strValue, void* pValue) {
	static struct__2693 rTemp;
	int nResult = 0;
	static StructSimValue values[10];
	kcg_copy_struct__2693(&(rTemp), &(*((struct__2693*)pValue)));
	Fill_struct__2693_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 10);
	if (nResult == 1)
		kcg_copy_struct__2693(&(*((struct__2693*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2693_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[10];
	Fill_struct__2693_StructSimValue((struct__2693*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 10);
}


int is_struct__2693_allow_double_convertion() {
	return 0;
}


const char * get_struct__2693_signature() {
	static StructSimValue values[10];
	Fill_struct__2693_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 10);
}

FilterUtils get_struct__2693_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[10];
	Fill_struct__2693_StructSimValue((struct__2693*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 10, strFilter);
}

const char * struct__2693_filter_values[10] = {"q_updown", "m_version", "q_media", "n_pig", "n_total", "m_dup", "m_mcount", "nid_c", "nid_bg", "q_link"};
int check_struct__2693_string(const char* strValue) {
	static struct__2693 rTemp;
	return string_to_struct__2693(strValue, &rTemp);
}


/****************************************************************
 ** struct__2706
 ****************************************************************/
static void Fill_struct__2706_StructSimValue(struct__2706 * pStruct, StructSimValue * pValues) {
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
	pValues[3].m_pTypeUtils = &_SCSIM_struct__2693_Utils;
	pValues[3].m_pszName = "api_header";
	/*centerOfBalisePosition label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->centerOfBalisePosition) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__2688_Utils;
	pValues[4].m_pszName = "centerOfBalisePosition";
}

const char * struct__2706_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2706_StructSimValue(((struct__2706*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__2706(const char* strValue, void* pValue) {
	static struct__2706 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__2706(&(rTemp), &(*((struct__2706*)pValue)));
	Fill_struct__2706_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__2706(&(*((struct__2706*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2706_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2706_StructSimValue((struct__2706*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__2706_allow_double_convertion() {
	return 0;
}


const char * get_struct__2706_signature() {
	static StructSimValue values[5];
	Fill_struct__2706_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__2706_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2706_StructSimValue((struct__2706*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__2706_filter_values[5] = {"present", "checkResult", "api_bad_balise_received", "api_header", "centerOfBalisePosition"};
int check_struct__2706_string(const char* strValue) {
	static struct__2706 rTemp;
	return string_to_struct__2706(strValue, &rTemp);
}


/****************************************************************
 ** struct__2714
 ****************************************************************/
static void Fill_struct__2714_StructSimValue(struct__2714 * pStruct, StructSimValue * pValues) {
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
	pValues[3].m_pTypeUtils = &_SCSIM_struct__2706_Utils;
	pValues[3].m_pszName = "btm_msg";
	/*rtm_msg label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->rtm_msg) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__2671_Utils;
	pValues[4].m_pszName = "rtm_msg";
	/*packets label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_struct__2635_Utils;
	pValues[5].m_pszName = "packets";
}

const char * struct__2714_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__2714_StructSimValue(((struct__2714*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__2714(const char* strValue, void* pValue) {
	static struct__2714 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__2714(&(rTemp), &(*((struct__2714*)pValue)));
	Fill_struct__2714_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__2714(&(*((struct__2714*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2714_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__2714_StructSimValue((struct__2714*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__2714_allow_double_convertion() {
	return 0;
}


const char * get_struct__2714_signature() {
	static StructSimValue values[6];
	Fill_struct__2714_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__2714_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__2714_StructSimValue((struct__2714*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__2714_filter_values[6] = {"valid", "systemTimeMsgReceived", "msg_type", "btm_msg", "rtm_msg", "packets"};
int check_struct__2714_string(const char* strValue) {
	static struct__2714 rTemp;
	return string_to_struct__2714(strValue, &rTemp);
}


/****************************************************************
 ** struct__2723
 ****************************************************************/
static void Fill_struct__2723_StructSimValue(struct__2723 * pStruct, StructSimValue * pValues) {
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
	pValues[9].m_pTypeUtils = &_SCSIM_struct__2678_Utils;
	pValues[9].m_pszName = "bgPosition";
	/*BG_centerDetectionInaccuraccuracies label.*/
	pValues[10].m_pPtr = pStruct != 0 ? &(pStruct->BG_centerDetectionInaccuraccuracies) : 0;
	pValues[10].m_pTypeUtils = &_SCSIM_struct__2652_Utils;
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

const char * struct__2723_to_string(const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__2723_StructSimValue(((struct__2723*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 15);
}

int string_to_struct__2723(const char* strValue, void* pValue) {
	static struct__2723 rTemp;
	int nResult = 0;
	static StructSimValue values[15];
	kcg_copy_struct__2723(&(rTemp), &(*((struct__2723*)pValue)));
	Fill_struct__2723_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 15);
	if (nResult == 1)
		kcg_copy_struct__2723(&(*((struct__2723*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2723_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[15];
	Fill_struct__2723_StructSimValue((struct__2723*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 15);
}


int is_struct__2723_allow_double_convertion() {
	return 0;
}


const char * get_struct__2723_signature() {
	static StructSimValue values[15];
	Fill_struct__2723_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 15);
}

FilterUtils get_struct__2723_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[15];
	Fill_struct__2723_StructSimValue((struct__2723*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 15, strFilter);
}

const char * struct__2723_filter_values[15] = {"valid", "q_updown", "m_version", "q_media", "n_total", "m_mcount", "nid_c", "nid_bg", "q_link", "bgPosition", "BG_centerDetectionInaccuraccuracies", "q_nvlocacc", "noCoordinateSystemHasBeenAssigned", "trainOrientationToBG", "trainRunningDirectionToBG"};
int check_struct__2723_string(const char* strValue) {
	static struct__2723 rTemp;
	return string_to_struct__2723(strValue, &rTemp);
}


/****************************************************************
 ** struct__2741
 ****************************************************************/
static void Fill_struct__2741_StructSimValue(struct__2741 * pStruct, StructSimValue * pValues) {
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
	pValues[2].m_pTypeUtils = &_SCSIM_struct__2640_Utils;
	pValues[2].m_pszName = "radioMetadata";
	/*BG_Common_Header label.*/
	pValues[3].m_pPtr = pStruct != 0 ? &(pStruct->BG_Common_Header) : 0;
	pValues[3].m_pTypeUtils = &_SCSIM_struct__2723_Utils;
	pValues[3].m_pszName = "BG_Common_Header";
	/*Radio_Common_Header label.*/
	pValues[4].m_pPtr = pStruct != 0 ? &(pStruct->Radio_Common_Header) : 0;
	pValues[4].m_pTypeUtils = &_SCSIM_struct__2603_Utils;
	pValues[4].m_pszName = "Radio_Common_Header";
	/*packets label.*/
	pValues[5].m_pPtr = pStruct != 0 ? &(pStruct->packets) : 0;
	pValues[5].m_pTypeUtils = &_SCSIM_struct__2635_Utils;
	pValues[5].m_pszName = "packets";
}

const char * struct__2741_to_string(const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__2741_StructSimValue(((struct__2741*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 6);
}

int string_to_struct__2741(const char* strValue, void* pValue) {
	static struct__2741 rTemp;
	int nResult = 0;
	static StructSimValue values[6];
	kcg_copy_struct__2741(&(rTemp), &(*((struct__2741*)pValue)));
	Fill_struct__2741_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 6);
	if (nResult == 1)
		kcg_copy_struct__2741(&(*((struct__2741*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2741_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[6];
	Fill_struct__2741_StructSimValue((struct__2741*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 6);
}


int is_struct__2741_allow_double_convertion() {
	return 0;
}


const char * get_struct__2741_signature() {
	static StructSimValue values[6];
	Fill_struct__2741_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 6);
}

FilterUtils get_struct__2741_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[6];
	Fill_struct__2741_StructSimValue((struct__2741*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 6, strFilter);
}

const char * struct__2741_filter_values[6] = {"valid", "source", "radioMetadata", "BG_Common_Header", "Radio_Common_Header", "packets"};
int check_struct__2741_string(const char* strValue) {
	static struct__2741 rTemp;
	return string_to_struct__2741(strValue, &rTemp);
}


/****************************************************************
 ** struct__2750
 ****************************************************************/
static void Fill_struct__2750_StructSimValue(struct__2750 * pStruct, StructSimValue * pValues) {
	/*valid label.*/
	pValues[0].m_pPtr = pStruct != 0 ? &(pStruct->valid) : 0;
	pValues[0].m_pTypeUtils = &_SCSIM_kcg_bool_Utils;
	pValues[0].m_pszName = "valid";
	/*BG label.*/
	pValues[1].m_pPtr = pStruct != 0 ? &(pStruct->BG) : 0;
	pValues[1].m_pTypeUtils = &_SCSIM_struct__2741_Utils;
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

const char * struct__2750_to_string(const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2750_StructSimValue(((struct__2750*)pValue), values);
	return pSimulator->m_pfnStructureToString(values, 5);
}

int string_to_struct__2750(const char* strValue, void* pValue) {
	static struct__2750 rTemp;
	int nResult = 0;
	static StructSimValue values[5];
	kcg_copy_struct__2750(&(rTemp), &(*((struct__2750*)pValue)));
	Fill_struct__2750_StructSimValue(&rTemp, values);
	nResult = pSimulator->m_pfnStructureFromString(strValue, values, 5);
	if (nResult == 1)
		kcg_copy_struct__2750(&(*((struct__2750*)pValue)), &(rTemp));
	return nResult;
}

int compare_struct__2750_type(int* pResult, const char* toCompare, const void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2750_StructSimValue((struct__2750*)pValue, values);
	return pSimulator->m_pfnStructureComparison(pResult, toCompare, values, 5);
}


int is_struct__2750_allow_double_convertion() {
	return 0;
}


const char * get_struct__2750_signature() {
	static StructSimValue values[5];
	Fill_struct__2750_StructSimValue(0, values);
	return pSimulator->m_pfnStructureSignature(values, 5);
}

FilterUtils get_struct__2750_filter_utils(const char* strFilter, void* pValue) {
	static StructSimValue values[5];
	Fill_struct__2750_StructSimValue((struct__2750*)pValue, values);
	return pSimulator->m_pfnGetStructureFilterUtils(values, 5, strFilter);
}

const char * struct__2750_filter_values[5] = {"valid", "BG", "complete", "consistent", "TimeStamp"};
int check_struct__2750_string(const char* strValue) {
	static struct__2750 rTemp;
	return string_to_struct__2750(strValue, &rTemp);
}


/****************************************************************
 ** array__2758
 ****************************************************************/
void* array__2758_projection(void** pValues, int nIndex) {
	return &((*(array__2758*)pValues)[nIndex]);
}

const char * array__2758_to_string(const void* pValue) {
	return (char*) pSimulator->m_pfnArrayToString((const void**)pValue, struct__2750_to_string, 10, array__2758_projection);
}

int compare_array__2758_type(int* pResult, const char* toCompare, const void* pValue) {
	return pSimulator->m_pfnArrayComparison(pResult, toCompare, (const void**)pValue, compare_struct__2750_type , 10, array__2758_projection);
}

int is_array__2758_allow_double_convertion() {
	return 0;
}

int string_to_array__2758(const char* strValue, void* pValue) {
	static array__2758 rTemp;
	int nResult = pSimulator->m_pfnArrayFromString(strValue, (void**)(void*)&rTemp, string_to_struct__2750, 10, array__2758_projection);
	if (nResult == 1)
		kcg_copy_array__2758(&(*((array__2758*)pValue)), &(rTemp));
	return nResult;
}

const char * get_array__2758_signature() {
	return pSimulator->m_pfnArraySignature(get_struct__2750_signature, 10);
}

FilterUtils get_array__2758_filter_utils(const char* strFilter, void* pValue) {
	return pSimulator->m_pfnGetArrayFilterUtils(&_SCSIM_struct__2750_Utils, strFilter, (void**)pValue, 10, array__2758_projection);
}

int check_array__2758_string(const char* strValue) {
	static array__2758 rTemp;
	return string_to_array__2758(strValue, &rTemp);
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
	case _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise:
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
		*((M_DUP*)pValue) = _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
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
	case _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise:
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
 ** ReceivedBG_CheckBGInputChannel_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimReceivedBG_CheckBGInputChannel_PkgVTable;
const char * ReceivedBG_CheckBGInputChannel_Pkg_to_string(const void* pValue) {
	if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != 0 && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2750_to_string(pValue);
}

int string_to_ReceivedBG_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimReceivedBG_CheckBGInputChannel_PkgVTable != 0 && pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ReceivedBG_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimReceivedBG_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2750(&(*((ReceivedBG_CheckBGInputChannel_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2750(strValue, pValue);
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
	return is_struct__2750_allow_double_convertion();
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
	if (_SCSIM_struct__2750_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2750_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return array__2758_to_string(pValue);
}

int string_to_ReceivedBGs_CheckBGInputChannel_Pkg(const char* strValue, void* pValue) {
	if (pSimReceivedBGs_CheckBGInputChannel_PkgVTable != 0 && pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ReceivedBGs_CheckBGInputChannel_Pkg rTemp;
		int nResult = pSimReceivedBGs_CheckBGInputChannel_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__2758(&(*((ReceivedBGs_CheckBGInputChannel_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__2758(strValue, pValue);
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
	return is_array__2758_allow_double_convertion();
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
	if (_SCSIM_array__2758_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__2758_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_ReceivedBGs_CheckBGInputChannel_Pkg_string(const char* strValue) {
	static ReceivedBGs_CheckBGInputChannel_Pkg rTemp;
	return string_to_ReceivedBGs_CheckBGInputChannel_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** API_TrackSideInput_T_API_Msg_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimAPI_TrackSideInput_T_API_Msg_PkgVTable;
const char * API_TrackSideInput_T_API_Msg_Pkg_to_string(const void* pValue) {
	if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != 0 && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2714_to_string(pValue);
}

int string_to_API_TrackSideInput_T_API_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimAPI_TrackSideInput_T_API_Msg_PkgVTable != 0 && pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static API_TrackSideInput_T_API_Msg_Pkg rTemp;
		int nResult = pSimAPI_TrackSideInput_T_API_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2714(&(*((API_TrackSideInput_T_API_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2714(strValue, pValue);
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
	return is_struct__2714_allow_double_convertion();
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
	if (_SCSIM_struct__2714_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2714_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__2706_to_string(pValue);
}

int string_to_API_TelegramHeader_T_API_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimAPI_TelegramHeader_T_API_Msg_PkgVTable != 0 && pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static API_TelegramHeader_T_API_Msg_Pkg rTemp;
		int nResult = pSimAPI_TelegramHeader_T_API_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2706(&(*((API_TelegramHeader_T_API_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2706(strValue, pValue);
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
	return is_struct__2706_allow_double_convertion();
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
	if (_SCSIM_struct__2706_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2706_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__2671_to_string(pValue);
}

int string_to_API_RadioMsgHeader_T_API_Msg_Pkg(const char* strValue, void* pValue) {
	if (pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable != 0 && pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static API_RadioMsgHeader_T_API_Msg_Pkg rTemp;
		int nResult = pSimAPI_RadioMsgHeader_T_API_Msg_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2671(&(*((API_RadioMsgHeader_T_API_Msg_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2671(strValue, pValue);
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
	return is_struct__2671_allow_double_convertion();
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
	if (_SCSIM_struct__2671_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2671_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_API_RadioMsgHeader_T_API_Msg_Pkg_string(const char* strValue) {
	static API_RadioMsgHeader_T_API_Msg_Pkg rTemp;
	return string_to_API_RadioMsgHeader_T_API_Msg_Pkg(strValue, &rTemp);
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
 ** odometry_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimodometry_T_Obu_BasicTypes_PkgVTable;
const char * odometry_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimodometry_T_Obu_BasicTypes_PkgVTable != 0 && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2678_to_string(pValue);
}

int string_to_odometry_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimodometry_T_Obu_BasicTypes_PkgVTable != 0 && pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static odometry_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimodometry_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2678(&(*((odometry_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2678(strValue, pValue);
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
	return is_struct__2678_allow_double_convertion();
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
	if (_SCSIM_struct__2678_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2678_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_odometry_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static odometry_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_odometry_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable;
const char * OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void* pValue) {
	if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != 0 && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2665_to_string(pValue);
}

int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable != 0 && pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static OdometryLocations_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimOdometryLocations_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2665(&(*((OdometryLocations_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2665(strValue, pValue);
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
	return is_struct__2665_allow_double_convertion();
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
	if (_SCSIM_struct__2665_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2665_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__2658_to_string(pValue);
}

int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable != 0 && pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static OdometrySpeeds_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimOdometrySpeeds_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2658(&(*((OdometrySpeeds_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2658(strValue, pValue);
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
	return is_struct__2658_allow_double_convertion();
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
	if (_SCSIM_struct__2658_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2658_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__2652_to_string(pValue);
}

int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue) {
	if (pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable != 0 && pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static LocWithInAcc_T_Obu_BasicTypes_Pkg rTemp;
		int nResult = pSimLocWithInAcc_T_Obu_BasicTypes_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2652(&(*((LocWithInAcc_T_Obu_BasicTypes_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2652(strValue, pValue);
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
	return is_struct__2652_allow_double_convertion();
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
	if (_SCSIM_struct__2652_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2652_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char* strValue) {
	static LocWithInAcc_T_Obu_BasicTypes_Pkg rTemp;
	return string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(strValue, &rTemp);
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
 ** RadioMetadata_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimRadioMetadata_T_Common_Types_PkgVTable;
const char * RadioMetadata_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimRadioMetadata_T_Common_Types_PkgVTable != 0 && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2640_to_string(pValue);
}

int string_to_RadioMetadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimRadioMetadata_T_Common_Types_PkgVTable != 0 && pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static RadioMetadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimRadioMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2640(&(*((RadioMetadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2640(strValue, pValue);
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
	return is_struct__2640_allow_double_convertion();
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
	if (_SCSIM_struct__2640_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2640_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_RadioMetadata_T_Common_Types_Pkg_string(const char* strValue) {
	static RadioMetadata_T_Common_Types_Pkg rTemp;
	return string_to_RadioMetadata_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimCompressedPackets_T_Common_Types_PkgVTable;
const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2635_to_string(pValue);
}

int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimCompressedPackets_T_Common_Types_PkgVTable != 0 && pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static CompressedPackets_T_Common_Types_Pkg rTemp;
		int nResult = pSimCompressedPackets_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2635(&(*((CompressedPackets_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2635(strValue, pValue);
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
	return is_struct__2635_allow_double_convertion();
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
	if (_SCSIM_struct__2635_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2635_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return array__2632_to_string(pValue);
}

int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadata_T_Common_Types_PkgVTable != 0 && pSimMetadata_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Metadata_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadata_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_array__2632(&(*((Metadata_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_array__2632(strValue, pValue);
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
	return is_array__2632_allow_double_convertion();
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
	if (_SCSIM_array__2632_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_array__2632_Utils.m_pfnTypeToDouble(nValue, pValue);
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
	return struct__2624_to_string(pValue);
}

int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimMetadataElement_T_Common_Types_PkgVTable != 0 && pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static MetadataElement_T_Common_Types_Pkg rTemp;
		int nResult = pSimMetadataElement_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2624(&(*((MetadataElement_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2624(strValue, pValue);
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
	return is_struct__2624_allow_double_convertion();
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
	if (_SCSIM_struct__2624_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2624_Utils.m_pfnTypeToDouble(nValue, pValue);
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
 ** ReceivedMessage_T_Common_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimReceivedMessage_T_Common_Types_PkgVTable;
const char * ReceivedMessage_T_Common_Types_Pkg_to_string(const void* pValue) {
	if (pSimReceivedMessage_T_Common_Types_PkgVTable != 0 && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2741_to_string(pValue);
}

int string_to_ReceivedMessage_T_Common_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimReceivedMessage_T_Common_Types_PkgVTable != 0 && pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static ReceivedMessage_T_Common_Types_Pkg rTemp;
		int nResult = pSimReceivedMessage_T_Common_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2741(&(*((ReceivedMessage_T_Common_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2741(strValue, pValue);
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
	return is_struct__2741_allow_double_convertion();
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
	if (_SCSIM_struct__2741_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2741_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_ReceivedMessage_T_Common_Types_Pkg_string(const char* strValue) {
	static ReceivedMessage_T_Common_Types_Pkg rTemp;
	return string_to_ReceivedMessage_T_Common_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimTelegramHeader_T_BG_Types_PkgVTable;
const char * TelegramHeader_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0 && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2693_to_string(pValue);
}

int string_to_TelegramHeader_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimTelegramHeader_T_BG_Types_PkgVTable != 0 && pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static TelegramHeader_T_BG_Types_Pkg rTemp;
		int nResult = pSimTelegramHeader_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2693(&(*((TelegramHeader_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2693(strValue, pValue);
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
	return is_struct__2693_allow_double_convertion();
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
	if (_SCSIM_struct__2693_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2693_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_TelegramHeader_T_BG_Types_Pkg_string(const char* strValue) {
	static TelegramHeader_T_BG_Types_Pkg rTemp;
	return string_to_TelegramHeader_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** centerOfBalisePosition_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimcenterOfBalisePosition_T_BG_Types_PkgVTable;
const char * centerOfBalisePosition_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != 0 && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2688_to_string(pValue);
}

int string_to_centerOfBalisePosition_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimcenterOfBalisePosition_T_BG_Types_PkgVTable != 0 && pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static centerOfBalisePosition_T_BG_Types_Pkg rTemp;
		int nResult = pSimcenterOfBalisePosition_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2688(&(*((centerOfBalisePosition_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2688(strValue, pValue);
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
	return is_struct__2688_allow_double_convertion();
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
	if (_SCSIM_struct__2688_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2688_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_centerOfBalisePosition_T_BG_Types_Pkg_string(const char* strValue) {
	static centerOfBalisePosition_T_BG_Types_Pkg rTemp;
	return string_to_centerOfBalisePosition_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** BG_Header_T_BG_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimBG_Header_T_BG_Types_PkgVTable;
const char * BG_Header_T_BG_Types_Pkg_to_string(const void* pValue) {
	if (pSimBG_Header_T_BG_Types_PkgVTable != 0 && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimBG_Header_T_BG_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2723_to_string(pValue);
}

int string_to_BG_Header_T_BG_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimBG_Header_T_BG_Types_PkgVTable != 0 && pSimBG_Header_T_BG_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static BG_Header_T_BG_Types_Pkg rTemp;
		int nResult = pSimBG_Header_T_BG_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2723(&(*((BG_Header_T_BG_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2723(strValue, pValue);
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
	return is_struct__2723_allow_double_convertion();
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
	if (_SCSIM_struct__2723_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2723_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_BG_Header_T_BG_Types_Pkg_string(const char* strValue) {
	static BG_Header_T_BG_Types_Pkg rTemp;
	return string_to_BG_Header_T_BG_Types_Pkg(strValue, &rTemp);
}


/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg
 ****************************************************************/
struct SimTypeVTable* pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable;
const char * Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void* pValue) {
	if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != 0 && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1)
		return *(char**)pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnToType(SptString, pValue);
	return struct__2603_to_string(pValue);
}

int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char* strValue, void* pValue) {
	if (pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable != 0 && pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnGetConvInfo(SptNone, SptString) == 1) {
		static Radio_TrackTrain_Header_T_Radio_Types_Pkg rTemp;
		int nResult = pSimRadio_TrackTrain_Header_T_Radio_Types_PkgVTable->m_pfnFromType(SptString, (const void*)&strValue, &rTemp);
		if (nResult == 1)
			kcg_copy_struct__2603(&(*((Radio_TrackTrain_Header_T_Radio_Types_Pkg*)pValue)), &(rTemp));
		return nResult;
	}
	return string_to_struct__2603(strValue, pValue);
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
	return is_struct__2603_allow_double_convertion();
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
	if (_SCSIM_struct__2603_Utils.m_pfnTypeToDouble != 0)
		return _SCSIM_struct__2603_Utils.m_pfnTypeToDouble(nValue, pValue);
	return 0;
}

int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char* strValue) {
	static Radio_TrackTrain_Header_T_Radio_Types_Pkg rTemp;
	return string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(strValue, &rTemp);
}


