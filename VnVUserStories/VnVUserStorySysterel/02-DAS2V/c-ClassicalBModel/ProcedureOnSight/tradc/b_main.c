#include "b_init.h"
#include "os_main.h"

int main(void)
{
    b_initialisation();
    os_main__run_cycle();
}