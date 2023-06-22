#include "main.h"

/**
 * more_numbers - funtion that prints 10 times the numbers,
 * from 0 to 14 followed by a new line
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++){
			n = j;

			if (j > 9)
			{
				_putchar('1');
				n = j % 10;
			}
			else
			{
				_putchar((n + '0');
			}
		}
		_putchar(n + '0');
	}
}
