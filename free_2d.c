#include "main.h"

/**
 * free_2d - functions frees memory
 * @argv: a pointer to a pointer to an array of strings
 * @token_count: Number of tokens
 */
void free_2d(char **argv, int token_count)
{
	int x;

	for (x = 0; x < token_count; x++)
	{
		free(argv[x]);
		argv[x] = NULL;
	}

	free(argv);
	argv = NULL;
}
