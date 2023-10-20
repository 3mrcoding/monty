#include "monty.h"

/**
 * pall - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *p = NULL;
	(void)line_number;

	p = (*stack);
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
