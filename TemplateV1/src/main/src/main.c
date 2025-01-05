#include <stdio.h>
#include "example.h"

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0u
#endif

int main(void)
{
    printf("Testing template version 1\n");
    print_example();
    return EXIT_SUCCESS;
}