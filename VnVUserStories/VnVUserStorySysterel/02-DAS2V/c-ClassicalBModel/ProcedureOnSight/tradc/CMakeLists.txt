project(OpenETCS_ProcedureOS)

cmake_minimum_required(VERSION 2.4)

SET(OpenETCS_ProcedureOS_SOURCES
    os_consist_1_i.c
    os_consist_2_i.c
    os_consist_i.c
    os_in_i.c
    os_main_1_i.c
    os_main_i.c
    os_mode_level_1_i.c
    os_mode_level_2_i.c
    os_mode_level_i.c
    os_out_i.c
    os_train_info_1_i.c
    os_train_info_2_i.c
    os_train_info_i.c
    os_typ_i.c
    b_init.c
    b_main.c
)
SET(OpenETCS_ProcedureOS_HEADERS
    elop_bs.h
    os_consist.h
    os_consist_1.h
    os_consist_2.h
    os_cte_conf_bs.h
    os_in.h
    os_in_bs.h
    os_main.h
    os_main_1.h
    os_mode_level.h
    os_mode_level_1.h
    os_mode_level_2.h
    os_out.h
    os_out_bs.h
    os_train_info.h
    os_train_info_1.h
    os_train_info_2.h
    os_typ.h
    b_init.h
)
add_executable(OpenETCS_ProcedureOS ${OpenETCS_ProcedureOS_SOURCES} ${OpenETCS_ProcedureOS_HEADERS})
