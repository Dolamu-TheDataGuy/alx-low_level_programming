#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print any number inputed to 98
 * @n: integer that is to be printed first
 * Return: integers from n to 98
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
	else if (n < 98)
	{

		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
		}
	}
	else
	{
		printf("%d", n);
	}
}
