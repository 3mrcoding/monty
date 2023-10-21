#include "monty.h"

/**
 * _freee - free a double string
 * @s: string
*/

void _freee(char **s)
{
	int k;

	for (k = 0; s[k] != NULL; k++)
		free(s[k]);
	free(s);
}
