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
	int result;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az == c)
		{
			result = 1;
			break;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
