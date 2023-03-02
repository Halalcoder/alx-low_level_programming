#include "main.h"
#include <string.h>

/**
 * _strncat - a string that concatenates 
 * @src: the source
 * @dest: the destination
 * @n: an integer
 * Return: the length
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
