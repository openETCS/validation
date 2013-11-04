#include <stdlib.h>

#include "elop_bs.h"


/* MAXINT */
#ifndef MAXINT
#define MAXINT (2147483647)
#endif /* MAXINT */


void elop_bs__INITIALISATION(void)
{
}

#define elop_bs__abs(val) (((val) >= 0) ? (val) : (-(val)))

void elop_bs__fail(void)
{
   exit(1);
}

void elop_bs__add_int_int(
   const int32_t p_int_1,
   const int32_t p_int_2,
   int32_t * const p_res)
{
   *p_res = p_int_1 + p_int_2;

	if ( (0 < p_int_1 && 0 < p_int_2 && *p_res < 0) ||
		(p_int_1 < 0 && p_int_2 < 0 && 0 < *p_res) ) {
		elop_bs__fail();
	}
}

void elop_bs__mul_int_int(
   const int32_t p_int_1,
   const int32_t p_int_2,
   int32_t * const p_res)
{

   int32_t l_controle_debordement;
   int32_t l_int_1_abs = elop_bs__abs(p_int_1);
   int32_t l_int_2_abs = elop_bs__abs(p_int_2);

   *p_res = p_int_1 * p_int_2;

	if(l_int_2_abs != 0) {
		l_controle_debordement = MAXINT / l_int_2_abs;
		if(l_int_1_abs > l_controle_debordement) {
			elop_bs__fail();
		}
	}
}

