#include "main.h"

/**
 * print_rev - a function that prints a string in reverse order
 * @s: string character to be printed.
 *
 * Returns - nothing
 */

void print_rev(char *s)
{
	int a;
	int count;

	a = _strlen(char *s);

	for (count = a; count <= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
