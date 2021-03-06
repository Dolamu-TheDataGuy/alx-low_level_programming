#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - function that converts an integer to binary
 * @n: The number to representing in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	_divide(n);
}

/**
 * _divide - function that reduces the number till it gets to zero.
 * @n: number to be reduced
 *
 * Return: reduced number
 */

void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar(49);
	else
		_putchar(48);
}
