#include "main.h"

/**
 * _strcat - a functiom that concatenates twi strings
 * @src: the source
 * @dest: the destination
 * Return: the length of the string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
