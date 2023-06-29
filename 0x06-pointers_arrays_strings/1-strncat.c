#include "main.h"
/**
* *_strcat - function that concatenates two strings
* @dest: Destination string
* @src: source string
* @n: length of source string
* Return: Destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len_dest = 0;

	while (dest[i++])
		len_dest++;
	for (i = 0; src[i] && i < n; i++)
		dest[len_dest++] = src[i];
	return (dest);
}
