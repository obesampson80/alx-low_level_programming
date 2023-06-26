#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	char ch;

	int x;
	int y;
	int z;

	for (x = 0; s[x] != '\0'; x++)
		continue;

	z = x - 1;

	for (y = 0; y < x / 2; y++)
	{
		ch = s[y];
		s[y] = s[z];
		s[z--] = ch;
	}
}
