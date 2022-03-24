#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: character of destination variable
 * @src: character of source variable
 *
 * Return: a pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
