#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Program to print -ve, +ve or 0 using if statement
 * Return: 0 program success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
