#include "monty.h"

/**
 * sub - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr, *p;
	int num = 0;

	ptr = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr = (*stack)->next;
	num = (ptr->n - (*stack)->n);
	p = (*stack);
	*stack = ptr;
	free(p);
	(*stack)->prev = NULL;
	(*stack)->n = num;
}
