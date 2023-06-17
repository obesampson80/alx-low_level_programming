#include <stdio.h>

/**
 * main - Program to print 0 - 9 combination
 * Return: 0 program execute successfully
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
