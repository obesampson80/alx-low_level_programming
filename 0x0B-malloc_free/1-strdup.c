#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
*  which contains a copy of the string given as a parameter.
*  @str: string to be duplicated
*  Return: a pointer to the duplicated string or NULL
*/
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	new_str = (char *)malloc(i + 1 * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[j] = '\0';

	return (new_str);
}
