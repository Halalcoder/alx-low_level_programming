#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function thha prints
 * @c: the character to be used
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
