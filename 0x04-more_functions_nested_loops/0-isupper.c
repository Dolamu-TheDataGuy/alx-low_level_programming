#include "main.h"

/**
 * _isupper - check if an alphabet is upper cased
 * @c: character to be checked
 * Return: 1 if c is uppercase, else 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
