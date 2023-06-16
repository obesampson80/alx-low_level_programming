#include <stdio.h>

/**
 * main - Program that prints alphABET
 * followed by a newline
 * Return: 0 successfully exited program
 */

int main(void)
{
	char az;
	char AZ;
	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');

	return (0);
}
