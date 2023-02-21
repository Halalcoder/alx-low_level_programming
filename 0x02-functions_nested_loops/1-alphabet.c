#include "main.h"

/**
 * main - a program that prints the alphabets in lower case
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	
	return (0);
}
