#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be used
 * Return: On success 1
 * On error, -1 is returned and errrno is set otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
