#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: The binary string to convert
 *
 * Return: The positive number converted from a binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}

	return (sum);
}

/**
 * _strlen - function to determine the length of a string
 * @s: string to count
 *
 * Return: string length
 */

int _strlen(const char *s)
{
	int num = 0;

	while (s[num])
	{
		num++;
	}
	return (num);
}

