#include "main.h"

/**
 * rev_string - q functioj that reverses a string
 * @s: the string to be reversed
 * return: the string in reverse
 */

void rev_string(char *s)
{
	int i;
	char rev = s[0];
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
