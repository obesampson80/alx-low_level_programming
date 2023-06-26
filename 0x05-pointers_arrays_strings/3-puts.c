#include "main.h"

/**
 * _puts - prints a tring, followed by a newline to stdout
 * @str: string to print
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
