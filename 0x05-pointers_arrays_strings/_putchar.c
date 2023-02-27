#include "main.h"

/**
 * _putchar - the wirking function
 * @c: the character to be used
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
