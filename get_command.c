#include "main.h"

/**
 * get_command - fetches the command
 * @argv: a double pointer to an array of strings
 * @command_path: command path
 * Return: command path
 */
char *get_command(char **argv, char *command_path)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];
	}
	command_path = get_location(command);
	if (command_path == NULL)
	{
		perror("./hsh");
	}

	return (command_path);
}
