#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * Return: 0 program success
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar('0' + (a / 10));
				putchar('0' + (a % 10));
				putchar(' ');
				putchar('0' + (b / 10));
				putchar('0' + (b % 10));
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

