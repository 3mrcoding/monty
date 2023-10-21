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
	int i, j;
	instruction_t commands[] = {
		{"push", &push_s}, {"pall", &pall}, {"pint", &pint},
		{"pop", &pop}, {"swap", &swap}, {"add", &add},
		{"nop", &nop}, {"sub", &sub}, {"div", &_div},
		{"rotl", &rotl}, {"mul", &mul}, {"mod", &mod}, {"NULL", NULL}
	};

	for ( j = 0; s[j] != NULL; j++)
	{
		for (i = 0; commands[i].opcode != NULL; i++)
		{
			if (strcmp(commands[i].opcode, "NULL") == 0)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", x, s[j]);
				exit(EXIT_FAILURE);
			}
			else if (strcmp(commands[i].opcode, s[j]) == 0)
			{
				commands[i].f(stack, x);
				if (strcmp(s[j], "push") == 0)
				{
					j++;
					if (s[j] == NULL || isNumber(s[j]) == 0)
					{
						fprintf(stderr, "L%d: usage: push integer\n", x);
						exit(EXIT_FAILURE);
					}
					(*stack)->n = atoi(s[j]);
				}
				break;
			}
		}
	}
	return (0);
}
