#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: the first integer
 * @b: the secomd integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
