#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: 0 if b is NULL or contains chars not 0 or 1
 *  Otherwise, return the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int length = 0;

	if (b[length] == '\0')
	{
		return (0);
	}

	while ((b[length] == '0') || (b[length] == '1'))
	{
		i <<= 1;
		i += b[length] - '0';
		length++;
	}

	return (i);
}
