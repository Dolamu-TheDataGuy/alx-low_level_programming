#include "main.h"
/**
 * print_alphabet - prints alphabets from a to z in lower case.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	if (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	return 0;
}


