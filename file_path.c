#include "main.h"

/**
 * directory_path - Fetches the directory path
 * @path_token: path token
 * @command_length: command lenth
 * @command: command
 * Return: File path
 */
char *directory_path(char *path_token, int command_length, char *command)
{
	int directory_length;
	char *file_path;

	directory_length = _strlen(path_token);
	file_path = malloc(sizeof(char) * (command_length + directory_length + 2));
	_strcpy(file_path, path_token);
	_strcat(file_path, "/");
	_strcat(file_path, command);
	_strcat(file_path, "\0");

	return (file_path);
}
