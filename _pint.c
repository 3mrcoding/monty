#include "monty.h"

/**
 * pint - return tokanized string
 * @stack: string from getline
 * @ln: delemitir
 * Return: array of pointers to pointerss
*/

void pint(stack_t **stack, unsigned int ln)
{
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
