#include "main.h"

/**
 * _strlen_recursion - a function that rpints the length of a string
 * @s: the string to be measured
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s)
	{
		c++;
		c += _strlen_recursion(s + 1);
	}
	return (c);
}

