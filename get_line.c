#include "main.h"

/**
 * get_line - function fetches user input
 * @str: A pointer to a pointer to an array of strings
 * Return: The number of indvidual input from stdin
 */
int get_line(char **str)
{
	size_t n = 0;
	ssize_t nread_char;

	nread_char = getline(str, &n, stdin);
	if (nread_char == -1)
	{
		/*printf("Exiting shell...\n");*/
		/*free(str)*/
		exit(1);
	}

	return (nread_char);
}
