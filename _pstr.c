#include "monty.h"

/**
 * pstr - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *p;
	(void)line_number;

	p = *stack;
	while (p != NULL)
	{
		if (*stack == NULL || p->n == 0 || p->n < 0 || p->n > 127)
			break;
		printf("%c", p->n);
		p = p->next;
	}
	printf("\n");
}
