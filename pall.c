#include "monty.h"

void pall(__attribute__((unused)) stack_t **stack, __attribute__((unused)) unsigned int ln)
{
    stack_t *p = NULL;
    p = (*stack);
    while (p != NULL)
    {
        printf("%d\n", p->n);
        p = p->next;
    }
}
