#include "mqin.h"

/**
 * _isupper - a funxtion that checks uppercase character
 * @c: the charcter to be used
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
