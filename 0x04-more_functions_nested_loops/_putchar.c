#include <stdout.h>
#include <unistd.h>

/**
 * _putchar - the function to be used
 * @c: the character to be used
 * Return: Always 0
 * Error: 0 is returnes and errni is returned otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
