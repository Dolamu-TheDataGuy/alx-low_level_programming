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
	int i;

	for (i = 0; src[1] != '\0'; i++)
	{
		dest[1] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
