#include "main.h"

/**
 * _memset - a function that copies a single character for a specified
 * number of times to an object.
 * @s: pointer to the object to copy the character.
 * @b: the character to copy and fill the object.
 * @n: number of bytes of memory area to fill.
 * Description: fill the first 'n' bytes of the memory with character b.
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}

	return (s);
}
