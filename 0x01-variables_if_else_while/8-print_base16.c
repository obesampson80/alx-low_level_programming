#include <stdio.h>

/**
 * main - Program to print all the numbers of base 16
 * in lowercase, followed by a new line
 * Return: 0 on program success
 */

int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
