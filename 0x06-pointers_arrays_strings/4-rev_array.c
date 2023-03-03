#include "main.h"
#include <string.h>

/**
 * reverse_array - a functiin that reverse array
 * @a: the array
 * @n: tge integer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int a, t;

	for (a = 0; a < n--; a++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
