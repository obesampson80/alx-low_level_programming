#include "main.h"

/**
 * puts_half - function tha prints half of a string
 * followed by a new line
 * @str: string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int x;
	int y;
	int z;

	for (x = 0; str[x] != '\0'; x++)
		continue;
	if (x % 2 == 0)
	{
		for (z = x / 2; str[x] != '\0'; z++)
			_putchar(str[z++]);
	}
	else if (x % 2)
	{
		for (y = (x + 1) / 2; y < x - 1; y++)
			_putchar(str[y++]);
	}
	_putchar('\n');
}
