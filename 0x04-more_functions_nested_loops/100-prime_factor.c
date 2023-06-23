#include <stdio.h>
#include "math.h"

/**
 * main - finds and print the largest prime factor
 * of 612852475143 followed by a new line
 * Return: 0 always success
 */
int main(void)
{
	long int j;
	long int max_prime;
	long int i;

	j = 612852475143;
	max = 2;

	j /= 2;

	for (i = 3; i <= sqrt(j); i += 2)
	{
		while (j % i == 0)
		{
			max_prime = i;
			j /= i;
		}
	}

	if (j > 2)
		max_prime = j;

	printf("%ld\n", max);

	return (0);
}
