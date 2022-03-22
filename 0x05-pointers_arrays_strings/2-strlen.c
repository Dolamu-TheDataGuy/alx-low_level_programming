#include "main.h"

/**
 * _strlen - a function that accepts a string and returns
 * the length of the string
 * @s : string that the function accepts
 *
 * Return: an Integer in form of the Length of the string.
 */

int _strlen(char *s);
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

