#include "main.h"

/**
 * print_alphabet_x10 - Function that prints a-z 10 times
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char az;

	for (i = 0; i < 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
