#include "main.h"
#include <stdio.h>


/**
 * main - a function that prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0
 */

int main(argc, char *argv[])
{
	(void) argv;
	printf("&d\n", argc - 1);

	return (0);
}
	 
