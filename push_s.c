#include "monty.h"

/**
 * push_s - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/

void push_s(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = malloc(sizeof(stack_t));

	ptr->next = NULL;
	ptr->n = line_number;
	ptr->prev = NULL;

	if (*stack == NULL)
	{
		*stack = ptr;
	}
	else
	{
		ptr->next = *stack;
		(*stack)->prev = ptr;
		*stack = ptr;
	}
}
