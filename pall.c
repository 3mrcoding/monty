#include "monty.h"

/**
 * pall - return tokanized string
 * @stack: string from getline
 * @ln: delemitir
 * Return: array of pointers to pointerss
*/

void pall(stack_t **stack, __attribute__((unused)) unsigned int ln)
{
	stack_t *p = NULL;

	p = (*stack);
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
