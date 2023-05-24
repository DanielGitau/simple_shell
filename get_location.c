#include "main.h"

/**
 * get_location - returns a location
 * @command: command
 * Return: NULL
 */
char *get_location(char *command)
{
	char *path, *path_cpy, *file_path, *path_token;
	char *delim = ":";
	int command_length;
	struct stat buffer;

	/*check to see if the command itself is a file_path*/
	if (stat(command, &buffer) == 0)
		return (command);
	path = getenv("PATH");
	path_cpy = _strdup(path);
	command_length = _strlen(command);
	path_token = strtok(path_cpy, delim);
	while (path_token != NULL)
	{
		file_path = directory_path(path_token, command_length, command);
		if (stat(file_path, &buffer) == 0)
		{
			free(path_cpy);
			return (file_path);
		}
		else
		{
			free(file_path);
			path_token = strtok(NULL, delim);
		}
	}
	free(path_cpy);
	return (NULL);
}
