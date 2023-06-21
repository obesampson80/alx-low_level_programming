#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 program success
*/
int main(void)
{
	int i;
	unsigned long p = 1, c = 1, n;

	for (i = 0; i < 50; i++)
	{
		printf("%lu%s", c, i == 49 ? "\n" : ", ");
		n = p + c;
		p = c;
		c = n;
	}
	return (0);
}
