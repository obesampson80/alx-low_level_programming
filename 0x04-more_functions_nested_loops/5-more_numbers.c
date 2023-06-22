#include "main.h"

/**
 * more_numbers - funtion that prints 10 times the numbers,
 * from 0 to 14 followed by a new line
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int a;
	int b;

	a = j / 10;
	b = j % 10;


	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++){
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
	}
}
