#include <stdio.h>

/**
 * main - Write a C program that prints
 * the size of various types
 * on the computer it is compiled and run on
 *
 * Return: 0
 */

int main(void)
{
	char a = sizeof(char);
	int b = sizeof(int);
	long c = sizeof(long int);
	long long d = sizeof(long long int);
	float e = sizeof(float);

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long: %d byte(s)\n", c );
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %f byte(s)\n", e);

	return (0);
}
