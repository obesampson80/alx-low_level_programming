#include<stdio.h>

/**
 * main - Program to print z-a
 * followed by new line
 * Return: 0 if program executed successfully
 */

int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
