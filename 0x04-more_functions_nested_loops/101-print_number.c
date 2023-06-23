#include "main.h"

/**
 * print_number - function that prints and integer
 * using _putchar only
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');

		n = -n;
	}

	while (n / 10 != 0)
	{
		_putchar(n % 10 + '0');

		n = n / 10;
	}
	_putchar('\n');
}
