#include <stdlib.h>
#include <time.h>
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
		printf("%lu is negative\n", n);
	}
	if(n == 0)
	{
		printf("%lu is zero\n", n);
	}
	if(n > 0)
	{
		printf("%lu is positive\n", n);
	}

	return (0);
}
