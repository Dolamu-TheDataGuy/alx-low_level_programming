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
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < 0; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar(10);
}
