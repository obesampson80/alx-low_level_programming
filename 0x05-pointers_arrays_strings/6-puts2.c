#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: the string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int x;
	int y;

	for (x = 0; str[x] != '\0'; x++)
		continue;
	for (y = 0; y < x; y += 2)
		_putchar(str[y]);
	_putchar('\n');
}
