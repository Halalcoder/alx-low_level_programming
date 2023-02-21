#include "main.h"

/**
 * main - a function that orints ten times the alphabets
 *
 * print_alphabet_x10 - print alphabets
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');

	}
}
