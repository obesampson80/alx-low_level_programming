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

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar('0' + a);
			putchar('0' + b);

			if ((a + b) != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	
	return (0);
}
