#include <stdio.h>

/**
 * main - Program to print a-z in lowercase using putchar
 * followed by a newline
 * Return: 0 if program executed successfully
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
