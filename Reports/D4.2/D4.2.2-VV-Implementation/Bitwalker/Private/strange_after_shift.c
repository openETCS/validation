

void strange_after_shift(unsigned int x)
{
    unsigned int y = x & 1;
    //@ assert y == 0 || y == 1;
    //@ assert 0 <= y <= 1;
}

