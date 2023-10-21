#include "monty.h"

/**
 * freeList - free a linked list
 * @stack: string
*/

void freeList(stack_t **stack)
{
	stack_t *temp = *stack;
	stack_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*stack = NULL;
}
