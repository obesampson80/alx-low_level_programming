#include "main.h"

/**
* *_strncat - function that concatenates two strings
* @dest: Destination string
* @src: source string
* @n: length of source string
* Return: Destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest;

	i = 0;
	len_dest = 0;

	while (dest[i++])
		len_dest++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len_dest++] = src[i];
	dest[len_dest + i] = '\0';
	return (dest);
}
