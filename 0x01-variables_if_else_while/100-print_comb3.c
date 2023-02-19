#include <stdio.h>
#include <time.h>

/**
 * main - a program that prints possible combo of 2 digits
 *
 * Return: 0
 */

int main(void)
{
	int i, c;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			if (i != c)
			{
				putchar(i);
				putchar(c);
				if (i == '8' && c == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
