#include <stdio.h>

/**
 * prime_factor - function that finds the highest prime facetor
 * of a number
 * @num: number to find its highest prime factor
 * Return: int value
 */
int prime_factor(long int num)
{
	int i;
	int j;
	int prime;

	for (i = 2; i <= num / 2; i++)
	{
		for (j = 2; j < i / 2; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else
			{
				if (z % i == 0)
				{
					prime = i;
				}
			}
		}
	}
	return (prime);
}

/**
 * main - check for highest prime factor of 612852475143
 * followed by a new line
 * Return: 0 success always
 */
int main(void)
{
	int highest_prime;

	highest_prime = prime_factor(612852475143);

	printf("The largest prime factor of 612852475143 is :%ld\n", highest_prime);

	return (0);
}


