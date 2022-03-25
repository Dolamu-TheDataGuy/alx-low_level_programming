#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @a: first string
 * @b: second string
 *
 * Return: an integer for the exit status
 */

int _strcmp(char *a, char *b)
{
	int i;

	for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
	}

	return (0);
}
