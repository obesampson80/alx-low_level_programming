#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array to be reversed
* @n: number of elements in an array
*/
void reverse_array(int *a, int n)
{
	int i;
	int xl;
	int tmp;

	xl = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[xl];
		a[xl--] = tmp;
	}
}

