#include <stdio.h>

/**
 * main - program that prints Fizz-Buzz given an int range n
 * Fizz if n%3==0, Buzz if n%5==0, fizzBuzz if both
 * numbers otherwise - followed by a space
 * Return: 0 always success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n != 1)
		{
			printf(" ");
		}
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");

	return (0);
}
