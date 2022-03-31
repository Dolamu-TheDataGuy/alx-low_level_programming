#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: if no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sqrt_recursion
 * @n: integer parameter
 * @i: integer parameter
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
