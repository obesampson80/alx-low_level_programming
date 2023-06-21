#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 23; a++)
	{
		for ( j = 0; j < 60; j++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
