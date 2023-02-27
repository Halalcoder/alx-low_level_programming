#include "main.h"

/**
 * _puts - the function to be used
 * *str: the pointer to be used
 * str: tge string to be used
 * Return: the length of the string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
