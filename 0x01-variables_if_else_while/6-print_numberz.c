#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints single digits numbers with putchar
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
