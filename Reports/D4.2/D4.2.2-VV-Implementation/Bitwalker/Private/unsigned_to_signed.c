
/*@
    requires \valid(x);
    assigns  *x;
*/
int f(unsigned int a, unsigned int* x)
{
    *x = a + a;
    int b = a;
    return b;
}

