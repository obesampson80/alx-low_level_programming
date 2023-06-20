#include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 * @n: int value to check sign
 *
 * Return: 1 for +, 0 for 0 and -1 for -
 */
int print_sign(int n)
{
	int ret;

	ret = -1;

	if (n > 0)
	{
		ret = +1;
	}
	if (n == 0)
	{
		ret = 0;
	}

	return (ret);
}
