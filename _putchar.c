#include "main.h"
#include <unistd.h>

/**
 * _putchar - the function to be used
 * @c: the character to be used
 * Return: Always 0
 * On error, -1 is returned and errno is set otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
