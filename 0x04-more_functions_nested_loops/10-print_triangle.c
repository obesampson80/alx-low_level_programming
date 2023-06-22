#include "main.h"

/**
 * print_triangle - funtion that prints a trangle, followed by a new line
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = i +  1; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = i + 1; k <= i; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
