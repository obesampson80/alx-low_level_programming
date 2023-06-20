#include "main.h"

/**
 * _isalpha - Functions that checks for alphabetic character
 * @c: int c return value
 *
 * Return: 1 for alphabets 0 otherwise
 */
int _isalpha(int c)
{
	char az;
	char AZ;
	int result_az;
	int result_AZ;
	int check;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az == c)
		{
			result_az = 1;
			break;
		}
		else
		{
			result_az = 0;
		}
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		if (AZ == c)
		{
			result_AZ = 1;
			break;
		}
		else
		{
			result_AZ = 0;
		}
	}

	if ((result_az == 1) || (result_AZ == 1))
	{
		check = 1;
	}
	else
	{
		check = 0;
	}

	return (check);
}



