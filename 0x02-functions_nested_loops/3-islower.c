#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: int return value
 *
 * Return: Return 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az == c)
		{
			return (1);
			break;
		}
		else
		{
			return (0);
		}
	}
}
