#include "monty.h"

void print_test(char **f)
{
    int i;
    
    for (i = 0; f[i] != 0; i++)
        printf("%s\n", f[i]);
}

