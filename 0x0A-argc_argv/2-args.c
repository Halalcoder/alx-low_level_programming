#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all the arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
