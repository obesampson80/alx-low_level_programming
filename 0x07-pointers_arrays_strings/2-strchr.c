#include "main.h"
#include <stdio.h>

/**
*  _strchr - locate a character in a string
*  @s: string to check
*  @c: character to locate
*  Return: a pointer to the first occurrence of the character c
*  in the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	while (s[i])
	{
		i = *s++;

		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
}
