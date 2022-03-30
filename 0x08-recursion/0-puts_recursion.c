#include "main.h"

/**
 * _puts_recursion - a function that uses recursion to print a string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		return (_puts_recursion(s + 1));
	}
}
