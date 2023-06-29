#include "main.h"

/**
* *leet - encodes a string into 1337.
* @s: string to be encoded
* Return: a pointer to the encoded string
*/
char *leet(char *s)
{
	int i;
	int j;
	char *decode;
	char *encode;

	decode = "aAeEoOtTlL";
	encode = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; decode[j]; j++)
			if (s[i] == decode[j])
				s[i] = encode[j];
	}

	return (s);
}
