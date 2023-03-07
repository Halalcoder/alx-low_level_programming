#include "main.h"

/**
 * _memset - a functions that fills a memory with constant byte
 * @s: the starting address
 * @b: the deired value
 * @n: number of bytes to be changed
 * Return: changed array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
