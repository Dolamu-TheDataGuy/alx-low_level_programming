#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet from a-z 10 times.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;

	i = 1;

	while (i <= 10)
	{
		char j;

		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
	_putchar('\n');
	}
	i++;
}
