#include <stdio.h>

/**
 * main - Program that prints alphABET
 * followed by a newline
 * Return: 0 successfully exited program
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (az = 'A'; az <= 'Z'; az++)
	{
		putchar(az);
	}
	putchar("\n")

	return (0);
}
