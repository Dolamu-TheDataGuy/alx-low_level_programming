#include "main.h"

/**
 * _strspn - function that returns the length of a substring
 * @s: character string array
 * @accept: character array to check bytes with
 * Return: Number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (k);
}
