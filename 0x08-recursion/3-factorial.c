#include "main.h"

/**
 * factorial - a function that returns the factorial of a number.
 * @n: integer used in function.
 * Return: returns factorial of integer n
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
i	}
	else
	{
		return (n * factorial(n - 1));
	}
}
