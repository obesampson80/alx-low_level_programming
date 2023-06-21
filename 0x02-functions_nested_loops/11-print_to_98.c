#include "main.h"

/**
 * print_to_98 - Function that prints all natural numbers
 * from n to 98, followed by a new line
 * @n: Number to print
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a;
	int b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a < 0)
			{
				_putchar('-');
				a = -a;
			}
			if (a < 10)
			{
				_putchar(a + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((a > 10) $$ (a != 98))
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (a == 98)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			else if (b != 98)
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (b == 98)
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
		}
	}
}
