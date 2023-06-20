#include "main.h"

/**
 * print_alphabet - Function to output a-z
 * followed by new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char az;
	
	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}

/**
 * main - Program entry
 * prints a-z 
 *
 * Return: 0 program success
 */
int main(void)
{
	print_alphabet(void);

	return (0);
}
