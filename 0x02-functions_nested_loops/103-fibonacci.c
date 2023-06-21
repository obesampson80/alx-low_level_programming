#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the
 * Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0 Program success
*/
int main(void)
{
	unsigned long p = 0, c = 1, n, sum = 0;

	while (c <= 4000000)
	{
		n = p + c;
		p = c;
		c = n;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%lu\n", sum);

	return (0);
}

