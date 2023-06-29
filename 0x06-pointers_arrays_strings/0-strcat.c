#include "main.h"

/**
* *_strcat - function that concatenates two strings
* @dest: Destination string
* @src: source string
* Return: Destination string
*/
char *_strcat(char *dest, char *src)
{
	char *ptr;
	int i;
	int len_dest;

	i = 0;

	while (dest[i] != '\0')
		i++;

	len_dest = i;
	ptr = dest;

	for (i = 0; i < *ptr && src[i] != '\0'; i++)
	{
		ptr[len_dest + i] = src[i];
	}
	ptr[len_dest + i] = '\0';
	return (dest);
}
