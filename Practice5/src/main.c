#include <stdio.h>
#include "wrapper.h"

#ifndef EXIT_SUCCESS
 #define EXIT_SUCCESS  0u
#endif

int main (void)
{
    printf("Hello Practice5\n");
    my_printf();
    SL_print();
    return EXIT_SUCCESS;
}