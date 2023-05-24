#include "main.h"

/**
 * main - entry point
 * Return: success (0)
 */
int main(void)
{
	char **argv = NULL;
	int token_count = 0;

	while (isatty(STDIN_FILENO) == 0)
		if (execute(argv, token_count) != -1)
		{
			free_2d(argv, token_count);
		}
	while (1)
	{
		write(STDOUT_FILENO, "#cisfun$", 10);
		if (execute(argv, token_count) != -1)
		{
			free_2d(argv, token_count);
		}
	}
	return (0);
}
