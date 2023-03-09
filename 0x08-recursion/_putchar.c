#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that prints
 * @c: the character to be used
 * Return: 0
 * On error, -1 is returned and errno is set otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
