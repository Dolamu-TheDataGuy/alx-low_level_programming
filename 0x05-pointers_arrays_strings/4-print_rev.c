#include "main.h"

/**
 * print_rev - a function that prints a string in reverse order
 * @s: string character to be printed.
 *
 * Returns - nothing
 */

void print_rev(char *s)
{
	int i, j, count;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	for (count = j; count <= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar(10);

}
