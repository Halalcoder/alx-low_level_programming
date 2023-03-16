#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: the number of bytes to be allocated
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
