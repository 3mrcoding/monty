#include "monty.h"

/**
 * new_node - return tokanized string
 * @x: string from getline
 * Return: array of pointers to pointerss
*/

stack_t *new_node(int x)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	new_node->n = x;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
