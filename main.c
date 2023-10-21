#include "monty.h"

/**
 * main - main fun
 * @argc: string from getline
 * @argv: delemitir
 * Return: int
*/

int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	int i;
	char **lines;
	char **tokens;
	char *d = " \t\n";

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	lines = open_file(argv);
	for (i = 0; lines[i] != NULL ; i++)
	{
		tokens = get_token(lines[i], d);
		if (tokens[0] == NULL)
			continue;
		_include(&stack, lines, tokens, (i + 1));
		_freee(tokens);
	}
	_freee(lines);
	freeList(&stack);
	return (0);
}
