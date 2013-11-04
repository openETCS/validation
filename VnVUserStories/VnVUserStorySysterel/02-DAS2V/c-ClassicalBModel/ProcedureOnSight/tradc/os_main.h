#ifndef _os_main_h
#define _os_main_h

#include <stdint.h>
#include <stdbool.h>
/* Clause IMPORTS */
#include "elop_bs.h"
#include "os_cte_conf_bs.h"
#include "os_typ.h"
#include "os_main_1.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_main__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_main__run_cycle(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_main_h */
