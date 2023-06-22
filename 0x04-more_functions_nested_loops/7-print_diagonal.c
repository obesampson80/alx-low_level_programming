#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal
 * followed by a new line
 * @n: number of times the character \ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
