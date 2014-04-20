
/*@
    requires \valid(a + (0..n-1));
    assigns  a[0..n];  // should be a[0..n-1]
*/
void foo(int* a, unsigned int n)
{
   /*@
       loop invariant 0 <= i <= n;
       loop assigns i, a[0..n]; // should be a[0..n-1];
       loop variant n-i;
   */
   for(unsigned int i = 0; i < n; ++i)
       a[i] = 0;
}

