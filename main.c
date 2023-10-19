#include "monty.h"

int main(int argc, char *argv[])
{
    stack_t *stack = NULL;
    int i;
    char **lines;
    char **tokens;
    char *d = " \t\n";

    if (argc != 2)
    {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    lines = open_file(argv);
    for (i = 0; lines[i] != NULL ; i++)
    {
        tokens = get_token(lines[i],d);
        if (tokens[0] == NULL)
            continue;
        _include(&stack, tokens, (i + 1));
        _free(1,tokens);
    }
    _free(1, lines);
    return (0);
}
