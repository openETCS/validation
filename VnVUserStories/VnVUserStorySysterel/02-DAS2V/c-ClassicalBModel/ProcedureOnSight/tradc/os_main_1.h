#ifndef _os_main_1_h
#define _os_main_1_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"

/* Clause IMPORTS */
#include "os_in.h"
#include "os_consist.h"
#include "os_train_info.h"
#include "os_mode_level.h"
#include "os_out.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_main_1__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_main_1__process_input(void);
extern void os_main_1__check_data_consistency(void);
extern void os_main_1__define_train_speed_and_position(void);
extern void os_main_1__elaborate_mode_level(void);
extern void os_main_1__process_output(void);
extern void os_main_1__copy_prec(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_main_1_h */
