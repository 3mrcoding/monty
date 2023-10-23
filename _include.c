#include "monty.h"
/**
 * _include - function that executes a command line
 * @stack: no
 * @s: no
 * @x: no
 * @m: string
 * Return: int
 */
int _include(stack_t **stack, char **m, char **s, int x)
{
	int i, j;
	instruction_t commands[] = {
		{"pstr", &pstr}, {"push", &push_s}, {"pall", &pall}, {"pint", &pint},
		{"pchar", &pchar}, {"pop", &pop}, {"swap", &swap}, {"add", &add},
		{"nop", &nop}, {"sub", &sub}, {"div", &_div}, {"rotl", &rotl},
		{"rotr", &rotr}, {"mul", &mul}, {"mod", &mod}, {"NULL", NULL}
	};

	for (j = 0; s[j] != NULL; j++)
	{
		for (i = 0; commands[i].opcode != NULL; i++)
		{
			if (strcmp(commands[i].opcode, "NULL") == 0)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", x, s[j]);
				_freee(s);
				_freee(m);
				freeList(stack);
				exit(EXIT_FAILURE); }
			else if (strcmp(commands[i].opcode, s[j]) == 0)
			{
				commands[i].f(stack, x);
				if (strcmp(s[j], "push") == 0)
				{
					j++;
					if (s[j] == NULL || isNumber(s[j]) == 0)
					{
						fprintf(stderr, "L%d: usage: push integer\n", x);
						_freee(s);
						_freee(m);
						freeList(stack);
						exit(EXIT_FAILURE); }
					(*stack)->n = atoi(s[j]); }
					if (strcmp(s[j], commands->opcode) != 0)
						j++;
				break; } } }
	return (0);
}
