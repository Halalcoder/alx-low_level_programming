#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints possible combination of digits
*
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
