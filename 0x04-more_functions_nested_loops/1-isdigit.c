#include "main.h"

/**
 * _isdigit - function thag chwcks for a digit
 * @c: the character ti be used
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
