#include "main.h"

/**
* _sqrt_get - get function for _sqrt_recursion
* @n: number
* @i: incrementer
*
* Return: natural square root of n
*/
int _sqrt_get(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_get(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number whose sqrt is to be calculated
* Return: natural square root of the number n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_get(n, 0));
}
