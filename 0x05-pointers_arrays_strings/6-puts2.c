#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starts with first charactr and is followed by new line
 * @str : string to be printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < 0; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
