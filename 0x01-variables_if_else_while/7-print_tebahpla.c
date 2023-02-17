#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints alphabets in reverse order
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
