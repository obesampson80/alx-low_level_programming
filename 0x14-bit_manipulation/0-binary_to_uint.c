#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int sam;
	unsigned int num;

	if (!b)
		return (0);

	for (sam = 0; b[sam]; sam++)
	{
		if (b[sam] < '0' || b[sam] > '1')
			return (0);
		num = 2 * num + (b[sam] - '0');
	}
	return (num);
}
