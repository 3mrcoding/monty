#include "monty.h"

/**
 * _include - function that executes a command line
 * @stack: no
 * @s: no
 * @x: no
 * Return: int
 */

int _include(stack_t **stack, char **s, int x)
{
	int i;
	instruction_t commands[] = {
		{"push", &push_s},
		{"pall", &pall},
		{"pint", &pint},
		{"pop", &pop},
		{"swap", &swap},
		{"add", &add},
		{"nop", &nop},
		{"NULL", NULL}
	};
	for (i = 0; commands[i].opcode != NULL; i++)
	{
		if (strcmp(commands[i].opcode, s[0]) == 0)
		{
			commands[i].f(stack, x);
			if (strcmp(commands[i].opcode, "push") == 0)
			{
				if (s[1] == NULL || isNumber(s[1]) == 0)
				{
					fprintf(stderr, "L%d: usage: push integer\n", x);
					exit(EXIT_FAILURE);
				}
				(*stack)->n = atoi(s[1]);
				break;
			}
		}
		else if (strcmp(commands[i].opcode, "NULL") == 0)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", x, s[0]);
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}
