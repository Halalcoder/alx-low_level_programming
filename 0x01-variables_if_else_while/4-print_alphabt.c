#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints alphabets excluding q and e
 *
 * Return: 0
 */

int main(void)
{
	char c, first, second;

	first = 'q';
	second = 'e';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != first && c != second)
			putchar(c);
	}
	putchar('\n');

	return (0);
}
