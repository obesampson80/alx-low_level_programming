#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
				}
			}
		}
	}
}	
