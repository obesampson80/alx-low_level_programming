#include "main.h"

/**
* *leet - encodes a string into 1337.
* @str: string to be encoded
* Return: a pointer to the encoded string
*/
char *leet(char *str)
{
	int x1;
	int x2;
	char lit[8];

	x1 = 0;
	lit[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[x1])
	{
		for (x2 = 0; x2 <= 7; x2++)
		{
			if (str[x1] == lit[x2] ||
			str[x1] - 32 == lit[x2])
				str[x1] = x2 + '0';
		}

		x1++;
	}

	return (str);
}
