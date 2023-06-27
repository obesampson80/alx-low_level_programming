#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PW_LENGTH 100
#define CHECKSUM 2772

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 * Return: 0 Always
 */
int main(void)
{
	srand(time(NULL));
	int sum = 0;
	char *pw = NULL;

	do {
		if (pw != NULL)
			free(pw);
		pw = malloc(PW_LENGTH + 1);
		for (i = 0; i < PW_LENGTH; i++)
		{
			pw[i] = rand() % 128;
			sum += pw[i];
		}
		pw[PW_LENGTH] = '\0';
	} while (sum != CHECKSUM);

	putchar(pw);

	return (0);
}
