#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed.
 *
 * Return: no return
 *
 */

void rev_string(char *s)
{
	int i, j, k, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = 0;

	while (k < j)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
		k++;
		j--;
	}
}
