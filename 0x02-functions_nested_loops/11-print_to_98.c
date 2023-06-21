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
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putcahr(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	putchar('\n');
}
