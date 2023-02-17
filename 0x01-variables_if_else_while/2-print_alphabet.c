#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the alphabets in lower case
 *
 * Return: Always 0
 */

int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
