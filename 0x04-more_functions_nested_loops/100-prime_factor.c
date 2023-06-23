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
	long int i;

	j = 612852475143;

	for (i = 2; i < j; i++)
	{
		while (j % i == 0)
		{
			j /= i;
		}
	}

	printf("%ld\n", j);

	return (0);
}
