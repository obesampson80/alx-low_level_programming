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
	int i;

	i = 0;

	for (x = 0; str[x] != '\0'; x++)
		continue;
	i = (x % 2 == 0) ? x / 2 : (x + 1) / 2;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
