#include <stdio.h>

#ifndef EXIT_SUCCESS
 #define EXIT_SUCCESS 0u
#endif 

int main (void)
{
    printf("Testing function make call\n"); /* Undefined macro in code: it will be defined when compiling*/
    return EXIT_SUCCESS;
}