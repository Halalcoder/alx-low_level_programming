#include "main.h"

/**
 * print_rev - a function
 * that prints a string in reverse
 * @s: the string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int longi = 0, b;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (b = longi; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
