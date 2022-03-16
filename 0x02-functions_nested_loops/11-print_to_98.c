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
		int i;

		for (i = n; n >= 98; n--)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(",");
				_putchar(" ");
			}
		}
	}
	else if (n < 98)
	{
		int i;

		for (i = n; n <= 98; n++)
		{
			_putchar(n)
			if (n != 98)
			{
				_putchar(",");
				_putchar(" ");
			}
		}
	}
	else
	{
		_putchar(n);
	}
}
