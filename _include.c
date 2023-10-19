#include "monty.h"

int _include(stack_t **stack, char **s, int x)
{
    int y = 0;
    int i;
    instruction_t commands[] = {
		{"push", &push_s},
		{"pall", &pall},
        {NULL, NULL}
	};
    
    for(i = 0; commands[i].opcode != NULL; i++)
    {
        if(strcmp(commands[i].opcode, s[0]) == 0)
        {
            if (strcmp(s[0], "pall") == 0)
            {
                commands[i].f(stack, y);
            }
            else
            {
                y = atoi(s[1]);
                commands[i].f(stack, y);
            }
            break;
        }
        else if(strcmp(commands[i].opcode, "NULL") == 0)
        {
            fprintf(stderr, "L%i: unknown instruction %s\n", x, s[0]);
            exit(EXIT_FAILURE);
        }
    }
    return (0);
}
