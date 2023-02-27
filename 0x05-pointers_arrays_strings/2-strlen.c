#include "main.h"
#include "stddef.h"

/**
 * _strlen - the string to be considered
 * @s: the etring to get the length of
 * Return: 0
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
