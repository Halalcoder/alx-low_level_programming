#include "main.h"

/**
 * _isupper - progran that checks for upper case
 * @c: the charactrr to be used
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
