#include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 * @n: int value to check sign
 *
 * Return: 1 for +, 0 for 0 and -1 for -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
