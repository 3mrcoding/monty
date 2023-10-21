#include "monty.h"

/**
 * rotl - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *p, *ptr, *tmp;
	(void)line_number;

	if (*stack == NULL || stack == NULL)
		return;
	ptr = *stack;
	while (ptr->next != NULL)
		ptr = ptr->next;
	tmp = malloc(sizeof(stack_t));
	tmp->next = NULL;
	tmp->prev = NULL;
	ptr->next = tmp;
	tmp->prev = ptr;
	p = *stack;
	tmp->n = p->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(p);
	p = NULL;
}
