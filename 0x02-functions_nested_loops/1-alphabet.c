#include "main.h"

/**
 * print_alphabet - Function to output a-z
 * @str: string variable to print
 *
 * Return: void
 */
void print_alphabet(void)
{
	char *str;
	
	for (int i = 'a'; i <= 'z'; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * main - Program entry
 * prints a-z followed by newline
 *
 * Return: 0 program success
 */
int main(void)
{
	print_alphabet();
	_putchar("\n");

	return (0);
}
