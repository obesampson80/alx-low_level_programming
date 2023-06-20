#include "main.h"

/**
 * _abs - Function that computes the absolute value
 *  of an integer
 *  @x: int value to find its absolute value
 *
 *  Return: int value without sign
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}
