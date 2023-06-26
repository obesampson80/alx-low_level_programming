#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer to by dest
 * @dest: buffer pointer
 * @src: string to be copied
 */
char *_strcpy(char *dest, char *src)
{
	int n, i;

	n = 0;

	while (src[n] != '\0')
		len++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
