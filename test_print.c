#include "monty.h"

/**
 * print_test - return tokanized string
 * @f: string from getline
 * Return: array of pointers to pointerss
*/

void print_test(char **f)
{
	int i;

	for (i = 0; f[i] != 0; i++)
		printf("%s\n", f[i]);
}
