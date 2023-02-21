#include "main.h"

/**
 * print-sign -checks for the sign of a number
 * @n: the number to be checked
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
                _putchar(48);
                return (0);
        }
	else
	{       
                _putchar(43);
                return (-1);
        }
}
