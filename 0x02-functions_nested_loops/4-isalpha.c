#include "main.h"

/**
 * _isalpha - checks i its uppercase, lowercase or letter
 * @c: the character to be checked
 * Return: 1 if true and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= '65' && c <= '90') || (c >= '65' && c <= '90'))
		return (1);
	return (0);
}
