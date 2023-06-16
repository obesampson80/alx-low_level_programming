#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main: Program to print negative, zero or positive based on random number n using if statement
 * return: 0 program success */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
