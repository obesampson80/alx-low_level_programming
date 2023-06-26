#include "main.h"

/*
 * print_rev - function that prints a string in reverse,
 * followed by a new line
 * @s: string to print
 * Return: nothing
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		continue;
	
	n--;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
