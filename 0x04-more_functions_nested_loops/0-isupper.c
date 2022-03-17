#include "main.h"

/**
 * _uppercase - check if an alphabet is upper cased
 * @c: character to be checked
 * Return: 1 if c is uppercase, else 0.
 */

int _uppercase(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
