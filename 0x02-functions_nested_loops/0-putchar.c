#include "main.h"

/**
 * output - takes a string and prints it using _putchar function
 * followed by a newline
 * @str: The string reference
 *
 * Return: void
*/

void output(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - call the output function and output _output
 * followed by a new line
 *
 * Return: On success 0
 */

int main(void)
{
	char *str = "_putchar\n";

	output(str);

	return (0);
}
