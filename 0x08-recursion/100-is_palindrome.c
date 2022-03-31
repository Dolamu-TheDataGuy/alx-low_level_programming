#include "main.h"

/**
 * _get_length - function that gets length of string
 * @s: string to obtain the length.
 * Return: the length of the string.
 */

int _get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _get_length(s + 1));
	}
}

/**
 * _comparator - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: boolean.
 */

int _comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2)
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
	return (0 + _comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * _is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int _is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_comparator(s, 0, _get_length(s) - 1));
}
