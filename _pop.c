#include "monty.h"

/**
 * pop - return tokanized string
 * @stack: string from getline
 * @ln: delemitir
 * Return: array of pointers to pointerss
*/

void pop(stack_t **stack, unsigned int ln)
{
	stack_t *ptr;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", ln);
		exit(EXIT_FAILURE);
	}
	ptr = *stack;
	(*stack) = (*stack)->next;
	if ((*stack) != NULL)
	{
		/* code */
	}
	free(ptr);
	ptr = NULL;
}
