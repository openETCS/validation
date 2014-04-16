/*@
    requires d > 0;

    assigns \nothing;

    ensures 0 <= \result < d;
*/
static inline
unsigned int inverse_modulo(unsigned int n, unsigned int d)
{
  return d - 1 - (n % d);
}

