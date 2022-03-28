#include "main.h"

/**
 * _memcpy - copy data from a source address to a destination address
 * @dest: character array to copy into
 * @src: character array to copy from
 * @n: number of elements to copy.
 * Return: pointer to 'dest'
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

