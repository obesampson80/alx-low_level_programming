#include "main.h"

/**
 * times_table - Function that prints the 9 times table
 * starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int tmp;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			tmp = a * b;

			if (b == 0)
			{
				_putchar(tmp + '0');
			}
			if ((tmp < 10) && (b != 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(tmp + '0');
			}
			else if (tmp >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
