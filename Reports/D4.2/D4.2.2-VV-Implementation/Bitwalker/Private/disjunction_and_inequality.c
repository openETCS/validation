

/*@
    requires x == 0 || x == 1;
    assigns \nothing;
    ensures 0 <= \result <= 1;
*/
int foo(int x)
{
   return x;
}


/*@
    requires x == 0 || x == 1;
    assigns \nothing;
*/
void bar(int x)
{
   x;
   //@ assert 0 <= x <= 1;
}

