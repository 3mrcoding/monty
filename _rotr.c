#include "monty.h"

/**
 * rotr - return tokanized string
 * @stack: string from getline
 * @line_number: delemitir
 * Return: array of pointers to pointerss
*/

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *p, *ptr, *tmp;
	(void)line_number;

	if (*stack == NULL || stack == NULL)
		return;
	ptr = *stack;
	while (ptr->next != NULL)
		ptr = ptr->next;
	p = ptr->prev;
	tmp = malloc(sizeof(stack_t));
	tmp->next = NULL;
	tmp->prev = NULL;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	tmp->n = ptr->n;
	p->next = NULL;
	ptr->prev = NULL;
	free(ptr);
	ptr = NULL;
	*stack = tmp;
}
