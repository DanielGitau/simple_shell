#include "main.h"

/**
 * num_token - function to return the number of tokens
 * @str: string
 * Return: the number of tokens
 */
int num_token(char *str)
{
	const char *delim = " \n";
	char *token;
	int token_count = 0;

	token = strtok(str, delim);
	while (token != NULL)
	{
		token_count++;
		token = strtok(NULL, delim);
	}
	return (token_count);
}

/**
 * str_split - splits string into tokens
 * @str: Pointer to a string of char
 * @argv: Pointer to an array of strings
 * @token_count: Number of tokens
 */
void str_split(char *str, char *argv[], int token_count)
{
	char *token;
	int i;
	const char *delim = " \n";

	token = strtok(str, delim);
	for (i = 0; i < token_count; i++)
	{
		argv[i] = malloc(sizeof(char) * (strlen(token) + 1));
		_strcpy(argv[i], token);
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;
}
