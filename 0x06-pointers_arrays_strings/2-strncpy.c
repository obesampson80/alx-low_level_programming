#include <stdio.h>

/**
* *_strncpy - copies a string from source to destination
* @dest: destination string
* @src: source string
* @n: number of bytes to copy
* Return: pointer to resulting string dest
*/
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}
