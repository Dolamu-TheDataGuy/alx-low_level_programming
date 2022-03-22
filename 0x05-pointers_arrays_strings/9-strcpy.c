#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest : where the string will go
 * @src : where string would emanate from
 *
 * Return: returns string
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
