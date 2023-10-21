#include "monty.h"

/**
 * pop - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
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
