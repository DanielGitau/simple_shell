#include "main.h"

/**
 * execute - executes the user input command
 * @argv: A pointer to a pointer of a array of strings
 * @token_count: number of tokens
 * Return: success (0)
 */
int execute(char **argv, int token_count)
{
	char *lineptr = NULL, *lineptr_cpy, *command_path = NULL;
	int char_count;
	pid_t child_pd;

	char_count = get_line(&lineptr);
	lineptr_cpy = malloc(sizeof(char) * char_count);
	_strcpy(lineptr_cpy, lineptr);
	token_count = num_token(lineptr);
	if (token_count == 0)
	{
		free(lineptr);
		free(lineptr_cpy);
		return (-1);
	}
	argv = malloc(sizeof(char *) * (token_count + 1));
	str_split(lineptr_cpy, argv, token_count);
	command_path = get_command(argv, command_path);
	if (command_path != NULL)
	{
		child_pd = fork();
		if (child_pd == 0)
			execve(command_path, argv, environ);
		wait(NULL);
	}
	free(command_path);
	free(lineptr);
	free(lineptr_cpy);

	return (0);
}
