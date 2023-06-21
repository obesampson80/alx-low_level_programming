#include "main.h"

/**
 * print_last_digit - Function that prints last digit of a number
 * @x: int number to find its last digit
 *
 * Return: return the last digit of x
 */
int print_last_digit(int x)
{
	int ret;

	if (x < 0)
	{
		x = -x;
	}
	ret = x % 10;

	if (ret < 0)
	{
		ret = -ret:
	}
	_putchar(ret + '0');

	return (ret);
}
