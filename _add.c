#include "monty.h"

/**
 * pint - return tokanized string
 * @stack: string from getline
 * @ln: delemitir
 * Return: array of pointers to pointerss
*/

void add(stack_t **stack, unsigned int ln)
{
	stack_t *ptr, *tmp, *p;

	ptr = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	ptr = (*stack)->next;
	printf("%d\n", ((*stack)->n + ptr->n));
	tmp = ptr->next;
	p = (*stack);
	*stack = tmp;
	free(p);
	free(ptr);
	(*stack)->prev = NULL;
}