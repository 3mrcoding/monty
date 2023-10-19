#include "monty.h"




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

    lines = malloc(1024 * sizeof(char *));

    while (fgets(line, sizeof(line), file))
	{
        lines[i] = malloc(strlen(line) + 1);
        strcpy(lines[i], line);
        i++;
    }

    fclose(file);

    return lines;
}
