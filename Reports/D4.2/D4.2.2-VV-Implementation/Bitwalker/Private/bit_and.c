

void bit_and_char(unsigned char a)
{
   unsigned char b = a & 1;
   //@ assert b == 0 || b == 1;
}

void bit_and_short(unsigned short a)
{
   unsigned short b = a & 1;
   //@ assert b == 0 || b == 1;
}

void bit_and_int(unsigned int a)
{
   unsigned int b = a & 1;
   //@ assert b == 0 || b == 1;
}

void bit_and_long(unsigned long a)
{
   unsigned long b = a & 1;
   //@ assert b == 0 || b == 1;
}

