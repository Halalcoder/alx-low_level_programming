#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the haracter to be used
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
