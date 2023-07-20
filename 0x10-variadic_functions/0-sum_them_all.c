#include "variadic_function.h"

/**
* print_numbers - prints numbers followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integgers passed to the function
* Return: the resulting sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
