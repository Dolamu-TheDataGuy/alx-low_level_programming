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
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (yolo);
}

