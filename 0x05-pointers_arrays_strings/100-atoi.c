#include "main.h"

/**
 * _atoi - function that convert a string to n integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int sign_num;
	unsigned int num;

	sign_num = 1;
	num = 0;

	do {
		if (*s == '-')
			sign_num *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign_num);
}
