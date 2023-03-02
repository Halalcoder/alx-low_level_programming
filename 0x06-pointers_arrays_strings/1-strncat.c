#include "main.h"
#include <string.h>

/**
 * _strncat - a function that cincatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes for source string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = 0, index = 0, n;

	while (dest[index++])
		dl++;
	for (index = 0; (src[index] && index) < n; index++)
		dest[dl++] = src[index];
	return (dest);
}
