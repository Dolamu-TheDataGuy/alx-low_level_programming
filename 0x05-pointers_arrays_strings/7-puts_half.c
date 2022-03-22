#include "main.h"

/**
 * puts_half - a function that prints half of a string then starts
 * a new line
 * @str: string character to be printed
 *
 * Return: Nothing
 */

void puts_half(char *str);
{
	int i, h, k;

	i = 0;
	while (str[i] !=  '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		h = i / 2;
		for (k = h; k <= i; k++)
		{
			_putchar(str[k]);
		}
	}
	else
	{
		h = (i - 1) / 2;
		for (k = h; k <= i; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}


