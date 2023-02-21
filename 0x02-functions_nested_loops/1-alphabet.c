#include "main.h"

/**
 * main - a program that prints the alphabets in lower case
 * Return: Always 0
 */

void print_alphabet(void);
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
}
