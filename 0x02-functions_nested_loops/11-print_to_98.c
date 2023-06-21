#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers
 * from n to 98, followed by a new line
 * @n: Number to print
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
