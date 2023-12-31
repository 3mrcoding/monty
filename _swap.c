#include "monty.h"

/**
 * swap - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/


void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr, *tmp;

	ptr = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next->next == NULL)
	{
		ptr = (*stack)->next;
		(*stack)->next = NULL;
		ptr->prev = NULL;
		ptr->next = *stack;
		(*stack)->prev = ptr;
		(*stack) = ptr;
	}
	else
	{
		ptr = (*stack)->next;
		(*stack)->next = NULL;
		ptr->prev = NULL;
		tmp = ptr->next;
		(*stack)->next = tmp;
		tmp->prev = *stack;
		ptr->next = *stack;
		(*stack)->prev = ptr;
		*stack = ptr;
	}
}
