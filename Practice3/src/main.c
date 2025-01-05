#include <stdio.h>
#include "so_example.h"

#ifndef EXIT_SUCCESS
 #define EXIT_SUCCESS 0u
#endif 

int main (void)
{
    printf("Module 3\n");
    my_printf(); /* This function is within Practice2 */
    return EXIT_SUCCESS;
}