#include "main.h"

/**
 * _pow_recursion - a function that returns the exponent of a number.
 * @x: base number.
 * @y: the exponential number.
 * Return: return the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
