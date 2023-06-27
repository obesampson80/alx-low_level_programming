#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define PW_LENGTH 100
#define CHECKSUM 2772

/**
* gen_pw - A function that generate a random password an place it
* inside an allucated variable named password
* @pw_sum: A pointer to a variable that keep tracks genretad password
* ascii value sum.
* Return: The allocated char* password
*/
char *gen_pw(int *pw_sum)
{
	const char a_Z[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *pw = malloc(PW_LENGTH + 1);
	int i;

	srand(time(NULL));
	for (i = 0; *pw_sum < CHECKSUM - (127); ++i) {
		pw[i] = a_Z[rand() % (sizeof(a_Z) - 1)];
		*pw_sum += (int) pw[i];
	}
	pw[i] = '\0';
	return (pw);
}

/**
 * main - Entry point
 * Description: A program that generetes a valid key for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	char *pw = gen_pw(&sum);

	char *diff = malloc(2);
	diff[0] = CHECKSUM - sum;
	diff[1] = '\0';
	strcat(pw, diff);

	printf("%s", pw);

	free(pw);
	free(diff);
	return (0);
}
