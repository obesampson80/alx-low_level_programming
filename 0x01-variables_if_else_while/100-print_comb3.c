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

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if ((a + b) != 17)
			{
				if (a != b)
				{
					if ((a + b) == (b + a))
					{
						continue;
					}
					else
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
