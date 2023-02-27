#include "main.h"

/**
 * print_most_numbers - a function that prints
 * single digits excluding 2 and 4
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 0 || c == 4)
			continue;
		else
			putchar(c + '0');
	}
	_putchar('\n');
}
