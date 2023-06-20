#include "main.h"

/**
 * _isalpha - Functions that checks for alphabetic character
 * @c: int c return value
 *
 * Return: 1 for alphabets 0 otherwise
 */
int _isalpha(int c)
{
	char az, aZ; 
	int result_az, result_aZ, check;

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
	for (aZ = 'A'; aZ <= 'Z'; aZ++)
	{
		if (aZ == c)
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



