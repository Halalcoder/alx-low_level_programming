#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - this program prints the last digit of a variable
 * Return: Always 0
 *
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	/* your code goes there */

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);
}
