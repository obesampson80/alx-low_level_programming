#include <stdio.h>

/**
 * main - Program to print a-z in lowercase using putchar
 * Return: 0 if program executed successfully
 */

int main(void)
{
	char az[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    	int i;
    	for (i = 0; i < 26; i++)
    	{
        	putchar(az[i]);
    	}

	return 0;
}
