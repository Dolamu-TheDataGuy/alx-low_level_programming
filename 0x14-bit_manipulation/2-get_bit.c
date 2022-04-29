#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Get the value of a bit at a given index
 * @n: The number to find the index
 * @index: The index to find
 *
 * Return: the value of bit at that index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp = 0;

	while (n)
	{
		if (temp == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		temp++;
	}

	if (index > temp && index < 63)
		return (0);

	return (-1);
}
