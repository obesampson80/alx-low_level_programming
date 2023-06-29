#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @str: string to be modified
* Return: the resulting string
*/
char *cap_string(char *str)
{
	int i;
	int n;

	i = 0;
	n = i - 1;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[n] == ' ' || str[n] == '\t' || str[n] == '\n' || str[n] == ',' ||
		str[n] == ';' || str[n] == '.' || str[n] == '!' || str[n] == '?' ||
		str[n] == '"' || str[n] == '(' || str[n] == ')' || str[n] == '{' ||
		str[n] == '}' || i == 0)
			str[i] -= 32;

		i++;
	}

	return (str);
}
