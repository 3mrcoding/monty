#include "monty.h"

void push_s(stack_t **stack, unsigned int ln)
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
