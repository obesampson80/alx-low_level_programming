#include "main.h"

/**
 * print_number - function that prints and integer
 * using _putchar only
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');

		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	
	_putchar(num % 10 + '0');
}
