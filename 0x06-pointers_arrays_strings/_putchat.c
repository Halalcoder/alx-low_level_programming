#nclude <stdio.h>
#include "main.h"

/**
 * _putchar - the library to be used
 * @c : the character to be ussd
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
