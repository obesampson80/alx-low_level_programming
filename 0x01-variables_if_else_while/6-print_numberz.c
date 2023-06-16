#include <stdio.h>

/**
 * main - Program to print 0-9 using putchar
 * followed by a new line
 * Return: 0 always runs successfully
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');

	return (0);
}
