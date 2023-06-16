#include <stdio.h>

/**
 * main - Program to print a-z except q and e
 * followed by a new line
 * Return: 0 on successful execution
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if ((az == 'e') || (az == 'q'))
		{
			continue;
		}
		else
		{
			putchar(az);
		}
	}
	putchar('\n');

	return (0);
}
