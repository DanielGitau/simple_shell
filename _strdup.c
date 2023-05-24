#include "main.h"

/**
 * _strdup - Function to duplicate an array of string
 * @s: string
 * Return: Duplicate string
 */
char *_strdup(char *s)
{
	size_t len = _strlen(s) + 1;
	char *duplicate =  malloc(len);

	if (duplicate)
	{
		_strcpy(duplicate, s);
	}
	return (duplicate);
}
