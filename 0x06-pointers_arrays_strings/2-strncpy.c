#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: thw destination
 * @src: the source
 * @n: the integer to be entered
 * Return: dest
 */

*_strncpy(char *dest, char *src, int n)
{
	int i;
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
