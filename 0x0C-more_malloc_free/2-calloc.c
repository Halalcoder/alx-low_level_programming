#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * *_memset - fills memory with a constsnt byte
 * @s: memory area to be filled
 * @b: char ti copy
 * @n: number of times to cooy b
 * Return: pointer to the mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: memeber of elements of the array
 * @size: size if each elements
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
