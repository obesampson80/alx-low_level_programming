#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 * @c character to check
 * Return: int 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
