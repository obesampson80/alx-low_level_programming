#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * reverse - reverses a string
 * @s: string to reverse
 * Return: pointer to the reversed string
 */
char *reverse(char *s)
{
	size_t len = strlen(s);
	size_t i;

	for (i = 0; i < len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
	return (s);
}

/**
 * infinite_add - adds two numbers
 * @x1: The first positive number
 * @x2: The second positive number
 * @r: The buffer that the function will use to store the result
 * @size_r: The buffer size
 * Return: A pointer to the result
 */
char *infinite_add(char *x1, char *x2, char *r, int size_r)
{
	int len_x1 = strlen(x1);
	int len_x2 = strlen(x2);

	char *tmp = malloc(sizeof(char) * (len_x1 + len_x2 + 1));
	int i, j, k, sum, carry = 0;

	/* Perform addition */
	for (i = len_x1 - 1, j = len_x2 - 1, k = 0;
		i >= 0 || j >= 0 || carry;
		i--, j--, k++)
	{
		sum = carry;
		sum += (i >= 0) ? x1[i] - '0' : 0;
		sum += (j >= 0) ? x2[j] - '0' : 0;
		tmp[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	/* if the result is empty, return 0 */
	if (k == 0)
		return (0);

	/* null terminate the result */
	tmp[k] = '\0';

	/* if the result is too big, return 0 */
	if ((int)strlen(tmp) + 1 > size_r)
		return (0);

	r = strcpy(r, tmp);
	free(tmp);

	/* return the reversed result */
	return (reverse(r));
}
