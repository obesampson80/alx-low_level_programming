#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * if n is greater than 15 or less than 0, the function does nothing
 *
 * @n: the number of the times table
 *
 * Return: void
*/
void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int ab = a * b;

			if (b == 0)
				_putchar('0');
			else if (ab < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(ab + '0');
			}
			else if (ab < 100)
			{
				_putchar(' ');
				_putchar((ab / 10) + '0');
				_putchar((ab % 10) + '0');
			}
			else
			{
				_putchar((ab / 100) + '0');
				_putchar(((ab / 10) % 10) + '0');
				_putchar((ab % 10) + '0');
			}
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

