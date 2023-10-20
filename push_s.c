#include "monty.h"

/**
 * push_s - return tokanized string
 * @stack: string from getline
 * @ln: delemitir
 * Return: array of pointers to pointerss
*/

void push_s(stack_t **stack, __attribute__((unused)) unsigned int ln)
{
	stack_t *ptr = malloc(sizeof(stack_t));

	ptr->next = NULL;
	ptr->n = ln;
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
