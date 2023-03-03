#include "main.h"
#include <string.h>

/**
 * reverse_array - a function that reverses array
 * @a: array
 * @n: number if elements of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
