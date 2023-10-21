#include "monty.h"

/**
 * open_file - return tokanized string
 * @argv: string from getline
 * Return: array of pointers to pointerss
*/


char **open_file(char *argv[])
{
	char **lines;
	char line[1024];
	int i = 0;
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	lines = malloc(6000 * sizeof(char *));

	while (fgets(line, sizeof(line), file))
	{
		lines[i] = malloc(strlen(line) + 1);
		strcpy(lines[i], line);
		i++;
	}
	lines[i] = NULL;

	fclose(file);

	return (lines);
}
