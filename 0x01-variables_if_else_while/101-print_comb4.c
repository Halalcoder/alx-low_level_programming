#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that orints the combo of three digits
 *
 * Return: 0
 */

int main(void)
{
	int i, a, b;

	for (i = '0'; i <= '9'; i++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			for (b = '0'; b <= '9'; b++)
			{
				if (i != a && i != b && a != b)
				{
					putchar(i);
					putchar(a);
					putchar(b);
					if (i == '7' && a == '8' && b == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
