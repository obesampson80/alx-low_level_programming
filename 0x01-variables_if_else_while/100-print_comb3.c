#include <stdio.h>

/**
 * main - Program that prints all possible different
 * combinations of two digits
 * Return: 0 program success
 */

int main(void)
{
	int a;
	int b;

	b = 1;

	for (a = 0; a < 9; a++)
	{
		if ((a + b) != 17)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
			putchar(' ');
		}
		b = b + 1;
	}
	putchar('\n');

	return (0);
}
