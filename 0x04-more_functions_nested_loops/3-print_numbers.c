#include "main.h"

/**
 * print_numbers - funtion that prints the numbers, from 0 - 9
 * followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
